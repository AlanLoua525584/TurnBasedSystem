#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GridVisualComponent.generated.h"

class AGridManager;
class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;

UENUM(BlueprintType)
enum class EGridVisualType : uint8
{
    MovementRange,
    AttackRange,
    Path,
    Hover,
    Selected,
    Danger
};

USTRUCT(BlueprintType)
struct FGridVisualSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLinearColor Color = FLinearColor(0, 1, 0, 0.5f); // Default green with alpha

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float HeightOffset = 5.0f;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTGATE_API UGridVisualComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UGridVisualComponent();

    void Initialize(AGridManager* InGridManager);

    void ShowMovementRange(FIntPoint Center, int32 Range);
    void ShowAttackRange(FIntPoint Center, float Range);
    void ShowPath(const TArray<FIntPoint>& Path);
    void ShowHoverCell(FIntPoint Cell);
    void ShowSelectedCells(const TArray<FIntPoint>& Cells);
    void ShowDangerZone(const TArray<FIntPoint>& Cells);

    void ClearVisualType(EGridVisualType Type);
    void ClearAllVisuals();

protected:
    virtual void BeginPlay() override;

private:
    AGridManager* GridManager = nullptr;

    TMap<EGridVisualType, UInstancedStaticMeshComponent*> VisualMeshComponents;
    TMap<EGridVisualType, UMaterialInstanceDynamic*> MaterialInstances;
    TMap<EGridVisualType, TArray<FIntPoint>> ActiveVisuals;

    TMap<EGridVisualType, FGridVisualSettings> VisualSettings;

    void UpdateVisualsForType(EGridVisualType Type);
    void CreateMaterialInstances();
};
