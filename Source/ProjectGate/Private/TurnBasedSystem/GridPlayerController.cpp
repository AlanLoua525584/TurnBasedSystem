// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "ProjectGateGameMode.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"


#include "Public/DebugHelper.h"

AGridPlayerController::AGridPlayerController()
{
	bAutoManageActiveCameraTarget = false; //�T�ά۾�
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	PrimaryActorTick.bCanEverTick = true;
}



void AGridPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//�]�m�۾��t��
	SetupCamera();

	//�d��޲z��
	FindManagers();

	// �]�m��J�Ҧ�
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);
	
	// �K�[��J�M�g�W�U��
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			if (GridInputMappingContext)
			{
				Subsystem->AddMappingContext(GridInputMappingContext, 0);
				Debug::Print(TEXT("Input Mapping Context added successfully"), FColor::Green);
			}
			else
			{
				Debug::Print(TEXT("ERROR: GridInputMappingContext is null!"), FColor::Red);
			}
		}

}

//�۾��]�m�N�ӻݭn�վ�

void AGridPlayerController::SetupCamera()
{
	Debug::Print(TEXT("SetupCamera"));

	//�Ыج۾�Pawn
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	CameraPawn = GetWorld()->
		SpawnActor<AActor>(
			AActor::StaticClass(),
		FVector(0, 0, 1000), FRotator(-45, 0, 0), SpawnParams);


	if (!CameraPawn)
	{
		Debug::Print(TEXT("Failed to create camera pawn!"), FColor::Red);
		return;
   }


   //�Ыخڲե�
	USphereComponent* RootComp = NewObject<USphereComponent>(CameraPawn, TEXT("RootComponent"));
	RootComp->InitSphereRadius(50.0f);
	RootComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CameraPawn->SetRootComponent(RootComp);
	RootComp->RegisterComponent();

	//�Ы� Spring Arm
	SpringArmComponent = NewObject<USpringArmComponent>(CameraPawn, TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootComp);
	SpringArmComponent->TargetArmLength = 800.0f;
	SpringArmComponent->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
	SpringArmComponent->bDoCollisionTest = false;
	SpringArmComponent->bUsePawnControlRotation = false;
	SpringArmComponent->RegisterComponent();

	//�Ы�Camera
	CameraComponent = NewObject<UCameraComponent>(CameraPawn, TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
	CameraComponent->RegisterComponent();

	//�]�m�������ؼ�
	SetViewTarget(CameraPawn);

	Debug::Print(TEXT("Camera system initialized"), FColor::Green);

}

void AGridPlayerController::FindManagers()
{
	// �d�� GridManager
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridManager::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		GridManager = Cast<AGridManager>(FoundActors[0]);
		if (GridManager)
		{
			Debug::Print(TEXT("GridManager found!"), FColor::Green);
		}
	}

	// �d�� TurnManager
	FoundActors.Empty();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASimpleTurnManager::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		TurnManager = Cast<ASimpleTurnManager>(FoundActors[0]);
		if (TurnManager)
		{
			Debug::Print(TEXT("TurnManager found!"), FColor::Green);
		}
	}
	else
	{
		Debug::Print(TEXT("TurnManager not found!"), FColor::Red);
	}
}


void AGridPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// �ϥ� Enhanced Input Component
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		//�j�w�I���ʧ@
		if (ClickAction)
		{
			EnhancedInputComponent->BindAction(ClickAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnClick);
			Debug::Print(TEXT("ClickWorking"));
		}

		//�j�w��ܽd��ʧ@
		if (ShowRangeAction)
		{
			EnhancedInputComponent->BindAction(ShowRangeAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnShowRange);
		}
		// �j�w�۾�����
		if (RotateCameraAction)
		{
			EnhancedInputComponent->BindAction(RotateCameraAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCameraRotate);
		}

		// �j�w�۾��Y��
		if (ZoomCameraAction)
		{
			EnhancedInputComponent->BindAction(ZoomCameraAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCameraZoom);
		}

		// �j�w�����ʧ@
		if (CancelAction)
		{
			EnhancedInputComponent->BindAction(CancelAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCancel);
		}

		// �j�w�ʺA�Ҧ������]Space��^
		if (DynamicModeAction)
		{
			EnhancedInputComponent->BindAction(DynamicModeAction, ETriggerEvent::Started, this, &AGridPlayerController::OnDynamicMode);
			Debug::Print(TEXT("DynamicModeAction bound"), FColor::Green);
		}
		else
		{
			Debug::Print(TEXT("WARNING: DynamicModeAction is null!"), FColor::Yellow);
		}

		// �j�w���ʿ�J�]WASD�^
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnMove);
			Debug::Print(TEXT("MoveAction bound"), FColor::Green);
		}
		else
		{
			Debug::Print(TEXT("WARNING: MoveAction is null!"), FColor::Yellow);
		}

		//�۾�����j�w
		if (CameraMoveAction)
		{
			EnhancedInputComponent->BindAction(CameraMoveAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCameraMove);
		}

		if (CameraRotateAction)
		{
			EnhancedInputComponent->BindAction(CameraRotateAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCameraRotate);

		}

		if (CameraZoomAction)
		{
			EnhancedInputComponent->BindAction(CameraZoomAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCameraZoom);
		}

		if (ToggleFocus)
		{
			EnhancedInputComponent->BindAction(ToggleFocus, ETriggerEvent::Triggered, this, &AGridPlayerController::OnToggleFocus);
		}


		// Shift �M�k��]�ϥζǲθj�w�^
		InputComponent->BindAction("Shift", IE_Pressed, this, &AGridPlayerController::OnShiftPressed);
		InputComponent->BindAction("Shift", IE_Released, this, &AGridPlayerController::OnShiftReleased);
		InputComponent->BindAction("RightMouseButton", IE_Pressed, this, &AGridPlayerController::OnRightMousePressed);
		InputComponent->BindAction("RightMouseButton", IE_Released, this, &AGridPlayerController::OnRightMouseReleased);


	}
}

void AGridPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// ��s�۾�����
	UpdateCameraMovement(DeltaTime);

	//�����m�P�B
	//�u�b�ʺA�Ҧ��U�P�B����
	if (bIsInDynamicMode)
	{
		ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
		if (ControlledCharacter && ControlledCharacter->IsMyTurn())
		{
			// �ϥβ{���� UpdateGridPositionFromWorld ���
			ControlledCharacter->UpdateGridPositionFromWorld();
		}
	}


}

void AGridPlayerController::OnDynamicMode()
{

	// �����e�������
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter)
	{
		Debug::Print(TEXT("Not controlling any character!"), FColor::Red);
		return;
	}

	// �ˬd�O�_�O�Ө��⪺�^�X
	if (!ControlledCharacter->IsMyTurn())
	{
		Debug::Print(TEXT("Not this character's turn!"), FColor::Yellow);
		return;
	}

	// ��� EnhancedMovementSystem
	UEnhancedMovementSystem* MovementSystem = ControlledCharacter->FindComponentByClass<UEnhancedMovementSystem>();
	if (!MovementSystem)
	{
		Debug::Print(TEXT("No EnhancedMovementSystem on character!"), FColor::Red);
		return;
	}


	// �����ı�ե�
	UGridVisualComponent* VisualComp = ControlledCharacter->FindComponentByClass<UGridVisualComponent>();
	if (!VisualComp)
	{
		Debug::Print(TEXT("ERROR: No GridVisualComponent found!"), FColor::Red);
		return;
	}


	// �����Ҧ�
	bIsInDynamicMode = !bIsInDynamicMode;

	if (bIsInDynamicMode)
	{   //== �i�J�ʺA�Ҧ� ==

		// �i�J�ʺA�Ҧ��ɦ۰ʤ���Focus�Ҧ�
		if (!bIsFocusMode)
		{
			OnToggleFocus(FInputActionValue());
		}

		//�ҰʰʺA���ʨt��
		MovementSystem->SwitchMovementMode(ECustomMovementMode::DynamicMove);

		//�M�������ı
		VisualComp->ClearAllVisuals();

		Debug::Print(TEXT("===== DYNAMIC MOVEMENT MODE: ON ====="), FColor::Green, 5.0f);

	}
	else
	{
		//����ʺA����
		MovementSystem->SwitchMovementMode(ECustomMovementMode::Idle);


		//��ܺ���d��
		ControlledCharacter->ShowMovementRange();

		// �����^�ۥѬ۾�
		if (bIsFocusMode)
		{
			OnToggleFocus(FInputActionValue());
		}

		Debug::Print(TEXT("===== DYNAMIC MOVEMENT MODE: OFF ====="), FColor::Red, 5.0f);


	}

	//�q��UI��s
	UIOnMovementModeChanged.Broadcast(bIsInDynamicMode);
}

