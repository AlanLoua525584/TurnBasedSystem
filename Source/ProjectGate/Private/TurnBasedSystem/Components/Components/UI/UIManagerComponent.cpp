// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnbasedSystem/Components/UI/UIManagerComponent.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "CombatSystem/CombatDisplayWidget.h"
#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "ProjectGateGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanelSlot.h"
#include "Engine/World.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UUIManagerComponent::UUIManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

    TurnOrderAnchors = FAnchors(0.5f, 0.0f);
	// ...
}

void UUIManagerComponent::Initialize(APlayerController* InOwnerController)
{
    Debug::Print(TEXT("=== UIManagerComponent::Initialize 被調用 ==="), FColor::Yellow);

    OwnerController = InOwnerController;

    if (!OwnerController)
    {
        Debug::Print(TEXT("ERROR: Initialize called with null OwnerController"), FColor::Red);
        return;
    }

    Debug::Print(FString::Printf(TEXT("✓ OwnerController 設置為: %s"), *OwnerController->GetName()), FColor::Green);

    // 嘗試獲取 widget classes from GameMode
    TryGetWidgetClassesFromGameMode();

    // 立即嘗試創建 UI，而不是等待 BeginPlay
    Debug::Print(TEXT(">>> 在 Initialize 中立即創建 UI <<<"), FColor::Magenta);
    CreateAllUI();

    Debug::Print(TEXT("UIManagerComponent initialized"), FColor::Green);
}


// Called when the game starts
void UUIManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	
    // 添加詳細的調試信息
    Debug::Print(TEXT("=== UIManagerComponent BeginPlay 調試 ==="), FColor::Yellow);

    // 如果還沒有初始化，嘗試初始化
    if (!OwnerController)
    {
        Debug::Print(TEXT("OwnerController 是 null，嘗試自動查找..."), FColor::Orange);

        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            Debug::Print(FString::Printf(TEXT("找到 PlayerController: %s"), *PC->GetName()), FColor::Green);
            Initialize(PC);
        }
        else
        {
            Debug::Print(TEXT("無法找到 PlayerController"), FColor::Red);
        }
    }
    else
    {
        Debug::Print(TEXT("OwnerController 已設置，跳過自動初始化"), FColor::Green);
    }
}

void UUIManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Clean up all UI widgets
	DestroyAllUI();

	Super::EndPlay(EndPlayReason);
}

void UUIManagerComponent::CreateCombatUI()
{
    if (!CanCreateWidgets())
    {
        Debug::Print(TEXT("Cannot create combat UI - invalid conditions"), FColor::Red);
        return;
    }

    // Destroy existing widget if any
    if (CombatDisplayWidget)
    {
        CombatDisplayWidget->RemoveFromParent();
        CombatDisplayWidget = nullptr;
    }

    // Create new widget
    if (CombatDisplayWidgetClass)
    {
        CombatDisplayWidget = CreateWidget<UCombatDisplayWidget>(OwnerController, CombatDisplayWidgetClass);
        if (CombatDisplayWidget)
        {
            CombatDisplayWidget->AddToViewport(CombatUILayer);
            Debug::Print(TEXT("Combat Display UI created"), FColor::Green);
        }
        else
        {
            Debug::Print(TEXT("Failed to create Combat Display UI"), FColor::Red);
        }
    }
    else
    {
        Debug::Print(TEXT("CombatDisplayWidgetClass is null"), FColor::Red);
    }
	
}

void UUIManagerComponent::CreateTurnOrderUI()
{
    Debug::Print(TEXT("=== CreateTurnOrderUI() 開始 ==="), FColor::Yellow);
    if (!CanCreateWidgets())
    {
        Debug::Print(TEXT("Cannot create turn order UI - invalid conditions"), FColor::Red);
        return;
    }

    // Destroy existing widget if any
    if (TurnOrderWidget)
    {
        TurnOrderWidget->RemoveFromParent();
        TurnOrderWidget = nullptr;
    }

    // Create new widget
    if (TurnOrderWidgetClass)
    {
        TurnOrderWidget = CreateWidget<UTurnOrderWidget>(OwnerController, TurnOrderWidgetClass);
        if (TurnOrderWidget)
        {
            // 設置 Widget 不攔截輸入事件 - 關鍵修改！
            TurnOrderWidget->SetVisibility(ESlateVisibility::HitTestInvisible);

            TurnOrderWidget->AddToViewport(TurnOrderUILayer);
            SetupTurnOrderPosition();

            Debug::Print(TEXT("Turn Order UI created with HitTestInvisible"), FColor::Green);
        }
        else
        {
            Debug::Print(TEXT("Failed to create Turn Order UI"), FColor::Red);
        }
    }
    else
    {
        Debug::Print(TEXT("TurnOrderWidgetClass is null"), FColor::Red);
    }
}

