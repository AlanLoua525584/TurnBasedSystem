// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/GridManager.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/StaticMesh.h"
#include "Public/DebugHelper.h"
#include "Components/DecalComponent.h"
#include "Materials/Material.h"

// Sets default values
AGridManager::AGridManager()
{
	PrimaryActorTick.bCanEverTick = false;

	//創建根組件// Fill out your copyright notice in the Description page of Project Settings.


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	//創建網格視覺化組件
	GridMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("GridMeshComponent"));
	GridMeshComponent->SetupAttachment(RootComponent);
	GridMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//創建高亮組件 - 用於顯示移動範圍
	HighlightMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("HighlightMeshComponent"));
	HighlightMeshComponent->SetupAttachment(RootComponent);
	HighlightMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//創建路徑高亮組件
	PathMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("PathMeshComponent"));
	PathMeshComponent->SetupAttachment(RootComponent);
	PathMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//創建滑鼠懸停高亮組件
	HoverMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("HoverMeshComponent"));
	HoverMeshComponent->SetupAttachment(RootComponent);
	HoverMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 創建視覺組件
	VisualComponent = CreateDefaultSubobject<UGridVisualComponent>(TEXT("VisualComponent"));

}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();
	
	GenerateGrid();
	CreateGridVisualization();

	Debug::Print(FString::Printf(TEXT("Grid Generated: %d x %d"), GridSizeX, GridSizeY), FColor::Green);

	//visual component初始化

	if (VisualComponent)
	{
		VisualComponent->Initialize(this);
		Debug::Print(TEXT("GridManager: VisualComponent initialized"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("ERROR: GridManager has no VisualComponent!"), FColor::Red);
	}
	

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

	//設定所有組件的Mesh
	GridMeshComponent->SetStaticMesh(PlaneMesh);
	HighlightMeshComponent->SetStaticMesh(PlaneMesh);
	PathMeshComponent->SetStaticMesh(PlaneMesh);
	HoverMeshComponent->SetStaticMesh(PlaneMesh);

	//創建網格材質
	CreateGridMaterials();

	//創建網格實例
	for (const FGridCell& Cell : GridCells)
	{
		FTransform CellTransform;
		CellTransform.SetLocation(Cell.WorldLocation);
		CellTransform.SetScale3D(FVector(CellSize / 100.0f*0.95f)); // // 稍微縮小避免重疊

		//根據格子類型設置不同高度
		if (Cell.GridType == EGridType::Blocked)
		{
			CellTransform.SetLocation(Cell.WorldLocation + FVector(0, 0, 25)); // 提升高度
		}

		int32 InstanceIndex = GridMeshComponent->AddInstance(CellTransform);

		// 根據格子類型設置不同顏色
		if (GridMaterialInstance)
		{
			FLinearColor CellColor = GetGridTypeColor(Cell.GridType);
			GridMeshComponent->SetCustomDataValue(InstanceIndex, 0, CellColor.R);
			GridMeshComponent->SetCustomDataValue(InstanceIndex, 1, CellColor.G);
			GridMeshComponent->SetCustomDataValue(InstanceIndex, 2, CellColor.B);
		}

	}

}

