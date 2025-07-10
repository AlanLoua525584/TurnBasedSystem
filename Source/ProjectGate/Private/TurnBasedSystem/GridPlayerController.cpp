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
		UIManager->CreateAllUI();

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
			Debug::Print(TEXT("ERROR: InputHandler is null¡I"), FColor::Red);
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
		if (ControlledCharacter && ControlledCharacter->IsMyTurn())
		{
			// Use existing UpdateGridPositionFromWorld function
			ControlledCharacter->UpdateGridPositionFromWorld();
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

	/*
	// Ignore normal clicks in dynamic mode (except attack mode)
	if (IsInDynamicMode())
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
	*/
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
		CurrentCharacter->ShowMovementRange();
		Debug::Print(TEXT("Showing movement range"), FColor::Blue);
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
	if (!GridManager) return;

	ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
	if (!ControlledCharacter || !ControlledCharacter->IsMyTurn()) return;

	FIntPoint ClickedGridPos;
	if (!GetGridPositionUnderCursor(ClickedGridPos)) return;

	Debug::Print(FString::Printf(TEXT("Clicked Grid: (%d, %d)"),
		ClickedGridPos.X, ClickedGridPos.Y), FColor::Cyan);

	if (ControlledCharacter->MoveToGridPosition(ClickedGridPos))
	{
		Debug::Print(TEXT("Move command executed"), FColor::Green);
	}
	else
	{
		Debug::Print(TEXT("Cannot move to that position"), FColor::Red);
	}
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

	// Broadcast to UI ¼s¼½µ¹UI
	UIOnMovementModeChanged.Broadcast(bIsDynamicMode);
}
