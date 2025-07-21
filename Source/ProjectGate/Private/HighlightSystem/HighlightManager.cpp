// Fill out your copyright notice in the Description page of Project Settings.


#include "HighlightSystem/HighlightManager.h"
#include "HighlightSystem/Highlightable.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Public/DebugHelper.h"

void UHighlightManager::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    Debug::Print(TEXT("HighlightManager Initialized"), FColor::Green);

    // 初始化默認配置
    InitializeDefaultConfigs();

    // 啟動定時器處理臨時高亮
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(
            HighlightTickTimer,
            this,
            &UHighlightManager::TickHighlights,
            0.1f,
            true
        );
    }
}

void UHighlightManager::Deinitialize()
{
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(HighlightTickTimer);
    }

    ClearAllHighlights();
    Super::Deinitialize();
}

void UHighlightManager::InitializeDefaultConfigs()
{
    // 當前回合 - 綠色
    FHighlightConfig CurrentTurnConfig;
    CurrentTurnConfig.Type = EHighlightType::CurrentTurn;
    CurrentTurnConfig.StencilValue = 252;
    CurrentTurnConfig.Color = FLinearColor(0, 1, 0, 1);
    CurrentTurnConfig.Priority = EHighlightPriority::High;
    CurrentTurnConfig.bPulsing = true;
    CurrentTurnConfig.PulseSpeed = 2.0f;
    HighlightConfigs.Add(EHighlightType::CurrentTurn, CurrentTurnConfig);

    // 攻擊目標 - 紅色
    FHighlightConfig AttackTargetConfig;
    AttackTargetConfig.Type = EHighlightType::AttackTarget;
    AttackTargetConfig.StencilValue = 253;
    AttackTargetConfig.Color = FLinearColor(1, 0, 0, 1);
    AttackTargetConfig.Priority = EHighlightPriority::High;
    HighlightConfigs.Add(EHighlightType::AttackTarget, AttackTargetConfig);

    // 懸停 - 黃色
    FHighlightConfig HoverConfig;
    HoverConfig.Type = EHighlightType::Hover;
    HoverConfig.StencilValue = 254;
    HoverConfig.Color = FLinearColor(1, 1, 0, 1);
    HoverConfig.Priority = EHighlightPriority::Low;
    HighlightConfigs.Add(EHighlightType::Hover, HoverConfig);

    // 選中 - 藍色
    FHighlightConfig SelectedConfig;
    SelectedConfig.Type = EHighlightType::Selected;
    SelectedConfig.StencilValue = 255;
    SelectedConfig.Color = FLinearColor(0, 0.5f, 1, 1);
    SelectedConfig.Priority = EHighlightPriority::Override;
    HighlightConfigs.Add(EHighlightType::Selected, SelectedConfig);
}

void UHighlightManager::SetHighlight(AActor* Actor, EHighlightType Type, float Duration)
{
    if (!IsValid(Actor) || Type == EHighlightType::None)
    {
        return;
    }

    // 檢查是否實現了接口
    if (Actor->Implements<UHighlightable>())
    {
        if (!IHighlightable::Execute_CanBeHighlighted(Actor))
        {
            Debug::Print(FString::Printf(TEXT("%s cannot be highlighted"),
                *Actor->GetName()), FColor::Yellow);
            return;
        }
    }

    // 獲取配置
    FHighlightConfig* Config = HighlightConfigs.Find(Type);
    if (!Config)
    {
        Debug::Print(FString::Printf(TEXT("No config for highlight type %d"),
            (int32)Type), FColor::Red);
        return;
    }

    // 創建高亮狀態
    FHighlightState NewState;
    NewState.Type = Type;
    NewState.StartTime = GetWorld()->GetTimeSeconds();
    NewState.Duration = Duration;
    NewState.bIsTemporary = Duration > 0;

    // 檢查是否已經有高亮
    TArray<FHighlightState>& States = ActiveHighlights.FindOrAdd(Actor);

    // 移除相同類型的舊高亮
    States.RemoveAll([Type](const FHighlightState& State) {
        return State.Type == Type;
        });

    // 添加新高亮
    States.Add(NewState);

    // 更新視覺效果
    UpdateHighlightVisuals(Actor);

    // 通知接口
    if (Actor->Implements<UHighlightable>())
    {
        IHighlightable::Execute_OnHighlightApplied(Actor, Type);
    }

    // 廣播事件
    OnHighlightApplied.Broadcast(Actor, Type);

    Debug::Print(FString::Printf(TEXT("%s: Highlight %d applied"),
        *Actor->GetName(), (int32)Type), FColor::Green);
}

