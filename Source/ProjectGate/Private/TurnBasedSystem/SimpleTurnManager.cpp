// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/SimpleTurnManager.h"
#include "Public/DebugHelper.h"
#include "FreeCameraPawn.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "Kismet/GameplayStatics.h" 
#include "CombatSystem/CombatStats.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values
ASimpleTurnManager::ASimpleTurnManager()
{
	PrimaryActorTick.bCanEverTick = false;

	CurrentTurnIndex = 0;
	bBattleStarted = false;

	CurrentPhase = ETurnPhase::TurnStart;/*SetAsTurnStart*/ 
	TurnCount = 0; 

}

void ASimpleTurnManager::AddCharacter(AActor* Character)
{
	if (!Character)return;

	if (!TurnOrder.Contains(Character))
	{
		TurnOrder.Add(Character);
		UE_LOG(LogTemp, Warning, TEXT("Character added to turn order: %s"), *Character->GetName());
	}
}

void ASimpleTurnManager::StartBattle()
{
	if (TurnOrder.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No characters in turn order to start battle."));
		return;
	}

	bBattleStarted = true;
	CurrentTurnIndex = 0; // Reset to the first character
	CurrentPhase = ETurnPhase::TurnStart;
	TurnCount = 1; // Initialize turn count

	Debug::Print(FString::Printf(TEXT("Battle started with %d characters."), TurnOrder.Num()), FColor::Green);


	// Start The First character turn

	if (ATurnBasedCharacter* FirstCharacter = Cast<ATurnBasedCharacter>(TurnOrder[CurrentTurnIndex]))
	{
		FirstCharacter->OnTurnStart();
	}

	// Possess The First Character
	PossessCurrentTurnCharacter();


	OnTurnChanged.Broadcast(GetCurrentTurnCharacter());
	OnPhaseChanged.Broadcast(GetCurrentTurnCharacter(), CurrentPhase);


}

void ASimpleTurnManager::NextTurn()
{
	if (!bBattleStarted || TurnOrder.Num() == 0)return;

	//結束當前角色的回合
	if (ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(TurnOrder[CurrentTurnIndex]))
	{
		CurrentCharacter->OnTurnEnd();
	}

	// Move to the next character in the turn order

	CurrentTurnIndex = (CurrentTurnIndex + 1) % TurnOrder.Num();
	CurrentPhase = ETurnPhase::TurnStart; // Reset phase to TurnStart for the new character

	//如果回到第一個角色，表示新的一輪開始

	if (CurrentTurnIndex == 0)
	{
		TurnCount++;
	Debug::Print(FString::Printf(TEXT("Turn %d started."), TurnCount), FColor::Green);
	}

	//開始新角色的回合
	if (ATurnBasedCharacter* NewCharacter = Cast<ATurnBasedCharacter>(TurnOrder[CurrentTurnIndex]))
	{
		NewCharacter->OnTurnStart();
		Debug::Print(FString::Printf(TEXT("Turn changed to: %s"), *NewCharacter->GetActorLabel()), FColor::Cyan);
	}

	//Possess 新角色
	PossessCurrentTurnCharacter();

	//廣播事件
	OnTurnChanged.Broadcast(GetCurrentTurnCharacter());
	OnPhaseChanged.Broadcast(GetCurrentTurnCharacter(), CurrentPhase);
}

void ASimpleTurnManager::PossessCurrentTurnCharacter()
{
	Debug::Print(TEXT("==Start PossessCurrentTurnCharacter"), FColor::Red);

	// 獲取 PlayerController
	AGridPlayerController* PC = Cast<AGridPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (!PC)
	{
		Debug::Print(TEXT("ERROR: No GridPlayerController found!"), FColor::Red);
		return;
	}

	// 獲取當前回合角色
	ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(GetCurrentTurnCharacter());
	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("ERROR: No current character to possess!"), FColor::Red);
		return;
	}

	// 重置動態模式狀態
	if (PC->bIsInDynamicMode)
	{
		Debug::Print(TEXT("Exiting Dynamic Mode before turn change"), FColor::Yellow);

		// 獲取當前控制的角色
		if (ATurnBasedCharacter* OldCharacter = PC->GetControlledTurnCharacter())
		{
			if (UEnhancedMovementSystem* MovementSystem = OldCharacter->GetComponentByClass<UEnhancedMovementSystem>())
			{
				// 停止動態移動
				MovementSystem->SwitchMovementMode(ECustomMovementMode::Idle);
			}

			// 清理移動模式
			OldCharacter->SetMovementMode(false);
		}
		// 重置動態模式狀態
		PC->bIsInDynamicMode = false;


		// 通知 UI 更新
		PC->UIOnMovementModeChanged.Broadcast(false);
	}


		// 只 Possess 玩家控制的角色
		if (CurrentCharacter->bIsPlayerControlled)
		{
			Debug::Print(TEXT("PossessCurrentTurnCharacterWorking"), FColor::Red);

			if (PC->GetPawn() != CurrentCharacter)
			{
				PC->Possess(CurrentCharacter);
				Debug::Print(FString::Printf(TEXT("Possessed %s"), *CurrentCharacter->GetActorLabel()), FColor::Green);
			}

		}
		else
		{
			// AI 控制的角色，取消 Possess
			if (PC->GetPawn())
			{
				PC->UnPossess();
				Debug::Print(TEXT("UnPossessed for AI turn"), FColor::Yellow);
			}
		}

		// 使用 GridPlayerController 的公開方法處理相機
		PC->OnTurnChangedCamera(CurrentCharacter, CurrentCharacter->bIsPlayerControlled);
	
}