void UUIManagerComponent::CreateAllUI()
{
    Debug::Print(TEXT("=== CreateAllUI() 被調用 ==="), FColor::Magenta);

    Debug::Print(TEXT(">>> 調用 CreateCombatUI() <<<"), FColor::Cyan);
    CreateCombatUI();

    Debug::Print(TEXT(">>> 調用 CreateTurnOrderUI() <<<"), FColor::Cyan);
    CreateTurnOrderUI();

    Debug::Print(TEXT("=== CreateAllUI() 完成 ==="), FColor::Magenta);
}

void UUIManagerComponent::UpdateCombatUI(AActor* Target, bool bCanAttack)
{
    if (!CombatDisplayWidget) return;

    CombatDisplayWidget->ShowTargetInfo(Target, bCanAttack);
}

void UUIManagerComponent::UpdateTurnOrderUI(const TArray<AActor*>& TurnOrder, int32 CurrentIndex)
{
    if (!TurnOrderWidget) return;

    TurnOrderWidget->UpdateTurnOrder(TurnOrder);

    // Highlight current character
    if (CurrentIndex >= 0 && CurrentIndex < TurnOrder.Num())
    {
        TurnOrderWidget->HighlightCurrentCharacter(TurnOrder[CurrentIndex]);
    }
}

void UUIManagerComponent::ShowDamagePreview(int32 Damage, bool bIsCritical)
{
    if (!CombatDisplayWidget) return;

    CombatDisplayWidget->ShowDamagePreview(Damage, bIsCritical);
}

void UUIManagerComponent::HideDamagePreview()
{
    if (!CombatDisplayWidget) return;

    CombatDisplayWidget->HideDamagePreview();
}

void UUIManagerComponent::ShowCombatResult(const FDamageResult& Result)
{
    if (!CombatDisplayWidget) return;

    CombatDisplayWidget->ShowCombatResult(Result);
}

void UUIManagerComponent::SetAttackModeActive(bool bActive)
{
    if (!CombatDisplayWidget) return;

    CombatDisplayWidget->SetAttackModeActive(bActive);
    Debug::Print(FString::Printf(TEXT("Combat UI - Attack Mode %s"),
        bActive ? TEXT("Activated") : TEXT("Deactivated")), FColor::Green);
}

void UUIManagerComponent::HideCombatUI()
{
    if (CombatDisplayWidget)
    {
        CombatDisplayWidget->HideTargetInfo();
        CombatDisplayWidget->HideDamagePreview();
        CombatDisplayWidget->SetAttackModeActive(false);
    }
}

void UUIManagerComponent::DestroyAllUI()
{
    if (CombatDisplayWidget)
    {
        CombatDisplayWidget->RemoveFromParent();
        CombatDisplayWidget = nullptr;
    }

    if (TurnOrderWidget)
    {
        TurnOrderWidget->RemoveFromParent();
        TurnOrderWidget = nullptr;
    }

    Debug::Print(TEXT("All UI widgets destroyed"), FColor::Yellow);
}


// === Helper Functions ===

// Validate widget creation conditions


bool UUIManagerComponent::CanCreateWidgets() const
{
    if (!OwnerController)
    {
        Debug::Print(TEXT("ERROR: OwnerController is null"), FColor::Red);
        return false;
    }

    if (!OwnerController->GetWorld())
    {
        Debug::Print(TEXT("ERROR: World is null"), FColor::Red);
        return false;
    }

    return true;
}


void UUIManagerComponent::SetupTurnOrderPosition()
{
    if (!TurnOrderWidget) return;

    if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(TurnOrderWidget->Slot))
    {
        CanvasSlot->SetAnchors(TurnOrderAnchors);
        CanvasSlot->SetAlignment(TurnOrderAlignment);
        CanvasSlot->SetPosition(TurnOrderPosition);

        // 確保 Widget 大小合適，不會意外覆蓋其他區域
        CanvasSlot->SetSize(FVector2D(800.0f, 100.0f)); // 設置合適的大小

        Debug::Print(TEXT("Turn Order UI positioned"), FColor::Cyan);
    }

    // 再次確保 Visibility 設置正確
    TurnOrderWidget->SetVisibility(ESlateVisibility::HitTestInvisible);
}

void UUIManagerComponent::TryGetWidgetClassesFromGameMode()
{
    if (!OwnerController) return;

    AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(
        OwnerController->GetWorld()->GetAuthGameMode());

    if (!GameMode) return;

    // Get combat display widget class if not set
    if (!CombatDisplayWidgetClass)
    {
        CombatDisplayWidgetClass = GameMode->GetCombatDisplayWidgetClass();
        if (CombatDisplayWidgetClass)
        {
            Debug::Print(TEXT("Got CombatDisplayWidgetClass from GameMode"), FColor::Green);
        }
    }

    // Note: Add similar logic for TurnOrderWidgetClass when it's added to GameM
}




