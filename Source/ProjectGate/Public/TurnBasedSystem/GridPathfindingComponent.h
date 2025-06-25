// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GridPathfindingComponent.generated.h"

class AGridManager;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UGridPathfindingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGridPathfindingComponent();

	//初始化
	UFUNCTION(BlueprintCallable,Category = "Pathfinding")
	void InitializeGrid(AGridManager* InGridManager);

	//尋找路徑
	UFUNCTION(BlueprintCallable,Category = "Pathfingding")
	TArray<FIntPoint> FindPath(FIntPoint StartPos, FIntPoint EndPos);

	//計算路徑成本
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	int32 CalculatePathCost(const TArray<FIntPoint>& Path)const;


protected:

	UPROPERTY()
	AGridManager* GridManager;


public:	

	//A*尋路節點
	struct FPathNode
	{
		FIntPoint Position;
		float GCost; // 從起點到當前節點的成本
		float HCost; // 從當前節點到終點的估計成本
		float FCost() const { return GCost + HCost; }
		FPathNode* Parent;

		FPathNode()
		{
			Position = FIntPoint(0,0);
			GCost = 0.0f;
			HCost = 0.0f;
			Parent = nullptr;
		}


	};

	//計算曼哈頓距離
	float CalculateHeuristic(FIntPoint From, FIntPoint To)const;

	//重建路徑
	TArray<FIntPoint>ReconstructPath(FPathNode* EndNode)const;

};
