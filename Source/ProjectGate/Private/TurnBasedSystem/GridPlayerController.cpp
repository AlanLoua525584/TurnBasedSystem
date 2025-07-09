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
#include "TurnBasedSystem/Components/Combat/CombatModeComponent.h"
#include "TurnBasedSystem/Components/Camera/CameraControlComponent.h"
#include "TurnBasedSystem/Components/UI/UIManagerComponent.h"
#include "TurnBasedSystem/Components/Input/InputHandlerComponent.h"
#include "TurnBasedSystem/Components/Combat/ModeManagerComponent.h"
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
}

// Camera setup will need refinement
void AGridPlayerController::OnTurnChangedCamera(AActor* NewTurnCharacter, bool bIsPlayerControlled)
{
	if (CameraController)
	{
		CameraController->OnTurnChangedCamera(NewTurnCharacter, bIsPlayerControlled);
	}
}

void AGridPlayerController::SetupCamera()
{
	Debug::Print(TEXT("SetupCamera"));

	// If FreeCameraPawn already exists, use it
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

		// Create new FreeCameraPawn
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
		// Save initial camera state
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

void AGridPlayerController::InitializeComponents()
{
	Debug::Print(TEXT("StartInitializeComponents"));

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

	if (UIManager)
	{
		UIManager->Initialize(this);

	}

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

	// Update camera movement
	UpdateCameraMovement(DeltaTime);

	// Grid position sync
	// Only sync grid in dynamic mode
	if (bIsInDynamicMode)
	{
		ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
		if (ControlledCharacter && ControlledCharacter->IsMyTurn())
		{
			// Use existing UpdateGridPositionFromWorld function
			ControlledCharacter->UpdateGridPositionFromWorld();
		}
	}

	// Target highlighting and preview in attack mode
	if (bIsInAttackMode)
	{
		UpdateAttackTargetHighlight();

		// Optional: Draw attack preview line
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
	bIsInAttackMode = bNewIsInAttackMode;

	// Handle attack mode change UI updates
	Debug::Print(FString::Printf(TEXT("Attack mode: %s"),
		bIsInAttackMode ? TEXT("ON") : TEXT("OFF")), FColor::Cyan);
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
	if (bIsInAttackMode)
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
	if (!bIsInDynamicMode)
	{
		return;
	}

	// Get input vector
	FVector2D MovementVector = Value.Get<FVector2D>();

	// Get currently controlled character
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
	if (!bIsInAttackMode) return;

	// Get controlled character
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UCombatComponent* Combat = ControlledCharacter->FindComponentByClass<UCombatComponent>();
	if (!Combat) return;

	// Show attackable targets during hover
	FHitResult Hit;
	if (GetHitResultUnderCursor(ECC_Pawn, false, Hit))
	{
		AActor* HoverTarget = Hit.GetActor();

		// Use CombatComponent's CanAttack check
		if (HoverTarget && Combat->CanAttack(HoverTarget))
		{
			// Show attack preview
			ShowAttackPreview(HoverTarget);

			// Left click to execute attack
			if (IsInputKeyDown(EKeys::LeftMouseButton))
			{
				// Check if character has ExecuteAnimatedAttack function
				// If not, directly use CombatComponent's ExecuteAttack
				if (Combat->ExecuteAttack(HoverTarget))
				{
					Debug::Print(TEXT("Attack executed!"), FColor::Green);

					// Optional: Exit attack mode
					if (bAutoExitAttackMode)
					{
						ToggleAttackMode();  // Use this new function
					}
				}
			}
		}
	}
}

void AGridPlayerController::OnClick()
{
	Debug::Print(TEXT("Clicking"));

	// Only handle attack mode
	if (bIsInAttackMode)
	{
		ProcessAttackClick();
		return;
	}

	// Ignore normal clicks in dynamic mode (except attack mode)
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

	// Check if it's this character's turn
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
		// Get camera forward and right vectors
		FRotator CamRotation = SpringArmComponent->GetComponentRotation();
		CamRotation.Pitch = 0.0f;

		FVector Forward = FRotationMatrix(CamRotation).GetUnitAxis(EAxis::X);
		FVector Right = FRotationMatrix(CamRotation).GetUnitAxis(EAxis::Y);

		// Calculate movement direction
		FVector MoveDirection = (Forward * MoveVector.Y + Right * MoveVector.X);
		MoveDirection.Normalize();

		// Add speed
		float MoveSpeed = bIsShiftPressed ? CameraFastMoveSpeed : CameraBaseMoveSpeed;
		CameraVelocity += MoveDirection * MoveSpeed;
	}
}

void AGridPlayerController::OnCameraRotate(const FInputActionValue& Value)
{
	if (CameraController)
	{
		CameraController->OnCameraRotate(Value);
	}
}

void AGridPlayerController::OnCameraZoom(const FInputActionValue& Value)
{
	if (CameraController)
	{
		CameraController->OnCameraZoom(Value);
	}
}

void AGridPlayerController::UpdateCameraMovement(float DeltaTime)
{
	if (!CameraPawn) return;

	// Smooth decay
	CameraVelocity = FMath::VInterpTo(CameraVelocity, FVector::ZeroVector, DeltaTime, 5.0f);

	// Apply movement
	if (!CameraVelocity.IsNearlyZero())
	{
		FVector NewLocation = CameraPawn->GetActorLocation() + CameraVelocity * DeltaTime;
		CameraPawn->SetActorLocation(NewLocation);
	}
}

void AGridPlayerController::OnToggleFocus(const FInputActionValue& Value)
{
	if (CameraController)
	{
		CameraController->ToggleCameraMode();
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
			// Bind to character parameter events
			CombatComp->OnHealthChanged.AddDynamic(this, &AGridPlayerController::OnAnyCharacterHealthChanged);
		}
	}
}

