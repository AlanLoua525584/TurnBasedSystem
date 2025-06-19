// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SimpleTurnManager.generated.h"


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



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	/*StoreAllCharacter*/
	UPROPERTY()
	TArray<AActor*> TurnOrder;


	int32 CurrentTurnIndex;
	bool bBattleStarted;
	ETurnPhase CurrentPhase;
	int32 TurnCount;

};
