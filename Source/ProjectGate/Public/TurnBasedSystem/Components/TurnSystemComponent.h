// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TurnSystemComponent.generated.h"

// Forward declarations
class ASimpleTurnManager;

// Action cost configuration
USTRUCT(BlueprintType)
struct FActionCosts
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action Costs")
    int32 MoveCostPerCell = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action Costs")
    int32 AttackCost = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action Costs")
    int32 SkillCost = 2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action Costs")
    int32 ItemUseCost = 1;
};

// Turn state enum
UENUM(BlueprintType)
enum class ETurnState : uint8
{
    Waiting     UMETA(DisplayName = "Waiting"),
    Active      UMETA(DisplayName = "Active"),
    Executing   UMETA(DisplayName = "Executing Action"),
    Ending      UMETA(DisplayName = "Ending Turn")
};

// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionPointsChanged, int32, NewActionPoints);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionPerformed, FString, ActionName, int32, Cost);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTurnStateChanged, ETurnState, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurnStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurnEnded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitiativeChanged, int32, NewInitiative);

/*
 * Component that manages turn-based mechanics including Action Points and turn states
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UTurnSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTurnSystemComponent();

    // === Configuration ===

    // Maximum action points per turn
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Config")
    int32 MaxActionPoints = 3;

    // Action costs configuration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Config")
    FActionCosts ActionCosts;

    // Base initiative value
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Config")
    int32 BaseInitiative = 100;

    // Speed affects initiative
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Config")
    float SpeedInitiativeMultiplier = 0.5f;

    // === Core Functions ===

    // Turn management
    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void OnTurnStart();

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void OnTurnEnd();

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void EndTurnEarly();

    // Action point management
    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void ResetActionPoints();

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    bool ConsumeActionPoints(int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void AddActionPoints(int32 Amount);

    // Action validation
    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool CanPerformAction(int32 ActionCost) const;

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    bool TryPerformAction(const FString& ActionName, int32 Cost);

    // Initiative management
    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void CalculateInitiative();

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void ModifyInitiative(int32 Amount);

    // === State Queries ===

    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool IsMyTurn() const { return bIsMyTurn; }

    UFUNCTION(BlueprintPure, Category = "Turn System")
    int32 GetCurrentActionPoints() const { return CurrentActionPoints; }

    UFUNCTION(BlueprintPure, Category = "Turn System")
    int32 GetMaxActionPoints() const { return MaxActionPoints; }

    UFUNCTION(BlueprintPure, Category = "Turn System")
    float GetActionPointPercentage() const;

    UFUNCTION(BlueprintPure, Category = "Turn System")
    ETurnState GetTurnState() const { return TurnState; }

    UFUNCTION(BlueprintPure, Category = "Turn System")
    int32 GetCurrentInitiative() const { return CurrentInitiative; }

    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool CanEndTurn() const;

    // === Status Effects ===

    UFUNCTION(BlueprintCallable, Category = "Turn System|Status")
    void SetSlowed(bool bSlowed) { bIsSlowed = bSlowed; }

    UFUNCTION(BlueprintCallable, Category = "Turn System|Status")
    void SetHasted(bool bHasted) { bIsHasted = bHasted; }

    UFUNCTION(BlueprintPure, Category = "Turn System|Status")
    bool IsSlowed() const { return bIsSlowed; }

    UFUNCTION(BlueprintPure, Category = "Turn System|Status")
    bool IsHasted() const { return bIsHasted; }

    // === Events ===

    UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
    FOnActionPointsChanged OnActionPointsChanged;

    UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
    FOnActionPerformed OnActionPerformed;

    UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
    FOnTurnStateChanged OnTurnStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
    FOnTurnStarted OnTurnStarted;

    UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
    FOnTurnEnded OnTurnEnded;

    UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
    FOnInitiativeChanged OnInitiativeChanged;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    // Set turn state
    void SetTurnState(ETurnState NewState);

    // Update UI elements
    void UpdateUI();

    // Find turn manager
    ASimpleTurnManager* GetTurnManager() const;

public:	

    // === State Variables ===

    // Current action points
    UPROPERTY()
    int32 CurrentActionPoints;

    // Current turn state
    UPROPERTY()
    ETurnState TurnState;

    // Is it this character's turn
    UPROPERTY()
    bool bIsMyTurn;

    // Current initiative value
    UPROPERTY()
    int32 CurrentInitiative;

    // Status effects
    UPROPERTY()
    bool bIsSlowed;

    UPROPERTY()
    bool bIsHasted;

    // Action history for current turn
    UPROPERTY()
    TArray<FString> TurnActionHistory;

    // Cached reference to turn manager
    UPROPERTY()
    ASimpleTurnManager* CachedTurnManager;
	
    // Combat Animation Event Handlers
    UFUNCTION()
    void OnCombatAnimationHit(AActor* Attacker, AActor* Target);

    UFUNCTION()
    void OnCombatAnimationCompleted(AActor* Attacker, AActor* Target, bool bSuccess);
};
