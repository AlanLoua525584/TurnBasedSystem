// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatInterface.h"
#include "CombatSystem/CombatDisplayWidget.h"
#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "FreeCameraPawn.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"
#include "ProjectGateGameMode.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Engine/LocalPlayer.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/InputComponent.h"
#include "Components/CanvasPanelSlot.h"
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

	// 創建戰鬥 UI
	CreateCombatUI();

	// 監聽所有角色的血量變化
	SubscribeToHealthEvents();

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

void AGridPlayerController::OnTurnChangedCamera(AActor* NewTurnCharacter, bool bIsPlayerControlled)
{
	if (!NewTurnCharacter || !FreeCameraPawn)
	{
		Debug::Print(TEXT("ERROR: Missing character or FreeCameraPawn"), FColor::Red);
		return;
	}


	// 保存當前旋轉
	FRotator SavedRotation = GetControlRotation();

	// 退出動態模式
	if (bIsInDynamicMode)
	{
		bIsInDynamicMode = false;
		Debug::Print(TEXT("Exiting Dynamic Mode due to turn change"), FColor::Yellow);
	}


	// 設置 ViewTarget 為 FreeCameraPawn
	SetViewTarget(FreeCameraPawn);

	// 聚焦到新角色
	FreeCameraPawn->FocusOnActor(NewTurnCharacter, 800.0f);

	// 保持旋轉
	SetControlRotation(SavedRotation);

	// 顯示新角色的移動範圍（如果是玩家控制）
	if (bIsPlayerControlled)
	{
		if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(NewTurnCharacter))
		{
			// 延遲一幀顯示移動範圍，確保所有系統都已更新
			GetWorld()->GetTimerManager().SetTimerForNextTick([TurnChar]()
				{
					TurnChar->ShowMovementRange();
				});
		}

		Debug::Print(TEXT("Camera switched to FreeCamera and focused on player character"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("Camera focused on AI character"), FColor::Green);
	}

	// 更新 UI 顯示相機模式
	if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UTurnDisplayWidget* TurnWidget = GameMode->GetTurnDisplayWidget())
		{
			TurnWidget->UpdateCameraMode(false); // false = Free Camera
		}
	}

}