void UHighlightManager::RemoveHighlight(AActor* Actor, EHighlightType Type)
{
    if (!IsValid(Actor))
    {
        return;
    }

    TArray<FHighlightState>* States = ActiveHighlights.Find(Actor);
    if (!States)
    {
        return;
    }

    // 移除指定類型的高亮
    int32 RemovedCount = States->RemoveAll([Type](const FHighlightState& State) {
        return State.Type == Type;
        });

    if (RemovedCount > 0)
    {
        // 更新視覺效果
        UpdateHighlightVisuals(Actor);

        // 通知接口
        if (Actor->Implements<UHighlightable>())
        {
            IHighlightable::Execute_OnHighlightRemoved(Actor, Type);
        }

        // 廣播事件
        OnHighlightRemoved.Broadcast(Actor, Type);

        // 如果沒有任何高亮了，從映射中移除
        if (States->Num() == 0)
        {
            ActiveHighlights.Remove(Actor);
        }

        Debug::Print(FString::Printf(TEXT("%s: Highlight %d removed"),
            *Actor->GetName(), (int32)Type), FColor::Blue);
    }
}

void UHighlightManager::RemoveAllHighlights(AActor* Actor)
{
}

void UHighlightManager::ClearAllHighlightsOfType(EHighlightType Type)
{
}

void UHighlightManager::ClearAllHighlights()
{
}

bool UHighlightManager::HasHighlight(AActor* Actor, EHighlightType Type) const
{
    return false;
}

TArray<EHighlightType> UHighlightManager::GetActorHighlights(AActor* Actor) const
{
    return TArray<EHighlightType>();
}

TArray<AActor*> UHighlightManager::GetActorsWithHighlight(EHighlightType Type) const
{
    return TArray<AActor*>();
}

void UHighlightManager::LoadHighlightConfigs(UDataTable* ConfigTable)
{
}

FHighlightConfig UHighlightManager::GetHighlightConfig(EHighlightType Type) const
{
    return FHighlightConfig();
}

void UHighlightManager::ApplyHighlightInternal(AActor* Actor, const FHighlightConfig& Config)
{
}

void UHighlightManager::RemoveHighlightInternal(AActor* Actor)
{
}

void UHighlightManager::UpdateHighlightVisuals(AActor* Actor)
{
    if (!IsValid(Actor))
    {
        return;
    }

    // 獲取當前應該顯示的高亮配置
    FHighlightConfig* ActiveConfig = GetActiveHighlightConfig(Actor);

    // 獲取高亮組件
    TArray<UPrimitiveComponent*> Components;

    if (Actor->Implements<UHighlightable>())
    {
        Components = IHighlightable::Execute_GetHighlightableComponents(Actor);
    }
    else
    {
        // 默認獲取所有網格組件
        Actor->GetComponents<UPrimitiveComponent>(Components);
    }

    // 應用或移除高亮
    for (UPrimitiveComponent* Component : Components)
    {
        if (!Component)
            continue;

        if (ActiveConfig)
        {
            Component->SetRenderCustomDepth(true);
            Component->SetCustomDepthStencilValue(ActiveConfig->StencilValue);

            // 如果支持顏色參數
            if (UMeshComponent* MeshComp = Cast<UMeshComponent>(Component))
            {
                MeshComp->SetVectorParameterValueOnMaterials(
                    FName("HighlightColor"),
                    FVector(ActiveConfig->Color.R, ActiveConfig->Color.G, ActiveConfig->Color.B)
                );
            }
        }
        else
        {
            Component->SetRenderCustomDepth(false);
            Component->SetCustomDepthStencilValue(0);
        }
    }
}

FHighlightConfig* UHighlightManager::GetActiveHighlightConfig(AActor* Actor)
{
    TArray<FHighlightState>* States = ActiveHighlights.Find(Actor);
    if (!States || States->Num() == 0)
    {
        return nullptr;
    }

    // 找到最高優先級的高亮
    FHighlightConfig* BestConfig = nullptr;
    EHighlightPriority BestPriority = EHighlightPriority::Low;

    for (const FHighlightState& State : *States)
    {
        FHighlightConfig* Config = HighlightConfigs.Find(State.Type);
        if (Config)
        {
            if (!BestConfig || Config->Priority > BestPriority)
            {
                BestConfig = Config;
                BestPriority = Config->Priority;
            }
        }
    }

    return BestConfig;
}

void UHighlightManager::TickHighlights()
{
    float CurrentTime = GetWorld()->GetTimeSeconds();
    TArray<AActor*> ActorsToUpdate;

    // 檢查所有臨時高亮
    for (auto& Pair : ActiveHighlights)
    {
        AActor* Actor = Pair.Key;
        TArray<FHighlightState>& States = Pair.Value;

        // 移除過期的高亮
        int32 RemovedCount = States.RemoveAll([CurrentTime](const FHighlightState& State) {
            return State.bIsTemporary &&
                (CurrentTime - State.StartTime) > State.Duration;
            });

        if (RemovedCount > 0)
        {
            ActorsToUpdate.Add(Actor);
        }
    }

    // 更新需要更新的 Actor
    for (AActor* Actor : ActorsToUpdate)
    {
        UpdateHighlightVisuals(Actor);
    }
}