void AGridPlayerController::SwitchMovementMode()
{
	/*
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter || !ControlledCharacter->IsMyTurn())
	{
		Debug::Print(TEXT("Cannot switch mode: Not your turn or no controlled character"), FColor::Red);
		return;
	}

	// �����Ҧ�
	bIsInDynamicMode = !bIsInDynamicMode;

	// �����ı�ե�
	UGridVisualComponent* VisualComp = ControlledCharacter->FindComponentByClass<UGridVisualComponent>();
	if (!VisualComp)
	{
		Debug::Print(TEXT("ERROR: No GridVisualComponent found!"), FColor::Red);
		return;
	}

	if (bIsInDynamicMode)
	{
		// �ʺA�Ҧ��G�M���Ҧ������ı
		VisualComp->ClearAllVisuals();
		Debug::Print(TEXT("Switched to Dynamic Mode - Grid visuals cleared"), FColor::Blue);
	}
	else
	{
		// ����Ҧ��G��ܲ��ʽd��
		ControlledCharacter->ShowMovementRange();
		Debug::Print(TEXT("Switched to Grid Mode - Showing movement range"), FColor::Green);
	}

	// �q�� UI ��s
	UIOnMovementModeChanged.Broadcast(bIsInDynamicMode);
	*/

}

void AGridPlayerController::OnMove(const FInputActionValue& Value)
{
	
	// �u�b�ʺA�Ҧ��U�B�z����
	if (!bIsInDynamicMode)
	{
		return;
	}

	// �����J�V�q
	FVector2D MovementVector = Value.Get<FVector2D>();

	// �����e�������
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UEnhancedMovementSystem* MovementSystem = ControlledCharacter->FindComponentByClass<UEnhancedMovementSystem>();
	if (!MovementSystem) return;

	MovementSystem->ProcessMovementInput(MovementVector);


}

UEnhancedMovementSystem* AGridPlayerController::GetControlledMovementSystem() const
{
	
	if (!TurnManager) return nullptr;

	AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
	if (!CurrentActor) return nullptr;

	ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(CurrentActor);
	if (!TurnCharacter) return nullptr;

	return TurnCharacter->FindComponentByClass<UEnhancedMovementSystem>();
}


void AGridPlayerController::ShowModeNotification(const FString& ModeName)
{
	// ²�檺�ù��T��
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,                          // Key (-1 = ���л\)
			3.0f,                        // ����ɶ�
			FColor::Yellow,              // �C��
			ModeName,                    // �T��
			true,                        // ���s���b�W
			FVector2D(2.0f, 2.0f)       // ��r�Y��
		);
	}

	// �Ψϥ� Debug::Print
	Debug::Print(ModeName, FColor::Yellow);

}




