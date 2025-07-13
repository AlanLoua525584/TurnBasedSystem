// Fill out your copyright notice in the Description page of Project Settings.

#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatInterface.h"
#include "CombatSystem/CombatDisplayWidget.h"
#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "TurnBasedSystem/Components/Combat/CombatModeComponent.h"
#include "TurnBasedSystem/Components/Camera/CameraControlComponent.h"
#include "TurnBasedSystem/Components/UI/UIManagerComponent.h"
#include "TurnBasedSystem/Components/Input/InputHandlerComponent.h"
#include "TurnBasedSystem/Components/Combat/ModeManagerComponent.h"
#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h" 
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
	bAutoManageActiveCameraTarget = false; // Disable camera auto-management
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	PrimaryActorTick.bCanEverTick = true;

	// Create components
	
	CameraController = CreateDefaultSubobject<UCameraControlComponent>(TEXT("CameraController"));
	CombatModeManager = CreateDefaultSubobject<UCombatModeComponent>(TEXT("CombatModeManager"));
	InputHandler = CreateDefaultSubobject<UInputHandlerComponent>(TEXT("InputHandler"));
	ModeManager = CreateDefaultSubobject<UModeManagerComponent>(TEXT("ModeManager"));
	UIManager = CreateDefaultSubobject<UUIManagerComponent>(TEXT("UIManager"));
	
}

void AGridPlayerController::BeginPlay()
{
	Super::BeginPlay();
	// 延遲初始化，確保場景完全載入
	FTimerHandle InitTimer;
	GetWorld()->GetTimerManager().SetTimer(InitTimer, [this]()
		{
			// Find managers
			FindManagers();

			// Initialize components
			InitializeComponents();

			// Setup input mode
			FInputModeGameAndUI InputMode;
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			InputMode.SetHideCursorDuringCapture(false);
			SetInputMode(InputMode);

			// Add input mapping context
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
			{
				if (GridInputMappingContext)
				{
					Subsystem->AddMappingContext(GridInputMappingContext, 0);
					Debug::Print(TEXT("Input Mapping Context added successfully"), FColor::Green);
				}
			}

		}, 0.05f, false);  // 短暫延遲

}

// Camera setup will need refinement
void AGridPlayerController::OnTurnChangedCamera(AActor* NewTurnCharacter, bool bIsPlayerControlled)
{
	if (CameraController)
	{
		CameraController->OnTurnChangedCamera(NewTurnCharacter, bIsPlayerControlled);
	}
}