void AGridPlayerController::SetupCamera()
{
	Debug::Print(TEXT("SetupCamera"));

	// 如果已經有 FreeCameraPawn，使用它
	TArray<AActor*> FoundPawns;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFreeCameraPawn::StaticClass(), FoundPawns);

	if (FoundPawns.Num() > 0)
	{
		FreeCameraPawn = Cast<AFreeCameraPawn>(FoundPawns[0]);
		CameraPawn = FreeCameraPawn;
		Debug::Print(TEXT("Found existing FreeCameraPawn"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("No existing FreeCameraPawn"), FColor::Green);

		// 創建新的 FreeCameraPawn
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		FreeCameraPawn = GetWorld()->SpawnActor<AFreeCameraPawn>(
			AFreeCameraPawn::StaticClass(),
			FVector(0, 0, 1000),
			FRotator(-45, 0, 0),
			SpawnParams
		);

		CameraPawn = FreeCameraPawn;
		Debug::Print(TEXT("Created new FreeCameraPawn"), FColor::Green);
	}

	if (CameraPawn)
	{
		// 保存初始相機狀態
		SavedCameraRotation = GetControlRotation();
		SavedCameraLocation = CameraPawn->GetActorLocation();

		SafeSetViewTarget(CameraPawn);
		Debug::Print(TEXT("Camera system initialized"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("Failed to create camera pawn!"), FColor::Red);
	}
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

		// 攻擊模式綁定
		if (AttackModeAction)
		{
			EnhancedInputComponent->BindAction(AttackModeAction, ETriggerEvent::Started,this, &AGridPlayerController::OnAttackMode);


			Debug::Print(TEXT("AttackModeAction bound to Q key"), FColor::Green);
		}
		else
		{
			Debug::Print(TEXT("WARNING: AttackModeAction is null!"), FColor::Red);
		}


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

	// 攻擊模式下的目標高亮和預覽
	if (bIsInAttackMode)
	{
		UpdateAttackTargetHighlight();

		// 可選：繪製攻擊預覽線
		if (LastHighlightedTarget)
		{
			ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
			if (ControlledCharacter)
			{
				DrawDebugLine(
					GetWorld(),
					ControlledCharacter->GetActorLocation() + FVector(0, 0, 50),
					LastHighlightedTarget->GetActorLocation() + FVector(0, 0, 50),
					FColor::Red,
					false,
					0.0f,
					0,
					2.0f
				);
			}
		}
	}



}

void AGridPlayerController::OnDynamicMode()
{
	
	// 獲取當前控制的角色
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter || !ControlledCharacter->IsMyTurn())
	{
		Debug::Print(TEXT("Invalid character or not their turn!"), FColor::Red);
		return;
	}

	// 獲取 EnhancedMovementSystem
	UEnhancedMovementSystem* MovementSystem = ControlledCharacter->GetComponentByClass<UEnhancedMovementSystem>();
	
	// 獲取視覺組件
	UGridVisualComponent* VisualComp = ControlledCharacter->GetComponentByClass<UGridVisualComponent>();
	if (!MovementSystem || !VisualComp)
	{
		Debug::Print(TEXT("Missing components on character!"), FColor::Red);
		return;
	}

	// 切換狀態
	bIsInDynamicMode = !bIsInDynamicMode;

	if (bIsInDynamicMode)
	{   //== 進入動態模式：控制角色，切鏡頭==

		//Possess(ControlledCharacter);
		
		VisualComp->ClearAllVisuals();
		//啟動動態移動系統
		MovementSystem->SwitchMovementMode(ECustomMovementMode::DynamicMove);
		// 設置角色移動模式
		ControlledCharacter->SetMovementMode(true);	
		// 設置輸入模式 - 遊戲和UI都可用
		FInputModeGameAndUI InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		InputMode.SetHideCursorDuringCapture(false);
		SetInputMode(InputMode);
		Debug::Print(TEXT("===== DYNAMIC MOVEMENT MODE: ON ====="), FColor::Green, 5.0f);

		//SafeSetViewTarget(ControlledCharacter);


		// === 切換到角色相機 ===
		// 保存自由相機狀態
		SavedCameraRotation = GetControlRotation();
		if (FreeCameraPawn)
		{
			SavedCameraLocation = FreeCameraPawn->GetActorLocation();
			if (USpringArmComponent* FreeCameraArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
			{
				SavedArmLength = FreeCameraArm->TargetArmLength;
			}
		}


		// 切換到角色視角，並應用保存的旋轉
		FRotator RotationToApply = SavedCameraRotation;
		FocusOnCurrentTurnCharacter();

		// 確保旋轉被正確應用
		SetControlRotation(RotationToApply);
		if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(ControlledCharacter))
		{
			if (TurnChar->CameraBoom)
			{
				TurnChar->CameraBoom->SetWorldRotation(RotationToApply);
			}
		}


		bIsInDynamicMode = true;
		Debug::Print(TEXT("Switched to Character Focus"), FColor::Green);




	}
	else
	{    // 退出動態模式：自由鏡頭，自動 Focus 當前角
		//停止動態移動
		MovementSystem->SwitchMovementMode(ECustomMovementMode::Idle);
		//顯示網格範圍
		ControlledCharacter->ShowMovementRange();

		ControlledCharacter->SetMovementMode(false);

		/*
		//UnPossess();
		SafeSetViewTarget(FreeCameraPawn);

		// 讓 FreeCamera 聚焦角色
		if (FreeCameraPawn && ControlledCharacter)
		{
			FreeCameraPawn->FocusOnActor(ControlledCharacter, 800.0f);
		}
		*/
		// 保存當前的角色相機狀態
		SavedCameraRotation = GetControlRotation();

		if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(ControlledCharacter))
		{
			if (TurnChar->CameraBoom)
			{
				SavedCameraRotation = TurnChar->CameraBoom->GetComponentRotation();
				SavedArmLength = TurnChar->CameraBoom->TargetArmLength;
			}
		}

		// 設置自由相機的位置和旋轉
		if (FreeCameraPawn)
		{
			// 計算相機應該在的位置
			FVector CharLocation = ControlledCharacter->GetActorLocation();
			FVector CameraOffset = SavedCameraRotation.Vector() * -SavedArmLength;
			CameraOffset.Z = FMath::Max(CameraOffset.Z, 200.0f);

			FreeCameraPawn->SetActorLocation(CharLocation + CameraOffset);

			// 設置 SpringArm 的旋轉
			if (USpringArmComponent* FreeCameraArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
			{
				FreeCameraArm->SetWorldRotation(SavedCameraRotation);
				FreeCameraArm->TargetArmLength = SavedArmLength;
			}
		}

		// 切換視角目標
		SafeSetViewTarget(CameraPawn);

		// 重要：恢復控制器旋轉
		SetControlRotation(SavedCameraRotation);

		bIsInDynamicMode = false;
		Debug::Print(TEXT("Switched to Free Camera"), FColor::Yellow);


		Debug::Print(TEXT("===== DYNAMIC MOVEMENT MODE: OFF ====="), FColor::Red, 5.0f);
	}

	// 如果退出動態模式，確保也退出攻擊模式
	if (!bIsInDynamicMode && bIsInAttackMode)
	{
		ExitAttackMode();
		Debug::Print(TEXT("Exiting Attack Mode due to Dynamic Mode switch"), FColor::Yellow);

	}


	// 更新 UI 顯示
	if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UTurnDisplayWidget* TurnWidget = GameMode->GetTurnDisplayWidget())
		{
			TurnWidget->UpdateCameraMode(bIsInDynamicMode);
		}
	}


	//通知UI更新
	UIOnMovementModeChanged.Broadcast(bIsInDynamicMode);
	


}

