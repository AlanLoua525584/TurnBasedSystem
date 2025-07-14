// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/TurnOrderCalculator.h"          
#include "TurnBasedSystem/DataAssets/TurnOrderConfig.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "TurnBasedSystem/Components/UI/UIManagerComponent.h"
#include "Public/DebugHelper.h"
#include "FreeCameraPawn.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "Kismet/GameplayStatics.h" 
#include "CombatSystem/CombatStats.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatInterface.h"
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

// Called when the game starts or when spawned
void ASimpleTurnManager::BeginPlay()
{
	Super::BeginPlay();
	//創建回合順序計算器
		TurnOrderCalculator = NewObject<UTurnOrderCalculator>(this, UTurnOrderCalculator::StaticClass());

	// 如果有配置資產，應用它
	if (TurnOrderConfig)
	{
		ApplyTurnOrderConfig(TurnOrderConfig);
		Debug::Print(TEXT("Applied TurnOrder configuration from asset"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("Using default TurnOrder configuration"), FColor::Yellow);
	}

	Debug::Print(TEXT("SimpleTurnManager initialized with TurnOrderCalculator"), FColor::Green);
}

void ASimpleTurnManager::AddCharacter(AActor* Character)
{
	if (!Character)return;

	// 防止重複添加
	if (TurnOrder.Contains(Character))
	{
		Debug::Print(FString::Printf(TEXT("Character %s already in turn order, skipping"),
			*Character->GetName()), FColor::Yellow);
		return;
	}



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

	if (bBattleStarted)
	{
		Debug::Print(TEXT("Battle already started, ignoring duplicate call"), FColor::Yellow);
		return;
	}

	bBattleStarted = true;
	CurrentTurnIndex = 0;
	CurrentPhase = ETurnPhase::TurnStart;
	TurnCount = 1;

	// 使用新的計算器系統
	RecalculateTurnOrder();

	Debug::Print(FString::Printf(TEXT("Battle started with %d characters."), TurnOrder.Num()), FColor::Green);

	// 確保第一個角色是玩家角色
	if (ATurnBasedCharacter* FirstCharacter = Cast<ATurnBasedCharacter>(TurnOrder[0]))
	{
		if (!FirstCharacter->bIsPlayerControlled)
		{
			Debug::Print(TEXT("WARNING: First character is not player controlled!"), FColor::Yellow);
		}

		// 開始第一個角色的回合
		FirstCharacter->OnTurnStart();
		OnTurnChanged.Broadcast(FirstCharacter);
		OnPhaseChanged.Broadcast(FirstCharacter, CurrentPhase);

		PossessCurrentTurnCharacter();

	}

		/*
		// 確保第一個角色是玩家角色
		if (ATurnBasedCharacter* FirstCharacter = Cast<ATurnBasedCharacter>(TurnOrder[0]))
		{
			if (!FirstCharacter->bIsPlayerControlled)
			{
				Debug::Print(TEXT("WARNING: First character is not player controlled!"), FColor::Red);

				// 嘗試找到玩家角色並交換到第一位
				for (int32 i = 1; i < TurnOrder.Num(); i++)
				{
					if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(TurnOrder[i]))
					{
						if (Character->bIsPlayerControlled)
						{
							TurnOrder.Swap(0, i);
							Debug::Print(TEXT("Swapped player character to first position"), FColor::Green);
							break;
						}
					}
				}
			}
		}

		// 確保所有角色的回合狀態都是結束的
		for (AActor* Actor : TurnOrder)
		{
			if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(Actor))
			{
				// 清除任何現有的 Controller 綁定（玩家角色）
				if (Character->bIsPlayerControlled && Character->Controller)
				{
					Debug::Print(FString::Printf(TEXT("Clearing controller from %s before battle start"),
						*Character->GetActorLabel()), FColor::Orange);
					if (AController* OldController = Character->Controller)
					{
						OldController->UnPossess();
					}
				}

				if (UTurnSystemComponent* TurnSystem = Character->GetTurnSystemComponent())
				{
					if (TurnSystem->IsMyTurn())
					{
						TurnSystem->OnTurnEnd();
					}
				}
			}
		}

		// 延遲一幀再 Possess，確保清理完成
		FTimerHandle PossessTimer;
		GetWorld()->GetTimerManager().SetTimer(PossessTimer, [this]()
			{
				// Possess 第一個角色
				PossessCurrentTurnCharacter();

				// 開始第一個角色的回合
				if (ATurnBasedCharacter* FirstCharacter = Cast<ATurnBasedCharacter>(TurnOrder[CurrentTurnIndex]))
				{
					if (UTurnSystemComponent* TurnSystem = FirstCharacter->GetTurnSystemComponent())
					{
						TurnSystem->OnTurnStart();
					}
				}

				// 廣播事件
				OnTurnChanged.Broadcast(GetCurrentTurnCharacter());
				OnPhaseChanged.Broadcast(GetCurrentTurnCharacter(), CurrentPhase);

			}, 0.1f, false);
			*/
	
}

void ASimpleTurnManager::NextTurn()
{
	if (!bBattleStarted || TurnOrder.Num() == 0) return;

	// 結束當前角色的回合
	if (AActor* CurrentCharacter = GetCurrentTurnCharacter())
	{
		if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(CurrentCharacter))
		{
			TurnChar->OnTurnEnd();
		}
	}

	// 移動到下一個角色
	CurrentTurnIndex = (CurrentTurnIndex + 1) % TurnOrder.Num();

	// 如果回到第一個角色，增加回合數
	if (CurrentTurnIndex == 0)
	{
		TurnCount++;
		Debug::Print(FString::Printf(TEXT("=== ROUND %d START ==="), TurnCount), FColor::Cyan, 3.0f);

		// 根據配置決定是否重新計算先攻值
		if (TurnOrderConfig && TurnOrderConfig->bRecalculateEachRound)
		{
			RecalculateTurnOrder();
			// 確保當前索引仍然有效
			CurrentTurnIndex = CurrentTurnIndex % TurnOrder.Num();
		}
	}

	// 開始新角色的回合
	if (AActor* NewCharacter = GetCurrentTurnCharacter())
	{
		if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(NewCharacter))
		{
			TurnChar->OnTurnStart();
			OnTurnChanged.Broadcast(NewCharacter);
			OnPhaseChanged.Broadcast(NewCharacter, ETurnPhase::TurnStart);

			// 更新UI
			UpdateTurnOrderUI();

			// Possess角色
			PossessCurrentTurnCharacter();
		}
	}



	/*
	if (!bBattleStarted || TurnOrder.Num() == 0) return;

	Debug::Print(TEXT("=== NextTurn 開始 ==="), FColor::Cyan);

	// === 新增：保存舊索引和角色 ===
	int32 OldIndex = CurrentTurnIndex;
	AActor* OldCharacter = TurnOrder[OldIndex];

	// === 新增：更新索引 ===
	CurrentTurnIndex = (CurrentTurnIndex + 1) % TurnOrder.Num();
	Debug::Print(FString::Printf(TEXT("更新索引: %d -> %d"),
		OldIndex, CurrentTurnIndex), FColor::Green);

	// === 新增：獲取新角色 ===
	AActor* NewCharacter = TurnOrder[CurrentTurnIndex];
	Debug::Print(FString::Printf(TEXT("新角色: %s (索引: %d)"),
		*NewCharacter->GetActorLabel(), CurrentTurnIndex), FColor::Blue);

	// === 修改：結束舊角色的回合 ===
	if (ATurnBasedCharacter* OldTurnChar = Cast<ATurnBasedCharacter>(OldCharacter))
	{
		Debug::Print(FString::Printf(TEXT("結束回合: %s"),
			*OldTurnChar->GetActorLabel()), FColor::Orange);

		if (UTurnSystemComponent* TurnSystem = OldTurnChar->GetTurnSystemComponent())
		{
			TurnSystem->OnTurnEnd();
		}
	}

	// === 修改：開始新角色的回合 ===
	if (ATurnBasedCharacter* NewTurnChar = Cast<ATurnBasedCharacter>(NewCharacter))
	{
		Debug::Print(FString::Printf(TEXT("開始新回合: %s"),
			*NewTurnChar->GetActorLabel()), FColor::Cyan);

		if (UTurnSystemComponent* TurnSystem = NewTurnChar->GetTurnSystemComponent())
		{
			TurnSystem->OnTurnStart();
		}
	}

	// === 修改：處理控制權切換 ===
	PossessCharacter(NewCharacter);  // 使用新角色而非索引

	// === 修改：廣播事件 ===
	OnTurnChanged.Broadcast(NewCharacter);
	OnPhaseChanged.Broadcast(NewCharacter, CurrentPhase);

	// === 修改：回合計數 ===
	if (CurrentTurnIndex == 0)
	{
		TurnCount++;
		Debug::Print(FString::Printf(TEXT("回合 %d 開始"), TurnCount), FColor::Green);
	}

	Debug::Print(TEXT("===  NextTurn() 結束 ==="), FColor::Cyan);
	*/
}

