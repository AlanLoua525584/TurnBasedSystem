// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "ProjectGateGameMode.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UTurnSystemComponent::UTurnSystemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	// Initialize state
	CurrentActionPoints = MaxActionPoints;
	TurnState = ETurnState::Waiting;
	bIsMyTurn = false;
	CurrentInitiative = BaseInitiative;
	bIsSlowed = false;
	bIsHasted = false;
}


// Called when the game starts
void UTurnSystemComponent::BeginPlay()
{
    Super::BeginPlay();

    // 確保初始狀態是關閉的
    bIsMyTurn = false;
    TurnState = ETurnState::Waiting;

    // Initialize action points
    CurrentActionPoints = MaxActionPoints;

    // Calculate initial initiative
    CalculateInitiative();

    Debug::Print(FString::Printf(TEXT("%s TurnSystemComponent initialized - AP: %d/%d, Initiative: %d, IsMyTurn: FALSE"),
        GetOwner() ? *GetOwner()->GetActorLabel() : TEXT("Unknown"),
        CurrentActionPoints, MaxActionPoints, CurrentInitiative), FColor::Green);
}


void UTurnSystemComponent::OnTurnStart()
{
    if (bIsMyTurn)
    {
        Debug::Print(TEXT("WARNING: OnTurnStart called but it's already my turn!"), FColor::Yellow);
        return;
    }

    bIsMyTurn = true;
    SetTurnState(ETurnState::Active);

    // Reset action points
    ResetActionPoints();

    // Clear action history
    TurnActionHistory.Empty();

    // Get owner character
    ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetOwner());
    if (!Character)
    {
        Debug::Print(TEXT("ERROR: TurnSystemComponent has no valid owner!"), FColor::Red);
        return;
    }

    FString CharName = Character->GetActorLabel();
    Debug::Print(FString::Printf(TEXT("=== %s's Turn Started ==="), *CharName), FColor::Cyan, 3);

    // Visual feedback - highlight character
    if (USkeletalMeshComponent* MeshComp = Character->GetMesh())
    {
        MeshComp->SetRenderCustomDepth(true);
        MeshComp->SetCustomDepthStencilValue(252); // Green outline
        Debug::Print(FString::Printf(TEXT("%s: Highlight enabled"), *CharName), FColor::Green);
    }


    // 只為玩家控制的角色顯示移動範圍
   
     Character = Cast<ATurnBasedCharacter>(GetOwner());
    if (Character && Character->bIsPlayerControlled)
    {
        // 使用計時器延遲顯示，確保所有系統都已初始化
        FTimerHandle ShowRangeTimer;
        GetWorld()->GetTimerManager().SetTimer(
            ShowRangeTimer,
            [Character]()
            {
                if (Character && Character->GetGridMovementComponent())
                {
                    Character->ShowMovementRange();
                    Debug::Print(FString::Printf(TEXT("%s: Movement range displayed on turn start"),
                        *Character->GetActorLabel()), FColor::Blue);
                }
            },
            0.1f,  // 延遲 0.1 秒
            false
        );
    }



    // Broadcast events
    OnTurnStarted.Broadcast();

    // Update UI
    UpdateUI();
}

void UTurnSystemComponent::OnTurnEnd()
{
    if (!bIsMyTurn)
    {
        Debug::Print(TEXT("WARNING: OnTurnEnd called but it's not my turn!"), FColor::Yellow);
        return;
    }

    bIsMyTurn = false;
    SetTurnState(ETurnState::Waiting);

    // Get owner character
    ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetOwner());
    if (!Character)
        return;

    FString CharName = Character->GetActorLabel();
    Debug::Print(FString::Printf(TEXT("=== %s's Turn Ended ==="), *CharName), FColor::Orange, 2);

    // Remove visual feedback
    if (USkeletalMeshComponent* MeshComp = Character->GetMesh())
    {
        MeshComp->SetRenderCustomDepth(false);
    }

    // Log turn actions
    if (TurnActionHistory.Num() > 0)
    {
        Debug::Print(FString::Printf(TEXT("%s performed %d actions this turn:"),
            *CharName, TurnActionHistory.Num()), FColor::White);

        for (const FString& Action : TurnActionHistory)
        {
            Debug::Print(FString::Printf(TEXT("  - %s"), *Action), FColor::White);
        }
    }

    // Clear any remaining visuals
    if (UGridVisualComponent* VisualComp = Character->FindComponentByClass<UGridVisualComponent>())
    {
        VisualComp->ClearAllVisuals();
    }

    // Broadcast events
    OnTurnEnded.Broadcast();
}


