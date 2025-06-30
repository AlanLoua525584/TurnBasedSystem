#include "TurnBasedSystem/GridVisualComponent.h"
#include "TurnBasedSystem/GridManager.h"
#include "Engine/StaticMesh.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Public/DebugHelper.h"

UGridVisualComponent::UGridVisualComponent()
{
    PrimaryComponentTick.bCanEverTick = false;

    // 初始化每個類型的設定
    FGridVisualSettings Default;

    Default = { FLinearColor(0, 1, 0, 0.5f), 5 }; // Movement
    VisualSettings.Add(EGridVisualType::MovementRange, Default);

    Default = { FLinearColor(1, 0, 0, 0.4f), 6 }; // Attack
    VisualSettings.Add(EGridVisualType::AttackRange, Default);

    Default = { FLinearColor(0, 0.5, 1, 0.5f), 7 }; // Path
    VisualSettings.Add(EGridVisualType::Path, Default);

    Default = { FLinearColor(1, 1, 0, 0.5f), 8 }; // Hover
    VisualSettings.Add(EGridVisualType::Hover, Default);

    Default = { FLinearColor(1, 1, 1, 0.5f), 9 }; // Selected
    VisualSettings.Add(EGridVisualType::Selected, Default);

    Default = { FLinearColor(1, 0.5, 0, 0.5f), 4 }; // Danger
    VisualSettings.Add(EGridVisualType::Danger, Default);
}

void UGridVisualComponent::BeginPlay()
{
    Super::BeginPlay();

    Debug::Print(TEXT("=== GridVisualComponent Ready ==="), FColor::Yellow);

    // 載入Mesh
    UStaticMesh* PlaneMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Plane.Plane"));
    if (!PlaneMesh)
    {
        Debug::Print(TEXT("ERROR:  Failed to load plane mesh"), FColor::Red);
        return;
    }



    // 創建每一種類型的 Instanced Mesh
    for (auto& Pair : VisualSettings)
    {
        EGridVisualType Type = Pair.Key;
        FString ComponentName = FString::Printf(TEXT("VisualMesh_%s"), *UEnum::GetValueAsString(Type));

        UInstancedStaticMeshComponent* NewComponent = NewObject<UInstancedStaticMeshComponent>(
            GetOwner(), UInstancedStaticMeshComponent::StaticClass(), *ComponentName);

        if (NewComponent)
        {
            NewComponent->RegisterComponentWithWorld(GetWorld());
            NewComponent->SetStaticMesh(PlaneMesh);
            NewComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            VisualMeshComponents.Add(Type, NewComponent);
        }
    }

    CreateMaterialInstances();
}

void UGridVisualComponent::Initialize(AGridManager* InGridManager)
{
    GridManager = InGridManager;
}

void UGridVisualComponent::CreateMaterialInstances()
{
    UMaterialInterface* GridMaterial = LoadObject<UMaterialInterface>(nullptr,
        TEXT("/Game/Materials/M_GridVisual.M_GridVisual"));

    Debug::Print(TEXT("/Game/Materials/M_GridVisual.M_GridVisual found"), FColor::Green);

    if (!GridMaterial)
    {
        Debug::Print(TEXT("ERROR: M_GridVisual not found!"), FColor::Red);
        return;
    }

    for (auto& Pair : VisualSettings)
    {
        EGridVisualType Type = Pair.Key;
        const FGridVisualSettings& Settings = Pair.Value;

        UMaterialInstanceDynamic* MatInstance = UMaterialInstanceDynamic::Create(GridMaterial, this);
        MatInstance->SetVectorParameterValue("BaseColor", Settings.Color);

        MaterialInstances.Add(Type, MatInstance);

        if (VisualMeshComponents.Contains(Type))
        {
            VisualMeshComponents[Type]->SetMaterial(0, MatInstance);
        }
    }
}

