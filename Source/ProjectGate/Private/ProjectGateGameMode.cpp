// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectGateGameMode.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "CombatSystem/CombatDisplayWidget.h"
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
    // Not Set default Pawn class
    DefaultPawnClass = nullptr;

    //使用自定義PlayerController
    PlayerControllerClass = AGridPlayerController::StaticClass();
}


void AProjectGateGameMode::BeginPlay()
{
    Super::BeginPlay();

    Debug::Print(TEXT("=== GameMode BeginPlay ==="), FColor::Cyan);

    // 1. 先確保 PlayerController 完全初始化
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (!PlayerController)
    {
        Debug::Print(TEXT("ERROR: No PlayerController found!"), FColor::Red);
        return;
    }

    // 2. 給 PlayerController 一些時間完成初始化
    FTimerHandle InitTimer;
    GetWorld()->GetTimerManager().SetTimer(InitTimer, [this]()
        {
            // 3. 創建 TurnManager
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

                    // Bind events
                    TurnManager->OnTurnChanged.AddDynamic(this, &AProjectGateGameMode::OnTurnChanged);
                    TurnManager->OnPhaseChanged.AddDynamic(this, &AProjectGateGameMode::OnPhaseChanged);
                }
            }
            
            // 4. 創建 UI
            CreateGameUI();
            

            // 5. 最後初始化戰鬥
            FTimerHandle BattleTimer;
            GetWorld()->GetTimerManager().SetTimer(BattleTimer, [this]()
                {
                    InitializeBattle();
                }, 0.2f, false);  // 再延遲 0.2 秒

        }, 0.1f, false);  // 延遲 0.1 秒

    /*
    // Spawn Turn Manager
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

            // Bind events
            TurnManager->OnTurnChanged.AddDynamic(this, &AProjectGateGameMode::OnTurnChanged);
            TurnManager->OnPhaseChanged.AddDynamic(this, &AProjectGateGameMode::OnPhaseChanged);

        }
    }
    
    if (TurnDisplayWidgetClass)
    {
        APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
        if (PlayerController)
        {
            TurnDisplayWidget = CreateWidget<UTurnDisplayWidget>(PlayerController, TurnDisplayWidgetClass);
            if (TurnDisplayWidget)
            {
                TurnDisplayWidget->AddToViewport();

                // Bind button events
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
                            Debug::Print(TEXT("End Turn button clicked - processing..."), FColor::Orange);

                            // === 修復1：確保當前角色結束回合 ===
                            if (AActor* CurrentCharacter = TurnManager->GetCurrentTurnCharacter())
                            {
                                if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(CurrentCharacter))
                                {
                                    // 確保角色結束回合
                                    Character->OnTurnEnd();
                                    Debug::Print(FString::Printf(TEXT("Forced turn end for: %s"),
                                        *Character->GetActorLabel()), FColor::Yellow);
                                }
                            }



                            // === 修復2：正確推進到下一個回合 ===
                            // 直接調用NextTurn，無需手動推進階段
                            TurnManager->NextTurn();

                            Debug::Print(TEXT("TurnManager->NextTurn() called"), FColor::Green);
                        }
                    });
                Debug::Print(TEXT("Turn Display UI created with controls"), FColor::Green);

                // Initial update
                if (AActor* CurrentChar = TurnManager->GetCurrentTurnCharacter())
                {
                    TurnDisplayWidget->UpdateCurrentCharacter(CurrentChar->GetActorLabel());
                }
                TurnDisplayWidget->UpdateTurnCount(TurnManager->GetTurnCount());
                TurnDisplayWidget->UpdatePhase(TurnManager->GetCurrentPhase());

                // Update turn order
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

    */

    Debug::Print(TEXT("Manual control mode enabled - use buttons to control turns"), FColor::Yellow);
}

