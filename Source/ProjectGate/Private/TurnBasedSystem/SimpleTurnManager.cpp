// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/SimpleTurnManager.h"
#include "Public/DebugHelper.h"

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

	CurrentTurnIndex = 0;
	CurrentPhase = ETurnPhase::TurnStart;
	TurnCount = 1; // Initialize turn count

	OnTurnChanged.Broadcast(GetCurrentTurnCharacter());
	OnPhaseChanged.Broadcast(GetCurrentTurnCharacter(), CurrentPhase);

	bBattleStarted = true;
	CurrentTurnIndex = 0; // Reset to the first character

	UE_LOG(LogTemp, Warning, TEXT("Battle started with %d characters."), TurnOrder.Num());

	//TheFirstTurn

	if (OnTurnChanged.IsBound())
	{
		OnTurnChanged.Broadcast(TurnOrder[CurrentTurnIndex]);
	}


}

void ASimpleTurnManager::NextTurn()
{
	if (!bBattleStarted || TurnOrder.Num() == 0)return;

	// Move to the next character in the turn order

	CurrentTurnIndex = (CurrentTurnIndex + 1) % TurnOrder.Num();
	CurrentPhase = ETurnPhase::TurnStart; // Reset phase to TurnStart for the new character

	//如果回到第一個角色，表示新的一輪開始

	if (CurrentTurnIndex == 0)
	{
		TurnCount++;
	Debug::Print(FString::Printf(TEXT("Turn %d started."), TurnCount), FColor::Green);
	}

	OnTurnChanged.Broadcast(GetCurrentTurnCharacter());
	OnPhaseChanged.Broadcast(GetCurrentTurnCharacter(), CurrentPhase);

	if (CurrentTurnIndex >= TurnOrder.Num())
	{
		CurrentTurnIndex = 0; // Loop back to the first character
	}

	UE_LOG(LogTemp, Warning, TEXT("Turn changed to: %s"), *TurnOrder[CurrentTurnIndex]->GetName());

	//Notice Turn Changed

	if (OnTurnChanged.IsBound())
	{
		OnTurnChanged.Broadcast(TurnOrder[CurrentTurnIndex]);
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
	
}

// Called every frame
void ASimpleTurnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

