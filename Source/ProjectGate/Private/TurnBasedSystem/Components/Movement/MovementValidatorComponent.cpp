// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/Components/Movement/MovementValidatorComponent.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/GridPathfindingComponent.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UMovementValidatorComponent::UMovementValidatorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UMovementValidatorComponent::BeginPlay()
{
	Super::BeginPlay();

	// 獲取必要的組件引用
	if (AActor* Owner = GetOwner())
	{
		PathfindingComponent = Owner->FindComponentByClass<UGridPathfindingComponent>();
		TurnSystemComponent = Owner->FindComponentByClass<UTurnSystemComponent>();
	}

	// 獲取GridManager
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridManager::StaticClass(), FoundActors);
	if (FoundActors.Num() > 0)
	{
		GridManager = Cast<AGridManager>(FoundActors[0]);
	}
}

FMovementValidationResult UMovementValidatorComponent::ValidateMovement(FIntPoint FromPos, FIntPoint ToPos)
{
    FMovementValidationResult Result;

    // 基本檢查
    if (!ValidateBasicRequirements(FromPos, ToPos, Result.Reason))
    {
        return Result;
    }

    // 目的地檢查
    if (!ValidateDestination(ToPos, Result.Reason))
    {
        return Result;
    }

    // 路徑檢查
    if (bCheckPath && !ValidatePath(FromPos, ToPos, Result.Path, Result.Reason))
    {
        return Result;
    }

    // 計算AP消耗
    Result.RequiredAP = Result.Path.Num() > 0 ? Result.Path.Num() - 1 :
        FMath::Abs(ToPos.X - FromPos.X) + FMath::Abs(ToPos.Y - FromPos.Y);

    // 回合和AP檢查
    if ((bCheckTurn || bCheckActionPoints) && !ValidateTurnAndAP(Result.RequiredAP, Result.Reason))
    {
        return Result;
    }

    // 執行自定義規則
    for (const auto& Rule : ValidationRules)
    {
        if (Rule.GetInterface())
        {
            if (!Rule.GetInterface()->ValidateMovement(FromPos, ToPos, Result.Reason))
            {
                return Result;
            }
        }
    }

    // 所有檢查通過
    Result.bIsValid = true;
    Result.Reason = TEXT("Valid movement");
    return Result;
}



bool UMovementValidatorComponent::ValidateGridCell(FIntPoint GridPos, FString& OutReason)
{
    if (!GridManager)
    {
        OutReason = TEXT("No GridManager");
        return false;
    }

    if (!GridManager->IsValidGridPosition(GridPos))
    {
        OutReason = TEXT("Position out of bounds");
        return false;
    }

    FGridCell Cell;
    if (!GridManager->GetGridCell(GridPos, Cell))
    {
        OutReason = TEXT("Failed to get grid cell");
        return false;
    }

    if (Cell.GridType == EGridType::Blocked)
    {
        OutReason = TEXT("Blocked terrain");
        return false;
    }
    
    if (Cell.bIsOccupied)
    {
        OutReason = FString::Printf(TEXT("Occupied by %s"),
            Cell.OccupyingActor ? *Cell.OccupyingActor->GetActorLabel() : TEXT("Unknown"));
        return false;
    }
    

    OutReason = TEXT("Cell is valid");
    return true;
}

bool UMovementValidatorComponent::ValidateBasicRequirements(FIntPoint FromPos, FIntPoint ToPos, FString& OutReason)
{
    if (!GridManager)
    {
        OutReason = TEXT("No GridManager");
        return false;
    }

    if (FromPos == ToPos)
    {
        OutReason = TEXT("Already at target position");
        return false;
    }

    return true;
}

bool UMovementValidatorComponent::ValidateTurnAndAP(int32 RequiredAP, FString& OutReason)
{
    if (!TurnSystemComponent)
    {
        OutReason = TEXT("No TurnSystemComponent");
        return false;
    }

    if (bCheckTurn && !TurnSystemComponent->IsMyTurn())
    {
        OutReason = TEXT("Not your turn");
        return false;
    }

    if (bCheckActionPoints && !TurnSystemComponent->CanPerformAction(RequiredAP))
    {
        OutReason = FString::Printf(TEXT("Not enough AP (Need: %d, Have: %d)"),
            RequiredAP, TurnSystemComponent->GetCurrentActionPoints());
        return false;
    }

    return true;
}

bool UMovementValidatorComponent::ValidateDestination(FIntPoint ToPos, FString& OutReason)
{
    return ValidateGridCell(ToPos, OutReason);
}

bool UMovementValidatorComponent::ValidatePath(FIntPoint FromPos, FIntPoint ToPos, TArray<FIntPoint>& OutPath, FString& OutReason)
{
    if (!PathfindingComponent)
    {
        // 沒有尋路組件，使用簡單路徑
        OutPath.Add(FromPos);
        OutPath.Add(ToPos);
        return true;
    }

    OutPath = PathfindingComponent->FindPath(FromPos, ToPos);
    if (OutPath.Num() == 0)
    {
        OutReason = TEXT("No valid path found");
        return false;
    }

    return true;
}

void UMovementValidatorComponent::AddValidationRule(TScriptInterface<IMovementRule> Rule)
{
    if (Rule.GetInterface())
    {
        ValidationRules.Add(Rule);
    }
}