void AProjectGateGameMode::CreateGameUI()
{
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (!PlayerController)
    {
        Debug::Print(TEXT("ERROR: No PlayerController for UI creation"), FColor::Red);
        return;
    }

    // 創建回合顯示 UI
    if (TurnDisplayWidgetClass)
    {
        TurnDisplayWidget = CreateWidget<UTurnDisplayWidget>(PlayerController, TurnDisplayWidgetClass);
        if (TurnDisplayWidget)
        {
            TurnDisplayWidget->AddToViewport();

            // 綁定按鈕事件
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
                        Debug::Print(TEXT("End Turn button clicked - processing..."), FColor::Orange);
                        TurnManager->NextTurn();
                    }
                });

            Debug::Print(TEXT("Turn Display UI created with controls"), FColor::Green);
        }
    }

    // 創建戰鬥顯示 UI
    if (CombatDisplayWidgetClass)
    {
        CombatDisplayWidget = CreateWidget<UCombatDisplayWidget>(PlayerController, CombatDisplayWidgetClass);
        if (CombatDisplayWidget)
        {
            CombatDisplayWidget->AddToViewport();
            Debug::Print(TEXT("Combat Display UI created"), FColor::Green);
        }
    }
}

void AProjectGateGameMode::InitializeBattle()
{
    Debug::Print(TEXT("=== InitializeBattle 開始 ==="), FColor::Magenta);

    // 1. 確保 PlayerController 沒有 Possess 任何角色
    if (AGridPlayerController* PC = Cast<AGridPlayerController>(GetWorld()->GetFirstPlayerController()))
    {
        if (PC->GetPawn())
        {
            Debug::Print(FString::Printf(TEXT("解除 PlayerController 的 Possess: %s"),
                *PC->GetPawn()->GetName()), FColor::Orange);
            PC->UnPossess();
        }
    }

    // 2. 這裡定義 FoundCharacters！！！
    TArray<AActor*> FoundCharacters;  // <--- 這是定義
    UGameplayStatics::GetAllActorsOfClass(
        GetWorld(),
        ATurnBasedCharacter::StaticClass(),
        FoundCharacters  // <--- 這會填充數組
    );

    Debug::Print(FString::Printf(TEXT("Found %d characters in scene"), FoundCharacters.Num()), FColor::Yellow);


    // 3.在添加角色到 TurnManager 之前，先排序
    TArray<AActor*> PlayerCharacters;
    TArray<AActor*> EnemyCharacters;

    for (AActor* Character : FoundCharacters)
    {
        if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(Character))
        {
            // 重置角色的回合狀態
            if (UTurnSystemComponent* TurnSystem = TurnChar->GetTurnSystemComponent())
            {
                if (TurnSystem->IsMyTurn())
                {
                    Debug::Print(FString::Printf(TEXT("重置 %s 的回合狀態"),
                        *TurnChar->GetActorLabel()), FColor::Orange);
                    TurnSystem->OnTurnEnd();
                }
            }

            // 根據是否為玩家控制進行分類
            if (TurnChar->bIsPlayerControlled)
            {
                PlayerCharacters.Add(Character);
            }
            else
            {
                EnemyCharacters.Add(Character);
            }
        }
    }



    // 4. 先添加玩家角色，再添加敵人角色
    for (AActor* PlayerChar : PlayerCharacters)
    {
        TurnManager->AddCharacter(PlayerChar);
        Debug::Print(FString::Printf(TEXT("Added player character %s to turn order"),
            *PlayerChar->GetActorLabel()), FColor::Green);
    }

    for (AActor* EnemyChar : EnemyCharacters)
    {
        TurnManager->AddCharacter(EnemyChar);
        Debug::Print(FString::Printf(TEXT("Added enemy character %s to turn order"),
            *EnemyChar->GetActorLabel()), FColor::Yellow);
    }

    // 5. 開始戰鬥
    if (TurnManager)
    {
        Debug::Print(TEXT("GameMode 啟動戰鬥"), FColor::Green);
        TurnManager->StartBattle();
    }

    Debug::Print(TEXT("=== InitializeBattle 結束 ==="), FColor::Magenta);
}