void AGridPlayerController::OnClick()
{

	Debug::Print(TEXT("Clicking"));

	if (!GridManager)
	{
		Debug::Print(TEXT("GridManager is null!"), FColor::Red);
		return;
	}

	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter)
	{
		Debug::Print(TEXT("No controlled character!"), FColor::Red);
		return;
	}

	// �ˬd�O�_�O�o���⪺�^�X
	if (!ControlledCharacter->IsMyTurn())
	{
		Debug::Print(TEXT("Not this character's turn!"), FColor::Yellow);
		return;
	}

	FIntPoint ClickedGridPos;
	if (!GetGridPositionUnderCursor(ClickedGridPos))
	{
		Debug::Print(TEXT("Invalid grid position"), FColor::Orange);
		return;
	}

	Debug::Print(FString::Printf(TEXT("Clicked Grid: (%d, %d)"), ClickedGridPos.X, ClickedGridPos.Y), FColor::Cyan);

	if (ControlledCharacter->MoveToGridPosition(ClickedGridPos))
	{
		Debug::Print(TEXT("Move command executed"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("Cannot move to that position"), FColor::Red);
	}


	/*
	if (!GridManager || !TurnManager)
	{
		Debug::Print(TEXT("GridManager or TurnManager is null!"), FColor::Red);
		return;
	}

	// �ոհT��
	
		Debug::Print(FString::Printf(TEXT("Turn Count: %d"), TurnManager->GetTurnCount()), FColor::Yellow);
		Debug::Print(FString::Printf(TEXT("Characters in order: %d"), TurnManager->GetTurnOrder().Num()), FColor::Yellow);

		

		// �����e�^�X������]�u�w�q�@���^
		AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
		if (!CurrentActor)
		{
			Debug::Print(TEXT("No current character!"), FColor::Red);
			return;
		}

		Debug::Print(FString::Printf(TEXT("Current: %s"), *CurrentActor->GetName()), FColor::Green);

		// �ഫ�� TurnBasedCharacter
		ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(CurrentActor);
		if (!CurrentCharacter)
		{
			Debug::Print(TEXT("Current actor is not a TurnBasedCharacter"), FColor::Red);
			return;
		}

		// �ˬd�O�_�����a����
		if (!CurrentCharacter->bIsPlayerControlled)
		{
			Debug::Print(TEXT("Not player controlled character!"), FColor::Yellow);
			return;
		}

	// ����I���������m
	FIntPoint ClickedGridPos;
	if (!GetGridPositionUnderCursor(ClickedGridPos))
	{
		Debug::Print(TEXT("Invalid grid position"), FColor::Orange);
		return;
	}
		
	//����I���y��
	Debug::Print(FString::Printf(TEXT("Clicked Grid: (%d, %d)"),
		ClickedGridPos.X, ClickedGridPos.Y), FColor::Cyan);

	// ���ղ��ʨ��I������m
	if (CurrentCharacter->MoveToGridPosition(ClickedGridPos))
	{
		Debug::Print(TEXT("Move command executed"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("Cannot move to that position"), FColor::Red);
	}

	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("No current character or not player's turn!"), FColor::Red);
		return;
	}
	*/
}

void AGridPlayerController::OnShowRange()
{
	//��ܷ�e���⪺���ʽd��
	if (!TurnManager)
	{
		Debug::Print(TEXT("TurnManager is null!"), FColor::Red);
		return;
	}

	AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
	if (!CurrentActor)
	{
		Debug::Print(TEXT("No current character"), FColor::Orange);
		return;
	}

	ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(CurrentActor);
	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("Current actor is not a TurnBasedCharacter"), FColor::Red);
		return;
	}

	if (CurrentCharacter->bIsPlayerControlled)
	{
		CurrentCharacter->ShowMovementRange();
		Debug::Print(TEXT("Showing movement range"), FColor::Blue);
	}
	else
	{
		Debug::Print(TEXT("Not player's turn!"), FColor::Yellow);
	}
	
}



void AGridPlayerController::OnCameraMove(const FInputActionValue& Value)
{
	FVector2D MoveVector = Value.Get<FVector2D>();

	if (CameraPawn && SpringArmComponent)
	{
		//����۾��e�V�M�k�V
		FRotator CamRotation = SpringArmComponent->GetComponentRotation();
		CamRotation.Pitch = 0.0f;

		FVector Forward = FRotationMatrix(CamRotation).GetUnitAxis(EAxis::X);
		FVector Right = FRotationMatrix(CamRotation).GetUnitAxis(EAxis::Y);

		//�p�Ⲿ�ʤ�V
		FVector MoveDirection = (Forward * MoveVector.Y + Right * MoveVector.X);
		MoveDirection.Normalize();

		//�W�[��t��
		float MoveSpeed = bIsShiftPressed ? CameraFastMoveSpeed : CameraBaseMoveSpeed;
		CameraVelocity += MoveDirection * MoveSpeed;

	}

}

void AGridPlayerController::OnCameraRotate(const FInputActionValue& Value)
{
	if (!bIsRightMousePressed || !SpringArmComponent) return;

	FVector2D RotateVector = Value.Get<FVector2D>();

	// rotate Spring Arm
	FRotator NewRotation = SpringArmComponent->GetRelativeRotation();
	NewRotation.Yaw += RotateVector.X;
	NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch + RotateVector.Y, -80.0f, -10.0f);
	SpringArmComponent->SetRelativeRotation(NewRotation);
}