void ASimpleTurnManager::PossessCurrentTurnCharacter()
{
	Debug::Print(TEXT("===  PossessCurrentTurnCharacter 開始 ==="), FColor::Cyan);

	AGridPlayerController* PC = Cast<AGridPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (!PC)
	{
		Debug::Print(TEXT("錯誤: 找不到 GridPlayerController!"), FColor::Red);
		return;
	}

	ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(GetCurrentTurnCharacter());
	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("錯誤: 沒有當前回合角色!"), FColor::Red);
		return;
	}

	Debug::Print(FString::Printf(TEXT("當前回合角色: %s (索引: %d)"),
		*CurrentCharacter->GetActorLabel(), CurrentTurnIndex), FColor::Green);

	// 先UnPossess任何現有的Pawn
	if (PC->GetPawn())
	{
		Debug::Print(FString::Printf(TEXT("UnPossess 當前Pawn: %s"),
			*PC->GetPawn()->GetName()), FColor::Yellow);
		PC->UnPossess();
	}

	// 只有玩家控制的角色才需要Possess
	if (CurrentCharacter->bIsPlayerControlled)
	{
		// 確保角色沒有其他Controller
		if (CurrentCharacter->Controller && CurrentCharacter->Controller != PC)
		{
			Debug::Print(TEXT("清理舊的Controller"), FColor::Yellow);
			CurrentCharacter->Controller->UnPossess();
		}

		// Possess新角色
		PC->PossessAndSyncCharacter(CurrentCharacter);

		// 驗證Possess成功
		if (PC->GetPawn() == CurrentCharacter)
		{
			Debug::Print(TEXT("Possess成功"), FColor::Green);

			// 確保Controller綁定正確
			if (CurrentCharacter->Controller != PC)
			{
				Debug::Print(TEXT("Controller綁定異常，嘗試修復"), FColor::Orange);
				CurrentCharacter->SetOwner(PC);
			}
		}
		else
		{
			Debug::Print(TEXT("Possess失敗!"), FColor::Red);
		}
	}
	else
	{
		Debug::Print(TEXT("AI角色回合 - 不需要Possess"), FColor::Blue);
	}

	// 處理相機
	PC->OnTurnChangedCamera(CurrentCharacter, CurrentCharacter->bIsPlayerControlled);

	Debug::Print(FString::Printf(TEXT("將 Possess: %s"), *CurrentCharacter->GetActorLabel()), FColor::Green);

	Debug::Print(TEXT("=== PossessCurrentTurnCharacter 結束 ==="), FColor::Cyan);
}