void AGridPlayerController::SwitchMovementMode()
{
	
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter || !ControlledCharacter->IsMyTurn())
	{
		Debug::Print(TEXT("Cannot switch mode: Not your turn or no controlled character"), FColor::Red);
		return;
	}

	// 切換模式
	//bIsInDynamicMode = !bIsInDynamicMode;

	// 獲取視覺組件
	UGridVisualComponent* VisualComp = ControlledCharacter->GetComponentByClass<UGridVisualComponent>();
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
	
	if (bIsInDynamicMode)
	{
		ATurnBasedCharacter* CurrentCharacter = Cast<ATurnBasedCharacter>(GetCurrentTurnCharacter());

		Possess(CurrentCharacter);
		FocusOnActor(CurrentCharacter);
	}
	else
	{
		if (FreeCameraPawn)
		{
			// 切換到自由鏡頭
			UnPossess();
			SafeSetViewTarget(FreeCameraPawn);

			// 每次自由鏡頭時，自動對焦
			FreeCameraPawn->FocusOnActor(GetCurrentTurnCharacter(), 800.0f);
		}
	}



}

void AGridPlayerController::OnMove(const FInputActionValue& Value)
{
	// 攻擊模式下禁止移動
	if (bIsInAttackMode)
	{
		// 可選：顯示提示
		static float LastWarningTime = 0.0f;
		float CurrentTime = GetWorld()->GetTimeSeconds();
		if (CurrentTime - LastWarningTime > 1.0f)  // 每秒最多提示一次
		{
			Debug::Print(TEXT("Movement disabled in Attack Mode!"), FColor::Yellow);
			LastWarningTime = CurrentTime;
		}
		return;
	}



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

	UEnhancedMovementSystem* MovementSystem = ControlledCharacter->GetComponentByClass<UEnhancedMovementSystem>();
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

	return TurnCharacter->GetComponentByClass<UEnhancedMovementSystem>();
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

void AGridPlayerController::HandleDynamicAttackInput()
{
	if (!bIsInAttackMode ) return;

	// 獲取控制的角色
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UCombatComponent* Combat = ControlledCharacter->FindComponentByClass<UCombatComponent>();
	if (!Combat) return;


	// 滑鼠懸停時顯示可攻擊目標
	FHitResult Hit;
	if (GetHitResultUnderCursor(ECC_Pawn, false, Hit))
	{
		AActor* HoverTarget = Hit.GetActor();

		// 使用 CombatComponent 的 CanAttack 檢查
		if (HoverTarget && Combat->CanAttack(HoverTarget))
		{
			// 顯示攻擊預覽
			ShowAttackPreview(HoverTarget);

			// 左鍵點擊執行攻擊
			if (IsInputKeyDown(EKeys::LeftMouseButton))
			{
				// 檢查角色是否有 ExecuteAnimatedAttack 函數
				// 如果沒有，直接使用 CombatComponent 的 ExecuteAttack
				if (Combat->ExecuteAttack(HoverTarget))
				{
					Debug::Print(TEXT("Attack executed!"), FColor::Green);

					// 可選：退出攻擊模式
					if (bAutoExitAttackMode)
					{
						ToggleAttackMode();  // 使用這個新函數
					}
				}
			}
		}
	}
}

void AGridPlayerController::OnClick()
{

	Debug::Print(TEXT("Clicking"));

	// 優先處理攻擊模式
	if (bIsInAttackMode )
	{
		ProcessAttackClick();
		return;
	}

	// 動態模式下不處理普通點擊（除非在攻擊模式）
	if (bIsInDynamicMode)
	{
		Debug::Print(TEXT("Click ignored in Dynamic Mode (Press Q for Attack Mode)"), FColor::Green);
		return;
	}



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
	
	FVector2D RotateVector = Value.Get<FVector2D>();

	// 只在按住右鍵時旋轉相機
	if (!bIsRightMousePressed)
	{
		// 在動態模式下，即使沒按右鍵也允許旋轉
		if (!bIsInDynamicMode)
		{
			return;
		}
	}



	// 在 Focus 模式下，旋轉角色（第三人稱相機會跟隨）
	if ( bIsInDynamicMode)
	{

		// 動態模式下的角色相機旋轉
		AddYawInput(RotateVector.X * MouseSensitivity);
		AddPitchInput(RotateVector.Y * MouseSensitivity);

		// 同步旋轉到角色的 CameraBoom
		if (ATurnBasedCharacter* TurnCharacter = GetControlledTurnCharacter())
		{
			if (TurnCharacter->CameraBoom)
			{
				TurnCharacter->CameraBoom->SetWorldRotation(GetControlRotation());
			}
		}


	}
	else if (!bIsInDynamicMode)
	{
		// 自由相機模式
		if (FreeCameraPawn)
		{
			// 直接控制 FreeCameraPawn 的旋轉
			if (USpringArmComponent* SpringArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
			{
				FRotator NewRotation = SpringArm->GetRelativeRotation();
				NewRotation.Yaw += RotateVector.X * MouseSensitivity;
				NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch - RotateVector.Y * MouseSensitivity, -80.0f, -10.0f);
				SpringArm->SetRelativeRotation(NewRotation);

				// 同步到控制器
				SetControlRotation(SpringArm->GetComponentRotation());
			}
		}
		else
		{
			// 備用方案：直接修改控制器旋轉
			AddYawInput(RotateVector.X * MouseSensitivity);
			AddPitchInput(-RotateVector.Y * MouseSensitivity);
		}
	}
	else
	{
		// Focus 模式但非動態模式：標準旋轉
		AddYawInput(RotateVector.X * MouseSensitivity);
		AddPitchInput(-RotateVector.Y * MouseSensitivity);
	}
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

void AGridPlayerController::SubscribeToHealthEvents()
{
	TArray<AActor*> AllCharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedCharacter::StaticClass(), AllCharacters);

	for (AActor* Actor : AllCharacters)
	{
		if (UCombatComponent* CombatComp = Actor->FindComponentByClass<UCombatComponent>())
		{
			// 綁定以傳遞角色參數
			CombatComp->OnHealthChanged.AddDynamic(this, &AGridPlayerController::OnAnyCharacterHealthChanged);
		}
	}
}

void AGridPlayerController::OnCombatExecuted(AActor* Attacker, AActor* Target, const FDamageResult& DamageResult)
{
	// 顯示戰鬥結果
	if (CombatDisplayWidget)
	{
		CombatDisplayWidget->ShowCombatResult(DamageResult);
	}

	// 可以添加其他效果
	Debug::Print(FString::Printf(TEXT("Combat Result: %d damage!"),
		DamageResult.FinalDamage), FColor::Green);
}

void AGridPlayerController::OnAnyCharacterHealthChanged(AActor* AffectedCharacter, int32 CurrentHealth, int32 MaxHealth)
{
	// 如果是當前顯示的目標，更新戰鬥 UI
	if (AffectedCharacter == LastHighlightedTarget && CombatDisplayWidget)
	{
		CombatDisplayWidget->UpdateTargetHealthDisplay(AffectedCharacter);
	}

	// 如果是玩家控制的角色，可以更新其他 UI
	if (AffectedCharacter == GetControlledTurnCharacter())
	{
		// 更新玩家狀態 UI
		Debug::Print(FString::Printf(TEXT("Player Health: %d/%d"), CurrentHealth, MaxHealth), FColor::Green);
	}
}

void AGridPlayerController::OnCharacterHealthChanged(int32 CurrentHealth, int32 MaxHealth)
{
	// 之後更新 UI 或其他視覺反饋
	Debug::Print(FString::Printf(TEXT("Health Changed: %d / %d"), CurrentHealth, MaxHealth), FColor::Yellow);
}

void AGridPlayerController::UpdateAttackTargetHighlight()
{
	if (!bIsInAttackMode) return;

	AActor* CurrentTarget = nullptr;

	// 嘗試獲取滑鼠下的角色
	if (!GetCharacterUnderCursor(CurrentTarget))
	{
		// 沒有目標，隱藏目標信息
		if (LastHighlightedTarget)
		{
			if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
			{
				if (UCombatDisplayWidget* CombatWidget = GameMode->GetCombatDisplayWidget())
				{
					CombatWidget->HideTargetInfo();
					CombatWidget->HideDamagePreview();
				}
			}
			LastHighlightedTarget = nullptr;
		}
		return;
	}

	// 如果是相同目標，不需要更新
	if (CurrentTarget == LastHighlightedTarget) return;

	// 新目標
	LastHighlightedTarget = CurrentTarget;

	Debug::PrintCooldown(TEXT("HoverTarget"),
		FString::Printf(TEXT("Hovering over: %s"), *CurrentTarget->GetActorLabel()),
		FColor::White, 0.5f);

	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>();
	if (!CombatComp) return;

	// 檢查是否可以攻擊
	bool bCanAttack = CombatComp->CanAttack(CurrentTarget);

	// 更新 Combat UI
	if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UCombatDisplayWidget* CombatWidget = GameMode->GetCombatDisplayWidget())
		{
			CombatWidget->ShowTargetInfo(CurrentTarget, bCanAttack);

			if (bCanAttack)
			{
				// 計算並顯示預期傷害
				FDamageResult PreviewDamage = CombatComp->CalculateDamage(CurrentTarget);
				CombatWidget->ShowDamagePreview(PreviewDamage.FinalDamage, PreviewDamage.bIsCritical);

				Debug::PrintCooldown(TEXT("DamagePreview"),
					FString::Printf(TEXT("Preview Damage: %d%s"),
						PreviewDamage.FinalDamage,
						PreviewDamage.bIsCritical ? TEXT(" (CRIT!)") : TEXT("")),
					FColor::Yellow, 0.5f);
			}
			else
			{
				CombatWidget->HideDamagePreview();
			}
		}
	}
}

