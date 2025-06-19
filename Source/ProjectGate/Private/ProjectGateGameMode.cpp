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
	// 設定預設的 Pawn 類別
	DefaultPawnClass = AProjectGateCharacter::StaticClass();
}

void AProjectGateGameMode::BeginPlay()
{
    Super::BeginPlay();

    Debug::Print(TEXT("=== GameMode BeginPlay ==="), FColor::Cyan);

    // 生成回合管理器
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

            // 綁定事件
            TurnManager->OnTurnChanged.AddDynamic(this, &AProjectGateGameMode::OnTurnChanged);
            TurnManager->OnPhaseChanged.AddDynamic(this, &AProjectGateGameMode::OnPhaseChanged);

            // 創建測試角色
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

                    // 加入到回合順序
                    TurnManager->AddCharacter(TestCharacter);
                    Debug::Print(FString::Printf(TEXT("Added %s to turn order"), *CharName), FColor::Yellow);
                }
            }

            // 開始戰鬥
            TurnManager->StartBattle();

          

            // 設置計時器來測試階段切換
           /* GetWorld()->GetTimerManager().SetTimer(
                PhaseTestTimer,
                this,
                &AProjectGateGameMode::TestNextPhase,
                2.0f,  // 每2秒切換一次階段
                true   // 循環
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

                //綁定按鈕事件
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
                            // 如果不在 TurnEnd 階段，先跳到 TurnEnd
                            if (TurnManager->GetCurrentPhase() != ETurnPhase::TurnEnd)
                            {
                                // 直接設定為 TurnEnd 階段
                                while (TurnManager->GetCurrentPhase() != ETurnPhase::TurnEnd)
                                {
                                    TurnManager->NextPhase();
                                }
                            }
                            // 然後切換到下一回合
                            TurnManager->NextPhase();
                        }
                    });
                Debug::Print(TEXT("Turn Display UI created with controls"), FColor::Green);

                // 初始更新
                if (AActor* CurrentChar = TurnManager->GetCurrentTurnCharacter())
                {
                    TurnDisplayWidget->UpdateCurrentCharacter(CurrentChar->GetActorLabel());
                }
                TurnDisplayWidget->UpdateTurnCount(TurnManager->GetTurnCount());
                TurnDisplayWidget->UpdatePhase(TurnManager->GetCurrentPhase());

				// 更新回合順序
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
        Debug::Print(Msg, FColor::Cyan, 1);  // Key = 1 保持在畫面上

		// 更新 UI 顯示

        if (TurnDisplayWidget)
        {
			TurnDisplayWidget->UpdateCurrentCharacter(CharName);
			TurnDisplayWidget->UpdateTurnCount(TurnManager->GetTurnCount());


            // 更新回合順序
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

	//更新 UI 顯示
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

        // 顯示當前狀態
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