void ASimpleTurnManager::RemoveCharacter(AActor* Character)
{
	if (!bBattleStarted || TurnOrder.Num() == 0) return;

	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	AGridPlayerController* GridPC = Cast<AGridPlayerController>(PC);
	ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(GetCurrentTurnCharacter());

	if (!GridPC || !CurrentCharacter) return;

	GridPC->PossessAndSyncCharacter(CurrentCharacter);

	/*
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
	*/
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
	if (!TurnOrderCalculator)
	{
		Debug::Print(TEXT("ERROR: TurnOrderCalculator is null!"), FColor::Red);
		return;
	}

	// 使用計算器來計算和排序
	TurnOrderCalculator->CalculateAndSortTurnOrder(TurnOrder);

	// 更新UI
	UpdateTurnOrderUI();

	// 廣播事件
	OnTurnOrderChanged.Broadcast(TurnOrder);
	

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
// 新增：應用配置的方法
void ASimpleTurnManager::ApplyTurnOrderConfig(UTurnOrderConfig* Config)
{
	if (!Config || !TurnOrderCalculator) return;

	TurnOrderConfig = Config;
	Config->ApplyToCalculator(TurnOrderCalculator);

	// 如果戰鬥已開始，重新計算
	if (bBattleStarted)
	{
		RecalculateTurnOrder();
	}
}

// 新增：更新UI的方法
void ASimpleTurnManager::UpdateTurnOrderUI()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (AGridPlayerController* GridPC = Cast<AGridPlayerController>(PC))
	{
		if (UUIManagerComponent* UIManager = GridPC->GetUIManager())
		{
			UIManager->UpdateTurnOrderUI(TurnOrder, CurrentTurnIndex);
		}
	}
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


void ASimpleTurnManager::SetCurrentCharacterIndex(int32 NewIndex)
{
	if (TurnOrder.IsValidIndex(NewIndex))
	{
		CurrentTurnIndex = NewIndex;
		UpdateTurnOrderUI();
	}
}

void ASimpleTurnManager::PossessCharacter(AActor* CharacterToPossess)
{
	Debug::Print(TEXT("=== PossessCharacter 開始 ==="), FColor::Cyan);

	AGridPlayerController* PC = Cast<AGridPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (!PC)
	{
		Debug::Print(TEXT("錯誤: 找不到 GridPlayerController!"), FColor::Red);
		return;
	}

	ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(CharacterToPossess);
	if (!Character)
	{
		Debug::Print(TEXT("錯誤: 傳入的角色無效!"), FColor::Red);
		return;
	}

	Debug::Print(FString::Printf(TEXT("要Possess的角色: %s"),
		*Character->GetActorLabel()), FColor::Green);

	// 先UnPossess任何現有的Pawn
	if (PC->GetPawn())
	{
		Debug::Print(FString::Printf(TEXT("UnPossess 當前Pawn: %s"),
			*PC->GetPawn()->GetName()), FColor::Yellow);
		PC->UnPossess();
	}

	// 只有玩家控制的角色才需要Possess
	if (Character->bIsPlayerControlled)
	{
		// 確保角色沒有其他Controller
		if (Character->Controller && Character->Controller != PC)
		{
			Debug::Print(TEXT("清理舊的Controller"), FColor::Yellow);
			Character->Controller->UnPossess();
		}

		// Possess新角色
		PC->PossessAndSyncCharacter(Character);

		// 驗證Possess成功
		if (PC->GetPawn() == Character)
		{
			Debug::Print(TEXT("Possess成功"), FColor::Green);

			// 確保Controller綁定正確
			if (Character->Controller != PC)
			{
				Debug::Print(TEXT("Controller綁定異常，嘗試修復"), FColor::Orange);
				Character->SetOwner(PC);
			}
		}
		else
		{
			Debug::Print(TEXT("Possess失敗!"), FColor::Red);
		}
	}
	else
	{
		Debug::Print(TEXT("AI角色回合 - 不需要Possess"), FColor::Blue);
	}

	// 處理相機
	PC->OnTurnChangedCamera(Character, Character->bIsPlayerControlled);

	Debug::Print(FString::Printf(TEXT("將 Possess: %s"), *Character->GetActorLabel()), FColor::Green);
	Debug::Print(TEXT("=== PossessCharacter 結束 ==="), FColor::Cyan);
}



int32 ASimpleTurnManager::CalculateInitiative(ATurnBasedCharacter* Character)
{
	// *** 修正：使用正確的接口調用方式獲取 CombatComponent ***
	UCombatComponent* CombatComp = nullptr;

	// 正確透過 interface 獲取
	if (Character->Implements<UCombatInterface>())
	{
		CombatComp = ICombatInterface::Execute_GetCombatComponent(Character);
	}
	else
	{
		CombatComp = Character->FindComponentByClass<UCombatComponent>();
	}

	if (!CombatComp)
	{
		Debug::Print(FString::Printf(TEXT("CalculateInitiative: %s has no CombatComponent"),
			*Character->GetActorLabel()), FColor::Red);
		return 0;
	}

	const FCombatStats& Stats = CombatComp->GetStats();

	int32 BaseInitiative = Stats.TurnOrderData.Initiative;
	int32 SpeedBonus = Stats.TurnOrderData.Speed / 2;

	int32 RandomFactor = FMath::RandRange(-10, 10);

	int32 StatusModifier = 0;
	if (Character->GetTurnSystemComponent() && Character->GetTurnSystemComponent()->IsSlowed())
	{
		StatusModifier -= 20;
	}
	if (Character->GetTurnSystemComponent() && Character->GetTurnSystemComponent()->IsHasted())
	{
		StatusModifier += 20;
	}

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

