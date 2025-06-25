// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GridPathfindingComponent.generated.h"

class AGridManager;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UGridPathfindingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGridPathfindingComponent();

	//��l��
	UFUNCTION(BlueprintCallable,Category = "Pathfinding")
	void InitializeGrid(AGridManager* InGridManager);

	//�M����|
	UFUNCTION(BlueprintCallable,Category = "Pathfingding")
	TArray<FIntPoint> FindPath(FIntPoint StartPos, FIntPoint EndPos);

	//�p����|����
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	int32 CalculatePathCost(const TArray<FIntPoint>& Path)const;


protected:

	UPROPERTY()
	AGridManager* GridManager;


public:	

	//A*�M���`�I
	struct FPathNode
	{
		FIntPoint Position;
		float GCost; // �q�_�I���e�`�I������
		float HCost; // �q��e�`�I����I�����p����
		float FCost() const { return GCost + HCost; }
		FPathNode* Parent;

		FPathNode()
		{
			Position = FIntPoint(0,0);
			GCost = 0.0f;
			HCost = 0.0f;
			Parent = nullptr;
		}


	};

	//�p��ҫ��y�Z��
	float CalculateHeuristic(FIntPoint From, FIntPoint To)const;

	//���ظ��|
	TArray<FIntPoint>ReconstructPath(FPathNode* EndNode)const;

};
