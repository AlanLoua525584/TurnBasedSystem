// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/GridPathfindingComponent.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UGridMovementComponent::UGridMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	MovementState = EGridMovementState::Idle;
	CurrentPathIndex = 0;
	// ...
}

// Called when the game starts
void UGridMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// Try to find components on owner
	if (AActor* Owner = GetOwner())
	{
		PathfindingComponent = Owner->FindComponentByClass<UGridPathfindingComponent>();
		VisualComponent = Owner->FindComponentByClass<UGridVisualComponent>();

		if (!PathfindingComponent)
		{
			Debug::Print(TEXT("Warning: No PathfindingComponent found on owner!"), FColor::Yellow);
		}

		if (!VisualComponent)
		{
			Debug::Print(TEXT("Warning: No VisualComponent found on owner!"), FColor::Yellow);
		}
	}

}



// Called every frame
void UGridMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (MovementState == EGridMovementState::Moving)
	{
		UpdateMovement(DeltaTime);
	}

	if (bShowDebugVisualization)
	{
		DrawDebugVisualization();
	}
}

void UGridMovementComponent::InitializeGridMovement(AGridManager* InGridManager)
{
	GridManager = InGridManager;

	if (!GridManager)
	{
		Debug::Print(TEXT("ERROR: GridManager is null in InitializeGridMovement!"), FColor::Red);
		return;
	}

	// Initialize pathfinding if available
	if (PathfindingComponent)
	{
		PathfindingComponent->InitializeGrid(GridManager);
	}

	// Initialize visual component if available
	if (VisualComponent)
	{
		VisualComponent->Initialize(GridManager);
	}

	// Set initial grid position based on world location
	if (AActor* Owner = GetOwner())
	{
		CurrentGridPosition = GridManager->WorldToGrid(Owner->GetActorLocation());

		// Snap to grid
		FVector GridWorldPos = GridManager->GridToWorld(CurrentGridPosition);
		Owner->SetActorLocation(GridWorldPos);

		// Mark cell as occupied
		GridManager->SetCellOccupied(CurrentGridPosition, Owner);

		Debug::Print(FString::Printf(TEXT("%s initialized at grid position (%d, %d)"),
			*Owner->GetActorLabel(), CurrentGridPosition.X, CurrentGridPosition.Y), FColor::Green);
	}
}

bool UGridMovementComponent::MoveToGridPosition(FIntPoint TargetGridPos)
{
    if (!GridManager)
    {
        Debug::Print(TEXT("GridManager not set! Cannot move."), FColor::Red);
        return false;
    }

    // Check if already moving
    if (IsMoving())
    {
        Debug::Print(TEXT("Already moving!"), FColor::Red);
        return false;
    }

    // Validate target position
    if (!IsValidMoveTarget(TargetGridPos))
    {
        Debug::Print(TEXT("Invalid move target!"), FColor::Red);
        return false;
    }

    // Check if character can perform action (turn and AP check)
    ATurnBasedCharacter* Character = GetOwnerCharacter();
    if (!Character)
    {
        Debug::Print(TEXT("No owner character!"), FColor::Red);
        return false;
    }

    // Get turn system component for AP check
    if (UTurnSystemComponent* TurnSystem = Character->FindComponentByClass<UTurnSystemComponent>())
    {
        if (!TurnSystem->IsMyTurn())
        {
            Debug::Print(TEXT("Not your turn!"), FColor::Red);
            return false;
        }

        int32 MoveCost = CalculateMovementCost(TargetGridPos);
        if (!TurnSystem->CanPerformAction(MoveCost))
        {
            Debug::Print(TEXT("Not enough Action Points!"), FColor::Red);
            return false;
        }

        // Calculate path
        if (PathfindingComponent)
        {
            CurrentPath = PathfindingComponent->FindPath(CurrentGridPosition, TargetGridPos);
            if (CurrentPath.Num() == 0)
            {
                Debug::Print(TEXT("No valid path found!"), FColor::Red);
                return false;
            }
        }
        else
        {
            // Simple direct path if no pathfinding
            CurrentPath.Empty();
            CurrentPath.Add(CurrentGridPosition);
            CurrentPath.Add(TargetGridPos);
        }

        // Clear any visual highlights
        ClearMovementRange();

        // Clear current cell occupation
        GridManager->ClearCellOccupation(CurrentGridPosition);

        // Set target and start movement
        TargetGridPosition = TargetGridPos;
        CurrentPathIndex = 0;
        SetMovementState(EGridMovementState::Moving);
        SetComponentTickEnabled(true);

        // Consume AP
        TurnSystem->ConsumeActionPoints(MoveCost);

        Debug::Print(FString::Printf(TEXT("%s moving to (%d, %d), Cost: %d AP"),
            *Character->GetActorLabel(), TargetGridPos.X, TargetGridPos.Y, MoveCost), FColor::Green);

        return true;
    }

    return false;
}