void AGridPlayerController::OnCombatResultReceived(AActor* Attacker, AActor* Target, const FDamageResult& Result)
{

	if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UCombatDisplayWidget* CombatWidget = GameMode->GetCombatDisplayWidget())
		{
			CombatWidget->ShowCombatResult(Result);
		}
	}
}

void AGridPlayerController::OnAttackMode(const FInputActionValue& Value)
{

	Debug::Print(TEXT("Q key pressed!"), FColor::Magenta);


	//獲得當前控制角色
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter)
	{
		Debug::Print(TEXT("No controlled character!"), FColor::Red);
		return;
	}

	if (!ControlledCharacter->IsMyTurn())
	{
		Debug::Print(TEXT("Not your turn!"), FColor::Yellow);
		return;
	}

	//檢查有沒有CombatComponent
	UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>();
	if (!CombatComp)
	{
		Debug::Print(TEXT("Character has no CombatComponent!"), FColor::Red);
		return;
	}


	// 檢查前置條件
	if (bIsInAttackMode)
	{
		// === 進入攻擊模式 ===
		Debug::Print(TEXT("=== ATTACK MODE: ON ==="), FColor::Red, 10.0f);
		ShowModeNotification(TEXT("ATTACK MODE - Click target or press Q to cancel"));

		// 顯示攻擊範圍和可攻擊目標
		CombatComp->ShowAttackRange();

		// 停止角色移動（直接使用角色的函數）
		if (UCharacterMovementComponent* CharMoveComp = ControlledCharacter->GetCharacterMovement())
		{
			CharMoveComp->StopMovementImmediately();
		}

		// 改變滑鼠游標（可選）
		CurrentMouseCursor = EMouseCursor::Crosshairs;

		// 更新 Combat UI
		if (CombatDisplayWidget)
		{
			CombatDisplayWidget->SetAttackModeActive(true);
			Debug::Print(TEXT("Combat UI - Attack Mode Activated"), FColor::Green);
		}

		// 綁定戰鬥事件
		if (!CombatComp->OnAttackExecutedWithResult.IsAlreadyBound(this, &AGridPlayerController::OnCombatResultReceived))
		{
			CombatComp->OnAttackExecutedWithResult.AddDynamic(
				this, &AGridPlayerController::OnCombatResultReceived);
		}


	}
	else
	{
		// === 退出攻擊模式 ===
		ExitAttackMode();
	}

	// 切換攻擊模式
	bIsInAttackMode = !bIsInAttackMode;

	if (bIsInAttackMode)
	{
		// === 進入攻擊模式 ===
		Debug::Print(TEXT("=== ATTACK MODE: ON ==="), FColor::Red, 10.0f);
		ShowModeNotification(TEXT("ATTACK MODE - Click target or press Q to cancel"));

		// 顯示攻擊範圍和可攻擊目標
		CombatComp->ShowAttackRange();

		// 停止角色移動（如果正在移動）
		if (UEnhancedMovementSystem* MoveSys = ControlledCharacter->GetComponentByClass<UEnhancedMovementSystem>())
		{
			if (MoveSys->GetMovementComponent())
			{
				MoveSys->GetMovementComponent()->StopMovementImmediately();
			}
		}

		// 改變滑鼠游標（可選）
		CurrentMouseCursor = EMouseCursor::Crosshairs;
	}
	else
	{
		// === 退出攻擊模式 ===
		ExitAttackMode();
	}

	if (CombatDisplayWidget)
	{
		CombatDisplayWidget->SetAttackModeActive(bIsInAttackMode);
		Debug::Print(TEXT("Called SetAttackModeActive"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("CombatDisplayWidget is NULL!"), FColor::Red);
	}

	if (bIsInAttackMode)
	{
		// 綁定戰鬥事件
		if (UCombatComponent* CombatComponent = ControlledCharacter->GetComponentByClass<UCombatComponent>())
		{
			CombatComponent->OnAttackExecutedWithResult.AddDynamic(
				this, &AGridPlayerController::OnCombatExecuted
			);
		}
	}
	else
	{
		// 解綁事件
		if (UCombatComponent* CombatComponent = ControlledCharacter->GetComponentByClass<UCombatComponent>())
		{
			CombatComponent->OnAttackExecutedWithResult.RemoveDynamic(
				this, &AGridPlayerController::OnCombatExecuted
			);
		}
	}

}

