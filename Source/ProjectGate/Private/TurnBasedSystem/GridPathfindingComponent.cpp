// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/GridPathfindingComponent.h"
#include "TurnBasedSystem/GridManager.h"


// Sets default values for this component's properties
UGridPathfindingComponent::UGridPathfindingComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

}

void UGridPathfindingComponent::InitializeGrid(AGridManager* InGridManager)
{
	GridManager = InGridManager;
}

TArray<FIntPoint> UGridPathfindingComponent::FindPath(FIntPoint StartPos, FIntPoint EndPos)
{
	TArray<FIntPoint>Path;

	if (!GridManager || !GridManager->IsValidGridPosition(StartPos) || !GridManager->IsValidGridPosition(EndPos))
	{
		return Path;
	}

	// A* 算法實現
	TMap<FIntPoint, FPathNode>AllNodes;
	TArray<FIntPoint>OpenSet;
	TSet<FIntPoint>ClosedSet; 

	//初始化起點
	FPathNode& StartNode = AllNodes.Add(StartPos);
	StartNode.Position = StartPos;
	StartNode.GCost = 0.0f;
	StartNode.HCost = CalculateHeuristic(StartPos, EndPos);
	OpenSet.Add(StartPos);

	//方向數組
	const TArray<FIntPoint>Directions = {
		 FIntPoint(0, 1),   // 上
		FIntPoint(0, -1),  // 下
		FIntPoint(1, 0),   // 右
		FIntPoint(-1, 0),  // 左
	};

	while(OpenSet.Num() > 0)
	{
		//找到F值最小的節點
		FIntPoint CurrentPos = OpenSet[0];
		float LowestFCost = AllNodes[CurrentPos].FCost();

		for (int32 i = 1; i < OpenSet.Num(); i++)
		{
			float FCost = AllNodes[OpenSet[i]].FCost();
			if (FCost < LowestFCost)
			{
				CurrentPos = OpenSet[i];
				LowestFCost = FCost;
			}
		}

		//如果到達終點
		if (CurrentPos == EndPos)
		{
			Path = ReconstructPath(&AllNodes[CurrentPos]);
			return Path;
		}

		//從開放列表移到關閉列表
		OpenSet.Remove(CurrentPos);
		ClosedSet.Add(CurrentPos);

		//檢查所有鄰居
		for (const FIntPoint& Direction : Directions)
		{
			FIntPoint NeighborPos = CurrentPos + Direction;

			//檢查是否有效
			if (!GridManager->IsValidGridPosition(NeighborPos))
				continue;

			//檢查是否已在關閉列表
			if (ClosedSet.Contains(NeighborPos))
				continue;

			//檢查是否可通過
			FGridCell Cell;
			GridManager->GetGridCell(NeighborPos, Cell);
			if (Cell.GridType == EGridType::Blocked || Cell.bIsOccupied)
				continue;

			//計算G值
			float NewGCost = AllNodes[CurrentPos].GCost + Cell.MovementCost;

			//如果不在開放列表 或者找到更好的路徑
			if (!OpenSet.Contains(NeighborPos) || NewGCost < AllNodes[NeighborPos].GCost)
			{
				FPathNode& NeighborNode = AllNodes.Add(NeighborPos);
				NeighborNode.Position = NeighborPos;
				NeighborNode.GCost = NewGCost;
				NeighborNode.HCost = CalculateHeuristic(NeighborPos, EndPos);
				NeighborNode.Parent = &AllNodes[CurrentPos]; 

				if (!OpenSet.Contains(NeighborPos))
				{
					OpenSet.Add(NeighborPos);
				}
			}


		}

	}


	//沒有找到路徑
	return Path;
}

int32 UGridPathfindingComponent::CalculatePathCost(const TArray<FIntPoint>& Path) const
{
	int32 TotalCost = 0;
	if (!GridManager)
		return TotalCost;

	for (int32 i = 0; i < Path.Num(); i++)
	{
		FGridCell Cell;
		if (GridManager->GetGridCell(Path[i], Cell))
		{
			TotalCost += Cell.MovementCost;
		}
	}



	return TotalCost;
}

float UGridPathfindingComponent::CalculateHeuristic(FIntPoint From, FIntPoint To) const
{
	//使用曼哈頓距離

	return FMath::Abs(From.X - To.X) + FMath::Abs(From.Y - To.Y);
}

TArray<FIntPoint> UGridPathfindingComponent::ReconstructPath(FPathNode* EndNode) const
{
	TArray<FIntPoint> Path;

	FPathNode* CurrentNode = EndNode;
	while (CurrentNode != nullptr)
	{
		Path.Insert(CurrentNode->Position, 0);
		CurrentNode = CurrentNode->Parent;
	}

	return Path;
}