bool AGridPlayerController::IsCharacterMyTurn(ATurnBasedCharacter* NewCharacter) const
{

	Debug::Print(TEXT("=== IsCharacterMyTurn 詳細檢查 ==="), FColor::Yellow);

	// === 檢查1: 基礎參數驗證 ===
	if (!TurnManager)
	{
		Debug::Print(TEXT(" 檢查1失敗: TurnManager 為空!"), FColor::Red);
		return false;
	}

	if (!NewCharacter)
	{
		Debug::Print(TEXT("檢查1失敗: NewCharacter 為空!"), FColor::Red);
		return false;
	}

	Debug::Print(FString::Printf(TEXT(" 檢查1通過: TurnManager和NewCharacter都有效")), FColor::Green);
	Debug::Print(FString::Printf(TEXT("  NewCharacter: %s"), *NewCharacter->GetActorLabel()), FColor::White);

	// === 檢查2: 當前回合角色匹配 ===
	AActor* CurrentTurnActor = TurnManager->GetCurrentTurnCharacter();

	Debug::Print(FString::Printf(TEXT("當前回合角色: %s"),
		CurrentTurnActor ? *CurrentTurnActor->GetName() : TEXT("無")), FColor::White);
	Debug::Print(FString::Printf(TEXT("檢查的角色: %s"), *NewCharacter->GetName()), FColor::White);

	bool bIsSameTurnCharacter = (CurrentTurnActor == NewCharacter);
	Debug::Print(FString::Printf(TEXT("%s 檢查2 - 回合角色匹配: %s"),
		bIsSameTurnCharacter ? TEXT("YES") : TEXT("NO"),
		bIsSameTurnCharacter ? TEXT("匹配") : TEXT("不匹配")),
		bIsSameTurnCharacter ? FColor::Green : FColor::Red);

	if (!bIsSameTurnCharacter)
	{
		Debug::Print(TEXT(">>> 失敗原因: 當前回合角色與檢查角色不匹配!"), FColor::Red);
		Debug::Print(FString::Printf(TEXT("    回合索引: %d"), TurnManager->GetCurrentCharacterIndex()), FColor::Red);
		return false;
	}

	// === 檢查3: Controller 綁定驗證 ===
	AController* CharacterController = NewCharacter->Controller;
	Debug::Print(FString::Printf(TEXT("角色Controller: %s"),
		CharacterController ? *CharacterController->GetName() : TEXT("無")), FColor::White);
	Debug::Print(FString::Printf(TEXT("this PlayerController: %s"), *this->GetName()), FColor::White);

	bool bControllerMatch = (CharacterController == this);
	Debug::Print(FString::Printf(TEXT("%s 檢查3 - Controller綁定: %s"),
		bControllerMatch ? TEXT("YES") : TEXT("NO"),
		bControllerMatch ? TEXT("正確綁定") : TEXT("綁定錯誤")),
		bControllerMatch ? FColor::Green : FColor::Red);

	if (!bControllerMatch)
	{
		Debug::Print(TEXT(">>> 失敗原因: Controller 綁定不正確!"), FColor::Red);

		// 額外診斷信息
		if (!CharacterController)
		{
			Debug::Print(TEXT("    角色沒有任何Controller"), FColor::Orange);
		}
		else if (CharacterController != this)
		{
			Debug::Print(FString::Printf(TEXT("    角色Controller指向: %s"),
				*CharacterController->GetName()), FColor::Orange);
			Debug::Print(FString::Printf(TEXT("    期望Controller: %s"), *this->GetName()), FColor::Orange);
		}
		return false;
	}

	// === 所有檢查通過 ===
	Debug::Print(TEXT("IsCharacterMyTurn: 所有檢查通過!"), FColor::Green);
	return true;
}

void AGridPlayerController::InitializeComponents()
{
	Debug::Print(TEXT("StartInitializeComponents"));

	// 先初始化其他組件
	if (CameraController)
	{
		CameraController->InitializeCameraSystem(this);
		CameraController->OnCameraModeChanged.AddDynamic(this, &AGridPlayerController::OnCameraModeChanged);

		Debug::Print(TEXT("CameraSystemComponents"));
	}

	if (CombatModeManager)
	{
		CombatModeManager->Initialize(this);
		CombatModeManager->OnAttackModeChanged.AddDynamic(this, &AGridPlayerController::OnAttackModeChanged);
		Debug::Print(TEXT("CombatSystemComponents"));
	}

	if (InputHandler)
	{
		InputHandler->Initialize(this);
	}
	Debug::Print(TEXT("GridPlayerController components initialized"), FColor::Green);

	if (ModeManager)
	{
		ModeManager->Initialize(this);
		ModeManager->OnMovementModeChanged.AddDynamic(this, &AGridPlayerController::OnMovementModeChanged);
	}

	// 延遲初始化 UIManager，確保其他系統已準備好
	if (UIManager)
	{
		// 立即初始化，不需要延遲
		UIManager->Initialize(this);
		Debug::Print(TEXT("UIManager initialized"), FColor::Green);

	}
	Debug::Print(TEXT("GridPlayerController components initialized"), FColor::Green);
}

void AGridPlayerController::FindManagers()
{
	// Find GridManager
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

	// Find TurnManager
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
	// Delegate all input setup to InputHandlerComponent

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		if (InputHandler)
		{
			InputHandler->SetupInputBindings(EnhancedInputComponent);
		}
		else
		{
			Debug::Print(TEXT("ERROR: InputHandler is null！"), FColor::Red);
		}
	}
}

void AGridPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// Only sync grid in dynamic mode
	if (IsInDynamicMode())
	{
		ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
		if (ControlledCharacter && IsCharacterMyTurn(ControlledCharacter))
		{
			// Update grid position through GridMovementComponent
			if (UGridMovementComponent* GridMovement = ControlledCharacter->GetGridMovementComponent())
			{
				GridMovement->UpdateGridPositionFromWorld();
			}
		}
	}

}

