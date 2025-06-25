// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectGateGameMode.h"
#include "ProjectGateCharacter.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "Public/DebugHelper.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "FreeCameraPawn.h"

AProjectGateGameMode::AProjectGateGameMode()
{
	// 設定預設的 Pawn 類別
	DefaultPawnClass = AProjectGateCharacter::StaticClass();
}

void AProjectGateGameMode::BeginPlay()
{
    Super::BeginPlay();

    Debug::Print(TEXT("=== GameMode BeginPlay ==="), FColor::Cyan);

    //生成自由鏡頭
	SpawnFreeCameraPawn();

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

            /*創建測試角色
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
            }*/

			//尋找場景中已存在的角色並加入到回合管理器
			TArray<AActor*> FoundCharacters; 
            UGameplayStatics::GetAllActorsOfClass(
                GetWorld(),
                ATurnBasedCharacter::StaticClass(),
                FoundCharacters
            );

            for (AActor* Character : FoundCharacters)
            {
                if (Character)
                {
					TurnManager->AddCharacter(Character);
                    Debug::Print(FString::Printf(TEXT("Added %s to turn order"),
                        *Character->GetActorLabel()), FColor::Yellow);
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

void AProjectGateGameMode::SpawnFreeCameraPawn()
{
    if (!FreeCameraPawnClass)
    {
        Debug::Print(TEXT("FreeCameraPawnClass not set in GameMode!"), FColor::Red);
        return;
    }

    // 計算初始位置（場景中心上方）
	FVector SpawnLocation = FVector(0.0f, 0.0f, 1000.0f);
	FRotator SpawnRotation = FRotator(-45.0f, 0.0f, 0.0f); // 向下看

	// 創建自由鏡頭 Pawn
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    FreeCameraPawn = GetWorld()->SpawnActor<AFreeCameraPawn>(
        FreeCameraPawnClass,
        SpawnLocation,
        SpawnRotation,
        SpawnParams
    );

    if (FreeCameraPawn)
    {
        // 讓玩家控制相機
        APlayerController* PC = GetWorld()->GetFirstPlayerController();
        if (PC)
        {
            PC->Possess(FreeCameraPawn);
            PC->SetViewTarget(FreeCameraPawn);

            // 設置輸入模式
            FInputModeGameAndUI InputMode;
            InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
            InputMode.SetHideCursorDuringCapture(false);
            PC->SetInputMode(InputMode);
            PC->bShowMouseCursor = true;

            Debug::Print(TEXT("Free Camera Pawn spawned and possessed"), FColor::Green);
        }

        // 設置相機邊界（可選）
        FreeCameraPawn->SetMovementBounds(
            FVector(-5000, -5000, 100),    // 最小邊界
            FVector(5000, 5000, 3000)       // 最大邊界
        );
	}
	else
	{
		Debug::Print(TEXT("Failed to spawn FreeCameraPawn!"), FColor::Red);
	}
}

void AProjectGateGameMode::OnTurnChanged(AActor* CurrentCharacter)
{
    //先結束前一個角色的回合
    if (PreviousCharacter)
    {
        if (ATurnBasedCharacter* PrevTurnChar = Cast<ATurnBasedCharacter>(PreviousCharacter))
        {
			PrevTurnChar->OnTurnEnd();
        }
    }
	// 自動聚焦到當前角色
    if (bAutoFocusCurrentCharacter && FreeCameraPawn && CurrentCharacter)
    {
		FreeCameraPawn->FocusOnActor(CurrentCharacter, FocusDistance);
    }


    if (CurrentCharacter)
    {
		FString CharName = CurrentCharacter->GetActorLabel();
        FString Msg = FString::Printf(TEXT("=== TURN CHANGED: %s ==="), *CurrentCharacter->GetActorLabel());
        Debug::Print(Msg, FColor::Cyan, 1);  // Key = 1 保持在畫面上

        //檢查是否為TurnBasedCharacter

        if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(CurrentCharacter))
        {
            //呼叫角色的回合開始
            TurnChar->OnTurnStart();
        }

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
    
    //儲存當前角色作為下一回合的"前一個角色"

	PreviousCharacter = CurrentCharacter;
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
