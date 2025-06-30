#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/IntPoint.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "GridManager.generated.h"

// Grid Type Enum
UENUM(BlueprintType)
enum class EGridType : uint8
{
    Normal      UMETA(DisplayName = "Normal"),
    Blocked     UMETA(DisplayName = "Blocked"),
    Difficult   UMETA(DisplayName = "Difficult Terrain"), // Cost more AP to move
    Water       UMETA(DisplayName = "Water"),
    HighGround  UMETA(DisplayName = "High Ground")
};

// Grid Cell Structure
USTRUCT(BlueprintType)
struct FGridCell
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite)
    FVector WorldLocation;

    UPROPERTY(BlueprintReadWrite)
    FIntPoint GridCoordinate;

    UPROPERTY(BlueprintReadWrite)
    EGridType GridType = EGridType::Normal;

    UPROPERTY(BlueprintReadWrite)
    bool bIsOccupied = false;

    UPROPERTY(BlueprintReadWrite)
    AActor* OccupyingActor = nullptr;

    // Movement cost (for future pathfinding system)
    UPROPERTY(BlueprintReadWrite)
    int32 MovementCost = 1;

    FGridCell()
    {
        WorldLocation = FVector::ZeroVector;
        GridCoordinate = FIntPoint(0, 0);
    }
};

UCLASS()
class PROJECTGATE_API AGridManager : public AActor
{
    GENERATED_BODY()

public:
    AGridManager();

    // 獲取格子大小
    UFUNCTION(BlueprintCallable, Category = "Grid")
    float GetCellSize() const { return CellSize; }

protected:
    virtual void BeginPlay() override;

    // Grid size
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
    int32 GridSizeX = 20;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
    int32 GridSizeY = 20;

    // Size of each cell
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
    float CellSize = 100.0f;

    // Grid data
    UPROPERTY(BlueprintReadOnly, Category = "Grid")
    TArray<FGridCell> GridCells;

    // Visualization components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
    class UInstancedStaticMeshComponent* GridMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
    class UInstancedStaticMeshComponent* HighlightMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
    class UInstancedStaticMeshComponent* PathMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
    class UInstancedStaticMeshComponent* HoverMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
    class UGridVisualComponent* VisualComponent;


    // Material instances
    UPROPERTY()
    class UMaterialInstanceDynamic* GridMaterialInstance;

    UPROPERTY()
    class UMaterialInstanceDynamic* HighlightMaterialInstance;

    UPROPERTY()
    class UMaterialInstanceDynamic* PathMaterialInstance;

    UPROPERTY()
    class UMaterialInstanceDynamic* HoverMaterialInstance;

private:
    // Grid generation
    void GenerateGrid();
    void CreateGridVisualization();
    void CreateGridMaterials();

    // Internal 2D array (for easier access)
    TArray<TArray<FGridCell>> Grid2D;

    // Helper functions
    FLinearColor GetGridTypeColor(EGridType GridType) const;

public:
    // == Core Functions ==

    // Coordinate conversion
    UFUNCTION(BlueprintCallable, Category = "Grid")
    FVector GridToWorld(FIntPoint GridCoord) const;

    UFUNCTION(BlueprintCallable, Category = "Grid")
    FIntPoint WorldToGrid(FVector WorldLocation) const;

    // Get grid information
    UFUNCTION(BlueprintCallable, Category = "Grid")
    bool GetGridCell(FIntPoint GridCoord, FGridCell& OutCell) const;

    UFUNCTION(BlueprintCallable, Category = "Grid")
    bool IsValidGridPosition(FIntPoint GridCoord) const;

    // Path and range calculation
    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    TArray<FIntPoint> GetMovementRange(FIntPoint StartCoord, int32 MovePoints) const;

    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    TArray<FIntPoint> GetPath(FIntPoint StartCoord, FIntPoint EndCoord) const;

    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    int32 GetPathCost(const TArray<FIntPoint>& Path) const;

    // Occupancy management
    UFUNCTION(BlueprintCallable, Category = "Grid|Occupancy")
    bool SetCellOccupied(FIntPoint GridCoord, AActor* Occupant);

    UFUNCTION(BlueprintCallable, Category = "Grid|Occupancy")
    bool ClearCellOccupation(FIntPoint GridCoord);

    // Visualization
    UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
    void ShowMovementRange(FIntPoint CenterCoord, int32 Range);

    UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
    void ShowHoverCell(FIntPoint GridCoord);

    UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
    void HighlightPath(const TArray<FIntPoint>& Path);

    UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
    void ClearHighlights();

    UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
    void ClearAllVisuals();

    // Animation effects
    UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
    void AnimateHighlight(float DeltaTime);

    // Interface for future free movement system
    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    float GetMovementCostBetween(FVector StartPos, FVector EndPos) const;

    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    bool CanMoveThrough(FVector Position) const;
};