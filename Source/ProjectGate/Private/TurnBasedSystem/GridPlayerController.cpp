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
	bAutoManageActiveCameraTarget = false; //禁用相機
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	PrimaryActorTick.bCanEverTick = true;
}



void AGridPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//設置相機系統
	SetupCamera();

	//查找管理器
	FindManagers();

	// 設置輸入模式
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);
	
	// 添加輸入映射上下文
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

//相機設置將來需要調整

void AGridPlayerController::SetupCamera()
{
	Debug::Print(TEXT("SetupCamera"));

	//創建相機Pawn
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


   //創建根組件
	USphereComponent* RootComp = NewObject<USphereComponent>(CameraPawn, TEXT("RootComponent"));
	RootComp->InitSphereRadius(50.0f);
	RootComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CameraPawn->SetRootComponent(RootComp);
	RootComp->RegisterComponent();

	//創建 Spring Arm
	SpringArmComponent = NewObject<USpringArmComponent>(CameraPawn, TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootComp);
	SpringArmComponent->TargetArmLength = 800.0f;
	SpringArmComponent->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
	SpringArmComponent->bDoCollisionTest = false;
	SpringArmComponent->bUsePawnControlRotation = false;
	SpringArmComponent->RegisterComponent();

	//創建Camera
	CameraComponent = NewObject<UCameraComponent>(CameraPawn, TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
	CameraComponent->RegisterComponent();

	//設置為視角目標
	SetViewTarget(CameraPawn);

	Debug::Print(TEXT("Camera system initialized"), FColor::Green);

}

void AGridPlayerController::FindManagers()
{
	// 查找 GridManager
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

	// 查找 TurnManager
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

	// 使用 Enhanced Input Component
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		//綁定點擊動作
		if (ClickAction)
		{
			EnhancedInputComponent->BindAction(ClickAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnClick);
			Debug::Print(TEXT("ClickWorking"));
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

		// 綁定動態模式切換（Space鍵）
		if (DynamicModeAction)
		{
			EnhancedInputComponent->BindAction(DynamicModeAction, ETriggerEvent::Started, this, &AGridPlayerController::OnDynamicMode);
			Debug::Print(TEXT("DynamicModeAction bound"), FColor::Green);
		}
		else
		{
			Debug::Print(TEXT("WARNING: DynamicModeAction is null!"), FColor::Yellow);
		}

		// 綁定移動輸入（WASD）
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGridPlayerController::OnMove);
			Debug::Print(TEXT("MoveAction bound"), FColor::Green);
		}
		else
		{
			Debug::Print(TEXT("WARNING: MoveAction is null!"), FColor::Yellow);
		}

		//相機控制綁定
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


		// Shift 和右鍵（使用傳統綁定）
		InputComponent->BindAction("Shift", IE_Pressed, this, &AGridPlayerController::OnShiftPressed);
		InputComponent->BindAction("Shift", IE_Released, this, &AGridPlayerController::OnShiftReleased);
		InputComponent->BindAction("RightMouseButton", IE_Pressed, this, &AGridPlayerController::OnRightMousePressed);
		InputComponent->BindAction("RightMouseButton", IE_Released, this, &AGridPlayerController::OnRightMouseReleased);


	}
}

void AGridPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// 更新相機移動
	UpdateCameraMovement(DeltaTime);

	//網格位置同步
	//只在動態模式下同步網格
	if (bIsInDynamicMode)
	{
		ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
		if (ControlledCharacter && ControlledCharacter->IsMyTurn())
		{
			// 使用現有的 UpdateGridPositionFromWorld 函數
			ControlledCharacter->UpdateGridPositionFromWorld();
		}
	}


}