void ASimpleTurnManager::RemoveCharacter(AActor* Character)
{
	if (!Character || !TurnOrder.Contains(Character)) return;

	Debug::Print(FString::Printf(TEXT("Removing %s from turn order"),
		*Character->GetName()), FColor::Orange);
	// 記錄是否是當前回合角色
	bool bWasCurrentTurn = (CurrentTurnIndex < TurnOrder.Num() &&
		TurnOrder[CurrentTurnIndex] == Character);

	// 找到角色的索引
	int32 CharacterIndex = TurnOrder.IndexOfByKey(Character);

	// 從列表中移除
	TurnOrder.RemoveAt(CharacterIndex);

	// 調整當前索引
	if (CharacterIndex < CurrentTurnIndex)
	{
		CurrentTurnIndex--;
	}
	else if (CharacterIndex == CurrentTurnIndex)
	{
		// 如果移除的是當前角色，不需要增加索引
		// NextTurn 會處理
	}

	// 確保索引有效
	if (TurnOrder.Num() > 0)
	{
		CurrentTurnIndex = CurrentTurnIndex % TurnOrder.Num();
	}

	Debug::Print(FString::Printf(TEXT("Remaining characters: %d"), TurnOrder.Num()), FColor::Yellow);

	// 檢查戰鬥是否結束
	if (CheckBattleEnd())
	{
		return; // 戰鬥結束，不需要繼續
	}

	// 如果移除的是當前回合角色，切換到下一個
	if (bWasCurrentTurn && TurnOrder.Num() > 0)
	{
		// 重置階段
		CurrentPhase = ETurnPhase::TurnStart;

		// 觸發新角色的回合
		AActor* NewCurrentCharacter = TurnOrder[CurrentTurnIndex];
		OnTurnChanged.Broadcast(NewCurrentCharacter);
		OnPhaseChanged.Broadcast(NewCurrentCharacter, CurrentPhase);

		Debug::Print(FString::Printf(TEXT("Turn passed to: %s"),
			*NewCurrentCharacter->GetActorLabel()), FColor::Green);
	}
}

bool ASimpleTurnManager::CheckBattleEnd()
{
	if (TurnOrder.Num() == 0)
	{
		Debug::Print(TEXT("=== BATTLE ENDED: No characters remaining ==="), FColor::Red, 5.0f);
		OnBattleEnded.Broadcast(false);
		return true;
	}

	// 檢查是否只剩一個陣營
	bool bHasPlayer = false;
	bool bHasEnemy = false;

	for (AActor* Character : TurnOrder)
	{
		if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(Character))
		{
			if (TurnChar->bIsPlayerControlled)
			{
				bHasPlayer = true;
			}
			else
			{
				bHasEnemy = true;
			}
		}
	}

	// 只剩一個陣營
	if (bHasPlayer && !bHasEnemy)
	{
		Debug::Print(TEXT("=== BATTLE WON! All enemies defeated! ==="), FColor::Green, 5.0f);
		OnBattleEnded.Broadcast(true);
		return true;
	}
	else if (!bHasPlayer && bHasEnemy)
	{
		Debug::Print(TEXT("=== BATTLE LOST! All players defeated! ==="), FColor::Red, 5.0f);
		OnBattleEnded.Broadcast(false);
		return true;
	}

	return false;
}

void ASimpleTurnManager::RecalculateTurnOrder()
{

	
	// 為每個角色計算先攻值
	for (AActor* Actor : TurnOrder)
	{
		if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(Actor))
		{
			Character->CurrentInitiative = CalculateInitiative(Character);

			// 廣播更新事件
			Character->OnTurnOrderChanged.Broadcast(Character->CurrentInitiative);

		}


	}
	

}

TArray<AActor*> ASimpleTurnManager::GetSortedTurnOrder() const
{
	return TArray<AActor*>();
}

void ASimpleTurnManager::DelayCharacterTurn(AActor* Character, int32 DelayTurns)
{
}

void ASimpleTurnManager::InsertImmediateAction(AActor* Character)
{
}

int32 ASimpleTurnManager::GetAliveCharacterCount() const
{
	return TurnOrder.Num();
}

