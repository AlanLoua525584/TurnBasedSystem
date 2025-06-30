// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/SimpleTurnManager.h"
#include "Public/DebugHelper.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "Kismet/GameplayStatics.h" 
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


	//廣播事件
	OnTurnChanged.Broadcast(GetCurrentTurnCharacter());
	OnPhaseChanged.Broadcast(GetCurrentTurnCharacter(), CurrentPhase);
}

void ASimpleTurnManager::PossessCurrentTurnCharacter()
{
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

	// 只 Possess 玩家控制的角色
	if (CurrentCharacter->bIsPlayerControlled)
	{
		// 檢查是否已經在控制這個角色
		if (PC->GetPawn() != CurrentCharacter)
		{
			PC->Possess(CurrentCharacter);
			Debug::Print(FString::Printf(TEXT("Possessed %s"), *CurrentCharacter->GetActorLabel()), FColor::Green);
		}

		// 聚焦相機到角色
		PC->FocusOnActor(CurrentCharacter, 600.0f);



		// 重置動態模式狀態
		PC->bIsInDynamicMode = false;
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

// Called every frame
void ASimpleTurnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

