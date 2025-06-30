// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "TurnBasedSystem/GridManager.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "TimerManager.h"
#include "Navigation/PathFollowingComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h" 


#include "Public/DebugHelper.h"


// Sets default values
ATurnBasedCharacter::ATurnBasedCharacter()
{
	//create Visual Component
	GridVisualComponent = CreateDefaultSubobject<UGridVisualComponent>(TEXT("GridVisualComponent"));

	EnhancedMovementSystem = CreateDefaultSubobject<UEnhancedMovementSystem>(TEXT("EnhancedMovementSystem"));
	
	/* === �۾��t�� === */
	// �إ� Spring Arm
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;                     // �Z������
	CameraBoom->bUsePawnControlRotation = true;               // ���H�������
	CameraBoom->SocketOffset = FVector(0.0f, 60.0f, 70.0f);   // �V�k�����@�I�]�V�ӡ^
	CameraBoom->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f)); // ���L���U��

	// �إ߬۾�
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;



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

	// �T�O���⦳ AIController�]�Ω���沾�ʡ^
	if (!GetController())
	{
		SpawnDefaultController();
		Debug::Print(FString::Printf(TEXT("%s: Spawned default controller"), *GetActorLabel()), FColor::Yellow);
	}


	// ��l�� EnhancedMovementSystem
	if (EnhancedMovementSystem)
	{
		// �]�m��l��
		EnhancedMovementSystem->MaxMovementResource = 100.0f;
		EnhancedMovementSystem->CurrentMovementResource = 100.0f;
		EnhancedMovementSystem->DynamicMoveSpeed = 400.0f;

		// �T�O�t�Υ��T��l��
		Debug::Print(TEXT("EnhancedMovementSystem initialized in TurnBasedCharacter"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("ERROR: EnhancedMovementSystem is null in BeginPlay!"), FColor::Red);
	}



	// ���է��������� GridManager
	TArray<AActor*>FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridManager::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		SetGridManager(Cast<AGridManager>(FoundActors[0]));
		Debug::Print(TEXT("GridManager found and set!"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("ERROR: No GridManager found in scene!"), FColor::Red);
	}

}

void ATurnBasedCharacter::SetGridManager(AGridManager* Manager)
{
	GridManager = Manager;

	if (GridManager)
	{
		//��s��e�����m
		CurrentGridPosition = GridManager->WorldToGrid(GetActorLocation());

		//�N�����������
		FVector GridWorldPos = GridManager->GridToWorld(CurrentGridPosition);
		SetActorLocation(GridWorldPos);

		//�аO���欰�w����
		GridManager->SetCellOccupied(CurrentGridPosition, this);

		// ��l�� GridVisualComponent
		if (GridVisualComponent)
		{
			GridVisualComponent->Initialize(GridManager);
		}

		Debug::Print(FString::Printf(TEXT("%s placed at grid position (%d, %d)"),
			*GetActorLabel(), CurrentGridPosition.X, CurrentGridPosition.Y), FColor::Green);
	}
}

bool ATurnBasedCharacter::MoveToGridPosition(FIntPoint TargetGridPos)
{
	if (!GridManager)
	{
		Debug::Print(TEXT("GridManager not set! Cannot move."), FColor::Red);
		return false;
	}

	//�ˬd�O�_����ۤv
	if (!bIsMyTurn)
	{
		Debug::Print(TEXT("Not your turn!"), FColor::Red);
		return false;
	}

	//�ˬd�O�_�O�b����

    if (bIsMoving)
	{
		Debug::Print(TEXT("Already moving!"), FColor::Red);
		return false;
	}


	//����i���ʽd��
	TArray<FIntPoint> MovementRange = GridManager->GetMovementRange(
		CurrentGridPosition,
		CurrentActionPoints / MoveActionCost // �ھ�AP�p��i���ʮ��
	);

	//�ˬd�ؼЦ�m�O�_�b�i���ʽd��
	if (!MovementRange.Contains(TargetGridPos))
	{
		Debug::Print(TEXT("Target position out of movement range!"), FColor::Red);
		return false;
	}

	//�p����|(²�檩����������)
	FVector TargetWorldPos = GridManager->GridToWorld(TargetGridPos);
	
	//�p�Ⲿ�ʦ���
	int32 Distance = FMath::Abs(TargetGridPos.X - CurrentGridPosition.X)+
		             FMath::Abs(TargetGridPos.Y - CurrentGridPosition.Y);

	int32 APCost = Distance * MoveActionCost;


	if (!CanPerformAction(APCost))
	{
		Debug::Print(TEXT("Not enough Action Points!"), FColor::Red);
		return false;
	}


	//�M����e����
	GridManager->ClearCellOccupation(CurrentGridPosition);

	//���沾��
	bIsMoving = true;

	//�ϥ�AI����(�p��AIController)
	if (AAIController* AIController = Cast<AAIController>(GetController()))
	{
		AIController->MoveToLocation(TargetWorldPos, 5.0f);
	}
	else
	{
		//²�沾��
		SetActorLocation(TargetWorldPos);
	}

	//��s��m
	CurrentGridPosition = TargetGridPos;
	GridManager->SetCellOccupied(CurrentGridPosition, this);

	//����AP
	ConsumeActionPoints(APCost);


	//�M�����G
	GridManager->ClearHighlights();

	bIsMoving = false;

	Debug::Print(FString::Printf(TEXT("%s moved to (%d, %d), Cost: %d AP"),
		*GetActorLabel(), TargetGridPos.X, TargetGridPos.Y, APCost), FColor::Green);

	return true;
	
}

