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

	// A* ��k��{
	TMap<FIntPoint, FPathNode>AllNodes;
	TArray<FIntPoint>OpenSet;
	TSet<FIntPoint>ClosedSet; 

	//��l�ư_�I
	FPathNode& StartNode = AllNodes.Add(StartPos);
	StartNode.Position = StartPos;
	StartNode.GCost = 0.0f;
	StartNode.HCost = CalculateHeuristic(StartPos, EndPos);
	OpenSet.Add(StartPos);

	//��V�Ʋ�
	const TArray<FIntPoint>Directions = {
		 FIntPoint(0, 1),   // �W
		FIntPoint(0, -1),  // �U
		FIntPoint(1, 0),   // �k
		FIntPoint(-1, 0),  // ��
	};

	while(OpenSet.Num() > 0)
	{
		//���F�ȳ̤p���`�I
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

		//�p�G��F���I
		if (CurrentPos == EndPos)
		{
			Path = ReconstructPath(&AllNodes[CurrentPos]);
			return Path;
		}

		//�q�}��C���������C��
		OpenSet.Remove(CurrentPos);
		ClosedSet.Add(CurrentPos);

		//�ˬd�Ҧ��F�~
		for (const FIntPoint& Direction : Directions)
		{
			FIntPoint NeighborPos = CurrentPos + Direction;

			//�ˬd�O�_����
			if (!GridManager->IsValidGridPosition(NeighborPos))
				continue;

			//�ˬd�O�_�w�b�����C��
			if (ClosedSet.Contains(NeighborPos))
				continue;

			//�ˬd�O�_�i�q�L
			FGridCell Cell;
			GridManager->GetGridCell(NeighborPos, Cell);
			if (Cell.GridType == EGridType::Blocked || Cell.bIsOccupied)
				continue;

			//�p��G��
			float NewGCost = AllNodes[CurrentPos].GCost + Cell.MovementCost;

			//�p�G���b�}��C�� �Ϊ̧���n�����|
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


	//�S�������|
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
	//�ϥΰҫ��y�Z��

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






