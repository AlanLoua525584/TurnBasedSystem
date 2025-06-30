// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Public/DebugHelper.h"


// Sets default values for this component's properties
UEnhancedMovementSystem::UEnhancedMovementSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	// ...
}

void UEnhancedMovementSystem::InitializeSystem()
{
	// �T�O�ե󥿽T�]�m
	if (!OwnerCharacter)
	{
		OwnerCharacter = Cast<ACharacter>(GetOwner());
	}

	if (OwnerCharacter && !MovementComponent)
	{
		MovementComponent = OwnerCharacter->GetCharacterMovement();
	}

	// ���m�귽
	CurrentMovementResource = MaxMovementResource;

	Debug::Print(TEXT("EnhancedMovementSystem manually initialized"), FColor::Cyan);
}



void UEnhancedMovementSystem::BeginPlay()
{
	Super::BeginPlay();

	// ����֦���
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (OwnerCharacter)
	{
		MovementComponent = OwnerCharacter->GetCharacterMovement();
		Debug::Print(TEXT("EnhancedMovementSystem: Owner and MovementComponent set"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("ERROR: EnhancedMovementSystem has no valid owner!"), FColor::Red);
	}

	// ��l�Ƹ귽
	CurrentMovementResource = MaxMovementResource;

	// �]�m��l�Ҧ��� Idle
	CurrentMovementMode = ECustomMovementMode::Idle;

	Debug::Print(FString::Printf(TEXT("Movement System Initialized - Resource: %.0f/%.0f"),
		CurrentMovementResource, MaxMovementResource), FColor::Green);

}

// Called every frame
void UEnhancedMovementSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bUseALSIntergration)
	{
		UpdateALSDate(DeltaTime);

	}

	if (CurrentMovementMode == ECustomMovementMode::DynamicMove)
	{
		float CurrentSpeed = OwnerCharacter->GetVelocity().Size();
		bIsActuallyMoving = CurrentSpeed > 10.0f;

		if (bIsActuallyMoving)
		{
			ConsumeResource(DeltaTime);

			FVector CurrentPos = OwnerCharacter->GetActorLocation();
			AccumulatedDistance = FVector::Dist(MovementStartPosition, CurrentPos);

		}
		else if (ResourceRecoverRate > 0)
		{
			RecoverResource(DeltaTime);
		}
	}

}


void UEnhancedMovementSystem::UpdateALSDate(float DeltaTime)
{
	if (!OwnerCharacter) return;

	FVector CurrentVelocity = OwnerCharacter->GetVelocity();
	float CurrentSpeed = CurrentVelocity.Size();

	//�p��[�t��
	Acceleration = (CurrentVelocity - LastVelocity) / DeltaTime;
	LastVelocity = CurrentVelocity;

	//��s���ʿ�J�q
	MovementInputAmount = CurrentMovementInput.Size();
	bHasMovementInput = MovementInputAmount > 0.1;

	//�ھڳt�רM�w�B�A
	DetermineGaitFromSpeed(CurrentSpeed);

	//�s�����ʼƾڧ�s
	OnMovementDataUpdated.Broadcast(CurrentVelocity, CurrentSpeed);

}

void UEnhancedMovementSystem::DetermineGaitFromSpeed(float Speed)
{
	EALSGait NewGait = CurrentGait;

	if (Speed < WalkSpeedThreshold)
	{
		NewGait = EALSGait::Walking;
	}
	else if (Speed < RunSpeedThreshold)
	{
		NewGait = EALSGait::Running;
	}
	else
	{
		NewGait = EALSGait::Sprinting;
	}

	if (NewGait != CurrentGait)
	{
		SetALSGait(NewGait);
	}

}

void UEnhancedMovementSystem::SetALSMovementState(EALSMovementState NewState)
{
	if (ALSMovementState != NewState)
	{
		ALSMovementState = NewState;
		OnALSStateChanged.Broadcast(NewState);

		Debug::Print(FString::Printf(TEXT("ALS State Changed: %s"),
			*UEnum::GetValueAsString(NewState)), FColor::Cyan);
	}

}