void AGridPlayerController::OnDynamicMode()
{

	// 獲取當前控制的角色
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter)
	{
		Debug::Print(TEXT("Not controlling any character!"), FColor::Red);
		return;
	}

	// 檢查是否是該角色的回合
	if (!ControlledCharacter->IsMyTurn())
	{
		Debug::Print(TEXT("Not this character's turn!"), FColor::Yellow);
		return;
	}

	// 獲取 EnhancedMovementSystem
	UEnhancedMovementSystem* MovementSystem = ControlledCharacter->FindComponentByClass<UEnhancedMovementSystem>();
	if (!MovementSystem)
	{
		Debug::Print(TEXT("No EnhancedMovementSystem on character!"), FColor::Red);
		return;
	}


	// 獲取視覺組件
	UGridVisualComponent* VisualComp = ControlledCharacter->FindComponentByClass<UGridVisualComponent>();
	if (!VisualComp)
	{
		Debug::Print(TEXT("ERROR: No GridVisualComponent found!"), FColor::Red);
		return;
	}


	// 切換模式
	bIsInDynamicMode = !bIsInDynamicMode;

	if (bIsInDynamicMode)
	{   //== 進入動態模式 ==

		// 進入動態模式時自動切到Focus模式
		if (!bIsFocusMode)
		{
			OnToggleFocus(FInputActionValue());
		}

		//啟動動態移動系統
		MovementSystem->SwitchMovementMode(ECustomMovementMode::DynamicMove);

		//清除網格視覺
		VisualComp->ClearAllVisuals();

		Debug::Print(TEXT("===== DYNAMIC MOVEMENT MODE: ON ====="), FColor::Green, 5.0f);

	}
	else
	{
		//停止動態移動
		MovementSystem->SwitchMovementMode(ECustomMovementMode::Idle);


		//顯示網格範圍
		ControlledCharacter->ShowMovementRange();

		// 切換回自由相機
		if (bIsFocusMode)
		{
			OnToggleFocus(FInputActionValue());
		}

		Debug::Print(TEXT("===== DYNAMIC MOVEMENT MODE: OFF ====="), FColor::Red, 5.0f);


	}

	//通知UI更新
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

	// 切換模式
	bIsInDynamicMode = !bIsInDynamicMode;

	// 獲取視覺組件
	UGridVisualComponent* VisualComp = ControlledCharacter->FindComponentByClass<UGridVisualComponent>();
	if (!VisualComp)
	{
		Debug::Print(TEXT("ERROR: No GridVisualComponent found!"), FColor::Red);
		return;
	}

	if (bIsInDynamicMode)
	{
		// 動態模式：清除所有網格視覺
		VisualComp->ClearAllVisuals();
		Debug::Print(TEXT("Switched to Dynamic Mode - Grid visuals cleared"), FColor::Blue);
	}
	else
	{
		// 網格模式：顯示移動範圍
		ControlledCharacter->ShowMovementRange();
		Debug::Print(TEXT("Switched to Grid Mode - Showing movement range"), FColor::Green);
	}

	// 通知 UI 更新
	UIOnMovementModeChanged.Broadcast(bIsInDynamicMode);
	*/

}

void AGridPlayerController::OnMove(const FInputActionValue& Value)
{
	
	// 只在動態模式下處理移動
	if (!bIsInDynamicMode)
	{
		return;
	}

	// 獲取輸入向量
	FVector2D MovementVector = Value.Get<FVector2D>();

	// 獲取當前控制的角色
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
	// 簡單的螢幕訊息
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,                          // Key (-1 = 不覆蓋)
			3.0f,                        // 持續時間
			FColor::Yellow,              // 顏色
			ModeName,                    // 訊息
			true,                        // 較新的在上
			FVector2D(2.0f, 2.0f)       // 文字縮放
		);
	}

	// 或使用 Debug::Print
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

	// 檢查是否是這角色的回合
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

	// 調試訊息
	
		Debug::Print(FString::Printf(TEXT("Turn Count: %d"), TurnManager->GetTurnCount()), FColor::Yellow);
		Debug::Print(FString::Printf(TEXT("Characters in order: %d"), TurnManager->GetTurnOrder().Num()), FColor::Yellow);

		

		// 獲取當前回合的角色（只定義一次）
		AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
		if (!CurrentActor)
		{
			Debug::Print(TEXT("No current character!"), FColor::Red);
			return;
		}

		Debug::Print(FString::Printf(TEXT("Current: %s"), *CurrentActor->GetName()), FColor::Green);

		// 轉換為 TurnBasedCharacter
		ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(CurrentActor);
		if (!CurrentCharacter)
		{
			Debug::Print(TEXT("Current actor is not a TurnBasedCharacter"), FColor::Red);
			return;
		}

		// 檢查是否為玩家控制
		if (!CurrentCharacter->bIsPlayerControlled)
		{
			Debug::Print(TEXT("Not player controlled character!"), FColor::Yellow);
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

	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("No current character or not player's turn!"), FColor::Red);
		return;
	}
	*/
}

