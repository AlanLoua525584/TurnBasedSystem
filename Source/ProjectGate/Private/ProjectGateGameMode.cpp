// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectGateGameMode.h"
#include "ProjectGateCharacter.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "Public/DebugHelper.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "Blueprint/UserWidget.h"

AProjectGateGameMode::AProjectGateGameMode()
{
	// �]�w�w�]�� Pawn ���O
	DefaultPawnClass = AProjectGateCharacter::StaticClass();
}

void AProjectGateGameMode::BeginPlay()
{
    Super::BeginPlay();

    Debug::Print(TEXT("=== GameMode BeginPlay ==="), FColor::Cyan);

    // �ͦ��^�X�޲z��
    if (GetWorld())
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;

        TurnManager = GetWorld()->SpawnActor<ASimpleTurnManager>(
            ASimpleTurnManager::StaticClass(),
            FVector::ZeroVector,
            FRotator::ZeroRotator,
            SpawnParams
        );

        if (TurnManager)
        {
            Debug::Print(TEXT("TurnManager spawned successfully!"), FColor::Green);

            // �j�w�ƥ�
            TurnManager->OnTurnChanged.AddDynamic(this, &AProjectGateGameMode::OnTurnChanged);
            TurnManager->OnPhaseChanged.AddDynamic(this, &AProjectGateGameMode::OnPhaseChanged);

            // �Ыش��ը���
            for (int32 i = 0; i < 3; i++)
            {
                AActor* TestCharacter = GetWorld()->SpawnActor<AActor>(
                    AActor::StaticClass(),
                    FVector(i * 100.0f, 0, 0),
                    FRotator::ZeroRotator
                );

                if (TestCharacter)
                {
                    FString CharName = FString::Printf(TEXT("TestCharacter_%d"), i + 1);
                    TestCharacter->SetActorLabel(CharName);

                    // �[�J��^�X����
                    TurnManager->AddCharacter(TestCharacter);
                    Debug::Print(FString::Printf(TEXT("Added %s to turn order"), *CharName), FColor::Yellow);
                }
            }

            // �}�l�԰�
            TurnManager->StartBattle();

          

            // �]�m�p�ɾ��Ӵ��ն��q����
           /* GetWorld()->GetTimerManager().SetTimer(
                PhaseTestTimer,
                this,
                &AProjectGateGameMode::TestNextPhase,
                2.0f,  // �C2������@�����q
                true   // �`��
            );

            Debug::Print(TEXT("Phase test timer started - switching phases every 2 seconds"), FColor::Magenta);*/
        }
    }
    if(TurnDisplayWidgetClass)
    {
        APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
        if (PlayerController)
        {
            TurnDisplayWidget = CreateWidget<UTurnDisplayWidget>(PlayerController, TurnDisplayWidgetClass);
            if (TurnDisplayWidget)
            {
                TurnDisplayWidget->AddToViewport();

                //�j�w���s�ƥ�
                TurnDisplayWidget->OnNextPhaseClicked.BindLambda([this]()
                    {
                        if (TurnManager)
                        {
                            TurnManager->NextPhase();
                        }
                    });

                TurnDisplayWidget->OnEndTurnClicked.BindLambda([this]()
                    {
                        if (TurnManager)
                        {
                            // �p�G���b TurnEnd ���q�A������ TurnEnd
                            if (TurnManager->GetCurrentPhase() != ETurnPhase::TurnEnd)
                            {
                                // �����]�w�� TurnEnd ���q
                                while (TurnManager->GetCurrentPhase() != ETurnPhase::TurnEnd)
                                {
                                    TurnManager->NextPhase();
                                }
                            }
                            // �M�������U�@�^�X
                            TurnManager->NextPhase();
                        }
                    });
                Debug::Print(TEXT("Turn Display UI created with controls"), FColor::Green);

                // ��l��s
                if (AActor* CurrentChar = TurnManager->GetCurrentTurnCharacter())
                {
                    TurnDisplayWidget->UpdateCurrentCharacter(CurrentChar->GetActorLabel());
                }
                TurnDisplayWidget->UpdateTurnCount(TurnManager->GetTurnCount());
                TurnDisplayWidget->UpdatePhase(TurnManager->GetCurrentPhase());

				// ��s�^�X����
				TArray<FString> CharacterNames;
                TArray<AActor*> TurnOrder = TurnManager->GetTurnOrder();
                for (AActor* Character : TurnOrder)
                {
                    if (Character)
                    {
                        CharacterNames.Add(Character->GetActorLabel());
                    }
                }

                TurnDisplayWidget->UpdateTurnOrder(CharacterNames, TurnManager->GetCurrentCharacterIndex());

            }


        }
    }

    Debug::Print(TEXT("Manual control mode enabled - use buttons to control turns"), FColor::Yellow);
}

void AProjectGateGameMode::OnTurnChanged(AActor* CurrentCharacter)
{
    if (CurrentCharacter)
    {
		FString CharName = CurrentCharacter->GetActorLabel();
        FString Msg = FString::Printf(TEXT("=== TURN CHANGED: %s ==="), *CurrentCharacter->GetActorLabel());
        Debug::Print(Msg, FColor::Cyan, 1);  // Key = 1 �O���b�e���W

		// ��s UI ���

        if (TurnDisplayWidget)
        {
			TurnDisplayWidget->UpdateCurrentCharacter(CharName);
			TurnDisplayWidget->UpdateTurnCount(TurnManager->GetTurnCount());


            // ��s�^�X����
			TArray<FString> CharacterNames;
			TArray<AActor*> TurnOrder = TurnManager->GetTurnOrder();
			for (AActor* Character : TurnOrder)
			{
				if (Character)
				{
					CharacterNames.Add(Character->GetActorLabel());
				}
			}
			TurnDisplayWidget->UpdateTurnOrder(CharacterNames, TurnManager->GetCurrentCharacterIndex());
        }
    }

}

void AProjectGateGameMode::OnPhaseChanged(AActor* CurrentCharacter, ETurnPhase NewPhase)
{
    if (!CurrentCharacter) return;

    FString PhaseName;
    FColor PhaseColor;

    switch (NewPhase)
    {
    case ETurnPhase::TurnStart:
        PhaseName = TEXT("TURN START");
        PhaseColor = FColor::Blue;
        break;
    case ETurnPhase::MainPhase:
        PhaseName = TEXT("MAIN PHASE");
        PhaseColor = FColor::Green;
        break;
    case ETurnPhase::TurnEnd:
        PhaseName = TEXT("TURN END");
        PhaseColor = FColor::Orange;
        break;
    }

    FString Msg = FString::Printf(TEXT("[%s] Phase: %s"),
        *CurrentCharacter->GetActorLabel(),
        *PhaseName
    );
    Debug::Print(Msg, PhaseColor, 2);  // Key = 2

	//��s UI ���
	if (TurnDisplayWidget)
	{
		TurnDisplayWidget->UpdatePhase(NewPhase);
	}
}

void AProjectGateGameMode::TestNextPhase()
{
    if (TurnManager)
    {
        TurnManager->NextPhase();

        // ��ܷ�e���A
        int32 CurrentTurn = TurnManager->GetTurnCount();
        AActor* CurrentChar = TurnManager->GetCurrentTurnCharacter();

        if (CurrentChar)
        {
            FString StatusMsg = FString::Printf(
                TEXT("Turn Count: %d | Current: %s"),
                CurrentTurn,
                *CurrentChar->GetActorLabel()
            );
            Debug::Print(StatusMsg, FColor::White, 3);  // Key = 3
        }
    }
}