void AGridPlayerController::OnDynamicMode()
{
	//Delegate to ModeManager component 
		if (ModeManager)
		{
			ModeManager->OnDynamicMode();
		}
}

// Component event responses
void AGridPlayerController::OnCameraModeChanged(bool bIsDynamicMode)
{
	// Update UI
	if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UTurnDisplayWidget* TurnWidget = GameMode->GetTurnDisplayWidget())
		{
			TurnWidget->UpdateCameraMode(bIsDynamicMode);
		}
	}
}

void AGridPlayerController::OnAttackModeChanged(bool bNewIsInAttackMode)
{
	Debug::Print(FString::Printf(TEXT("Attack mode: %s"),
		bNewIsInAttackMode ? TEXT("ON") : TEXT("OFF")), FColor::Cyan);
}

void AGridPlayerController::SwitchMovementMode()
{
	// Delegate to ModeManager component 
	if (ModeManager)
	{
		ModeManager->SwitchMovementMode();
	}
}

void AGridPlayerController::OnMove(const FInputActionValue& Value)
{
	// Disable movement in attack mode
	if (IsInAttackMode())
	{
		// Optional: Show warning
		static float LastWarningTime = 0.0f;
		float CurrentTime = GetWorld()->GetTimeSeconds();
		if (CurrentTime - LastWarningTime > 1.0f)  // Max one warning per second
		{
			Debug::Print(TEXT("Movement disabled in Attack Mode!"), FColor::Yellow);
			LastWarningTime = CurrentTime;
		}
		return;
	}

	// Only process movement in dynamic mode
	if (!IsInDynamicMode())
	{
		return;
	}

	// Get input vector
	FVector2D MovementVector = Value.Get<FVector2D>();

	// Get currently controlled character
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UEnhancedMovementSystem* MovementSystem = ControlledCharacter->GetComponentByClass<UEnhancedMovementSystem>();
	if (MovementSystem)
	{
		MovementSystem->ProcessMovementInput(MovementVector);
	}
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
	// Simple screen message
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,                          // Key (-1 = no override)
			3.0f,                        // Duration
			FColor::Yellow,              // Color
			ModeName,                    // Message
			true,                        // Newer on top
			FVector2D(2.0f, 2.0f)       // Text scale
		);
	}

	// Or use Debug::Print
	Debug::Print(ModeName, FColor::Yellow);
}

void AGridPlayerController::HandleDynamicAttackInput()
{
}


void AGridPlayerController::OnClick()
{
	Debug::Print(TEXT("Clicking"));

	// Only handle attack mode
	if (IsInAttackMode())
	{
		if (CombatModeManager)
		{
			CombatModeManager->ProcessAttackClick();
		}
		return;
	}

	// Handle grid click in grid mode
	if (!IsInDynamicMode())
	{
		ProcessGridClick();
	}
	else
	{
		Debug::Print(TEXT("Click ignored in Dynamic Mode (Press Q for Attack Mode)"), FColor::Green);
	}

}

void AGridPlayerController::OnShowRange()
{
	// Show current character's movement range
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
	if (CurrentCharacter && CurrentCharacter->bIsPlayerControlled)
	{
		// Show movement range through GridMovementComponent
		if (UGridMovementComponent* GridMovement = CurrentCharacter->GetGridMovementComponent())
		{
			GridMovement->ShowMovementRange();
			Debug::Print(TEXT("Showing movement range"), FColor::Blue);
		}
	}
}


void AGridPlayerController::OnAttackMode(const FInputActionValue& Value)
{
	Debug::Print(TEXT("Q key pressed!"), FColor::Magenta);
	if (CombatModeManager)
	{
		CombatModeManager->ToggleAttackMode();
	}
}