void AProjectGateGameMode::OnTurnChanged(AActor* CurrentCharacter)
{


    if (!TurnDisplayWidget)
    {
        Debug::Print(TEXT("TurnDisplayWidget is NULL! UI Update skipped"), FColor::Red);
        return;
    }



    // End the previous character's turn
    if (PreviousCharacter)
    {
        if (ATurnBasedCharacter* PrevTurnChar = Cast<ATurnBasedCharacter>(PreviousCharacter))
        {
            PrevTurnChar->OnTurnEnd();
        }

        if (ATurnBasedCharacter* PrevChar = Cast<ATurnBasedCharacter>(PreviousCharacter))
        {
            // 解綁 AP 事件
            if (UTurnSystemComponent* PrevTurnSys = PrevChar->GetTurnSystemComponent())
            {
                PrevTurnSys->OnActionPointsChanged.RemoveAll(this);
            }

            // 解綁耐力事件
            if (UEnhancedMovementSystem* PrevMoveSys =
                PrevChar->FindComponentByClass<UEnhancedMovementSystem>())
            {
                PrevMoveSys->OnResourceChanged.RemoveDynamic(this, &AProjectGateGameMode::OnStaminaChanged);
            }
        }
    }



    if (CurrentCharacter)
    {
        FString CharName = CurrentCharacter->GetActorLabel();
        FString Msg = FString::Printf(TEXT("=== TURN CHANGED: %s ==="), *CurrentCharacter->GetActorLabel());
        Debug::Print(Msg, FColor::Cyan, 1);  // Key = 1 to persist on screen

        // Check if it's a TurnBasedCharacter
        if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(CurrentCharacter))
        {
            // Call character's turn start
            TurnChar->OnTurnStart();


            //綁定新的AP事件
            if (UTurnSystemComponent* TurnSys = TurnChar->GetTurnSystemComponent())
            {
                TurnSys->OnActionPointsChanged.AddDynamic(this, &AProjectGateGameMode::OnAPChanged);

                // 初始化UI
                TurnDisplayWidget->UpdateActionPoints(
                    TurnSys->GetCurrentActionPoints(),
                    TurnSys->GetMaxActionPoints()
                );
            }


        }
        // Update UI display
        if (TurnDisplayWidget)
        {
            TurnDisplayWidget->UpdateCurrentCharacter(CharName);
            TurnDisplayWidget->UpdateTurnCount(TurnManager->GetTurnCount());

            // Update turn order
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

    if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(CurrentCharacter))
    {
        if (UEnhancedMovementSystem* MoveSys = TurnChar->FindComponentByClass<UEnhancedMovementSystem>())
        {
            // 初始更新耐力顯示
            if (TurnDisplayWidget)
            {
                TurnDisplayWidget->UpdateStamina(
                    MoveSys->CurrentMovementResource,
                    MoveSys->MaxMovementResource
                );
            }

            // 綁定耐力變化事件
            MoveSys->OnResourceChanged.AddDynamic(this, &AProjectGateGameMode::OnStaminaChanged);

        }
    }


    // Store current character as "previous character" for next turn
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

    // Update UI display
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

        // Display current state
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

void AProjectGateGameMode::OnAPChanged(int32 NewAP)
{
    if (TurnDisplayWidget && TurnManager)
    {
        if (ATurnBasedCharacter* CurrentChar = Cast<ATurnBasedCharacter>(
            TurnManager->GetCurrentTurnCharacter()))
        {
            TurnDisplayWidget->UpdateActionPoints(
                NewAP,
                CurrentChar->GetMaxActionPoints()
            );
        }
    }

}

void AProjectGateGameMode::OnStaminaChanged(float NewResource)
{
    if (TurnDisplayWidget && TurnManager)
    {
        if (ATurnBasedCharacter* CurrentChar = Cast<ATurnBasedCharacter>(
            TurnManager->GetCurrentTurnCharacter()))
        {
            if (UEnhancedMovementSystem* CurrentMoveSys =
                CurrentChar->FindComponentByClass<UEnhancedMovementSystem>())
            {
                TurnDisplayWidget->UpdateStamina(
                    NewResource,
                    CurrentMoveSys->MaxMovementResource
                );
            }
        }
    }
}
