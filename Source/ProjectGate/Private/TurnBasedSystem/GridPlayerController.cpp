// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

#include "Public/DebugHelper.h"

AGridPlayerController::AGridPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

void AGridPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// ��� GridManager 

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




	// �M�Ű}�C�A���s�j�M TurnManager
	FoundActors.Empty();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASimpleTurnManager::StaticClass(), FoundActors);


	// ��� TurnManager
	if (FoundActors.Num() > 0)
	{
		TurnManager = Cast<ASimpleTurnManager>(FoundActors[0]);
		{
			Debug::Print(TEXT("TurnManager found!"), FColor::Green);
		}
	}
	else
	{
		Debug::Print(TEXT("TurnManager not found!"), FColor::Red);
	}



	// �]�m��J�Ҧ�
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);

	//�K�[��J�M�g�W�U��
	if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if (GridInputMappingContext)
		{
			Subsystem->AddMappingContext(GridInputMappingContext, 0);

			Debug::Print(TEXT("Input Mapping Context added"), FColor::Green);
		}
		else
		{
			Debug::Print(TEXT("GridInputMappingContext is null! Please set it in Blueprint"), FColor::Red);
		}

	
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

	}


	/*�¸j�w
	InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &AGridPlayerController::OnLeftMouseClick);
	InputComponent->BindAction("RightMouseClick", IE_Pressed, this, &AGridPlayerController::OnRightMouseClick);
	*/

}

void AGridPlayerController::OnLeftMouseClick()
{
	return;
}

void AGridPlayerController::OnRightMouseClick()
{
	return;
}

void AGridPlayerController::OnClick()
{
	if (!GridManager || !TurnManager)
	{
		Debug::Print(TEXT("GridManager or TurnManager is null!"), FColor::Red);
		return;
	}



	//�����e�^�X������


	ATurnBasedCharacter* CurrentCharacter = GetCurrentTurnCharacter();
	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("No current character"), FColor::Orange);
		return;
	}

	if (!CurrentCharacter->IsPlayerControlled())
	{
		Debug::Print(TEXT("Not player's turn!"), FColor::Yellow);
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


}

void AGridPlayerController::OnShowRange()
{
	//��ܷ�e���⪺���ʽd��
	if (ATurnBasedCharacter* CurrentCharacter = GetCurrentTurnCharacter())
	{
		if (CurrentCharacter->IsPlayerControlled())
		{
			CurrentCharacter->ShowMovementRange();
			Debug::Print(TEXT("Showing movement range"), FColor::Blue);
		}
	}
	
}

void AGridPlayerController::OnCameraRotate(const FInputActionValue& Value)
{

	//�����J��
	float RotateAmount = Value.Get<float>();
	CurrentCameraRotation += RotateAmount *45.0f *GetWorld()->GetDeltaSeconds();

	//�o�����ӧ�s�۾�����
	Debug::Print(FString::Printf(TEXT("Camera Rotation: %.1f"), CurrentCameraRotation), FColor::Cyan);

}

void AGridPlayerController::OnCameraZoom(const FInputActionValue& Value)
{
	//�����J��
	float ZoomAmount = Value.Get<float>();
	CurrentCameraZoom = FMath::Clamp(CurrentCameraZoom + ZoomAmount * 100.0f, 500.0f, 2000.0f);

	// �o�����ӧ�s�۾��Z��
	Debug::Print(FString::Printf(TEXT("Camera Zoom: %.1f"), CurrentCameraZoom), FColor::Cyan);

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
	return Cast<ATurnBasedCharacter>(CurrentActor);
}