void UGridMovementComponent::ShowMovementRange()
{
    if (!GridManager || !VisualComponent)
        return;

    ATurnBasedCharacter* Character = GetOwnerCharacter();
    if (!Character)
        return;

    // Get available movement points from turn system
    int32 MoveRange = 0;
    if (UTurnSystemComponent* TurnSystem = Character->FindComponentByClass<UTurnSystemComponent>())
    {
        // Assume move cost of 1 per cell for now
        MoveRange = TurnSystem->GetCurrentActionPoints();
    }

    if (MoveRange > 0)
    {
        Debug::Print(FString::Printf(TEXT("=== %s: Showing Movement Range (%d cells) ==="),
            *Character->GetActorLabel(), MoveRange), FColor::Magenta);

        VisualComponent->ClearAllVisuals();
        VisualComponent->ShowMovementRange(CurrentGridPosition, MoveRange);
    }
}

void UGridMovementComponent::ClearMovementRange()
{
    if (VisualComponent)
    {
        VisualComponent->ClearAllVisuals();
    }

    if (GridManager)
    {
        GridManager->ClearHighlights();
    }
}

void UGridMovementComponent::UpdateGridPositionFromWorld()
{
    if (!GridManager) return;

    AActor* Owner = GetOwner();
    if (!Owner) return;

    // Clear old position
    GridManager->ClearCellOccupation(CurrentGridPosition);

    // Update to new position
    FIntPoint NewGridPos = GridManager->WorldToGrid(Owner->GetActorLocation());

    if (NewGridPos != CurrentGridPosition)
    {
        FIntPoint OldPos = CurrentGridPosition;
        CurrentGridPosition = NewGridPos;

        // Mark new position as occupied
        GridManager->SetCellOccupied(CurrentGridPosition, Owner);

        // Broadcast position change
        OnGridPositionChanged.Broadcast(OldPos, CurrentGridPosition);

        Debug::PrintCooldown(GetWorld(), TEXT("GridPosition"),
            FString::Printf(TEXT("%s grid position (%d, %d)"),
                *Owner->GetActorLabel(), CurrentGridPosition.X, CurrentGridPosition.Y),
            FColor::Yellow, 1.0f);
    }
}

bool UGridMovementComponent::CanMoveTo(FIntPoint GridPos) const
{
    if (!GridManager)
        return false;

    // Check if position is valid
    if (!GridManager->IsValidGridPosition(GridPos))
        return false;

    // Check if path exists
    if (PathfindingComponent)
    {
        TArray<FIntPoint> Path = PathfindingComponent->FindPath(CurrentGridPosition, GridPos);
        return Path.Num() > 0;
    }

    // Simple check if no pathfinding
    FGridCell Cell;
    if (GridManager->GetGridCell(GridPos, Cell))
    {
        return Cell.GridType != EGridType::Blocked && !Cell.bIsOccupied;
    }

    return false;
}

TArray<FIntPoint> UGridMovementComponent::GetReachableCells(int32 MovementPoints) const
{
    if (!GridManager)
        return TArray<FIntPoint>();

    return GridManager->GetMovementRange(CurrentGridPosition, MovementPoints);
}

int32 UGridMovementComponent::CalculateMovementCost(FIntPoint TargetPos) const
{
    // Simple Manhattan distance for now
    // Can be enhanced with pathfinding cost later
    int32 Distance = FMath::Abs(TargetPos.X - CurrentGridPosition.X) +
        FMath::Abs(TargetPos.Y - CurrentGridPosition.Y);

    return Distance; // Assuming 1 AP per cell
}




void UGridMovementComponent::SetMovementState(EGridMovementState NewState)
{
    if (MovementState != NewState)
    {
        MovementState = NewState;
        OnMovementStateChanged.Broadcast(NewState);

        Debug::Print(FString::Printf(TEXT("Movement State Changed: %s"),
            *UEnum::GetValueAsString(NewState)), FColor::Cyan);
    }
}

void UGridMovementComponent::UpdateGridOccupation(FIntPoint OldPos, FIntPoint NewPos)
{
    if (!GridManager) return;

    GridManager->ClearCellOccupation(OldPos);
    GridManager->SetCellOccupied(NewPos, GetOwner());
}



void UGridMovementComponent::OnMoveCompleted()
{
    FIntPoint StartPos = CurrentPath.Num() > 0 ? CurrentPath[0] : CurrentGridPosition;

    // Update final position
    CurrentGridPosition = TargetGridPosition;
    UpdateGridOccupation(StartPos, CurrentGridPosition);

    // Snap to exact grid position
    SnapToGridPosition(CurrentGridPosition);

    // Clear path
    CurrentPath.Empty();
    CurrentPathIndex = 0;

    // Update state
    SetMovementState(EGridMovementState::Idle);
    SetComponentTickEnabled(false);

    // Stop character movement
    if (ATurnBasedCharacter* Character = GetOwnerCharacter())
    {
        if (UCharacterMovementComponent* MoveComp = Character->GetCharacterMovement())
        {
            MoveComp->StopMovementImmediately();
        }
    }

    // Broadcast completion
    OnMovementCompleted.Broadcast(StartPos, CurrentGridPosition);
    OnGridPositionChanged.Broadcast(StartPos, CurrentGridPosition);

    // Show new movement range if still has AP
    if (ATurnBasedCharacter* Character = GetOwnerCharacter())
    {
        if (UTurnSystemComponent* TurnSystem = Character->FindComponentByClass<UTurnSystemComponent>())
        {
            if (TurnSystem->GetCurrentActionPoints() > 0)
            {
                

                ShowMovementRange();
            }
        }
    }

    Debug::Print(TEXT("Movement completed"), FColor::Green);

    UpdateGridPositionFromWorld();
}