void UEnhancedMovementSystem::SetALSGait(EALSGait NewGait)
{
	if (CurrentGait != NewGait)
	{
		CurrentGait = NewGait;
		OnALSGaitChanged.Broadcast(NewGait);

		//��s���ʳt��
		if (MovementComponent && CurrentMovementMode == ECustomMovementMode::DynamicMove)
		{
			MovementComponent->MaxWalkSpeed = GetCurrentSpeedBaseOnGait();
		}

		Debug::Print(FString::Printf(TEXT("ALS Gait Changed: %s"),
			*UEnum::GetValueAsString(NewGait)), FColor::Green);

	}

}

float UEnhancedMovementSystem::GetCurrentSpeedBaseOnGait() const
{
	switch (CurrentGait)
	{
	case EALSGait::Walking:
		return WalkSpeedThreshold;
		break;
	case EALSGait::Running:
		return RunSpeedThreshold;
		break;
	case EALSGait::Sprinting:
		return SprintSpeedThreshold;
		break;
	default:
		return DynamicMoveSpeed;
	}
}

float UEnhancedMovementSystem::GetResourceConsumptionRate() const
{
	if (bUseALSIntergration)
	{
		switch (CurrentGait)
		{
		case EALSGait::Walking:
			return WalkingResourceRate;
			break;
		case EALSGait::Running:
			return RunningResourceRate;
			break;
		case EALSGait::Sprinting:
			return SprintingResourceRate;
			break;
		default:
			return RunningResourceRate;
		}
	}

	//�p���ϥ�ALS�A��^�T�w��
	return RunningResourceRate;
}

void UEnhancedMovementSystem::UpdateMovementDate(const FVector& Velocity, const FVector& InputVector)
{
	LastVelocity = Velocity;
	CurrentMovementInput = InputVector;

	//�i�H�b�o�̼W�[��h ALS �ݭn���ƾڧ�s
}

void UEnhancedMovementSystem::ProcessMovementInput(const FVector2D& InputVector)
{
	if (!OwnerCharacter || !CanMove())
	{
		if (!OwnerCharacter)
		{
			Debug::Print(TEXT("ProcessMovementInput: No Owner!"), FColor::Red);
		}
		else if (!CanMove())
		{
			Debug::Print(TEXT("ProcessMovementInput: Cannot move - No resource!"), FColor::Orange);
		}
		return;
	}

	if (CurrentMovementMode == ECustomMovementMode::DynamicMove)
	{
		//��� PlayerController
		APlayerController* PC = OwnerCharacter->GetWorld()->GetFirstPlayerController();
		if (!PC)
		{
			Debug::Print(TEXT("No PlayerController found!"), FColor::Red);
			return;
		}


		Debug::Print(TEXT("Moveing..."), FColor::Green);



		/*
		FRotator ControlRotation = OwnerCharacter->GetControlRotation();
		ControlRotation.Pitch = 0.0f;
		ControlRotation.Roll = 0.0f;
		
		const FVector ForwardDir = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::X);
		const FVector RightDir = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::Y);
		*/

		// �ϥ� PlayerController ���۾�����]�Ӥ��O���⪺�������^
		FRotator CameraRotation = PC->GetControlRotation();
		CameraRotation.Pitch = 0.0f;
		CameraRotation.Roll = 0.0f;

		const FVector ForwardDir = FRotationMatrix(CameraRotation).GetUnitAxis(EAxis::X);
		const FVector RightDir = FRotationMatrix(CameraRotation).GetUnitAxis(EAxis::Y);


		//�x�s��J�V�q�� ALS �ϥ�
		CurrentMovementInput = ForwardDir * InputVector.Y + RightDir * InputVector.X;

		OwnerCharacter->AddMovementInput(ForwardDir, InputVector.Y);
		OwnerCharacter->AddMovementInput(RightDir, InputVector.X);


		// �ոիH���]�i��^
		if (InputVector.Size() > 0.1f)
		{
			Debug::Print(FString::Printf(TEXT("Moving: Input(%.2f, %.2f) Resource: %.1f%%"),
				InputVector.X, InputVector.Y, GetResourcePercent() * 100.0f), FColor::Green);
		}


	}
	else
	{
		Debug::Print(TEXT("ProcessMovementInput: Not in Dynamic Mode!"), FColor::Yellow);
	}

}

