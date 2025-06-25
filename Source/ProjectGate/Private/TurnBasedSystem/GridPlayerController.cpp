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

	// 找到 GridManager 

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




	// 清空陣列，重新搜尋 TurnManager
	FoundActors.Empty();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASimpleTurnManager::StaticClass(), FoundActors);


	// 找到 TurnManager
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



	// 設置輸入模式
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);

	//添加輸入映射上下文
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

	// 使用 Enhanced Input Component
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		//綁定點擊動作
		if (ClickAction)
		{
			EnhancedInputComponent->BindAction(ClickAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnClick);
		}

		//綁定顯示範圍動作
		if (ShowRangeAction)
		{
			EnhancedInputComponent->BindAction(ShowRangeAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnShowRange);
		}
		// 綁定相機旋轉
		if (RotateCameraAction)
		{
			EnhancedInputComponent->BindAction(RotateCameraAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCameraRotate);
		}

		// 綁定相機縮放
		if (ZoomCameraAction)
		{
			EnhancedInputComponent->BindAction(ZoomCameraAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCameraZoom);
		}

		// 綁定取消動作
		if (CancelAction)
		{
			EnhancedInputComponent->BindAction(CancelAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnCancel);
		}

	}


	/*舊綁定
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



	//獲取當前回合的角色


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

	// 獲取點擊的網格位置
	FIntPoint ClickedGridPos;
	if (!GetGridPositionUnderCursor(ClickedGridPos))
	{
		Debug::Print(TEXT("Invalid grid position"), FColor::Orange);
		return;
	}
		
	//顯示點擊座標
	Debug::Print(FString::Printf(TEXT("Clicked Grid: (%d, %d)"),
		ClickedGridPos.X, ClickedGridPos.Y), FColor::Cyan);

	// 嘗試移動到點擊的位置
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
	//顯示當前角色的移動範圍
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

	//獲取輸入值
	float RotateAmount = Value.Get<float>();
	CurrentCameraRotation += RotateAmount *45.0f *GetWorld()->GetDeltaSeconds();

	//這裡應該更新相機旋轉
	Debug::Print(FString::Printf(TEXT("Camera Rotation: %.1f"), CurrentCameraRotation), FColor::Cyan);

}

void AGridPlayerController::OnCameraZoom(const FInputActionValue& Value)
{
	//獲取輸入值
	float ZoomAmount = Value.Get<float>();
	CurrentCameraZoom = FMath::Clamp(CurrentCameraZoom + ZoomAmount * 100.0f, 500.0f, 2000.0f);

	// 這裡應該更新相機距離
	Debug::Print(FString::Printf(TEXT("Camera Zoom: %.1f"), CurrentCameraZoom), FColor::Cyan);

}

void AGridPlayerController::OnCancel()
{
	Debug::Print(TEXT("Cancel pressed"), FColor::Orange);
	// 實現取消邏輯
}

bool AGridPlayerController::GetGridPositionUnderCursor(FIntPoint& OutGridPos)
{
	if (!GridManager)
		return false;

	// 獲取滑鼠位置的世界坐標
	FHitResult HitResult;
	if (!GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
		return false;

	// 轉換為網格坐標
	OutGridPos = GridManager->WorldToGrid(HitResult.Location);

	// 檢查是否有效
	if (!GridManager->IsValidGridPosition(OutGridPos))
		return false;

	// 在點擊位置顯示調試信息
	DrawDebugSphere(
		GetWorld(),
		HitResult.Location,
		25.0f,
		12,
		FColor::Yellow,
		false,
		1.0f
	);

	//網格中心也顯示
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