void UTurnSystemComponent::EndTurnEarly()
{
    if (!bIsMyTurn || !CanEndTurn())
        return;

    SetTurnState(ETurnState::Ending);

    // Log remaining AP
    if (CurrentActionPoints > 0)
    {
        Debug::Print(FString::Printf(TEXT("Ending turn early with %d AP remaining"),
            CurrentActionPoints), FColor::Yellow);
    }

    // Notify turn manager
    if (ASimpleTurnManager* TurnManager = GetTurnManager())
    {
        TurnManager->NextTurn();
    }
}

void UTurnSystemComponent::ResetActionPoints()
{
    int32 OldAP = CurrentActionPoints;
    CurrentActionPoints = MaxActionPoints;

    // Apply status effects
    if (bIsSlowed)
    {
        CurrentActionPoints = FMath::Max(1, CurrentActionPoints - 1);
        Debug::Print(TEXT("Slowed: -1 AP"), FColor::Purple);
    }

    if (bIsHasted)
    {
        CurrentActionPoints += 1;
        Debug::Print(TEXT("Hasted: +1 AP"), FColor::Cyan);
    }

    if (OldAP != CurrentActionPoints)
    {
        OnActionPointsChanged.Broadcast(CurrentActionPoints);
    }

    ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetOwner());
    FString CharName = Character ? Character->GetActorLabel() : TEXT("Unknown");

    Debug::Print(FString::Printf(TEXT("%s: Action Points Reset to %d"),
        *CharName, CurrentActionPoints), FColor::Green);
}



bool UTurnSystemComponent::ConsumeActionPoints(int32 Amount)
{
    if (Amount <= 0)
        return true;

    if (CurrentActionPoints < Amount)
    {
        Debug::Print(FString::Printf(TEXT("Not enough AP! Have: %d, Need: %d"),
            CurrentActionPoints, Amount), FColor::Red);
        return false;
    }

    CurrentActionPoints = FMath::Max(0, CurrentActionPoints - Amount);
    OnActionPointsChanged.Broadcast(CurrentActionPoints);

    ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetOwner());
    FString CharName = Character ? Character->GetActorLabel() : TEXT("Unknown");

    Debug::Print(FString::Printf(TEXT("%s: Used %d AP, Remaining: %d"),
        *CharName, Amount, CurrentActionPoints), FColor::Yellow);

    // Check if turn should end
    if (CurrentActionPoints <= 0)
    {
        Debug::Print(TEXT("No AP remaining - consider ending turn"), FColor::Orange);
    }

    return true;
}


void UTurnSystemComponent::AddActionPoints(int32 Amount)
{
    if (Amount <= 0)
        return;

    int32 OldAP = CurrentActionPoints;
    CurrentActionPoints = FMath::Min(CurrentActionPoints + Amount, MaxActionPoints * 2); // Cap at double max

    if (OldAP != CurrentActionPoints)
    {
        OnActionPointsChanged.Broadcast(CurrentActionPoints);

        Debug::Print(FString::Printf(TEXT("Gained %d AP! Total: %d"),
            Amount, CurrentActionPoints), FColor::Green);
    }
}


bool UTurnSystemComponent::CanPerformAction(int32 ActionCost) const
{
    return bIsMyTurn && CurrentActionPoints >= ActionCost && TurnState == ETurnState::Active;
}


bool UTurnSystemComponent::TryPerformAction(const FString& ActionName, int32 Cost)
{
    if (!CanPerformAction(Cost))
    {
        Debug::Print(FString::Printf(TEXT("Cannot perform %s - Cost: %d, Have: %d AP"),
            *ActionName, Cost, CurrentActionPoints), FColor::Red);
        return false;
    }

    // Set executing state
    SetTurnState(ETurnState::Executing);

    // Consume AP
    if (ConsumeActionPoints(Cost))
    {
        // Record action
        TurnActionHistory.Add(FString::Printf(TEXT("%s (Cost: %d)"), *ActionName, Cost));

        // Broadcast event
        OnActionPerformed.Broadcast(ActionName, Cost);

        // Return to active state
        SetTurnState(ETurnState::Active);

        return true;
    }

    // Failed to consume AP
    SetTurnState(ETurnState::Active);
    return false;
}