void AGridPlayerController::OnShowRange()
{
	//顯示當前角色的移動範圍
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
		//獲取相機前向和右向
		FRotator CamRotation = SpringArmComponent->GetComponentRotation();
		CamRotation.Pitch = 0.0f;

		FVector Forward = FRotationMatrix(CamRotation).GetUnitAxis(EAxis::X);
		FVector Right = FRotationMatrix(CamRotation).GetUnitAxis(EAxis::Y);

		//計算移動方向
		FVector MoveDirection = (Forward * MoveVector.Y + Right * MoveVector.X);
		MoveDirection.Normalize();

		//增加到速度
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

	// 平滑減速
	CameraVelocity = FMath::VInterpTo(CameraVelocity, FVector::ZeroVector, DeltaTime, 5.0f);

	// 應用移動
	if (!CameraVelocity.IsNearlyZero())
	{
		FVector NewLocation = CameraPawn->GetActorLocation() + CameraVelocity * DeltaTime;
		
		CameraPawn->SetActorLocation(NewLocation);
	}
}

void AGridPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// 重置相機狀態
	if (bIsFocusMode)
	{
		// 可選：保持Focus模式到新角色
		//FocusOnCurrentTurnCharacter();

		// 或者：自動切回自由相機
		 SetViewTarget(CameraPawn);
		 bIsFocusMode = false;
	}




	// 重置動態模式
	bIsInDynamicMode = false;

	if (ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(InPawn))
	{
		Debug::Print(FString::Printf(TEXT("GridPlayerController possessed: %s"),
			*TurnCharacter->GetActorLabel()), FColor::Green);
	}
}

void AGridPlayerController::OnUnPossess()
{
	// 離開動態模式
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

	

	// 檢查冷卻時間
	float CurrentTime = GetWorld()->GetTimeSeconds();
	if (CurrentTime - LastToggleFocusTime < ToggleFocusCooldown)
	{
		Debug::Print(TEXT("Focus toggle on cooldown"), FColor::Yellow);
		return;
	}

	LastToggleFocusTime = CurrentTime;

	// 確保有角色可以Focus
	ATurnBasedCharacter* CurrentCharacter = GetCurrentTurnCharacter();
	if (!CurrentCharacter)
	{
		Debug::Print(TEXT("No character to focus on"), FColor::Red);
		return;
	}

	if (bIsFocusMode)
	{

		// 切回自由相機
		SetViewTarget(CameraPawn);
		bIsFocusMode = false;
		Debug::Print(TEXT("Switched to Free Camera"), FColor::Yellow);
	}
	else
	{
		// 切到角色相機
		FocusOnCurrentTurnCharacter();
		bIsFocusMode = true;
		Debug::Print(TEXT("Switched to Character Focus"), FColor::Green);
	}

	// 更新 UI 顯示
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

	// 計算相機位置
	FRotator CurrentRotation = SpringArmComponent->GetRelativeRotation();
	FVector CameraOffset = CurrentRotation.Vector() * -Distance;
	FVector NewLocation = TargetLocation + CameraOffset;

	CameraPawn->SetActorLocation(NewLocation);
	SpringArmComponent->TargetArmLength = Distance;

	Debug::Print(FString::Printf(TEXT("1Camera focused on %s"), *TargetActor->GetActorLabel()), FColor::Green);
}

void AGridPlayerController::FocusOnCurrentTurnCharacter()
{

	// 優先使用當前 Possessed 的 Pawn
	ATurnBasedCharacter* CurrentTurnCharacter = Cast<ATurnBasedCharacter>(GetPawn());

	// 如果沒有 Possessed Pawn，才從 TurnManager 獲取
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

	// 強制立即切換（不使用 Blend）
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

	// 直接從 TurnManager 取得當前角色
	AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
	ATurnBasedCharacter* CurrentTurnCharacter = Cast<ATurnBasedCharacter>(CurrentActor);

	if (!CurrentTurnCharacter)
	{
		// 沒有角色時回到自由相機
		SetViewTarget(CameraPawn);
		bIsFocusMode = false;
		Debug::Print(TEXT("No character to focus - returning to free camera"), FColor::Yellow);
		return;


		// 使用混合切換以獲得平滑效果
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
	if (!CurrentActor)
		return nullptr;


	ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(CurrentActor);

	// 只返回玩家控制的角色
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
