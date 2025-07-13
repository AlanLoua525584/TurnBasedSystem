// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SimpleTurnManager.generated.h"


class ATurnBasedCharacter;

/*ThreePhasesInTurn*/
UENUM(BlueprintType)
enum class ETurnPhase : uint8
{
	TurnStart UMETA(DisplayName = "Turn Start"),
	MainPhase UMETA(DisplayName = "MainPhase"),
	TurnEnd UMETA(DisplayName = "Turn End")
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTurnChanged, AActor*, CurrentCharacter);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPhaseChanged, AActor*, CurrentCharacter, ETurnPhase, NewPhase);

// 戰鬥結束事件
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattleEnded, bool, bPlayerWon);





UCLASS()
class PROJECTGATE_API ASimpleTurnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASimpleTurnManager();
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void AddCharacter(AActor* Character);

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void StartBattle();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void NextTurn();

	/*EnterNextPhase*/ 
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void NextPhase();

	// 讓 PlayerController Possess 當前回合角色
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void PossessCurrentTurnCharacter();

	//移除回合角色
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void RemoveCharacter(AActor* Character);

	// 檢查戰鬥是否結束
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	bool CheckBattleEnd();

	//檢查戰鬥是否開始
	bool IsBattleStarted() const { return bBattleStarted; }

	// 回合排序方法
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void RecalculateTurnOrder();

	// 獲取排序後的回合順序
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	TArray<AActor*> GetSortedTurnOrder() const;

	// 延遲某個角色的行動
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void DelayCharacterTurn(AActor* Character, int32 DelayTurns = 1);

	// 插入緊急行動
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void InsertImmediateAction(AActor* Character);



	// 獲取存活角色數量
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	int32 GetAliveCharacterCount() const;

	UPROPERTY(BlueprintAssignable, Category = "Turn System")
	FOnBattleEnded OnBattleEnded;

	

	/*GetCurrentPhase*/ 
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	ETurnPhase GetCurrentPhase() const;

	/*GetTurnCont*/
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	int32 GetTurnCount() const ;

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	AActor* GetCurrentTurnCharacter() const;

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	TArray<AActor*>GetTurnOrder() const ;

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	int32 GetCurrentCharacterIndex() const ;


	UPROPERTY(BlueprintAssignable, Category = "Turn System")
	FOnTurnChanged OnTurnChanged;


	UPROPERTY(BlueprintAssignable, Category = "Turn System")
	FOnPhaseChanged OnPhaseChanged;


	//原Private
	UPROPERTY()
	TArray<AActor*> TurnOrder;


	int32 CurrentTurnIndex;
	bool bBattleStarted;
	ETurnPhase CurrentPhase;
	int32 TurnCount;

	// 設置當前索引
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void SetCurrentCharacterIndex(int32 NewIndex);


	void PossessCharacter(AActor* CharacterToPossess);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 計算先攻值
	int32 CalculateInitiative(ATurnBasedCharacter* Character);

	// 排序算法
	void SortTurnOrderByInitiative();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	/*StoreAllCharacter*/
	

	// 處理角色死亡後的回合切換
	void HandleCharacterDeath(AActor* DeadCharacter);

};
