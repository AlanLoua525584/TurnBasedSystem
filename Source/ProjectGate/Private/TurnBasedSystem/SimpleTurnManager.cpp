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

	//������e���⪺�^�X
	if (ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(TurnOrder[CurrentTurnIndex]))
	{
		CurrentCharacter->OnTurnEnd();
	}

	// Move to the next character in the turn order

	CurrentTurnIndex = (CurrentTurnIndex + 1) % TurnOrder.Num();
	CurrentPhase = ETurnPhase::TurnStart; // Reset phase to TurnStart for the new character

	//�p�G�^��Ĥ@�Ө���A��ܷs���@���}�l

	if (CurrentTurnIndex == 0)
	{
		TurnCount++;
	Debug::Print(FString::Printf(TEXT("Turn %d started."), TurnCount), FColor::Green);
	}

	//�}�l�s���⪺�^�X
	if (ATurnBasedCharacter* NewCharacter = Cast<ATurnBasedCharacter>(TurnOrder[CurrentTurnIndex]))
	{
		NewCharacter->OnTurnStart();
		Debug::Print(FString::Printf(TEXT("Turn changed to: %s"), *NewCharacter->GetActorLabel()), FColor::Cyan);
	}

	//Possess �s����


	//�s���ƥ�
	OnTurnChanged.Broadcast(GetCurrentTurnCharacter());
	OnPhaseChanged.Broadcast(GetCurrentTurnCharacter(), CurrentPhase);
}

void ASimpleTurnManager::PossessCurrentTurnCharacter()
{
	// ��� PlayerController
	AGridPlayerController* PC = Cast<AGridPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (!PC)
	{
		Debug::Print(TEXT("ERROR: No GridPlayerController found!"), FColor::Red);
		return;
	}

	// �����e�^�X����
	ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(GetCurrentTurnCharacter());
	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("ERROR: No current character to possess!"), FColor::Red);
		return;
	}

	// �u Possess ���a�������
	if (CurrentCharacter->bIsPlayerControlled)
	{
		// �ˬd�O�_�w�g�b����o�Ө���
		if (PC->GetPawn() != CurrentCharacter)
		{
			PC->Possess(CurrentCharacter);
			Debug::Print(FString::Printf(TEXT("Possessed %s"), *CurrentCharacter->GetActorLabel()), FColor::Green);
		}

		// �E�J�۾��쨤��
		PC->FocusOnActor(CurrentCharacter, 600.0f);



		// ���m�ʺA�Ҧ����A
		PC->bIsInDynamicMode = false;
	}
	else
	{
		// AI �������A���� Possess
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
		// Preparation phase �� Main phase
		CurrentPhase = ETurnPhase::MainPhase;
		Debug::Print(FString::Printf(TEXT("[%s] Enter MainPhase"), *CharacterName), FColor::Green);
		break;

	case ETurnPhase::MainPhase:
		// Main phase �� Action phase
		CurrentPhase = ETurnPhase::TurnEnd;
		Debug::Print(FString::Printf(TEXT("[%s] Enter TurnEnd"), *CharacterName), FColor::Yellow);
		break;

	case ETurnPhase::TurnEnd:
		// Action phase �� Turn start of the next character
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

	//�۰ʴM��å[�J�Ҧ�TurnBasedCharacter
	
	TArray<AActor*> FoundCharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedCharacter::StaticClass(), FoundCharacters);

	Debug::Print(FString::Printf(TEXT("Found %d TurnBasedCharacters"), FoundCharacters.Num()), FColor::Yellow);

	for (AActor* Actor : FoundCharacters)
	{
		AddCharacter(Actor);
		Debug::Print(FString::Printf(TEXT("Added: %s"), *Actor->GetName()), FColor::Green);
	}

	// �p�G������A�۰ʶ}�l�԰�
	if (TurnOrder.Num() > 0)
	{
		// ����@�V�}�l�A�T�O�Ҧ��F�賣��l�Ƨ���
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