void AGridManager::CreateGridMaterials()
{
	//載入基礎材質
	UMaterialInterface* BaseMaterial = LoadObject<UMaterialInterface>(nullptr,
		TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));

	if (BaseMaterial)
	{
		//網格材質
		GridMaterialInstance = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		GridMaterialInstance->SetVectorParameterValue("Color", FLinearColor(0.3f, 0.3f, 0.3f, 1.0f)); 
		GridMeshComponent->SetMaterial(0, GridMaterialInstance);

		//移動範圍高亮材質 -半透明綠色
		HighlightMaterialInstance = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		HighlightMaterialInstance->SetVectorParameterValue("Color", FLinearColor(0.0f, 1.0f, 0.0f, 0.5f)); // 半透明綠色
		HighlightMaterialInstance->SetScalarParameterValue("Opacity", 0.5f);
		HighlightMeshComponent->SetMaterial(0, HighlightMaterialInstance);

		//路徑高亮材質 -半透明藍色
		PathMaterialInstance = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		PathMaterialInstance->SetVectorParameterValue("Color", FLinearColor(0.0f, 0.0f, 1.0f, 0.5f)); // 半透明藍色
		PathMaterialInstance->SetScalarParameterValue("Opacity", 0.5f);
		PathMeshComponent->SetMaterial(0, PathMaterialInstance);

		//滑鼠懸停高亮材質 -半透明黃色
		HoverMaterialInstance = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		HoverMaterialInstance->SetVectorParameterValue("Color", FLinearColor(1.0f, 1.0f, 0.0f, 0.5f)); // 半透明黃色
		HoverMaterialInstance->SetScalarParameterValue("Opacity", 0.5f);
		HoverMeshComponent->SetMaterial(0, HoverMaterialInstance);
	}
}

void AGridManager::ShowMovementRange(FIntPoint CenterCoord, int32 Range)
{


	TArray<FIntPoint>ReachableCells = GetMovementRange(CenterCoord, Range);
	Debug::Print(FString::Printf(TEXT("Calculated %d reachable cells"), ReachableCells.Num()), FColor::Green);


}

void AGridManager::ShowHoverCell(FIntPoint GridCoord)
{
	//清除之前的懸停高亮
	HoverMeshComponent->ClearInstances();

	if (!IsValidGridPosition(GridCoord))
		return;

	FVector WorldPos = GridToWorld(GridCoord);
	FTransform HoverTransform;
	HoverTransform.SetLocation(WorldPos + FVector(0, 0, 7)); //稍微提升高度
	HoverTransform.SetScale3D(FVector(CellSize / 100.0f * 0.85f)); // 稍微縮小避免重疊

	HoverMeshComponent->AddInstance(HoverTransform);

}


void AGridManager::HighlightPath(const TArray<FIntPoint>& Path)
{
	//清除之前的路徑高亮
	PathMeshComponent->ClearInstances();

	for (int32 i = 0;i < Path.Num(); i++)
	{
		FVector WorldPos = GridToWorld(Path[i]);
		FTransform PathTransform;
		PathTransform.SetLocation(WorldPos + FVector(0, 0, 6)); //介於網格和懸停之間

		//路徑上的格子大小遞減
		float Scale = FMath::GetMappedRangeValueClamped(
			FVector2D(0, Path.Num() - 1), FVector2D(0.8f, 0.6f), i
		);
		PathTransform.SetScale3D(FVector(CellSize / 100.0f * Scale)); // 稍微縮小避免重疊
		int32 InstanceIndex = PathMeshComponent->AddInstance(PathTransform);

		//設定路徑顏色漸變
		if (PathMaterialInstance)
		{
			float ColorIntensity = FMath::GetMappedRangeValueClamped(
				FVector2D(0, Path.Num() - 1), 
				FVector2D(0.5f, 1.0f),
				i
			);
			PathMeshComponent->SetCustomDataValue(InstanceIndex, 0, ColorIntensity);
		}
	}
}

void AGridManager::ClearHighlights()
{
	HighlightMeshComponent->ClearInstances();
	PathMeshComponent->ClearInstances();
}

void AGridManager::ClearAllVisuals()
{
	ClearHighlights();
	HoverMeshComponent->ClearInstances();
}


FLinearColor AGridManager::GetGridTypeColor(EGridType GridType) const
{
	return FLinearColor();
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



void AGridManager::AnimateHighlight(float DeltaTime)
{
	if (!HighlightMaterialInstance)
		return;

	//創建脈動效果
	float PulseValue = (FMath::Sin(GetWorld()->GetTimeSeconds() * 2.0f) + 1.0f) * 0.5f;
	float Alpha = FMath::Lerp(0.3f, 0.6f, PulseValue);

	HighlightMaterialInstance->SetScalarParameterValue("Opacity", Alpha);

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