void AGridPlayerController::OnCameraZoom(const FInputActionValue& Value)
{
	if (!SpringArmComponent) return;

	float ZoomValue = Value.Get<float>();
    float NewLength = SpringArmComponent->TargetArmLength - (ZoomValue * ZoomSpeed);
	
	SpringArmComponent->TargetArmLength = FMath::Clamp(NewLength, MinZoomLength, MaxZoomLength);

}

void AGridPlayerController::UpdateCameraMovement(float DeltaTime)
{
	if (!CameraPawn) return;

	// ���ƴ�t
	CameraVelocity = FMath::VInterpTo(CameraVelocity, FVector::ZeroVector, DeltaTime, 5.0f);

	// ���β���
	if (!CameraVelocity.IsNearlyZero())
	{
		FVector NewLocation = CameraPawn->GetActorLocation() + CameraVelocity * DeltaTime;
		
		CameraPawn->SetActorLocation(NewLocation);
	}
}

void AGridPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// ���m�۾����A
	if (bIsFocusMode)
	{
		// �i��G�O��Focus�Ҧ���s����
		//FocusOnCurrentTurnCharacter();

		// �Ϊ̡G�۰ʤ��^�ۥѬ۾�
		 SetViewTarget(CameraPawn);
		 bIsFocusMode = false;
	}




	// ���m�ʺA�Ҧ�
	bIsInDynamicMode = false;

	if (ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(InPawn))
	{
		Debug::Print(FString::Printf(TEXT("GridPlayerController possessed: %s"),
			*TurnCharacter->GetActorLabel()), FColor::Green);
	}
}

void AGridPlayerController::OnUnPossess()
{
	// ���}�ʺA�Ҧ�
	if (bIsInDynamicMode)
	{
		bIsInDynamicMode = false;
		Debug::Print(TEXT("Exited dynamic mode due to unpossess"), FColor::Yellow);
	}

	Super::OnUnPossess();
}

void AGridPlayerController::OnRightMousePressed()
{
	bIsRightMousePressed = true;
	bShowMouseCursor = false;
	SetInputMode(FInputModeGameOnly());
}

void AGridPlayerController::OnRightMouseReleased()
{
	bIsRightMousePressed = false;
	bShowMouseCursor = true;

	FInputModeGameAndUI InputMode;
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);
}

void AGridPlayerController::OnToggleFocus(const FInputActionValue& Value)
{

	

	// �ˬd�N�o�ɶ�
	float CurrentTime = GetWorld()->GetTimeSeconds();
	if (CurrentTime - LastToggleFocusTime < ToggleFocusCooldown)
	{
		Debug::Print(TEXT("Focus toggle on cooldown"), FColor::Yellow);
		return;
	}

	LastToggleFocusTime = CurrentTime;

	// �T�O������i�HFocus
	ATurnBasedCharacter* CurrentCharacter = GetCurrentTurnCharacter();
	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("No character to focus on"), FColor::Red);
		return;
	}

	if (bIsFocusMode)
	{

		// ���^�ۥѬ۾�
		SetViewTarget(CameraPawn);
		bIsFocusMode = false;
		Debug::Print(TEXT("Switched to Free Camera"), FColor::Yellow);
	}
	else
	{
		// ���쨤��۾�
		FocusOnCurrentTurnCharacter();
		bIsFocusMode = true;
		Debug::Print(TEXT("Switched to Character Focus"), FColor::Green);
	}

	// ��s UI ���
	if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UTurnDisplayWidget* TurnWidget = GameMode->GetTurnDisplayWidget())
		{
			TurnWidget->UpdateCameraMode(bIsFocusMode);
		}
	}
}


void AGridPlayerController::FocusOnActor(AActor* TargetActor, float Distance)
{
	if (!TargetActor || !CameraPawn || !SpringArmComponent) return;

	FVector TargetLocation = TargetActor->GetActorLocation();

	// �p��۾���m
	FRotator CurrentRotation = SpringArmComponent->GetRelativeRotation();
	FVector CameraOffset = CurrentRotation.Vector() * -Distance;
	FVector NewLocation = TargetLocation + CameraOffset;

	CameraPawn->SetActorLocation(NewLocation);
	SpringArmComponent->TargetArmLength = Distance;

	Debug::Print(FString::Printf(TEXT("1Camera focused on %s"), *TargetActor->GetActorLabel()), FColor::Green);
}

