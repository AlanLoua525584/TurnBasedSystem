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

	//�Ыخڲե�// Fill out your copyright notice in the Description page of Project Settings.


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	//�Ыغ����ı�Ʋե�
	GridMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("GridMeshComponent"));
	GridMeshComponent->SetupAttachment(RootComponent);
	GridMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//�Ыذ��G�ե� - �Ω���ܲ��ʽd��
	HighlightMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("HighlightMeshComponent"));
	HighlightMeshComponent->SetupAttachment(RootComponent);
	HighlightMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//�Ыظ��|���G�ե�
	PathMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("PathMeshComponent"));
	PathMeshComponent->SetupAttachment(RootComponent);
	PathMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//�Ыطƹ��a�����G�ե�
	HoverMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("HoverMeshComponent"));
	HoverMeshComponent->SetupAttachment(RootComponent);
	HoverMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// �Ыص�ı�ե�
	VisualComponent = CreateDefaultSubobject<UGridVisualComponent>(TEXT("VisualComponent"));

}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();
	
	GenerateGrid();
	CreateGridVisualization();

	Debug::Print(FString::Printf(TEXT("Grid Generated: %d x %d"), GridSizeX, GridSizeY), FColor::Green);

	//visual component��l��

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

	//�]�w�Ҧ��ե�Mesh
	GridMeshComponent->SetStaticMesh(PlaneMesh);
	HighlightMeshComponent->SetStaticMesh(PlaneMesh);
	PathMeshComponent->SetStaticMesh(PlaneMesh);
	HoverMeshComponent->SetStaticMesh(PlaneMesh);

	//�Ыغ������
	CreateGridMaterials();

	//�Ыغ�����
	for (const FGridCell& Cell : GridCells)
	{
		FTransform CellTransform;
		CellTransform.SetLocation(Cell.WorldLocation);
		CellTransform.SetScale3D(FVector(CellSize / 100.0f*0.95f)); // // �y�L�Y�p�קK���|

		//�ھڮ�l�����]�m���P����
		if (Cell.GridType == EGridType::Blocked)
		{
			CellTransform.SetLocation(Cell.WorldLocation + FVector(0, 0, 25)); // ���ɰ���
		}

		int32 InstanceIndex = GridMeshComponent->AddInstance(CellTransform);

		// �ھڮ�l�����]�m���P�C��
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
	//���J��¦����
	UMaterialInterface* BaseMaterial = LoadObject<UMaterialInterface>(nullptr,
		TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));

	if (BaseMaterial)
	{
		//�������
		GridMaterialInstance = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		GridMaterialInstance->SetVectorParameterValue("Color", FLinearColor(0.3f, 0.3f, 0.3f, 1.0f)); 
		GridMeshComponent->SetMaterial(0, GridMaterialInstance);

		//���ʽd�򰪫G���� -�b�z�����
		HighlightMaterialInstance = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		HighlightMaterialInstance->SetVectorParameterValue("Color", FLinearColor(0.0f, 1.0f, 0.0f, 0.5f)); // �b�z�����
		HighlightMaterialInstance->SetScalarParameterValue("Opacity", 0.5f);
		HighlightMeshComponent->SetMaterial(0, HighlightMaterialInstance);

		//���|���G���� -�b�z���Ŧ�
		PathMaterialInstance = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		PathMaterialInstance->SetVectorParameterValue("Color", FLinearColor(0.0f, 0.0f, 1.0f, 0.5f)); // �b�z���Ŧ�
		PathMaterialInstance->SetScalarParameterValue("Opacity", 0.5f);
		PathMeshComponent->SetMaterial(0, PathMaterialInstance);

		//�ƹ��a�����G���� -�b�z������
		HoverMaterialInstance = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		HoverMaterialInstance->SetVectorParameterValue("Color", FLinearColor(1.0f, 1.0f, 0.0f, 0.5f)); // �b�z������
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
	//�M�����e���a�����G
	HoverMeshComponent->ClearInstances();

	if (!IsValidGridPosition(GridCoord))
		return;

	FVector WorldPos = GridToWorld(GridCoord);
	FTransform HoverTransform;
	HoverTransform.SetLocation(WorldPos + FVector(0, 0, 7)); //�y�L���ɰ���
	HoverTransform.SetScale3D(FVector(CellSize / 100.0f * 0.85f)); // �y�L�Y�p�קK���|

	HoverMeshComponent->AddInstance(HoverTransform);

}


void AGridManager::HighlightPath(const TArray<FIntPoint>& Path)
{
	//�M�����e�����|���G
	PathMeshComponent->ClearInstances();

	for (int32 i = 0;i < Path.Num(); i++)
	{
		FVector WorldPos = GridToWorld(Path[i]);
		FTransform PathTransform;
		PathTransform.SetLocation(WorldPos + FVector(0, 0, 6)); //�������M�a������

		//���|�W����l�j�p����
		float Scale = FMath::GetMappedRangeValueClamped(
			FVector2D(0, Path.Num() - 1), FVector2D(0.8f, 0.6f), i
		);
		PathTransform.SetScale3D(FVector(CellSize / 100.0f * Scale)); // �y�L�Y�p�קK���|
		int32 InstanceIndex = PathMeshComponent->AddInstance(PathTransform);

		//�]�w���|�C�⺥��
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



void AGridManager::AnimateHighlight(float DeltaTime)
{
	if (!HighlightMaterialInstance)
		return;

	//�Ыد߰ʮĪG
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













