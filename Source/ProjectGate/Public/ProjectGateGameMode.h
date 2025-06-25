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

    //��e���Y���
    UPROPERTY()
    AFreeCameraPawn* FreeCameraPawn;

	//�O�_�۰ʻE�J���e����
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    bool bAutoFocusCurrentCharacter = true;

    // �E�J�Z��
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float FocusDistance = 800.0f;


private:
    // �^�X�޲z��
    UPROPERTY()
    ASimpleTurnManager* TurnManager;

    UPROPERTY()
    class UTurnDisplayWidget* TurnDisplayWidget;

    UPROPERTY(EditDefaultsOnly , Category = "UI")
    TSubclassOf<class UTurnDisplayWidget> TurnDisplayWidgetClass;

    //�l�ܫe�@�Ө���
	UPROPERTY()
	AActor* PreviousCharacter = nullptr;
    

    // ���ը��
    UFUNCTION()
    void OnTurnChanged(AActor* CurrentCharacter);

    UFUNCTION()
    void OnPhaseChanged(AActor* CurrentCharacter, ETurnPhase NewPhase);

    // ���եέp�ɾ�
    void TestNextPhase();
    FTimerHandle PhaseTestTimer;



};



