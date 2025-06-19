// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TurnBasedCharacter.generated.h"

//�ŧi�e�U
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionPointsChanged, int32, NewActionPoints);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionPerformed, FString, ActionName, int32, Cost);

UCLASS()
class PROJECTGATE_API ATurnBasedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATurnBasedCharacter();

	//����I�ƨt��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System")
	int32 MaxActionPoints = 3;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Turn System")
	int32 CurrentActionPoints;

	//��ʮ���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Action Cost")
	int32 MoveActionCost = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Action Cost")
	int32 AttackActionCost = 1;

	//��¦�ݩ�(�N�ӻݻPGAS��X)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
	int32 AttackDamage = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
	float AttackRange = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
	float MoveSpeed = 300.0f;

	//�ƥ�
	UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
	FOnActionPointsChanged OnActionPointsChanged;

	UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
	FOnActionPerformed OnActionPerformed;

	//��ʨt��
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void ResetActionPoints();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	bool CanPerformAction(int32 ActionCost) const;

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void ConsumeActionPoints(int32 Amount);

	//�򥻦��
	UFUNCTION(BlueprintCallable, Category = "Turn System|Actions")
	bool TryMove(FVector TargetLocation);

	UFUNCTION(BlueprintCallable, Category = "Turn System|Actions")
	bool TryAttack(AActor* TargetActor);

	//�^�X�޲z
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void OnTurnStart();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void OnTurnEnd();


	//�d�ߪ��A
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	bool IsMyTurn() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//�^�X���A
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Turn System")
	bool bIsMyTurn = false;


private:
	//���ʬ���
	bool bIsMoving = false;
	FVector MoveTargetLocation;

	//���U���
	void PerfromMove();
	void PerformAttack(AActor* TargetActor);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