void AGridPlayerController::ProcessAttackClick()
{
	AActor* Target = nullptr;

	// 使用新的檢測函數
	if (!GetCharacterUnderCursor(Target))
	{
		Debug::Print(TEXT("No character under cursor - exiting attack mode"), FColor::Yellow);
		ExitAttackMode();
		return;
	}

	Debug::Print(FString::Printf(TEXT("Found target: %s"),
		*Target->GetActorLabel()), FColor::Cyan);





	//攻擊邏輯
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>();
	if (!CombatComp) return;

	// 檢查是否可以攻擊此目標
	if (CombatComp->CanAttack(Target))
	{
		Debug::Print(FString::Printf(TEXT("Attacking %s..."), *Target->GetActorLabel()), FColor::Orange);


		// *** 重要修改：調用角色的動畫攻擊函數，而不是直接執行攻擊 ***
		ControlledCharacter->ExecuteAnimatedAttack(Target);

		// 攻擊成功後自動退出攻擊模式
		ExitAttackMode();
	}
	else
	{
		// 簡化的錯誤提示
		Debug::Print(TEXT("CanAttack returned false - check debug output"), FColor::Orange);
	}

	/*
	// 嘗試用不同的碰撞通道再試一次
	FHitResult VisibilityHit;
	if (GetHitResultUnderCursor(ECC_Visibility, false, VisibilityHit) && VisibilityHit.GetActor())
	{
		Debug::Print(FString::Printf(TEXT("ECC_Visibility found: %s"),
			*VisibilityHit.GetActor()->GetName()), FColor::Yellow);
	}
	*/

}

