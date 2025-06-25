#pragma once

// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/Intpoint.h"


#include "GridManager.generated.h"
//���������T�|

UENUM(BlueprintType)
enum class EGridType : uint8
{
	Normal   UMETA(DisplayName = "Normal"),
	Blocked UMETA(DisplayName = "Blocked"),
	Difficult UMETA(DisplayName = "Difficult Terrain"),//���ӧ�hAP����
	Water UMETA(DisplayName = "Water"),
	HighGround UMETA(DisplayName = "High Ground")
};

//�����������c��

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

	// ���ʦ����]�����Ӥk�Z�����t�ηǳơ^
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


	//����j�p
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
	int32 GridSizeX = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
	int32 GridSizeY = 20;

	//�C�Ӯ�l���j�p
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
	float CellSize = 100.0f;

	//����ƾ�
	UPROPERTY(BlueprintReadOnly, Category = "Grid")
	TArray<FGridCell>GridCells;

	//��ı�Ʋե�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
	class UInstancedStaticMeshComponent* GridMeshComponent;

	//���G��ܲե�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Components")
	class UInstancedStaticMeshComponent* HighlightMeshComponent;



private:
	//����ͦ�
	void GenerateGrid();
	void CreateGridVisualization();

	//�����ϥΪ�2D�Ʋ� (��K�X��)
	TArray<TArray<FGridCell>> Grid2D;



public:
	//== �֤ߥ\��==

	//�����ഫ
	UFUNCTION(BlueprintCallable, Category = "Grid")
	FVector GridToWorld(FIntPoint GridCoord)const;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	FIntPoint WorldToGrid(FVector WorldLocation)const;

	//�������H��
	UFUNCTION(BlueprintCallable, Category = "Grid")
	bool GetGridCell(FIntPoint GridCoord, FGridCell& OutCell)const;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	bool IsValidGridPosition(FIntPoint GridCoord)const;

	//���|�M�d��p��
	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	TArray<FIntPoint>GetMovementRange(FIntPoint StartCoord, int32 MovePoints)const;

	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	TArray<FIntPoint>GetPath(FIntPoint StarCoord, FIntPoint EndCoord)const;

	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	int32 GetPathCost(const TArray<FIntPoint>& Path)const;

	//���κ޲z
	UFUNCTION(BlueprintCallable, Category = "Grid|Occupancy")
	bool SetCellOccupied(FIntPoint GridCoord, AActor* Occupant);

	UFUNCTION(BlueprintCallable, Category = "Grid|Occupancy")
	bool ClearCellOccupation(FIntPoint GridCoord);

	//��ı��
	UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
	void ShowMovementRange(FIntPoint CenterCoord, int32 Range);

	UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
	void ClearHighlights();

	UFUNCTION(BlueprintCallable, Category = "Grid|Visualization")
	void HighlightPath(const TArray<FIntPoint>& Path);

	//�����Ӥk�Z�������ʨt�ηǳƪ����f
	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	float GetMovementCostBetween(FVector StartPos, FVector EndPos)const;

	UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
	bool CanMoveThrough(FVector Position)const;

};