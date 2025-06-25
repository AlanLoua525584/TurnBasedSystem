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

	//創建根組件// Fill out your copyright notice in the Description page of Project Settings.


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	//創建網格視覺化組件
	GridMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("GridMeshComponent"));
	GridMeshComponent->SetupAttachment(RootComponent);

	//創建高亮組件
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
	//清空現有網格
	GridCells.Empty();
	Grid2D.Empty();

	//初始化2D數組
	Grid2D.SetNum(GridSizeX);
	for (int32 x = 0; x < GridSizeX; x++)
	{
		Grid2D[x].SetNum(GridSizeY);
	}

	//生成網格數據
	for (int32 x = 0; x < GridSizeX; x++)
	{
		for (int32 y = 0; y < GridSizeY; y++)
		{
			FGridCell NewCell;
			NewCell.GridCoordinate = FIntPoint(x, y);
			NewCell.WorldLocation = GridToWorld(NewCell.GridCoordinate);

			//隨機設置障礙物(測試用)
			if (FMath::RandRange(0, 100) < 10)//10%機率
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
	//載入基礎網格Mesh

	UStaticMesh* PlaneMesh = LoadObject<UStaticMesh>(nullptr, 
		TEXT("/Engine/BasicShapes/Plane.Plane"));

	if (!PlaneMesh)return;

	GridMeshComponent->SetStaticMesh(PlaneMesh);

	//設置網格材質
	
	UMaterialInterface* GridMaterial = LoadObject<UMaterialInterface>(nullptr,
		TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));

	
	if (GridMaterial)
	{
		UMaterialInstanceDynamic* GridMat = UMaterialInstanceDynamic::Create(GridMaterial, this);
		GridMat->SetVectorParameterValue("Color", FLinearColor(0.5f, 0.5f, 0.5f, 0.5f));
		GridMeshComponent->SetMaterial(0, GridMat);
	
	}

	//創建網格實例
	for (const FGridCell& Cell : GridCells)
	{
		FTransform CellTransform;
		CellTransform.SetLocation(Cell.WorldLocation);
		CellTransform.SetScale3D(FVector(CellSize / 100.0f));// Plane 預設大小是 100

		//根據格子類型設置不同高度或顏色
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

	//起始點
	ToCheck.Add(StartCoord);
	CostMap.Add(StartCoord, 0);

	//方向:上下左右
	const TArray<FIntPoint>Directions = {
		FIntPoint(0,1), //上
		FIntPoint(0,-1),//下
		FIntPoint(1,0),//右
		FIntPoint(-1,0),//左

	};
	

	//BF 搜索
	while (ToCheck.Num() > 0)
	{
		FIntPoint Current = ToCheck[0];
		ToCheck.RemoveAt(0);

		int32 CurrentCost = CostMap[Current];

		//檢查四個方向
		for (const FIntPoint& Dir : Directions)
		{
			FIntPoint NextCoord = Current + Dir;

			//檢查是否有效
			if (!IsValidGridPosition(NextCoord))
				continue;

			FGridCell Cell;
			GetGridCell(NextCoord, Cell);

			//檢查是否可以通過
			if (Cell.GridType == EGridType::Blocked || Cell.bIsOccupied)
				continue;

			int32 NewCost = CurrentCost + Cell.MovementCost;

			//檢查移動點數
			if (NewCost > MovePoints)
				continue;

			//如果找到更好的路徑或第一次訪問
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

	//載入高亮 mesh
	UStaticMesh* HighlightMesh = LoadObject<UStaticMesh>(nullptr,
		TEXT("/Engine/BasicShapes/Plane.Plane"));

	if (!HighlightMesh) return;

	HighlightMeshComponent->SetStaticMesh(HighlightMesh);

	//創建高亮材質
	UMaterialInterface* HighlightMaterial = LoadObject<UMaterialInterface>(nullptr,
		TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));

	if(HighlightMaterial)
		{
		UMaterialInstanceDynamic* HighlightMat = UMaterialInstanceDynamic::Create(HighlightMaterial, this);
		HighlightMat->SetVectorParameterValue("Color", FLinearColor(0, 1, 0, 0.5f)); // 半透明綠色
		HighlightMeshComponent->SetMaterial(0, HighlightMat);
		}


	//為每個可到達的格子創建高亮
	for (const FIntPoint& Coord : ReachableCells)
	{
		FVector WorldPos = GridToWorld(Coord);
		FTransform HighlightTransform;
		HighlightTransform.SetLocation(WorldPos + FVector(0, 0, 5)); // 稍微抬高
		HighlightTransform.SetScale3D(FVector(CellSize / 100.0f * 0.9f)); // 稍微小一點

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

// 為未來女武神式系統準備的函數

float AGridManager::GetMovementCostBetween(FVector StartPos, FVector EndPos) const
{

	//未來可以根據地形計算實際移動成本
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