void AGridPlayerController::ExitAttackMode()
{
	if (!bIsInAttackMode) return;

	bIsInAttackMode = false;
	Debug::Print(TEXT("=== ATTACK MODE: OFF ==="), FColor::Blue, 5.0f);

	// 恢復正常游標
	CurrentMouseCursor = EMouseCursor::Default;

	// 隱藏攻擊範圍
	if (ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter())
	{
		if (UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>())
		{
			CombatComp->HideAttackRange();

			// 解綁事件
			CombatComp->OnAttackExecutedWithResult.RemoveDynamic(
				this, &AGridPlayerController::OnCombatResultReceived);
		}
	}

	// 更新 Combat UI
	if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UCombatDisplayWidget* CombatWidget = GameMode->GetCombatDisplayWidget())
		{
			CombatWidget->SetAttackModeActive(false);
			CombatWidget->HideDamagePreview();
			CombatWidget->HideTargetInfo();
			Debug::Print(TEXT("Combat UI - Attack Mode Deactivated"), FColor::Green);
		}
	}

	// 清除高亮目標
	LastHighlightedTarget = nullptr;


}

void AGridPlayerController::ToggleAttackMode()
{
	// 使用現有的 OnAttackMode 邏輯
	OnAttackMode(FInputActionValue());
}

void AGridPlayerController::CreateCombatUI()
{
	// 假設你在 GameMode 中設置了 Widget 類
    if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
    {
        // 需要在 GameMode 中添加 CombatDisplayWidgetClass 屬性
        TSubclassOf<UCombatDisplayWidget> WidgetClass = GameMode->GetCombatDisplayWidgetClass();
        if (WidgetClass)
        {
            CombatDisplayWidget = CreateWidget<UCombatDisplayWidget>(this, WidgetClass);
            if (CombatDisplayWidget)
            {
                CombatDisplayWidget->AddToViewport(1); // 層級 1，在 TurnDisplay 之上
                Debug::Print(TEXT("Combat Display UI created"), FColor::Green);
            }
        }
    }

	// 創建回合順序 UI
	if (TurnOrderWidgetClass)
	{
		TurnOrderWidget = CreateWidget<UTurnOrderWidget>(this, TurnOrderWidgetClass);
		if (TurnOrderWidget)
		{
			TurnOrderWidget->AddToViewport(10); // 較高層級

			// 設置位置 (螢幕頂部中央)
			if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(
				TurnOrderWidget->Slot))
			{
				CanvasSlot->SetAnchors(FAnchors(0.5f, 0.0f));
				CanvasSlot->SetAlignment(FVector2D(0.5f, 0.0f));
				CanvasSlot->SetPosition(FVector2D(0, 50));
			}
		}
	}

}

// 修改 ShowAttackPreview
void AGridPlayerController::ShowAttackPreview(AActor* Target)
{
    ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
    if (!ControlledCharacter) return;
    
    UCombatComponent* Combat = ControlledCharacter->FindComponentByClass<UCombatComponent>();
    if (!Combat) return;
    
    // 計算預覽傷害
    FDamageResult PreviewDamage = Combat->CalculateDamage(Target);
    
    // 使用新的戰鬥 UI
    if (CombatDisplayWidget)
    {
        CombatDisplayWidget->ShowDamagePreview(
            PreviewDamage.FinalDamage,
            PreviewDamage.bIsCritical
        );
        
        CombatDisplayWidget->ShowTargetInfo(Target, true);
    }
}

void AGridPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// 保存當前相機旋轉
	FRotator CurrentRotation = GetControlRotation();

	// 重置相機狀態
	if (bIsInDynamicMode)
	{
		// 如果在 動態模式，確保新角色的相機正確設置
		if (ATurnBasedCharacter* TurnCharacter = GetControlledTurnCharacter())
		{
			if (TurnCharacter->CameraBoom)
			{
				TurnCharacter->CameraBoom->bUsePawnControlRotation = true;
				TurnCharacter->CameraBoom->SetWorldRotation(CurrentRotation);
			}

			// 重新設置 ViewTarget 到新角色
			SafeSetViewTarget(TurnCharacter);
			SetControlRotation(CurrentRotation);
		}
	}
	else
	{
		// 保持在自由相機模式
		SafeSetViewTarget(CameraPawn);
		SetControlRotation(CurrentRotation);
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

bool AGridPlayerController::GetCharacterUnderCursor(AActor*& OutCharacter)
{
	FVector WorldLocation, WorldDirection;
	DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

	FVector Start = WorldLocation;
	FVector End = WorldLocation + WorldDirection * 10000.0f;

	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = true;
	QueryParams.bReturnPhysicalMaterial = false;

	// 只檢測 Pawn
	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

	TArray<FHitResult> Hits;
	GetWorld()->LineTraceMultiByObjectType(
		Hits,
		Start,
		End,
		ObjectQueryParams,
		QueryParams
	);

	// 找到第一個 TurnBasedCharacter
	for (const FHitResult& Hit : Hits)
	{
		if (Hit.GetActor() && Hit.GetActor()->IsA<ATurnBasedCharacter>())
		{
			OutCharacter = Hit.GetActor();
			/*
			Debug::Print(FString::Printf(TEXT("Primary detection found: %s"),
				*OutCharacter->GetName()), FColor::Green);
				*/
			Debug::PrintCooldown(TEXT("detection"), (TEXT("Primary detection found: %s"), *OutCharacter->GetName()), FColor::White, 0.5f);


			return true;
		}
	}

	return false;
}

bool AGridPlayerController::GetCharacterUnderCursorWithFallback(AActor*& OutCharacter)
{
	// 首先嘗試專門的檢測
	if (GetCharacterUnderCursor(OutCharacter))
	{
		return true;
	}

	Debug::Print(TEXT("Primary detection failed, trying fallback..."), FColor::Yellow);

	// 備用方案：使用 GetHitResultUnderCursor（方案1的改進版）
	TArray<TEnumAsByte<ECollisionChannel>> Channels = {
		ECC_Pawn,
		ECC_WorldDynamic,
		ECC_Visibility
	};

	for (auto Channel : Channels)
	{
		FHitResult Hit;
		GetHitResultUnderCursor(Channel, true, Hit);  // bTraceComplex = true

		if (Hit.GetActor() && Hit.GetActor()->IsA<ATurnBasedCharacter>())
		{
			OutCharacter = Hit.GetActor();
			Debug::Print(FString::Printf(TEXT("Fallback found with channel %d: %s"),
				(int32)Channel, *OutCharacter->GetName()), FColor::Blue);
			return true;
		}
	}

	FVector WorldLocation, WorldDirection;
	DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

	FVector Start = WorldLocation;
	FVector End = Start + WorldDirection * 10000.0f;

	TArray<FHitResult> HitResults;
	GetWorld()->LineTraceMultiByChannel(HitResults, Start, End, ECC_Visibility);

	for (const FHitResult& Hit : HitResults)
	{
		if (Hit.GetActor() && Hit.GetActor()->IsA<ATurnBasedCharacter>())
		{
			OutCharacter = Hit.GetActor();
			Debug::Print(FString::Printf(TEXT("Final fallback found: %s"),
				*OutCharacter->GetName()), FColor::Magenta);
			return true;
		}
	}





	return false;
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




void AGridPlayerController::FocusOnActor(AActor* TargetActor, float Distance)
{
	if (!TargetActor) return;

	// 如果有 FreeCameraPawn，使用它的 FocusOnActor
	if (FreeCameraPawn)
	{
		// 保持當前的控制器旋轉
		FRotator CurrentRotation = GetControlRotation();

		FreeCameraPawn->FocusOnActor(TargetActor, Distance);

		// 恢復旋轉
		SetControlRotation(CurrentRotation);

		Debug::Print(FString::Printf(TEXT("FreeCameraPawn focused on %s, rotation preserved"),
			*TargetActor->GetActorLabel()), FColor::Green);
	}
	else if (CameraPawn && SpringArmComponent)
	{

		// 備用方案
		FVector TargetLocation = TargetActor->GetActorLocation();
		FRotator CurrentRotation = GetControlRotation();

		FVector CameraOffset = CurrentRotation.Vector() * -Distance;
		CameraOffset.Z = FMath::Max(CameraOffset.Z, 200.0f);

		CameraPawn->SetActorLocation(TargetLocation + CameraOffset);
		SetControlRotation(CurrentRotation);

		Debug::Print(FString::Printf(TEXT("Camera focused on %s"),
			*TargetActor->GetActorLabel()), FColor::Green);
	}
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
		SafeSetViewTarget(CameraPawn);
		bIsInDynamicMode = false;
		Debug::Print(TEXT("No character to focus - returning to free camera"), FColor::Yellow);
		return;
	}

	// 確保角色的相機組件正確設置
	if (CurrentTurnCharacter->CameraBoom)
	{
		// 設置 CameraBoom 使用控制器旋轉
		CurrentTurnCharacter->CameraBoom->bUsePawnControlRotation = true;

		// 如果有保存的旋轉，應用它
		if (!SavedCameraRotation.IsZero())
		{
			CurrentTurnCharacter->CameraBoom->SetWorldRotation(SavedCameraRotation);
			SetControlRotation(SavedCameraRotation);
		}
		else
		{
			// 使用當前控制器旋轉
			FRotator CurrentRotation = GetControlRotation();
			CurrentTurnCharacter->CameraBoom->SetWorldRotation(CurrentRotation);
		}

		// 確保角色不會跟隨視角旋轉（只有相機跟隨）
		CurrentTurnCharacter->bUseControllerRotationYaw = false;
		CurrentTurnCharacter->bUseControllerRotationPitch = false;
		CurrentTurnCharacter->bUseControllerRotationRoll = false;



		// 強制立即切換（不使用 Blend）
		SafeSetViewTarget(CurrentTurnCharacter);

		Debug::Print(FString::Printf(TEXT("Camera focused on %s (Possessed: %s)"),
			*CurrentTurnCharacter->GetActorLabel(),
			GetPawn() == CurrentTurnCharacter ? TEXT("YES") : TEXT("NO")), FColor::Green);




	}
	
}


//同步相機狀態

void AGridPlayerController::SyncCameraStates()
{
	// 確保 FreeCameraPawn 和角色相機之間的狀態同步
	if (bIsInDynamicMode)
	{
		// 動態模式：從角色相機同步到 FreeCameraPawn
		if (ATurnBasedCharacter* TurnCharacter = GetControlledTurnCharacter())
		{
			if (TurnCharacter->CameraBoom && FreeCameraPawn)
			{
				FRotator CharRotation = TurnCharacter->CameraBoom->GetComponentRotation();
				if (USpringArmComponent* FreeArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
				{
					FreeArm->SetWorldRotation(CharRotation);
				}
			}
		}
	}
	else
	{
		// 自由相機模式：從 FreeCameraPawn 同步到控制器
		if (FreeCameraPawn)
		{
			if (USpringArmComponent* FreeArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
			{
				SetControlRotation(FreeArm->GetComponentRotation());
			}
		}
	}
}


void AGridPlayerController::SafeSetViewTarget(AActor* NewViewTarget)
{// 保存當前旋轉
	FRotator PreservedRotation = GetControlRotation();

	// 如果旋轉接近零，使用保存的或默認的旋轉
	if (FMath::Abs(PreservedRotation.Pitch) < 5.0f &&
		FMath::Abs(PreservedRotation.Yaw) < 5.0f)
	{
		PreservedRotation = SavedCameraRotation.IsZero() ?
			FRotator(-45.0f, 0.0f, 0.0f) : SavedCameraRotation;

		Debug::Print(TEXT("WARNING: Preventing zero rotation in SafeSetViewTarget"), FColor::Red);
	}

	// 執行視角切換
	Super::SetViewTarget(NewViewTarget);

	// 立即恢復旋轉
	SetControlRotation(PreservedRotation);

	// 如果是 FreeCameraPawn，確保其 SpringArm 也有正確旋轉
	if (NewViewTarget == FreeCameraPawn && FreeCameraPawn)
	{
		if (USpringArmComponent* SpringArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
		{
			SpringArm->SetRelativeRotation(PreservedRotation);
		}
	}
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

	// 修復：返回當前回合角色，無論是玩家還是AI 
	return Cast<ATurnBasedCharacter>(CurrentActor);


}

ATurnBasedCharacter* AGridPlayerController::GetControlledTurnCharacter() const
{
	return Cast<ATurnBasedCharacter>(GetPawn());
}

ATurnBasedCharacter* AGridPlayerController::GetPlayerControlledTurnCharacter()
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


void AGridPlayerController::TestPortraitSystem()
{
	TArray<AActor*> AllCharacters;
	UGameplayStatics::GetAllActorsOfClass(this->GetWorld(), ATurnBasedCharacter::StaticClass(), AllCharacters);

	for (AActor* Actor : AllCharacters)
	{
		if (ATurnBasedCharacter* BasedCharacter = Cast<ATurnBasedCharacter>(Actor))
		{
			UE_LOG(LogTemp, Warning, TEXT("=== Character: %s ==="), *BasedCharacter->GetActorLabel());
			UE_LOG(LogTemp, Warning, TEXT("  Full Portrait: %s"),
				BasedCharacter->PortraitData.FullPortrait ? TEXT("Yes") : TEXT("No"));
			UE_LOG(LogTemp, Warning, TEXT("  UI Portrait: %s"),
				BasedCharacter->PortraitData.UIPortrait ? TEXT("Yes") : TEXT("No"));
			UE_LOG(LogTemp, Warning, TEXT("  Battle Icon: %s"),
				BasedCharacter->PortraitData.BattleIcon ? TEXT("Yes") : TEXT("No"));
			UE_LOG(LogTemp, Warning, TEXT("  Frame Style: %d"),
				BasedCharacter->PortraitData.FrameStyle);
		}
	}
}