void ATurnBasedCharacter::ShowMovementRange()
{
	if (!GridManager || !bIsMyTurn)
		return;

	Debug::Print(FString::Printf(TEXT("=== %s: Showing Movement Range ==="), *GetActorLabel()), FColor::Magenta);

	int32 MoveRange = CurrentActionPoints / MoveActionCost;
	GridManager->ShowMovementRange(CurrentGridPosition, MoveRange);

	Debug::Print(FString::Printf(TEXT("Showing movement range: %d cells"), MoveRange), FColor::Cyan);

}



bool ATurnBasedCharacter::CanPerformDynamicMovement() const
{
	if (!EnhancedMovementSystem) return false;
	return bIsMyTurn && EnhancedMovementSystem->CanMove();
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
	PerformMove();

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

	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		MeshComp->SetRenderCustomDepth(true);
		MeshComp->SetCustomDepthStencilValue(252); // ������

		Debug::Print(FString::Printf(TEXT("%s: Highlight enabled"), *GetActorLabel()), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("Failed to get Mesh Component for highlight!"), FColor::Red);
	}


	//��ܲ��ʽd��
	ShowMovementRange();


	FString Msg = FString::Printf(TEXT("=== %s's Turn Started ==="), *GetActorLabel());
	Debug::Print(Msg, FColor::Cyan, 3);

}

void ATurnBasedCharacter::OnTurnEnd()
{
	bIsMyTurn = false;

	//��ı����-��_����~�[���C��
	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		MeshComp->SetRenderCustomDepth(false);
	}

	FString Msg = FString::Printf(TEXT("=== %s's Turn Ended ==="), *GetActorLabel());
	Debug::Print(Msg, FColor::Orange, 2);

	//�������ʽd�����
	if (GridManager)
	{
		GridManager->ClearHighlights();
	}

}

void ATurnBasedCharacter::PerformMove()
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
	return bIsMyTurn;  // ������^ bIsMyTurn�A�Ӥ��O��^ false
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

void ATurnBasedCharacter::TestVisualization()
{
	Debug::Print(TEXT("=== Testing Visualization System ==="), FColor::Magenta);

	if (GridManager)
	{
		// �����ե� GridManager ����ı��
		GridManager->ShowMovementRange(CurrentGridPosition, 3);
	}

	if (GridVisualComponent)
	{
		// �����եβե󪺵�ı��
		GridVisualComponent->ShowMovementRange(CurrentGridPosition, 3);
	}
}

void ATurnBasedCharacter::TestDifferentVisuals()
{
	if (!GridManager) return;

	// ���ղ��ʽd��]���^
	GridManager->ShowMovementRange(CurrentGridPosition, 3);

	// ������ܧ����d��]����^
	GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			if (GridVisualComponent)
			{
				GridVisualComponent->ShowAttackRange(CurrentGridPosition, 200.0f);
			}
		});

	// ���ո��|�]�Ŧ�^
	TArray<FIntPoint> TestPath = {
		CurrentGridPosition,
		CurrentGridPosition + FIntPoint(1, 0),
		CurrentGridPosition + FIntPoint(2, 0),
		CurrentGridPosition + FIntPoint(2, 1)
	};

	if (GridVisualComponent)
	{
		GridVisualComponent->ShowPath(TestPath);
	}

}
