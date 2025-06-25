// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/GridManager.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/StaticMesh.h"
#include "Public/DebugHelper.h"

// Sets default values
AGridManager::AGridManager()
{
	PrimaryActorTick.bCanEverTick = false;

	//�Ыخڲե�// Fill out your copyright notice in the Description page of Project Settings.


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	//�Ыغ����ı�Ʋե�
	GridMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("GridMeshComponent"));
	GridMeshComponent->SetupAttachment(RootComponent);

	//�Ыذ��G�ե�
	HighlightMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("HighlightMeshComponent"));
	HighlightMeshComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();
	
	GenerateGrid();
	CreateGridVisualization();

	Debug::Print(FString::Printf(TEXT("Grid Generated: %d x %d"), GridSizeX, GridSizeY), FColor::Green);


}

void AGridManager::GenerateGrid()
{
	//�M�Ų{������
	GridCells.Empty();
	Grid2D.Empty();

	//��l��2D�Ʋ�
	Grid2D.SetNum(GridSizeX);
	for (int32 x = 0; x < GridSizeX; x++)
	{
		Grid2D[x].SetNum(GridSizeY);
	}

	//�ͦ�����ƾ�
	for (int32 x = 0; x < GridSizeX; x++)
	{
		for (int32 y = 0; y < GridSizeY; y++)
		{
			FGridCell NewCell;
			NewCell.GridCoordinate = FIntPoint(x, y);
			NewCell.WorldLocation = GridToWorld(NewCell.GridCoordinate);

			//�H���]�m��ê��(���ե�)
			if (FMath::RandRange(0, 100) < 10)//10%���v
			{
				NewCell.GridType = EGridType::Blocked;
			}

			Grid2D[x][y] = NewCell;
			GridCells.Add(NewCell);

		}
	}

}

void AGridManager::CreateGridVisualization()
{
	//���J��¦����Mesh

	UStaticMesh* PlaneMesh = LoadObject<UStaticMesh>(nullptr, 
		TEXT("/Engine/BasicShapes/Plane.Plane"));

	if (!PlaneMesh)return;

	GridMeshComponent->SetStaticMesh(PlaneMesh);

	//�]�m�������
	
	UMaterialInterface* GridMaterial = LoadObject<UMaterialInterface>(nullptr,
		TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));

	
	if (GridMaterial)
	{
		UMaterialInstanceDynamic* GridMat = UMaterialInstanceDynamic::Create(GridMaterial, this);
		GridMat->SetVectorParameterValue("Color", FLinearColor(0.5f, 0.5f, 0.5f, 0.5f));
		GridMeshComponent->SetMaterial(0, GridMat);
	
	}

	//�Ыغ�����
	for (const FGridCell& Cell : GridCells)
	{
		FTransform CellTransform;
		CellTransform.SetLocation(Cell.WorldLocation);
		CellTransform.SetScale3D(FVector(CellSize / 100.0f));// Plane �w�]�j�p�O 100

		//�ھڮ�l�����]�m���P���ש��C��
		if (Cell.GridType == EGridType::Blocked)
		{
			CellTransform.SetLocation(Cell.WorldLocation + FVector(0, 0, 10));
		}

		GridMeshComponent->AddInstance(CellTransform);
	}

}

FVector AGridManager::GridToWorld(FIntPoint GridCoord) const
{
	float X = GridCoord.X * CellSize + CellSize / 2.0f;
	float Y = GridCoord.Y * CellSize + CellSize / 2.0f;
	return GetActorLocation()+ FVector(X,Y,0);
}

FIntPoint AGridManager::WorldToGrid(FVector WorldLocation) const
{
	FVector RelativeLocation = WorldLocation - GetActorLocation();
	int32 X = FMath::FloorToInt(RelativeLocation.X/CellSize);
	int32 Y = FMath::FloorToInt(RelativeLocation.Y/CellSize);

	return FIntPoint(X,Y);
}

bool AGridManager::GetGridCell(FIntPoint GridCoord, FGridCell& OutCell) const
{
	if(!IsValidGridPosition(GridCoord))
	return false;

	OutCell = Grid2D[GridCoord.X][GridCoord.Y];
	return true;
}



bool AGridManager::IsValidGridPosition(FIntPoint GridCoord) const
{

	return GridCoord.X >= 0 && GridCoord.X < GridSizeX &&
		   GridCoord.Y >= 0 && GridCoord.Y < GridSizeY;
}

