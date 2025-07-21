// Fill out your copyright notice in the Description page of Project Settings.


#include "HighlightSystem/HighlightComponent.h"
#include "HighlightSystem/HighlightManager.h"
#include "HighlightSystem/Highlightable.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Public/DebugHelper.h"

UHighlightComponent::UHighlightComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    bAutoActivate = true;
}

void UHighlightComponent::BeginPlay()
{
    Super::BeginPlay();

    // 緩存高亮管理器
    CachedHighlightManager = GetHighlightManager();

    // 設置自動高亮
    if (bAutoHighlightOnHover || bAutoHighlightWhenSelected)
    {
        SetupAutoHighlight();
    }

    Debug::Print(FString::Printf(TEXT("%s: HighlightComponent initialized"),
        *GetOwner()->GetName()), FColor::Green);
}

void UHighlightComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    // 清理所有高亮
    ClearAllHighlights();

    // 清理事件綁定
    CleanupAutoHighlight();

    Super::EndPlay(EndPlayReason);
}

void UHighlightComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
    ClearAllHighlights();
    Super::OnComponentDestroyed(bDestroyingHierarchy);
}

void UHighlightComponent::HighlightActor(EHighlightType Type, float Duration)
{
    if (!bCanBeHighlighted || !GetOwner())
    {
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager();
    if (!HighlightMgr)
    {
        Debug::Print(TEXT("HighlightComponent: No HighlightManager found!"), FColor::Red);
        return;
    }

    // 設置高亮
    HighlightMgr->SetHighlight(GetOwner(), Type, Duration);

    // 更新內部狀態
    ActiveHighlights.Add(Type);

    // 廣播事件
    OnHighlightChanged.Broadcast(Type, true);

    Debug::Print(FString::Printf(TEXT("%s: Highlight %d applied"),
        *GetOwner()->GetName(), (int32)Type), FColor::Green);
}

void UHighlightComponent::UnhighlightActor(EHighlightType Type)
{
    if (!GetOwner())
    {
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager();
    if (!HighlightMgr)
    {
        return;
    }

    // 移除高亮
    HighlightMgr->RemoveHighlight(GetOwner(), Type);

    // 更新內部狀態
    ActiveHighlights.Remove(Type);

    // 廣播事件
    OnHighlightChanged.Broadcast(Type, false);

    Debug::Print(FString::Printf(TEXT("%s: Highlight %d removed"),
        *GetOwner()->GetName(), (int32)Type), FColor::Blue);
}

void UHighlightComponent::ClearAllHighlights()
{
    if (!GetOwner())
    {
        return;
    }

    UHighlightManager* HighlightMgr = GetHighlightManager();
    if (!HighlightMgr)
    {
        return;
    }

    // 記錄當前所有高亮以便廣播事件
    TArray<EHighlightType> CurrentHighlights = ActiveHighlights.Array();

    // 清除所有高亮
    HighlightMgr->RemoveAllHighlights(GetOwner());

    // 清空內部狀態
    ActiveHighlights.Empty();

    // 為每個被移除的高亮廣播事件
    for (EHighlightType Type : CurrentHighlights)
    {
        OnHighlightChanged.Broadcast(Type, false);
    }

    Debug::Print(FString::Printf(TEXT("%s: All highlights cleared"),
        *GetOwner()->GetName()), FColor::Blue);
}

void UHighlightComponent::ToggleHighlight(EHighlightType Type)
{
    if (IsHighlighted(Type))
    {
        UnhighlightActor(Type);
    }
    else
    {
        HighlightActor(Type);
    }
}

bool UHighlightComponent::IsHighlighted(EHighlightType Type) const
{
    return ActiveHighlights.Contains(Type);
}

TArray<EHighlightType> UHighlightComponent::GetActiveHighlights() const
{
    return ActiveHighlights.Array();
}

bool UHighlightComponent::HasAnyHighlight() const
{
    return ActiveHighlights.Num() > 0;
}

void UHighlightComponent::SetupAutoHighlight()
{
    if (bEventsBound)
    {
        return;
    }

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    // 獲取所有可高亮的組件
    TArray<UPrimitiveComponent*> Components = GetHighlightableComponents();

    // 綁定鼠標事件
    if (bAutoHighlightOnHover)
    {
        for (UPrimitiveComponent* Component : Components)
        {
            if (Component)
            {
                Component->OnBeginCursorOver.AddDynamic(this, &UHighlightComponent::OnMouseBegin);
                Component->OnEndCursorOver.AddDynamic(this, &UHighlightComponent::OnMouseEnd);
            }
        }
    }

    // 綁定點擊事件
    if (bAutoHighlightWhenSelected)
    {
        Owner->OnClicked.AddDynamic(this, &UHighlightComponent::OnActorClicked);
    }

    bEventsBound = true;
}

void UHighlightComponent::CleanupAutoHighlight()
{
    if (!bEventsBound)
    {
        return;
    }

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    // 解綁所有事件
    TArray<UPrimitiveComponent*> Components;
    Owner->GetComponents<UPrimitiveComponent>(Components);

    for (UPrimitiveComponent* Component : Components)
    {
        if (Component)
        {
            Component->OnBeginCursorOver.RemoveDynamic(this, &UHighlightComponent::OnMouseBegin);
            Component->OnEndCursorOver.RemoveDynamic(this, &UHighlightComponent::OnMouseEnd);
        }
    }

    Owner->OnClicked.RemoveDynamic(this, &UHighlightComponent::OnActorClicked);

    bEventsBound = false;
}

TArray<UPrimitiveComponent*> UHighlightComponent::GetHighlightableComponents() const
{
    TArray<UPrimitiveComponent*> Components;

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return Components;
    }

    // 如果有自定義組件列表，使用它
    if (CustomHighlightComponents.Num() > 0)
    {
        Components = CustomHighlightComponents;
    }
    else
    {
        // 否則獲取所有 Mesh 組件
        Owner->GetComponents<UPrimitiveComponent>(Components);

        // 如果不包括子組件，過濾掉它們
        if (!bIncludeChildComponents)
        {
            Components.RemoveAll([Owner](UPrimitiveComponent* Comp) {
                return Comp->GetOwner() != Owner;
                });
        }
    }

    // 過濾掉不可見的組件
    Components.RemoveAll([](UPrimitiveComponent* Comp) {
        return !Comp->IsVisible() || !Comp->GetCollisionEnabled();
        });

    return Components;
}

void UHighlightComponent::OnMouseBegin(UPrimitiveComponent* TouchedComponent)
{
    if (bAutoHighlightOnHover && bCanBeHighlighted)
    {
        HighlightActor(HoverHighlightType);
    }
}

void UHighlightComponent::OnMouseEnd(UPrimitiveComponent* TouchedComponent)
{
    if (bAutoHighlightOnHover && bAutoRemoveHoverOnMouseLeave)
    {
        UnhighlightActor(HoverHighlightType);
    }
}

void UHighlightComponent::OnActorClicked(AActor* TouchedActor, FKey ButtonPressed)
{
    if (bAutoHighlightWhenSelected && bCanBeHighlighted)
    {
        // 切換選中狀態
        ToggleHighlight(SelectionHighlightType);
    }
}

void UHighlightComponent::OnActorSelected()
{
    if (bAutoHighlightWhenSelected && bCanBeHighlighted)
    {
        HighlightActor(SelectionHighlightType);
    }
}

void UHighlightComponent::OnActorDeselected()
{
    if (bAutoHighlightWhenSelected)
    {
        UnhighlightActor(SelectionHighlightType);
    }
}

UHighlightManager* UHighlightComponent::GetHighlightManager() const
{
    if (CachedHighlightManager)
    {
        return CachedHighlightManager;
    }

    if (UWorld* World = GetWorld())
    {
        return World->GetSubsystem<UHighlightManager>();
    }

    return nullptr;
}

void UHighlightComponent::RefreshHighlightComponents()
{
    // 這個方法可以在編輯器中調用，用於刷新組件列表
    CustomHighlightComponents.Empty();

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    // 獲取所有 Mesh 組件
    TArray<UPrimitiveComponent*> Components;
    Owner->GetComponents<UPrimitiveComponent>(Components);

    for (UPrimitiveComponent* Component : Components)
    {
        if (Component && Component->IsVisible())
        {
            CustomHighlightComponents.Add(Component);
        }
    }

    Debug::Print(FString::Printf(TEXT("Found %d highlightable components"),
        CustomHighlightComponents.Num()), FColor::Green);
}