void AGridPlayerController::ProcessGridClick()
{

	Debug::Print(TEXT("=== ProcessGridClick 開始 ==="), FColor::Cyan);

	if (!GridManager)
	{
		Debug::Print(TEXT("錯誤: GridManager 為空!"), FColor::Red);
		return;
	}

	// === 🔍 關鍵診斷：同步狀態檢查 ===
	Debug::Print(TEXT("=== 同步狀態診斷 ==="), FColor::Magenta);

	// 1. 檢查 PlayerController 控制的角色
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	Debug::Print(FString::Printf(TEXT("PlayerController控制角色: %s"),
		ControlledCharacter ? *ControlledCharacter->GetActorLabel() : TEXT("無")), FColor::White);

	// 2. 檢查 TurnManager 認為的當前回合角色  
	ATurnBasedCharacter* TurnManagerCharacter = nullptr;
	if (TurnManager)
	{
		TurnManagerCharacter = Cast<ATurnBasedCharacter>(TurnManager->GetCurrentTurnCharacter());
		Debug::Print(FString::Printf(TEXT("TurnManager當前回合: %s"),
			TurnManagerCharacter ? *TurnManagerCharacter->GetActorLabel() : TEXT("無")), FColor::White);

		Debug::Print(FString::Printf(TEXT("TurnManager回合索引: %d"),
			TurnManager->GetCurrentCharacterIndex()), FColor::White);

		// 3. 顯示完整回合順序
		TArray<AActor*> TurnOrder = TurnManager->GetTurnOrder();
		Debug::Print(FString::Printf(TEXT("回合順序總數: %d"), TurnOrder.Num()), FColor::White);

		for (int32 i = 0; i < TurnOrder.Num(); i++)
		{
			if (ATurnBasedCharacter* NewCharacter = Cast<ATurnBasedCharacter>(TurnOrder[i]))
			{
				FString Marker = (i == TurnManager->GetCurrentCharacterIndex()) ? TEXT("👑") : TEXT("  ");
				FString PossessMarker = (GetPawn() == NewCharacter) ? TEXT("🎮") : TEXT("  ");

				Debug::Print(FString::Printf(TEXT("%s%s %d. %s"),
					*Marker, *PossessMarker, i, *NewCharacter->GetActorLabel()), FColor::White);
			}
		}
	}

	// 4. 同步狀態分析
	bool bCharactersMatch = (ControlledCharacter == TurnManagerCharacter);
	Debug::Print(FString::Printf(TEXT("角色同步狀態: %s"),
		bCharactersMatch ? TEXT("同步") : TEXT("不同步")),
		bCharactersMatch ? FColor::Green : FColor::Red);

	if (!bCharactersMatch)
	{
		Debug::Print(TEXT(">>> 發現同步問題!"), FColor::Red);
		Debug::Print(FString::Printf(TEXT("    PlayerController控制: %s"),
			ControlledCharacter ? *ControlledCharacter->GetActorLabel() : TEXT("無")), FColor::Red);
		Debug::Print(FString::Printf(TEXT("    TurnManager期望: %s"),
			TurnManagerCharacter ? *TurnManagerCharacter->GetActorLabel() : TEXT("無")), FColor::Red);
	}

	Debug::Print(TEXT("=== 診斷完成 ==="), FColor::Magenta);


	// === 1. 檢查當前控制的角色 ===
	ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter)
	{
		Debug::Print(TEXT("錯誤: 沒有控制的角色!"), FColor::Red);

		// 詳細診斷
		if (APawn* CurrentPawn = GetPawn())
		{
			Debug::Print(FString::Printf(TEXT("  當前Pawn: %s (類型: %s)"),
				*CurrentPawn->GetName(), *CurrentPawn->GetClass()->GetName()), FColor::Yellow);

			if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(CurrentPawn))
			{
				Debug::Print(TEXT("  Pawn 是 TurnBasedCharacter，但 Cast 失敗"), FColor::Red);
			}
		}
		else
		{
			Debug::Print(TEXT("  當前沒有 Possess 任何 Pawn!"), FColor::Red);
		}
		return;
	}

	Debug::Print(FString::Printf(TEXT("當前控制角色: %s"), *ControlledCharacter->GetActorLabel()), FColor::Green);

	// === 2. 檢查回合狀態 ===
	bool bIsMyTurn = IsCharacterMyTurn(ControlledCharacter);
	Debug::Print(FString::Printf(TEXT("回合檢查: %s"), bIsMyTurn ? TEXT("✓ 是我的回合") : TEXT("❌ 不是我的回合")),
		bIsMyTurn ? FColor::Green : FColor::Red);

	if (!bIsMyTurn)
	{
		// 更詳細的回合診斷
		if (TurnManager)
		{
			AActor* CurrentTurnActor = TurnManager->GetCurrentTurnCharacter();
			Debug::Print(FString::Printf(TEXT("  當前回合角色: %s"),
				CurrentTurnActor ? *CurrentTurnActor->GetName() : TEXT("無")), FColor::Yellow);

			Debug::Print(FString::Printf(TEXT("  Controller比較: 控制角色的Controller=%s"),
				ControlledCharacter->Controller ? *ControlledCharacter->Controller->GetName() : TEXT("無")), FColor::Yellow);

			Debug::Print(FString::Printf(TEXT("  this PlayerController = %s"), *this->GetName()), FColor::Yellow);

			// 檢查 TurnSystemComponent 狀態
			if (UTurnSystemComponent* TurnSystem = ControlledCharacter->FindComponentByClass<UTurnSystemComponent>())
			{
				Debug::Print(FString::Printf(TEXT("  TurnSystemComponent.bIsMyTurn = %s"),
					TurnSystem->IsMyTurn() ? TEXT("true") : TEXT("false")), FColor::Yellow);
			}
		}
		return;
	}

	// === 3. 檢查是否為玩家控制的角色 ===
	if (!ControlledCharacter->bIsPlayerControlled)
	{
		Debug::Print(TEXT("這不是玩家控制的角色!"), FColor::Red);
		return;
	}

	// === 4. 獲取滑鼠點擊位置 ===
	FIntPoint ClickedGridPos;
	if (!GetGridPositionUnderCursor(ClickedGridPos))
	{
		Debug::Print(TEXT("無法獲取滑鼠下方的網格位置!"), FColor::Red);
		return;
	}

	Debug::Print(FString::Printf(TEXT(" 點擊的網格位置: (%d, %d)"),
		ClickedGridPos.X, ClickedGridPos.Y), FColor::Cyan);

	// === 5. 檢查 GridMovementComponent ===
	UGridMovementComponent* GridMovement = ControlledCharacter->GetGridMovementComponent();
	if (!GridMovement)
	{
		Debug::Print(TEXT("錯誤: 角色沒有 GridMovementComponent!"), FColor::Red);
		return;
	}

	Debug::Print(TEXT("GridMovementComponent 找到"), FColor::Green);

	// === 6. 檢查 AP 狀態 ===
	if (UTurnSystemComponent* TurnSystem = ControlledCharacter->FindComponentByClass<UTurnSystemComponent>())
	{
		Debug::Print(FString::Printf(TEXT("AP 狀態: %d/%d"),
			TurnSystem->GetCurrentActionPoints(), TurnSystem->GetMaxActionPoints()), FColor::White);

		if (TurnSystem->GetCurrentActionPoints() <= 0)
		{
			Debug::Print(TEXT("沒有足夠的 AP 進行移動!"), FColor::Red);
			return;
		}
	}

	// === 7. 嘗試移動 ===
	Debug::Print(TEXT("嘗試移動到目標位置..."), FColor::Yellow);

	if (GridMovement->MoveToGridPosition(ClickedGridPos))
	{
		Debug::Print(TEXT("移動命令執行成功!"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("移動命令失敗!"), FColor::Red);

		// 分析失敗原因
		if (!GridMovement->IsValidMoveTarget(ClickedGridPos))
		{
			Debug::Print(TEXT("  原因: 目標位置無效"), FColor::Orange);
		}
		else if (GridMovement->IsMoving())
		{
			Debug::Print(TEXT("  原因: 角色正在移動中"), FColor::Orange);
		}
		else
		{
			Debug::Print(TEXT("  原因: 未知錯誤"), FColor::Orange);
		}
	}

	Debug::Print(TEXT("=== ProcessGridClick 結束 ==="), FColor::Cyan);
}


