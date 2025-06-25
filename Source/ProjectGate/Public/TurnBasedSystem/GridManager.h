#pragma once

// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/Intpoint.h"


#include "GridManager.generated.h"
//網格類型枚舉

UENUM(BlueprintType)
enum class EGridType : uint8
{
	Normal   UMETA(DisplayName = "Normal"),
	Blocked UMETA(DisplayName = "Blocked"),
	Difficult UMETA(DisplayName = "Difficult Terrain"),//消耗更多AP移動
	Water UMETA(DisplayName = "Water"),
	HighGround UMETA(DisplayName = "High Ground")
};

//網格類型結構體

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

	// 移動成本（為未來女武神式系統準備）
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
	// Sets default values for this actor's properties
	AGridManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//網格大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
	int32 GridSizeX = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
	int32 GridSizeY = 20;

	//每個格子的大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
	float CellSize = 100.0f;

	//網格數據
	UPROPERTY(BlueprintReadOnly, Category = "Grid")
	TArray<FGridCell>GridCells;

	//視覺化組件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
	class UInstancedStaticMeshComponent* GridMeshComponent;

	//高亮顯示組件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
	class UInstancedStaticMeshComponent* HighlightMeshComponent;



private:
	//網格生成
	void GenerateGrid();
	void CreateGridVisualization();

	//內部使用的2D數組 (方便訪問)
	TArray<TArray<FGridCell>> Grid2D;



public:
	//== 核心功能==

	//坐標轉換
	UFUNCTION(BlueprintCallable, Category = "Grid")
	FVector GridToWorld(FIntPoint GridCoord)const;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	FIntPoint WorldToGrid(FVector WorldLocation)const;

	//獲取網格信息
	UFUNCTION(BlueprintCallable, Category = "Grid")
	bool GetGridCell(FIntPoint GridCoord, FGridCell& OutCell)const;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	bool IsValidGridPosition(FIntPoint GridCoord)const;

	//路徑和範圍計算
	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	TArray<FIntPoint>GetMovementRange(FIntPoint StartCoord, int32 MovePoints)const;

	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	TArray<FIntPoint>GetPath(FIntPoint StarCoord, FIntPoint EndCoord)const;

	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	int32 GetPathCost(const TArray<FIntPoint>& Path)const;

	//佔用管理
	UFUNCTION(BlueprintCallable, Category = "Grid|Occupancy")
	bool SetCellOccupied(FIntPoint GridCoord, AActor* Occupant);

	UFUNCTION(BlueprintCallable, Category = "Grid|Occupancy")
	bool ClearCellOccupation(FIntPoint GridCoord);

	//視覺化
	UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
	void ShowMovementRange(FIntPoint CenterCoord, int32 Range);

	UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
	void ClearHighlights();

	UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
	void HighlightPath(const TArray<FIntPoint>& Path);

	//為未來女武神式移動系統準備的接口
	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	float GetMovementCostBetween(FVector StartPos, FVector EndPos)const;

	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	bool CanMoveThrough(FVector Position)const;

};