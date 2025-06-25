// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "FreeCameraPawn.h"

#include "ProjectGateGameMode.generated.h"

class ASimpleTurnManager;

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class PROJECTGATE_API AProjectGateGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AProjectGateGameMode();

protected:
	virtual void BeginPlay() override;
	virtual void SpawnFreeCameraPawn();

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
	TSubclassOf<AFreeCameraPawn> FreeCameraPawnClass; 

    //當前鏡頭實例
    UPROPERTY()
    AFreeCameraPawn* FreeCameraPawn;

	//是否自動聚焦到當前角色
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    bool bAutoFocusCurrentCharacter = true;

    // 聚焦距離
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float FocusDistance = 800.0f;


private:
    // 回合管理器
    UPROPERTY()
    ASimpleTurnManager* TurnManager;

    UPROPERTY()
    class UTurnDisplayWidget* TurnDisplayWidget;

    UPROPERTY(EditDefaultsOnly , Category = "UI")
    TSubclassOf<class UTurnDisplayWidget> TurnDisplayWidgetClass;

    //追蹤前一個角色
	UPROPERTY()
	AActor* PreviousCharacter = nullptr;
    

    // 測試函數
    UFUNCTION()
    void OnTurnChanged(AActor* CurrentCharacter);

    UFUNCTION()
    void OnPhaseChanged(AActor* CurrentCharacter, ETurnPhase NewPhase);

    // 測試用計時器
    void TestNextPhase();
    FTimerHandle PhaseTestTimer;



};



