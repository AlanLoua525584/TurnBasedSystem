// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TurnBasedCharacter.generated.h"

//宣告委託
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionPointsChanged, int32, NewActionPoints);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionPerformed, FString, ActionName, int32, Cost);

UCLASS()
class PROJECTGATE_API ATurnBasedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATurnBasedCharacter();

	//行動點數系統
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System")
	int32 MaxActionPoints = 3;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Turn System")
	int32 CurrentActionPoints;

	//行動消耗
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Action Cost")
	int32 MoveActionCost = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Action Cost")
	int32 AttackActionCost = 1;

	//基礎屬性(將來需與GAS整合)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
	int32 AttackDamage = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
	float AttackRange = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
	float MoveSpeed = 300.0f;

	//事件
	UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
	FOnActionPointsChanged OnActionPointsChanged;

	UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
	FOnActionPerformed OnActionPerformed;

	//行動系統
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void ResetActionPoints();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	bool CanPerformAction(int32 ActionCost) const;

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void ConsumeActionPoints(int32 Amount);

	//基本行動
	UFUNCTION(BlueprintCallable, Category = "Turn System|Actions")
	bool TryMove(FVector TargetLocation);

	UFUNCTION(BlueprintCallable, Category = "Turn System|Actions")
	bool TryAttack(AActor* TargetActor);

	//回合管理
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void OnTurnStart();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void OnTurnEnd();


	//查詢狀態
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	bool IsMyTurn() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//回合狀態
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Turn System")
	bool bIsMyTurn = false;


private:
	//移動相關
	bool bIsMoving = false;
	FVector MoveTargetLocation;

	//輔助函數
	void PerfromMove();
	void PerformAttack(AActor* TargetActor);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