TArray<FIntPoint> AGridManager::GetMovementRange(FIntPoint StartCoord, int32 MovePoints) const
{
	TArray<FIntPoint>ReachableCells;
	TArray<FIntPoint>ToCheck;
	TMap<FIntPoint, int32 >CostMap;

	//�_�l�I
	ToCheck.Add(StartCoord);
	CostMap.Add(StartCoord, 0);

	//��V:�W�U���k
	const TArray<FIntPoint>Directions = {
		FIntPoint(0,1), //�W
		FIntPoint(0,-1),//�U
		FIntPoint(1,0),//�k
		FIntPoint(-1,0),//��

	};
	

	//BF �j��
	while (ToCheck.Num() > 0)
	{
		FIntPoint Current = ToCheck[0];
		ToCheck.RemoveAt(0);

		int32 CurrentCost = CostMap[Current];

		//�ˬd�|�Ӥ�V
		for (const FIntPoint& Dir : Directions)
		{
			FIntPoint NextCoord = Current + Dir;

			//�ˬd�O�_����
			if (!IsValidGridPosition(NextCoord))
				continue;

			FGridCell Cell;
			GetGridCell(NextCoord, Cell);

			//�ˬd�O�_�i�H�q�L
			if (Cell.GridType == EGridType::Blocked || Cell.bIsOccupied)
				continue;

			int32 NewCost = CurrentCost + Cell.MovementCost;

			//�ˬd�����I��
			if (NewCost > MovePoints)
				continue;

			//�p�G����n�����|�βĤ@���X��
			if (!CostMap.Contains(NextCoord) || CostMap[NextCoord] > NewCost)
			{
				CostMap.Add(NextCoord, NewCost);
				ToCheck.Add(NextCoord);

				if (!ReachableCells.Contains(NextCoord))
				{
					ReachableCells.Add(NextCoord);
				}
			}



		}
	}

	return ReachableCells;
}

void AGridManager::ShowMovementRange(FIntPoint CenterCoord, int32 Range)
{

	ClearHighlights();

	TArray<FIntPoint>ReachableCells = GetMovementRange(CenterCoord, Range);

	//���J���G mesh
	UStaticMesh* HighlightMesh = LoadObject<UStaticMesh>(nullptr,
		TEXT("/Engine/BasicShapes/Plane.Plane"));

	if (!HighlightMesh) return;

	HighlightMeshComponent->SetStaticMesh(HighlightMesh);

	//�Ыذ��G����
	UMaterialInterface* HighlightMaterial = LoadObject<UMaterialInterface>(nullptr,
		TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));

	if(HighlightMaterial)
		{
		UMaterialInstanceDynamic* HighlightMat = UMaterialInstanceDynamic::Create(HighlightMaterial, this);
		HighlightMat->SetVectorParameterValue("Color", FLinearColor(0, 1, 0, 0.5f)); // �b�z�����
		HighlightMeshComponent->SetMaterial(0, HighlightMat);
		}


	//���C�ӥi��F����l�Ыذ��G
	for (const FIntPoint& Coord : ReachableCells)
	{
		FVector WorldPos = GridToWorld(Coord);
		FTransform HighlightTransform;
		HighlightTransform.SetLocation(WorldPos + FVector(0, 0, 5)); // �y�L�ﰪ
		HighlightTransform.SetScale3D(FVector(CellSize / 100.0f * 0.9f)); // �y�L�p�@�I

		HighlightMeshComponent->AddInstance(HighlightTransform);
	}

}

void AGridManager::ClearHighlights()
{
	HighlightMeshComponent->ClearInstances();

}

bool AGridManager::SetCellOccupied(FIntPoint GridCoord, AActor* Occupant)
{
	if(!IsValidGridPosition(GridCoord))
	return false;

	Grid2D[GridCoord.X][GridCoord.Y].bIsOccupied = true;
	Grid2D[GridCoord.X][GridCoord.Y].OccupyingActor = Occupant;

	return true;
}

bool AGridManager::ClearCellOccupation(FIntPoint GridCoord)
{
	if(!IsValidGridPosition(GridCoord))
	return false;

	Grid2D[GridCoord.X][GridCoord.Y].bIsOccupied = false;
	Grid2D[GridCoord.X][GridCoord.Y].OccupyingActor = nullptr;

	return true;

}

// �����Ӥk�Z�����t�ηǳƪ����

float AGridManager::GetMovementCostBetween(FVector StartPos, FVector EndPos) const
{

	//���ӥi�H�ھڦa�έp���ڲ��ʦ���
	return FVector::Dist(StartPos, EndPos) / CellSize;
}

bool AGridManager::CanMoveThrough(FVector Position) const
{
	FIntPoint GridPos = WorldToGrid(Position);
	FGridCell Cell;

	if (GetGridCell(GridPos, Cell))
	{
		return Cell.GridType != EGridType::Blocked && !Cell.bIsOccupied;
	}

	return false;
}



TArray<FIntPoint> AGridManager::GetPath(FIntPoint StarCoord, FIntPoint EndCoord) const
{


	return TArray<FIntPoint>();
}

int32 AGridManager::GetPathCost(const TArray<FIntPoint>& Path) const
{
	return int32();
}








void AGridManager::HighlightPath(const TArray<FIntPoint>& Path)
{
}





