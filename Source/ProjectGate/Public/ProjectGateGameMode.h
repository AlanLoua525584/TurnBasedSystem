// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"

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

private:
    // �^�X�޲z��
    UPROPERTY()
    ASimpleTurnManager* TurnManager;

    UPROPERTY()
    class UTurnDisplayWidget* TurnDisplayWidget;

    UPROPERTY(EditDefaultsOnly , Category = "UI")
    TSubclassOf<class UTurnDisplayWidget> TurnDisplayWidgetClass;
    

    // ���ը��
    UFUNCTION()
    void OnTurnChanged(AActor* CurrentCharacter);

    UFUNCTION()
    void OnPhaseChanged(AActor* CurrentCharacter, ETurnPhase NewPhase);

    // ���եέp�ɾ�
    void TestNextPhase();
    FTimerHandle PhaseTestTimer;



};