void AGridPlayerController::OnUnPossess()
{
	// Exit dynamic mode if active
	if (ModeManager && ModeManager->IsInDynamicMode())
	{
		ModeManager->EnterGridMode();
		Debug::Print(TEXT("Exited dynamic mode due to unpossess"), FColor::Yellow);
	}

	Super::OnUnPossess();
}

void AGridPlayerController::PossessAndSyncCharacter(ATurnBasedCharacter* NewCharacter)
{
	if (!NewCharacter)
	{
		Debug::Print(TEXT("無效角色 (PossessAndSyncCharacter)"), FColor::Red);
		return;
	}

	// Unpossess 當前角色
	if (GetPawn())
	{
		Debug::Print(FString::Printf(TEXT("UnPossess 當前 Pawn: %s"), *GetPawn()->GetName()), FColor::Yellow);
		UnPossess();
	}

	// 清理角色原本的 Controller（若非自己）
	if (NewCharacter->Controller && NewCharacter->Controller != this)
	{
		Debug::Print(TEXT("清除舊 Controller"), FColor::Orange);
		NewCharacter->Controller->UnPossess();
		NewCharacter->Controller = nullptr;
	}

	// Possess 新角色
	Possess(NewCharacter);
	NewCharacter->Controller = this;

	// 保險：強制更新角色的 Controller 成為自己
	NewCharacter->Controller = this;


	// 驗證 Possess 結果
	Debug::Print(FString::Printf(TEXT("Possess 完成：Pawn=%s, Controller=%s"),
		*NewCharacter->GetName(), *GetName()), FColor::Green);

	// 可選：呼叫鏡頭/UI更新
	OnTurnChangedCamera(NewCharacter, NewCharacter->bIsPlayerControlled);



	DebugPossessSync();
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

void AGridPlayerController::DebugPossessSync() const
{
	ATurnBasedCharacter* Controlled = Cast<ATurnBasedCharacter>(GetPawn());
	AActor* TurnCharacter = TurnManager ? TurnManager->GetCurrentTurnCharacter() : nullptr;

	Debug::Print(TEXT("=== 🎯 Possess 同步檢查 ==="), FColor::Cyan);
	Debug::Print(FString::Printf(TEXT("Controller 的 Pawn: %s"),
		Controlled ? *Controlled->GetName() : TEXT("None")), FColor::White);
	Debug::Print(FString::Printf(TEXT("TurnManager 的 Current: %s"),
		TurnCharacter ? *TurnCharacter->GetName() : TEXT("None")), FColor::White);

	if (Controlled == TurnCharacter)
		Debug::Print(TEXT("✅ 同步成功"), FColor::Green);
	else
		Debug::Print(TEXT("❌ 同步失敗"), FColor::Red);
}

void AGridPlayerController::FocusOnActor(AActor* TargetActor, float Distance)
{
	if (CameraController)
	{
		CameraController->FocusOnActor(TargetActor, Distance);
	}
}

bool AGridPlayerController::IsInDynamicMode() const
{
	//return CameraController ? CameraController->IsInDynamicMode() : false;
	return ModeManager ? ModeManager->IsInDynamicMode() : false;
}

bool AGridPlayerController::IsInAttackMode() const
{
	return CombatModeManager ? CombatModeManager->IsInAttackMode() : false;
}


void AGridPlayerController::OnCancel()
{
	Debug::Print(TEXT("Cancel pressed"), FColor::Orange);
	// Implement cancel logic
}

bool AGridPlayerController::GetGridPositionUnderCursor(FIntPoint& OutGridPos)
{
	if (!GridManager) return false;

	FHitResult HitResult;
	if (!GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
		return false;

	OutGridPos = GridManager->WorldToGrid(HitResult.Location);
	return GridManager->IsValidGridPosition(OutGridPos);
}

ATurnBasedCharacter* AGridPlayerController::GetCurrentTurnCharacter()
{
	if (!TurnManager) return nullptr;

	AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
	return CurrentActor ? Cast<ATurnBasedCharacter>(CurrentActor) : nullptr;
}

ATurnBasedCharacter* AGridPlayerController::GetControlledTurnCharacter() const
{
	return Cast<ATurnBasedCharacter>(GetPawn());
}

bool AGridPlayerController::IsControllingCurrentTurnCharacter() const
{
	if (!TurnManager)
		return false;

	return TurnManager->GetCurrentTurnCharacter() == GetPawn();
}

// === Possess/UnPossess ===

void AGridPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Reset mode states through ModeManager
	if (ModeManager && ModeManager->IsInDynamicMode())
	{
		ModeManager->EnterGridMode();
	}

	if (ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(InPawn))
	{
		Debug::Print(FString::Printf(TEXT("GridPlayerController possessed: %s"),
			*TurnCharacter->GetActorLabel()), FColor::Green);

		// 確保 Controller 正確綁定
		if (TurnCharacter->Controller != this)
		{
			Debug::Print(TEXT("修復 Controller 綁定"), FColor::Orange);
			TurnCharacter->Controller = this;
		}

		// 驗證 Possess 狀態
		Debug::Print(FString::Printf(TEXT("Possess 驗證: GetPawn()=%s, Controller=%s"),
			GetPawn() ? *GetPawn()->GetName() : TEXT("NULL"),
			TurnCharacter->Controller ? *TurnCharacter->Controller->GetName() : TEXT("NULL")),
			FColor::Cyan);

		// 如果是玩家控制的角色，延遲顯示移動範圍
		if (TurnCharacter->bIsPlayerControlled && TurnCharacter->IsMyTurn())
		{
			FTimerHandle ShowRangeTimer;
			GetWorld()->GetTimerManager().SetTimer(
				ShowRangeTimer,
				[this, TurnCharacter]()
				{
					if (TurnCharacter && TurnCharacter->IsMyTurn() && GetPawn() == TurnCharacter)
					{
						TurnCharacter->ShowMovementRange();
						Debug::Print(FString::Printf(TEXT("✓ 角色 %s 移動範圍已顯示"),
							*TurnCharacter->GetActorLabel()), FColor::Blue);
					}
					else
					{
						Debug::Print(FString::Printf(TEXT("⚠ 角色 %s 狀態異常，無法顯示移動範圍"),
							*TurnCharacter->GetActorLabel()), FColor::Red);
						Debug::Print(FString::Printf(TEXT("  IsMyTurn: %s, GetPawn==TurnCharacter: %s"),
							TurnCharacter->IsMyTurn() ? TEXT("是") : TEXT("否"),
							GetPawn() == TurnCharacter ? TEXT("是") : TEXT("否")), FColor::Red);
					}
				},
				0.2f,  // 稍微延長延遲時間
				false
			);
		}
	}
}


ATurnBasedCharacter* AGridPlayerController::GetPlayerControlledTurnCharacter()
{
	if (!TurnManager)
		return nullptr;

	AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
	if (!CurrentActor)
		return nullptr;

	ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(CurrentActor);

	// Only return player-controlled characters
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

void AGridPlayerController::OnMovementModeChanged(bool bIsDynamicMode)
{

	// Broadcast to UI 廣播給UI
	UIOnMovementModeChanged.Broadcast(bIsDynamicMode);
}

void AGridPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!TurnManager)
	{
		TurnManager = Cast<ASimpleTurnManager>(
			UGameplayStatics::GetActorOfClass(GetWorld(), ASimpleTurnManager::StaticClass()));

		if (!TurnManager)
		{
			return;
		}
	}


	// 狀態同步檢查
	if (GetPawn())
	{
		if (ATurnBasedCharacter* CurrentChar = Cast<ATurnBasedCharacter>(GetPawn()))
		{
			if (UTurnSystemComponent* TurnSystem = CurrentChar->GetTurnSystemComponent())
			{
				// 檢查控制權和回合狀態是否匹配
				AActor* TMCurrent = TurnManager->GetCurrentTurnCharacter();
				bool bShouldBeMyTurn = (CurrentChar == TMCurrent);

				if (TurnSystem->IsMyTurn() != bShouldBeMyTurn)
				{
					FString ErrorMsg = FString::Printf(TEXT("🚨 STATE MISMATCH: %s should %s be my turn"),
						*CurrentChar->GetActorLabel(),
						bShouldBeMyTurn ? TEXT("") : TEXT("NOT"));

					Debug::Print(ErrorMsg, FColor::Red);

					// 自動修正
					if (bShouldBeMyTurn) {
						TurnSystem->OnTurnStart();
					}
					else {
						TurnSystem->OnTurnEnd();
					}
				}
			}
		}
	}
}