void UTurnSystemComponent::CalculateInitiative()
{// Base initiative
    CurrentInitiative = BaseInitiative;

    // Get character stats
    if (AActor* OwnerActor = GetOwner())
    {
        if (OwnerActor->Implements<UCombatInterface>())
        {
            if (UCombatComponent* Combat = ICombatInterface::Execute_GetCombatComponent(OwnerActor))
            {
                const FCombatStats& Stats = Combat->GetStats();

                // Add speed bonus
                int32 SpeedBonus = FMath::RoundToInt(Stats.TurnOrderData.Speed * SpeedInitiativeMultiplier);
                CurrentInitiative += SpeedBonus;

                // Add base initiative from stats
                CurrentInitiative += Stats.TurnOrderData.Initiative;
            }

        }
    }

    // Apply status effects
    if (bIsSlowed)
    {
        CurrentInitiative -= 20;
    }

    if (bIsHasted)
    {
        CurrentInitiative += 20;
    }

    // Add some randomness
    CurrentInitiative += FMath::RandRange(-10, 10);

    // Broadcast change
    OnInitiativeChanged.Broadcast(CurrentInitiative);

    Debug::Print(FString::Printf(TEXT("Initiative calculated: %d"), CurrentInitiative), FColor::Blue);
}


void UTurnSystemComponent::ModifyInitiative(int32 Amount)
{
    if (Amount == 0)
        return;

    int32 OldInitiative = CurrentInitiative;
    CurrentInitiative += Amount;

    OnInitiativeChanged.Broadcast(CurrentInitiative);

    Debug::Print(FString::Printf(TEXT("Initiative changed: %d -> %d"),
        OldInitiative, CurrentInitiative), FColor::Blue);
}



float UTurnSystemComponent::GetActionPointPercentage() const
{
    return MaxActionPoints > 0 ? (float)CurrentActionPoints / (float)MaxActionPoints : 0.0f;
}



bool UTurnSystemComponent::CanEndTurn() const
{
    return bIsMyTurn && TurnState == ETurnState::Active;
}


void UTurnSystemComponent::SetTurnState(ETurnState NewState)
{
    if (TurnState != NewState)
    {
        ETurnState OldState = TurnState;
        TurnState = NewState;

        OnTurnStateChanged.Broadcast(NewState);

        Debug::Print(FString::Printf(TEXT("Turn State: %s -> %s"),
            *UEnum::GetValueAsString(OldState),
            *UEnum::GetValueAsString(NewState)), FColor::Cyan);
    }
}

void UTurnSystemComponent::UpdateUI()
{
    // Update turn display widget
    if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(UGameplayStatics::GetGameMode(GetWorld())))
    {
        if (UTurnDisplayWidget* TurnWidget = GameMode->GetTurnDisplayWidget())
        {
            TurnWidget->UpdateActionPoints(CurrentActionPoints, MaxActionPoints);
        }
    }

    // Update through UI manager if available
    if (AGridPlayerController* PC = Cast<AGridPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0)))
    {
        if (UUIManagerComponent* UIManager = PC->GetUIManager())
        {
            // UI manager can handle additional updates
        }
    }
}

ASimpleTurnManager* UTurnSystemComponent::GetTurnManager() const
{
    if (CachedTurnManager)
        return CachedTurnManager;

    // Find turn manager
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASimpleTurnManager::StaticClass(), FoundActors);

    if (FoundActors.Num() > 0)
    {
        return Cast<ASimpleTurnManager>(FoundActors[0]);
    }

    return nullptr;
}

void UTurnSystemComponent::OnCombatAnimationHit(AActor* Attacker, AActor* Target)
{
}

void UTurnSystemComponent::OnCombatAnimationCompleted(AActor* Attacker, AActor* Target, bool bSuccess)
{
}