void UGridMovementComponent::SnapToGridPosition(FIntPoint GridPos)
{
    if (!GridManager) return;

    AActor* Owner = GetOwner();
    if (!Owner) return;

    FVector WorldPos = GridManager->GridToWorld(GridPos);
    Owner->SetActorLocation(WorldPos);
}



ATurnBasedCharacter* UGridMovementComponent::GetOwnerCharacter() const
{
    return Cast<ATurnBasedCharacter>(GetOwner());
}

bool UGridMovementComponent::IsValidMoveTarget(FIntPoint GridPos) const
{
    if (!GridManager)
        return false;

    // Check if position is valid
    if (!GridManager->IsValidGridPosition(GridPos))
        return false;

    // Check if different from current
    if (GridPos == CurrentGridPosition)
        return false;

    // Check if cell is available
    FGridCell Cell;
    if (GridManager->GetGridCell(GridPos, Cell))
    {
        return Cell.GridType != EGridType::Blocked && !Cell.bIsOccupied;
    }

    return false;
}


FVector UGridMovementComponent::CalculateWorldPosition(FIntPoint GridPos) const
{
    if (!GridManager)
        return FVector::ZeroVector;

    return GridManager->GridToWorld(GridPos);
}


void UGridMovementComponent::UpdateMovement(float DeltaTime)
{
    if (!GridManager || CurrentPath.Num() == 0)
    {
        OnMoveCompleted();
        return;
    }

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        OnMoveCompleted();
        return;
    }

    // Get current target position in path
    if (CurrentPathIndex >= CurrentPath.Num())
    {
        OnMoveCompleted();
        return;
    }

    FIntPoint CurrentTarget = CurrentPath[CurrentPathIndex];
    FVector TargetWorldPos = CalculateWorldPosition(CurrentTarget);
    FVector CurrentWorldPos = Owner->GetActorLocation();

    // Calculate direction and distance
    FVector Direction = TargetWorldPos - CurrentWorldPos;
    Direction.Z = 0; // Keep on same height
    float Distance = Direction.Size2D();

    // Check if reached current waypoint
    if (Distance <= AcceptanceRadius)
    {
        CurrentPathIndex++;

        // Check if path complete
        if (CurrentPathIndex >= CurrentPath.Num())
        {
            OnMoveCompleted();
        }
        return;
    }

    // Move towards target
    Direction.Normalize();
    FVector NewPosition = CurrentWorldPos + Direction * GridMoveSpeed * DeltaTime;

    // Use character movement if available
    ATurnBasedCharacter* Character = GetOwnerCharacter();
    if (Character && Character->GetCharacterMovement())
    {
        Character->AddMovementInput(Direction, 1.0f);
    }
    else
    {
        // Direct position update
        Owner->SetActorLocation(NewPosition);
    }

    // Face movement direction
    if (!Direction.IsNearlyZero())
    {
        FRotator NewRotation = Direction.Rotation();
        Owner->SetActorRotation(NewRotation);
    }
}

void UGridMovementComponent::DrawDebugVisualization() const
{
    if (!GridManager || !GetWorld()) return;

    // Draw current position
    FVector CurrentWorldPos = CalculateWorldPosition(CurrentGridPosition);
    DrawDebugSphere(GetWorld(), CurrentWorldPos, 25.0f, 12, FColor::Green, false, -1.0f, 0, 2.0f);

    // Draw path if moving
    if (MovementState == EGridMovementState::Moving && CurrentPath.Num() > 0)
    {
        for (int32 i = 0; i < CurrentPath.Num() - 1; i++)
        {
            FVector Start = CalculateWorldPosition(CurrentPath[i]);
            FVector End = CalculateWorldPosition(CurrentPath[i + 1]);

            DrawDebugLine(GetWorld(), Start, End, FColor::Blue, false, -1.0f, 0, 5.0f);

            // Draw waypoint
            DrawDebugSphere(GetWorld(), End, 15.0f, 8, FColor::Yellow, false, -1.0f, 0, 1.0f);
        }

        // Draw target
        FVector TargetWorldPos = CalculateWorldPosition(TargetGridPosition);
        DrawDebugSphere(GetWorld(), TargetWorldPos, 30.0f, 12, FColor::Red, false, -1.0f, 0, 3.0f);
    }
}



