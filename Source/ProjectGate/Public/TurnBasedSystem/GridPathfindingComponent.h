// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GridPathfindingComponent.generated.h"

class AGridManager;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTGATE_API UGridPathfindingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGridPathfindingComponent();

	// Initialize
	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
	void InitializeGrid(AGridManager* InGridManager);

	// Find path
	UFUNCTION(BlueprintCallable, Category = "Pathfingding")
	TArray<FIntPoint> FindPath(FIntPoint StartPos, FIntPoint EndPos);

	// Calculate path cost
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	int32 CalculatePathCost(const TArray<FIntPoint>& Path)const;


protected:

	UPROPERTY()
	AGridManager* GridManager;


public:

	// A* pathfinding node
	struct FPathNode
	{
		FIntPoint Position;
		float GCost; // Cost from start to current node
		float HCost; // Heuristic cost from current node to end
		float FCost() const { return GCost + HCost; }
		FPathNode* Parent;

		FPathNode()
		{
			Position = FIntPoint(0, 0);
			GCost = 0.0f;
			HCost = 0.0f;
			Parent = nullptr;
		}


	};

	// Calculate Manhattan distance
	float CalculateHeuristic(FIntPoint From, FIntPoint To)const;

	// Reconstruct path
	TArray<FIntPoint>ReconstructPath(FPathNode* EndNode)const;

};