void UGridVisualComponent::UpdateVisualsForType(EGridVisualType Type)
{
    if (!GridManager || !ActiveVisuals.Contains(Type)) return;

    UInstancedStaticMeshComponent* MeshComp = VisualMeshComponents.FindRef(Type);
    if (!MeshComp) return;

    MeshComp->ClearInstances();

    const TArray<FIntPoint>& Cells = ActiveVisuals[Type];
    const FGridVisualSettings& Settings = VisualSettings[Type];

    float CellSize = GridManager->GetCellSize();
    float Scale = (CellSize / 100.0f) * 0.9f;

    for (const FIntPoint& Cell : Cells)
    {
        FVector WorldPos = GridManager->GridToWorld(Cell);

        FTransform InstanceTransform;
        InstanceTransform.SetLocation(WorldPos + FVector(0, 0, 20));
        InstanceTransform.SetScale3D(FVector(Scale));

        MeshComp->AddInstance(InstanceTransform);
        Debug::Print(TEXT("AddInstance called for Visual Type"), FColor::Green);
    }
}

void UGridVisualComponent::ShowMovementRange(FIntPoint Center, int32 Range)
{
    if (!GridManager) return;



    ClearVisualType(EGridVisualType::MovementRange);

    TArray<FIntPoint> Cells = GridManager->GetMovementRange(Center, Range);
    ActiveVisuals.Add(EGridVisualType::MovementRange, Cells);

    UpdateVisualsForType(EGridVisualType::MovementRange);
}

void UGridVisualComponent::ShowAttackRange(FIntPoint Center, float Range)
{
    if (!GridManager) return;

    ClearVisualType(EGridVisualType::AttackRange);

    TArray<FIntPoint> Cells;
    int32 GridRange = FMath::CeilToInt(Range / 100.0f);

    for (int32 x = -GridRange; x <= GridRange; ++x)
    {
        for (int32 y = -GridRange; y <= GridRange; ++y)
        {
            FIntPoint Pos = Center + FIntPoint(x, y);
            if (GridManager->IsValidGridPosition(Pos))
            {
                float Dist = FVector2D(x, y).Size();
                if (Dist <= GridRange)
                {
                    Cells.Add(Pos);
                }
            }
        }
    }

    ActiveVisuals.Add(EGridVisualType::AttackRange, Cells);
    UpdateVisualsForType(EGridVisualType::AttackRange);
}

void UGridVisualComponent::ShowPath(const TArray<FIntPoint>& Path)
{
    if (!GridManager) return;

    ClearVisualType(EGridVisualType::Path);
    ActiveVisuals.Add(EGridVisualType::Path, Path);
    UpdateVisualsForType(EGridVisualType::Path);
}

void UGridVisualComponent::ShowHoverCell(FIntPoint Cell)
{
    if (!GridManager) return;

    ClearVisualType(EGridVisualType::Hover);
    ActiveVisuals.Add(EGridVisualType::Hover, { Cell });
    UpdateVisualsForType(EGridVisualType::Hover);
}

void UGridVisualComponent::ShowSelectedCells(const TArray<FIntPoint>& Cells)
{
    if (!GridManager) return;

    ClearVisualType(EGridVisualType::Selected);
    ActiveVisuals.Add(EGridVisualType::Selected, Cells);
    UpdateVisualsForType(EGridVisualType::Selected);
}

void UGridVisualComponent::ShowDangerZone(const TArray<FIntPoint>& Cells)
{
    if (!GridManager) return;

    ClearVisualType(EGridVisualType::Danger);
    ActiveVisuals.Add(EGridVisualType::Danger, Cells);
    UpdateVisualsForType(EGridVisualType::Danger);
}

void UGridVisualComponent::ClearVisualType(EGridVisualType Type)
{
    ActiveVisuals.Remove(Type);

    if (UInstancedStaticMeshComponent* MeshComp = VisualMeshComponents.FindRef(Type))
    {
        MeshComp->ClearInstances();
    }
}

void UGridVisualComponent::ClearAllVisuals()
{
    ActiveVisuals.Empty();

    for (auto& Pair : VisualMeshComponents)
    {
        if (Pair.Value)
        {
            Pair.Value->ClearInstances();
        }
    }
}
