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
	OwnerController = InOwnerController;

	// Try to get widget classes from GameMode if not set
	TryGetWidgetClassesFromGameMode();

	Debug::Print(TEXT("UIManagerComponent initialized"), FColor::Green);
}


// Called when the game starts
void UUIManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	// Create all UI widgets at begin play
	CreateAllUI();
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
            TurnOrderWidget->AddToViewport(TurnOrderUILayer);
            SetupTurnOrderPosition();
            Debug::Print(TEXT("Turn Order UI created"), FColor::Green);
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
	CreateCombatUI();
	CreateTurnOrderUI();
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

        Debug::Print(TEXT("Turn Order UI positioned"), FColor::Cyan);
    }
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




