// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectGateGameMode.h"
#include "ProjectGateCharacter.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
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

           

            // Find existing characters in the scene and add them to turn manager
            TArray<AActor*> FoundCharacters;
            UGameplayStatics::GetAllActorsOfClass(
                GetWorld(),
                ATurnBasedCharacter::StaticClass(),
                FoundCharacters
            );

            Debug::Print(FString::Printf(TEXT("Found %d characters in scene"), FoundCharacters.Num()), FColor::Yellow);

            for (AActor* Character : FoundCharacters)
            {
                if (Character)
                {
                    TurnManager->AddCharacter(Character);
                    Debug::Print(FString::Printf(TEXT("Added %s to turn order"),
                        *Character->GetActorLabel()), FColor::Yellow);
                }
            }

            // Start battle
            TurnManager->StartBattle();

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
                            // If not in TurnEnd phase, move to TurnEnd
                            if (TurnManager->GetCurrentPhase() != ETurnPhase::TurnEnd)
                            {
                                // Directly set to TurnEnd phase
                                while (TurnManager->GetCurrentPhase() != ETurnPhase::TurnEnd)
                                {
                                    TurnManager->NextPhase();
                                }
                            }
                            // Then switch to next turn
                            TurnManager->NextPhase();
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

    Debug::Print(TEXT("Manual control mode enabled - use buttons to control turns"), FColor::Yellow);
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
            PrevChar->OnActionPointsChanged.RemoveAll(this);

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
            TurnChar->OnActionPointsChanged.AddDynamic(this, &AProjectGateGameMode::OnAPChanged);


            //初始化UI
            {
                TurnDisplayWidget->UpdateActionPoints(
                    TurnChar->GetCurrentActionPoints(),
                    TurnChar->GetMaxActionPoints()
                );
            }


            //找到 PlayerController
            if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
            {
                // 如果角色已經有控制器，先取消
                if (TurnChar->GetController() && TurnChar->GetController() != PC)
                {
                    TurnChar->GetController()->UnPossess();
                }

                // PlayerController 接管角色
                PC->Possess(TurnChar);

                Debug::Print(FString::Printf(TEXT("PlayerController is now controlling %s"), *TurnChar->GetActorLabel()), FColor::Green);

            }
            ;
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
