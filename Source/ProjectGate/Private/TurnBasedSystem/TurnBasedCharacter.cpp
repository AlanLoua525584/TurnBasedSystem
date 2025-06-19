// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Engine.h"
#include "Public/DebugHelper.h"
#include "DrawDebugHelpers.h"

// Sets default values
ATurnBasedCharacter::ATurnBasedCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//�]�w�w�]���ʳt��
	GetCharacterMovement()->MaxWalkSpeed = MoveSpeed;
}


// Called when the game starts or when spawned
void ATurnBasedCharacter::BeginPlay()
{
	Super::BeginPlay();

	//��l�Ʀ���I��
	CurrentActionPoints = MaxActionPoints;

	Debug::Print(FString::Printf(TEXT("%s initialized with %d AP"),
		*GetActorLabel(), CurrentActionPoints), FColor::Green);

}

void ATurnBasedCharacter::ResetActionPoints()
{
	CurrentActionPoints = MaxActionPoints;
	OnActionPointsChanged.Broadcast(CurrentActionPoints);

	FString Msg = FString::Printf(TEXT("%s: Action Points Reset to %d"),
		*GetActorLabel(), CurrentActionPoints);

	Debug::Print(Msg, FColor::Green);

}

bool ATurnBasedCharacter::CanPerformAction(int32 ActionCost) const
{
	return CurrentActionPoints >= ActionCost&& bIsMyTurn;
}

void ATurnBasedCharacter::ConsumeActionPoints(int32 Amount)
{
	CurrentActionPoints = FMath::Max(0, CurrentActionPoints - Amount);
	OnActionPointsChanged.Broadcast(CurrentActionPoints);

	FString Msg = FString::Printf(TEXT("%s: Used %d AP, Remaining: %d"),
		*GetActorLabel(), Amount, CurrentActionPoints);
	Debug::Print(Msg, FColor::Yellow);
}

bool ATurnBasedCharacter::TryMove(FVector TargetLocation)
{
	//�ˬd�O�_����ۤv
	if (!bIsMyTurn)
	{
		Debug::Print(TEXT("Not your turn!"), FColor::Red);
		return false;
	}

	//�ˬd�O�_������������I
	if (!CanPerformAction(MoveActionCost))
	{
		Debug::Print(TEXT("Not enough Action Points to move!"), FColor::Red);
		return false;
	}

	//�ˬd�O�_���b����
	if (bIsMoving)
	{
		Debug::Print(TEXT("Already moving!"), FColor::Red);
		return false;
	}

	//�x�s�ؼЦ�m
	MoveTargetLocation = TargetLocation;

	//���沾��
	PerfromMove();

	//���Ӧ���I
	ConsumeActionPoints(MoveActionCost);

	//�s����ʨƥ�
	OnActionPerformed.Broadcast(TEXT("Move"), MoveActionCost);

	return true;
}

bool ATurnBasedCharacter::TryAttack(AActor* TargetActor)
{
	//�ˬd�O�_����ۤv
	if (!bIsMyTurn)
	{
		Debug::Print(TEXT("Not your turn!"), FColor::Red);
		return false;
	}

	//�ˬd�ؼ�
	if (!TargetActor)
	{
		Debug::Print(TEXT("No target selected!"), FColor::Red);
		return false;
	}

	//�ˬd�O�_������������I
	if (!CanPerformAction(AttackActionCost))
	{
		Debug::Print(TEXT("Not enough Action Points to attack!"), FColor::Red);
		return false;
	}

	//�ˬd�Z��
	float Distance = FVector::Dist(GetActorLocation(), TargetActor->GetActorLocation());
	if (Distance > AttackRange)
	{
		Debug::Print(FString::Printf(TEXT("Target out of range! Distance: %.2f, Range: %.2f"),
			Distance, AttackRange), FColor::Red);
		return false;
	}

	//�������
	PerformAttack(TargetActor);

	//���Ӧ���I
	ConsumeActionPoints(AttackActionCost);

	//�s����ʨƥ�
	OnActionPerformed.Broadcast(TEXT("Attack"), AttackActionCost);


	return true;
}

void ATurnBasedCharacter::OnTurnStart()
{
	bIsMyTurn = true;

	//���m����I��
	ResetActionPoints();

	//��ı����-���ܨ���~�[���C��
	GetCapsuleComponent()->SetRenderCustomDepth(true);
	GetCapsuleComponent()->SetCustomDepthStencilValue(252); 

	FString Msg = FString::Printf(TEXT("=== %s's Turn Started ==="), *GetActorLabel());
	Debug::Print(Msg, FColor::Cyan, 3);

}

void ATurnBasedCharacter::OnTurnEnd()
{
	bIsMyTurn = false;

	//��ı����-��_����~�[���C��
	GetCapsuleComponent()->SetRenderCustomDepth(false);

	FString Msg = FString::Printf(TEXT("=== %s's Turn Ended ==="), *GetActorLabel());
	Debug::Print(Msg, FColor::Orange, 2);

}

void ATurnBasedCharacter::PerfromMove()
{
	//²�沾���޿�
	bIsMoving = true;

	//ø�s���ʥؼ�(������)
	DrawDebugSphere(
		GetWorld(),
		MoveTargetLocation,
		50.0f,
		12,
		FColor::Green,
		false,
		3.0f
	);

	//ø�s���ʸ��|
	DrawDebugLine(
		GetWorld(),
		GetActorForwardVector(),
		MoveTargetLocation,
		FColor::Green,
		false,
		3.0f
		);

	//�����@��@��ڪ������޿�
	//�Ҧp�G�ϥ� AIController �� MoveToLocation

	bIsMoving = false;

	FString Msg = FString::Printf(TEXT("%s moved to new position"), *GetActorLabel());
	Debug::Print(Msg, FColor::Green);

}

void ATurnBasedCharacter::PerformAttack(AActor* TargetActor)
{
	//²�檺�����޿�

	FString Msg = FString::Printf(TEXT("%s attacks %s for %d damage!"),
		*GetActorLabel(), *TargetActor->GetActorLabel(), AttackDamage);
	Debug::Print(Msg, FColor::Red, 3);

	//ø�s�����u��(������)
	DrawDebugLine(
		GetWorld(),
		GetActorLocation() + FVector(0, 0, 50),  // �q���⤤�ߵo�g
		TargetActor->GetActorLocation() + FVector(0, 0, 50),
		FColor::Red,
		false,
		2.0f,
		0,
		5.0f
	);

	//ø�s�ˮ`�Ʀr��m
	DrawDebugString(
		GetWorld(),
		TargetActor->GetActorLocation() + FVector(0, 0, 100),
		FString::Printf(TEXT("-%d"), AttackDamage),
		nullptr,
		FColor::Red,
		2.0f,
		true,
		1.5f
	);

	// �o�̥i�H��@��ڪ��ˮ`�B�z
	// �Ҧp�G�I�s Target �� TakeDamage ���


}

bool ATurnBasedCharacter::IsMyTurn() const
{
	return false;
}







// Called every frame
void ATurnBasedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATurnBasedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