void ASimpleTurnManager::NextPhase()
{
	// Make sure the battle has started and there are characters in the turn order
	if (!bBattleStarted || TurnOrder.Num() == 0)
	{
		Debug::Print(TEXT("NextPhase: Battle not started or no characters"), FColor::Red);
		return;
	}

	//Get the current character's name for debugging
	AActor* CurrentCharacter = TurnOrder[CurrentTurnIndex];
	FString CharacterName = CurrentCharacter ? CurrentCharacter->GetName() : "Unknown";

	//NewCharacter's Name
	AActor* NewCharacter = TurnOrder[CurrentTurnIndex];
	FString NewCharacterName = NewCharacter ? NewCharacter->GetName() : "Unknown";

	// Determine the next phase based on the current phase
	switch (CurrentPhase)
	{
	case ETurnPhase::TurnStart:
		// Preparation phase → Main phase
		CurrentPhase = ETurnPhase::MainPhase;
		Debug::Print(FString::Printf(TEXT("[%s] Enter MainPhase"), *CharacterName), FColor::Green);
		break;

	case ETurnPhase::MainPhase:
		// Main phase → Action phase
		CurrentPhase = ETurnPhase::TurnEnd;
		Debug::Print(FString::Printf(TEXT("[%s] Enter TurnEnd"), *CharacterName), FColor::Yellow);
		break;

	case ETurnPhase::TurnEnd:
		// Action phase → Turn start of the next character
		Debug::Print(FString::Printf(TEXT("[%s] Turn Finished"), *CharacterName), FColor::Orange);
		NextTurn();
		CurrentPhase = ETurnPhase::TurnStart;
		break;
	}

		
	

	// Broadcast the phase change event
	OnPhaseChanged.Broadcast(CurrentCharacter, CurrentPhase);

}



ETurnPhase ASimpleTurnManager::GetCurrentPhase() const
{
	return CurrentPhase;
}

int32 ASimpleTurnManager::GetTurnCount() const
{
	return TurnCount;
}

AActor* ASimpleTurnManager::GetCurrentTurnCharacter() const
{
	if (!bBattleStarted || TurnOrder.Num() == 0)return nullptr;

	return TurnOrder[CurrentTurnIndex];
}

TArray<AActor*> ASimpleTurnManager::GetTurnOrder() const
{
	return TurnOrder;
}

int32 ASimpleTurnManager::GetCurrentCharacterIndex() const
{
	return CurrentTurnIndex;
}


// Called when the game starts or when spawned
void ASimpleTurnManager::BeginPlay()
{
	Super::BeginPlay();

	//自動尋找並加入所有TurnBasedCharacter
	
	TArray<AActor*> FoundCharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedCharacter::StaticClass(), FoundCharacters);

	Debug::Print(FString::Printf(TEXT("Found %d TurnBasedCharacters"), FoundCharacters.Num()), FColor::Yellow);

	for (AActor* Actor : FoundCharacters)
	{
		AddCharacter(Actor);
		Debug::Print(FString::Printf(TEXT("Added: %s"), *Actor->GetName()), FColor::Green);
	}

	// 如果有角色，自動開始戰鬥
	if (TurnOrder.Num() > 0)
	{
		// 延遲一幀開始，確保所有東西都初始化完成
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
			{
				StartBattle();
				Debug::Print(TEXT("Battle Auto-Started!"), FColor::Green);
			});
	}
}

int32 ASimpleTurnManager::CalculateInitiative(ATurnBasedCharacter* Character)
{
	if (!Character || !Character->CombatComponent) return 0;

	const FCombatStats& Stats = Character->CombatComponent->GetStats();

	// 基礎先攻值計算
	int32 BaseInitiative = Stats.TurnOrderData.Initiative;
	int32 SpeedBonus = Stats.TurnOrderData.Speed / 2;  // 速度提供50%加成

	// 隨機因素 (避免每回合順序完全相同)
	int32 RandomFactor = FMath::RandRange(-10, 10);

	// 狀態影響
	int32 StatusModifier = 0;
	if (Character->bIsSlowed) StatusModifier -= 20;
	if (Character->bIsHasted) StatusModifier += 20;

	return BaseInitiative + SpeedBonus + RandomFactor + StatusModifier;
}

void ASimpleTurnManager::SortTurnOrderByInitiative()
{
	TurnOrder.Sort([](const AActor& A, const AActor& B)
		{
			const ATurnBasedCharacter* CharA = Cast<ATurnBasedCharacter>(&A);
			const ATurnBasedCharacter* CharB = Cast<ATurnBasedCharacter>(&B);

			if (!CharA || !CharB) return false;

			// 先攻值高的排前面
			return CharA->CurrentInitiative > CharB->CurrentInitiative;
		});

	Debug::Print(TEXT("=== Turn Order Updated ==="), FColor::Cyan);
	for (int32 i = 0; i < TurnOrder.Num(); i++)
	{
		if (ATurnBasedCharacter* Char = Cast<ATurnBasedCharacter>(TurnOrder[i]))
		{
			Debug::Print(FString::Printf(TEXT("%d. %s (Initiative: %d)"),
				i + 1,
				*Char->GetActorLabel(),
				Char->CurrentInitiative),
				FColor::White);
		}
	}
}

// Called every frame
void ASimpleTurnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASimpleTurnManager::HandleCharacterDeath(AActor* DeadCharacter)
{
}