void AGridPlayerController::FocusOnCurrentTurnCharacter()
{

	// �u���ϥη�e Possessed �� Pawn
	ATurnBasedCharacter* CurrentTurnCharacter = Cast<ATurnBasedCharacter>(GetPawn());

	// �p�G�S�� Possessed Pawn�A�~�q TurnManager ���
	if (!CurrentTurnCharacter && TurnManager)
	{
		AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
		CurrentTurnCharacter = Cast<ATurnBasedCharacter>(CurrentActor);
	}

	if (!CurrentTurnCharacter)
	{
		SetViewTarget(CameraPawn);
		bIsFocusMode = false;
		Debug::Print(TEXT("No character to focus - returning to free camera"), FColor::Yellow);
		return;
	}

	// �j��ߧY�����]���ϥ� Blend�^
	SetViewTarget(CurrentTurnCharacter);

	Debug::Print(FString::Printf(TEXT("Camera focused on %s (Possessed: %s)"),
		*CurrentTurnCharacter->GetActorLabel(),
		GetPawn() == CurrentTurnCharacter ? TEXT("YES") : TEXT("NO")), FColor::Green);





	/*
	if (!TurnManager)
	{
		Debug::Print(TEXT("TurnManager is null!"), FColor::Red);
		return;
	}

	// �����q TurnManager ���o��e����
	AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
	ATurnBasedCharacter* CurrentTurnCharacter = Cast<ATurnBasedCharacter>(CurrentActor);

	if (!CurrentTurnCharacter)
	{
		// �S������ɦ^��ۥѬ۾�
		SetViewTarget(CameraPawn);
		bIsFocusMode = false;
		Debug::Print(TEXT("No character to focus - returning to free camera"), FColor::Yellow);
		return;


		// �ϥβV�X�����H��o���ƮĪG
		SetViewTargetWithBlend(CurrentTurnCharacter, 0.5f);

		Debug::Print(FString::Printf(TEXT("2Camera focused on %s"),
			*CurrentTurnCharacter->GetActorLabel()), FColor::Green);
	}
	*/
	
	
}


FVector AGridPlayerController::GetCameraLocation() const
{
	return CameraComponent ? CameraComponent->GetComponentLocation() : FVector::ZeroVector;
}

FRotator AGridPlayerController::GetCameraRotation() const
{
	return CameraComponent ? CameraComponent->GetComponentRotation() : FRotator::ZeroRotator;
}


void AGridPlayerController::OnCancel()
{
	Debug::Print(TEXT("Cancel pressed"), FColor::Orange);
	// ��{�����޿�
}

bool AGridPlayerController::GetGridPositionUnderCursor(FIntPoint& OutGridPos)
{
	if (!GridManager)
		return false;

	// ����ƹ���m���@�ɧ���
	FHitResult HitResult;
	if (!GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
		return false;

	// �ഫ�����槤��
	OutGridPos = GridManager->WorldToGrid(HitResult.Location);

	// �ˬd�O�_����
	if (!GridManager->IsValidGridPosition(OutGridPos))
		return false;

	// �b�I����m��ܽոիH��
	DrawDebugSphere(
		GetWorld(),
		HitResult.Location,
		25.0f,
		12,
		FColor::Yellow,
		false,
		1.0f
	);

	//���椤�ߤ]���
	FVector GridCenter = GridManager->GridToWorld(OutGridPos);
	DrawDebugSphere(
		GetWorld(),
		GridCenter,
		15.0f,
		12,
		FColor::Green,
		false,
		1.0f
	);

	return true;
}

ATurnBasedCharacter* AGridPlayerController::GetCurrentTurnCharacter()
{


	if (!TurnManager)
		return nullptr;

	AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
	if (!CurrentActor)
		return nullptr;


	ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(CurrentActor);

	// �u��^���a�������
	if (TurnCharacter && TurnCharacter->bIsPlayerControlled)
	{
		return TurnCharacter;
	}

	return nullptr;
}

ATurnBasedCharacter* AGridPlayerController::GetControlledTurnCharacter() const
{
	return Cast<ATurnBasedCharacter>(GetPawn());
}