void AGridPlayerController::OnCombatExecuted(AActor* Attacker, AActor* Target, const FDamageResult& DamageResult)
{
	// Show combat results
	if (CombatDisplayWidget)
	{
		CombatDisplayWidget->ShowCombatResult(DamageResult);
	}

	// Can add other effects
	Debug::Print(FString::Printf(TEXT("Combat Result: %d damage!"),
		DamageResult.FinalDamage), FColor::Green);
}

void AGridPlayerController::OnAnyCharacterHealthChanged(AActor* AffectedCharacter, int32 CurrentHealth, int32 MaxHealth)
{
	// If it's the currently displayed target, update combat UI
	if (AffectedCharacter == LastHighlightedTarget && CombatDisplayWidget)
	{
		CombatDisplayWidget->UpdateTargetHealthDisplay(AffectedCharacter);
	}

	// If it's player-controlled character, can update other UI
	if (AffectedCharacter == GetControlledTurnCharacter())
	{
		// Update player status UI
		Debug::Print(FString::Printf(TEXT("Player Health: %d/%d"), CurrentHealth, MaxHealth), FColor::Green);
	}
}

void AGridPlayerController::OnCharacterHealthChanged(int32 CurrentHealth, int32 MaxHealth)
{
	// Later update UI or other visual output
	Debug::Print(FString::Printf(TEXT("Health Changed: %d / %d"), CurrentHealth, MaxHealth), FColor::Yellow);
}

