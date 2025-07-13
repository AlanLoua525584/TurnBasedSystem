// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Math/IntPoint.h"
#include "GridMovementComponent.generated.h"

// Forward declarations
class AGridManager;
class UGridPathfindingComponent;
class UGridVisualComponent;
class ATurnBasedCharacter;
class AAIController;

// Movement state enum
UENUM(BlueprintType)
enum class EGridMovementState : uint8
{
	Idle        UMETA(DisplayName = "Idle"),
	Moving      UMETA(DisplayName = "Moving"),
	PathBlocked UMETA(DisplayName = "Path Blocked")
};

// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGridPositionChanged, FIntPoint, OldPosition, FIntPoint, NewPosition);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementStateChanged, EGridMovementState, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMovementCompleted, FIntPoint, StartPos, FIntPoint, EndPos);

/**
 * Component that handles all grid-based movement for turn-based characters
 */


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UGridMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGridMovementComponent();

    // === Initialization ===
    UFUNCTION(BlueprintCallable, Category = "Grid Movement")
    void InitializeGridMovement(AGridManager* InGridManager);

    // === Core Movement Functions ===

    // Move to a specific grid position
    UFUNCTION(BlueprintCallable, Category = "Grid Movement")
    bool MoveToGridPosition(FIntPoint TargetGridPos);

    // Show movement range visualization
    UFUNCTION(BlueprintCallable, Category = "Grid Movement")
    void ShowMovementRange();

    // Clear movement range visualization
    UFUNCTION(BlueprintCallable, Category = "Grid Movement")
    void ClearMovementRange();

    // Update grid position based on world location
    UFUNCTION(BlueprintCallable, Category = "Grid Movement")
    void UpdateGridPositionFromWorld();

    // === Query Functions ===

    // Check if can move to a position
    UFUNCTION(BlueprintPure, Category = "Grid Movement")
    bool CanMoveTo(FIntPoint GridPos) const;

    // Get current grid position
    UFUNCTION(BlueprintPure, Category = "Grid Movement")
    FIntPoint GetCurrentGridPosition() const { return CurrentGridPosition; }

    // Get movement state
    UFUNCTION(BlueprintPure, Category = "Grid Movement")
    EGridMovementState GetMovementState() const { return MovementState; }

    // Check if currently moving
    UFUNCTION(BlueprintPure, Category = "Grid Movement")
    bool IsMoving() const { return MovementState == EGridMovementState::Moving; }

    // Get reachable cells based on movement points
    UFUNCTION(BlueprintCallable, Category = "Grid Movement")
    TArray<FIntPoint> GetReachableCells(int32 MovementPoints) const;

    // Calculate movement cost to target
    UFUNCTION(BlueprintPure, Category = "Grid Movement")
    int32 CalculateMovementCost(FIntPoint TargetPos) const;

    // === Grid Manager Access ===
    UFUNCTION(BlueprintPure, Category = "Grid Movement")
    AGridManager* GetGridManager() const { return GridManager; }

    // === Events ===
    UPROPERTY(BlueprintAssignable, Category = "Grid Movement|Events")
    FOnGridPositionChanged OnGridPositionChanged;

    UPROPERTY(BlueprintAssignable, Category = "Grid Movement|Events")
    FOnMovementStateChanged OnMovementStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Grid Movement|Events")
    FOnMovementCompleted OnMovementCompleted;

    // === Configuration ===

    // Movement speed for grid-based movement
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Movement|Config")
    float GridMoveSpeed = 300.0f;

    // Acceptable distance to consider movement complete
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Movement|Config")
    float AcceptanceRadius = 5.0f;

    // Show debug visualization
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Movement|Debug")
    bool bShowDebugVisualization = false;

    // Check if position is valid for movement
    bool IsValidMoveTarget(FIntPoint GridPos) const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // === Internal Functions ===

    // Set movement state
    void SetMovementState(EGridMovementState NewState);

    // Update grid occupation
    void UpdateGridOccupation(FIntPoint OldPos, FIntPoint NewPos);

    // Handle movement completion
    void OnMoveCompleted();

    // Snap to grid position
    void SnapToGridPosition(FIntPoint GridPos);

    // Get owner character
    ATurnBasedCharacter* GetOwnerCharacter() const;

    



private:
    // === Core References ===
    UPROPERTY()
    AGridManager* GridManager;

    UPROPERTY()
    UGridPathfindingComponent* PathfindingComponent;

    UPROPERTY()
    UGridVisualComponent* VisualComponent;

    // === State ===
    UPROPERTY()
    FIntPoint CurrentGridPosition;

    UPROPERTY()
    FIntPoint TargetGridPosition;

    UPROPERTY()
    EGridMovementState MovementState;

    // Current path for movement
    UPROPERTY()
    TArray<FIntPoint> CurrentPath;

    // Current path index
    int32 CurrentPathIndex;

    // === Movement Calculation ===
    FVector CalculateWorldPosition(FIntPoint GridPos) const;
    void UpdateMovement(float DeltaTime);

    // === Debug ===
    void DrawDebugVisualization() const;
		
};