void UEnhancedMovementSystem::ConsumeResource(float DeltaTime)
{
	float ConsumptionRate = GetResourceConsumptionRate();
	float Consumption = ConsumptionRate * DeltaTime;
	CurrentMovementResource = FMath::Max(0.0f, CurrentMovementResource - Consumption);

	OnResourceChanged.Broadcast(CurrentMovementResource);
	CheckResourceDepletion();
}

//==�H�U�O�즳��ƪ���{==

void UEnhancedMovementSystem::SwitchMovementMode(ECustomMovementMode NewMode)
{
	if (CurrentMovementMode == NewMode) return;

	ECustomMovementMode OldMode = CurrentMovementMode;
	CurrentMovementMode = NewMode;

	switch (NewMode)
	{
	case ECustomMovementMode::Idle:
		SetComponentTickEnabled(false);
		if (MovementComponent)
		{
			MovementComponent->StopMovementImmediately();
		}
		break;
	case ECustomMovementMode::GridMove:
		SetComponentTickEnabled(false);
		UpdateMovementSpeed();
		break;

	case ECustomMovementMode::DynamicMove:
		StartDynamicMovement();
		break;
	}

	OnMovementModeChanged.Broadcast(NewMode);

}

void UEnhancedMovementSystem::StartDynamicMovement()
{
	if (!CanMove())return;

	SetComponentTickEnabled(true);
	MovementStartPosition = OwnerCharacter->GetActorLocation();
	AccumulatedDistance = 0.0f;
	UpdateMovementSpeed();

	//�p�G�ϥ�ALS�A�]�m��l�B�A
	if (bUseALSIntergration)
	{
		SetALSGait(EALSGait::Running);
	}

	OnStartMove.Broadcast();

}

void UEnhancedMovementSystem::StopDynamicMovement()
{
	SwitchMovementMode(ECustomMovementMode::Idle);
	OnStopMove.Broadcast();
}


void UEnhancedMovementSystem::ResetResource()
{
	CurrentMovementResource = MaxMovementResource;
	OnResourceChanged.Broadcast(CurrentMovementResource);
}

float UEnhancedMovementSystem::GetResourcePercent() const
{
	return MaxMovementResource > 0 ? CurrentMovementResource / MaxMovementResource :0.0f;
}


float UEnhancedMovementSystem::CalculateMaxRange() const
{
	if (GetResourceConsumptionRate() <= 0)return 0.0f;

	float AverageConsumption = bUseALSIntergration ? RunningResourceRate : GetResourceConsumptionRate();
	float MaxTime = MaxMovementResource / AverageConsumption;
	return DynamicMoveSpeed * MaxTime;
}

void UEnhancedMovementSystem::RecoverResource(float DeltaTime)
{
	if (CurrentMovementResource < MaxMovementResource)
	{
		float Recovery = ResourceRecoverRate * DeltaTime;
		CurrentMovementResource = FMath::Min(MaxMovementResource, CurrentMovementResource + Recovery);
		OnResourceChanged.Broadcast(CurrentMovementResource);
	}
}

void UEnhancedMovementSystem::UpdateMovementSpeed()
{
	if (!MovementComponent) return;

	float TargetSpeed = DynamicMoveSpeed;

	switch (CurrentMovementMode)
	{
	case ECustomMovementMode::Idle:
		break;
	case ECustomMovementMode::GridMove:
		TargetSpeed = GridMoveSpeed;
		break;
	case ECustomMovementMode::DynamicMove:
		TargetSpeed = bUseALSIntergration ? GetCurrentSpeedBaseOnGait() : DynamicMoveSpeed;
		break;
	default:
		break;
	}

	MovementComponent->MaxWalkSpeed = TargetSpeed;
}

void UEnhancedMovementSystem::CheckResourceDepletion()
{
	if (CurrentMovementResource <= 0)
	{
		OnResourceDepleted.Broadcast();
		StopDynamicMovement();
	}

}


