void AGridPlayerController::UpdateAttackTargetHighlight()
{
	if (!bIsInAttackMode) return;

	AActor* CurrentTarget = nullptr;

	// Try to get character under cursor
	if (!GetCharacterUnderCursor(CurrentTarget))
	{
		// No target, clear target info
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

	// If it's the same target, no need to update
	if (CurrentTarget == LastHighlightedTarget) return;

	// New target
	LastHighlightedTarget = CurrentTarget;

	Debug::PrintCooldown(GetWorld(), TEXT("HoverTarget"),
		FString::Printf(TEXT("Hovering over: %s"), *CurrentTarget->GetActorLabel()),
		FColor::White, 0.5f);

	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>();
	if (!CombatComp) return;

	// Check if can attack
	bool bCanAttack = CombatComp->CanAttack(CurrentTarget);

	// Update Combat UI
	if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (UCombatDisplayWidget* CombatWidget = GameMode->GetCombatDisplayWidget())
		{
			CombatWidget->ShowTargetInfo(CurrentTarget, bCanAttack);

			if (bCanAttack)
			{
				// Calculate and show preview damage
				FDamageResult PreviewDamage = CombatComp->CalculateDamage(CurrentTarget);
				CombatWidget->ShowDamagePreview(PreviewDamage.FinalDamage, PreviewDamage.bIsCritical);

				Debug::PrintCooldown(GetWorld(),TEXT("DamagePreview"),
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
	if (CombatModeManager)
	{
		CombatModeManager->ToggleAttackMode();
	}
}

void AGridPlayerController::ProcessAttackClick()
{
	AActor* Target = nullptr;

	// Use new detection function
	if (!GetCharacterUnderCursor(Target))
	{
		Debug::Print(TEXT("No character under cursor - exiting attack mode"), FColor::Yellow);
		ExitAttackMode();
		return;
	}

	Debug::Print(FString::Printf(TEXT("Found target: %s"),
		*Target->GetActorLabel()), FColor::Cyan);

	// Attack logic
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>();
	if (!CombatComp) return;

	// Check if can attack this target
	if (CombatComp->CanAttack(Target))
	{
		Debug::Print(FString::Printf(TEXT("Attacking %s..."), *Target->GetActorLabel()), FColor::Orange);

		// *** Important change: Use character's animated attack function, not direct attack ***
		ControlledCharacter->ExecuteAnimatedAttack(Target);

		// Auto exit attack mode after successful attack
		ExitAttackMode();
	}
	else
	{
		// Simple error message
		Debug::Print(TEXT("CanAttack returned false - check debug output"), FColor::Orange);
	}
}

void AGridPlayerController::ExitAttackMode()
{
	if (!bIsInAttackMode) return;

	bIsInAttackMode = false;
	Debug::Print(TEXT("=== ATTACK MODE: OFF ==="), FColor::Blue, 5.0f);

	// Restore normal cursor
	CurrentMouseCursor = EMouseCursor::Default;

	// Clear attack range
	if (ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter())
	{
		if (UCombatComponent* CombatComp = ControlledCharacter->GetComponentByClass<UCombatComponent>())
		{
			CombatComp->HideAttackRange();

			// Unbind events
			CombatComp->OnAttackExecutedWithResult.RemoveDynamic(
				this, &AGridPlayerController::OnCombatResultReceived);
		}
	}

	// Update Combat UI
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

	// Clear highlight target
	LastHighlightedTarget = nullptr;
}

void AGridPlayerController::ToggleAttackMode()
{
	// Use existing OnAttackMode logic
	OnAttackMode(FInputActionValue());
}

void AGridPlayerController::CreateCombatUI()
{// Delegate to UIManager component
	if (UIManager)
	{
		UIManager->CreateCombatUI();

		// Cache reference for quick access
		CombatDisplayWidget = UIManager->GetCombatDisplayWidget();
	}
}

// Change ShowAttackPreview
void AGridPlayerController::ShowAttackPreview(AActor* Target)
{
	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter) return;

	UCombatComponent* Combat = ControlledCharacter->FindComponentByClass<UCombatComponent>();
	if (!Combat) return;

	// Calculate preview damage
	FDamageResult PreviewDamage = Combat->CalculateDamage(Target);

	// Use new combat UI
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

	// Save current camera rotation
	FRotator CurrentRotation = GetControlRotation();

	// Reset camera state
	if (bIsInDynamicMode)
	{
		// If in dynamic mode, ensure new character's camera is correctly set
		if (ATurnBasedCharacter* TurnCharacter = GetControlledTurnCharacter())
		{
			if (TurnCharacter->CameraBoom)
			{
				TurnCharacter->CameraBoom->bUsePawnControlRotation = true;
				TurnCharacter->CameraBoom->SetWorldRotation(CurrentRotation);
			}

			// Reset ViewTarget to new character
			SafeSetViewTarget(TurnCharacter);
			SetControlRotation(CurrentRotation);
		}
	}
	else
	{
		// Maintain free camera mode
		SafeSetViewTarget(CameraPawn);
		SetControlRotation(CurrentRotation);
	}

	// Reset dynamic mode
	bIsInDynamicMode = false;

	if (ATurnBasedCharacter* TurnCharacter = Cast<ATurnBasedCharacter>(InPawn))
	{
		Debug::Print(FString::Printf(TEXT("GridPlayerController possessed: %s"),
			*TurnCharacter->GetActorLabel()), FColor::Green);
	}
}

void AGridPlayerController::OnUnPossess()
{
	// Exit dynamic mode
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

	// Only detect Pawns
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

	// Find first TurnBasedCharacter
	for (const FHitResult& Hit : Hits)
	{
		if (Hit.GetActor() && Hit.GetActor()->IsA<ATurnBasedCharacter>())
		{
			OutCharacter = Hit.GetActor();
			Debug::PrintCooldown(GetWorld(), TEXT("detection"), (TEXT("Primary detection found: %s"), *OutCharacter->GetName()), FColor::White, 0.5f);
			return true;
		}
	}

	return false;
}

bool AGridPlayerController::GetCharacterUnderCursorWithFallback(AActor*& OutCharacter)
{
	// First try specialized detection
	if (GetCharacterUnderCursor(OutCharacter))
	{
		return true;
	}

	Debug::Print(TEXT("Primary detection failed, trying fallback..."), FColor::Yellow);

	// Fallback method: Use GetHitResultUnderCursor (method 1 improvement)
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
	if (CameraController)
	{
		CameraController->FocusOnActor(TargetActor, Distance);
	}
}

bool AGridPlayerController::IsInDynamicMode() const
{
	return CameraController ? CameraController->IsInDynamicMode() : false;
}

bool AGridPlayerController::IsInAttackMode() const
{
	return CombatModeManager ? CombatModeManager->IsInAttackMode() : false;
}

void AGridPlayerController::FocusOnCurrentTurnCharacter()
{
	// Only use currently Possessed Pawn
	ATurnBasedCharacter* CurrentTurnCharacter = Cast<ATurnBasedCharacter>(GetPawn());

	// If no Possessed Pawn, get from TurnManager
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

	// Ensure character's camera component is correctly set
	if (CurrentTurnCharacter->CameraBoom)
	{
		// Set CameraBoom to use controller rotation
		CurrentTurnCharacter->CameraBoom->bUsePawnControlRotation = true;

		// If have saved rotation, apply it
		if (!SavedCameraRotation.IsZero())
		{
			CurrentTurnCharacter->CameraBoom->SetWorldRotation(SavedCameraRotation);
			SetControlRotation(SavedCameraRotation);
		}
		else
		{
			// Use current controller rotation
			FRotator CurrentRotation = GetControlRotation();
			CurrentTurnCharacter->CameraBoom->SetWorldRotation(CurrentRotation);
		}

		// Ensure character doesn't follow camera rotation (only camera follows)
		CurrentTurnCharacter->bUseControllerRotationYaw = false;
		CurrentTurnCharacter->bUseControllerRotationPitch = false;
		CurrentTurnCharacter->bUseControllerRotationRoll = false;

		// Force immediate switch (don't use Blend)
		SafeSetViewTarget(CurrentTurnCharacter);

		Debug::Print(FString::Printf(TEXT("Camera focused on %s (Possessed: %s)"),
			*CurrentTurnCharacter->GetActorLabel(),
			GetPawn() == CurrentTurnCharacter ? TEXT("YES") : TEXT("NO")), FColor::Green);
	}
}

// Sync camera states
void AGridPlayerController::SyncCameraStates()
{
	// Ensure state sync between FreeCameraPawn and character camera
	if (bIsInDynamicMode)
	{
		// Dynamic mode: Sync from character camera to FreeCameraPawn
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
		// Free camera mode: Sync from FreeCameraPawn to controller
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
{
	// Save current rotation
	FRotator PreservedRotation = GetControlRotation();

	// If rotation is nearly zero, use saved or default rotation
	if (FMath::Abs(PreservedRotation.Pitch) < 5.0f &&
		FMath::Abs(PreservedRotation.Yaw) < 5.0f)
	{
		PreservedRotation = SavedCameraRotation.IsZero() ?
			FRotator(-45.0f, 0.0f, 0.0f) : SavedCameraRotation;

		Debug::Print(TEXT("WARNING: Preventing zero rotation in SafeSetViewTarget"), FColor::Red);
	}

	// Execute camera switch
	Super::SetViewTarget(NewViewTarget);

	// Immediately restore rotation
	SetControlRotation(PreservedRotation);

	// If it's FreeCameraPawn, ensure its SpringArm also has correct rotation
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
	// Implement cancel logic
}

bool AGridPlayerController::GetGridPositionUnderCursor(FIntPoint& OutGridPos)
{
	if (!GridManager)
		return false;

	// Get world coordinates under cursor
	FHitResult HitResult;
	if (!GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
		return false;

	// Convert to grid coordinates
	OutGridPos = GridManager->WorldToGrid(HitResult.Location);

	// Check if valid
	if (!GridManager->IsValidGridPosition(OutGridPos))
		return false;

	// Show debug info at click position
	DrawDebugSphere(
		GetWorld(),
		HitResult.Location,
		25.0f,
		12,
		FColor::Yellow,
		false,
		1.0f
	);

	// Also show grid center
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

	// Change: Return current turn character regardless of player or AI 
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
	// Update internal state 更新內部狀態
	bIsInDynamicMode = bIsDynamicMode;

	// Broadcast to UI 廣播給UI
	UIOnMovementModeChanged.Broadcast(bIsDynamicMode);
}
