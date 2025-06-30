// Fill out your copyright notice in the Description page of Project Settings.

#include "TurnBasedSystem/IntegratedGridController.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridPathfindingComponent.h"
#include "FreeCameraPawn.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Public/DebugHelper.h"

AIntegratedGridController::AIntegratedGridController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

    PrimaryActorTick.bCanEverTick = true;
}

void AIntegratedGridController::BeginPlay()
{
    Super::BeginPlay();

    // Find necessary managers
    TArray<AActor*> FoundActors;

    // Find GridManager
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

    // Get CameraPawn
    CameraPawn = Cast<AFreeCameraPawn>(GetPawn());
    if (!CameraPawn)
    {
        Debug::Print(TEXT("Warning: Not controlling a FreeCameraPawn!"), FColor::Yellow);
    }

    // Set input mode
    FInputModeGameAndUI InputMode;
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    InputMode.SetHideCursorDuringCapture(false);
    SetInputMode(InputMode);

    // Add input mapping contexts
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        if (DefaultMappingContext)
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
        if (CameraMappingContext)
        {
            Subsystem->AddMappingContext(CameraMappingContext, 1);
        }
        if (GridMappingContext)
        {
            Subsystem->AddMappingContext(GridMappingContext, 2);
        }
    }
}

void AIntegratedGridController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EnhancedInput = CastChecked<UEnhancedInputComponent>(InputComponent))
    {
        // Basic actions
        if (ClickAction)
        {
            EnhancedInput->BindAction(ClickAction, ETriggerEvent::Triggered, this, &AIntegratedGridController::OnClick);
        }
        if (RightClickAction)
        {
            EnhancedInput->BindAction(RightClickAction, ETriggerEvent::Started, this, &AIntegratedGridController::OnRightClickPressed);
            EnhancedInput->BindAction(RightClickAction, ETriggerEvent::Completed, this, &AIntegratedGridController::OnRightClickReleased);
        }
        if (ShowRangeAction)
        {
            EnhancedInput->BindAction(ShowRangeAction, ETriggerEvent::Triggered, this, &AIntegratedGridController::OnShowRange);
        }
        if (CancelAction)
        {
            EnhancedInput->BindAction(CancelAction, ETriggerEvent::Triggered, this, &AIntegratedGridController::OnCancel);
        }
        if (ToggleModeAction)
        {
            EnhancedInput->BindAction(ToggleModeAction, ETriggerEvent::Triggered, this, &AIntegratedGridController::OnToggleMode);
        }

        // Camera control
        if (CameraMoveAction)
        {
            EnhancedInput->BindAction(CameraMoveAction, ETriggerEvent::Triggered, this, &AIntegratedGridController::OnCameraMove);
        }
        if (CameraRotateAction)
        {
            EnhancedInput->BindAction(CameraRotateAction, ETriggerEvent::Triggered, this, &AIntegratedGridController::OnCameraRotate);
        }
        if (CameraZoomAction)
        {
            EnhancedInput->BindAction(CameraZoomAction, ETriggerEvent::Triggered, this, &AIntegratedGridController::OnCameraZoom);
        }
        if (CameraSpeedModifierAction)
        {
            EnhancedInput->BindAction(CameraSpeedModifierAction, ETriggerEvent::Started, this, &AIntegratedGridController::OnSpeedModifierPressed);
            EnhancedInput->BindAction(CameraSpeedModifierAction, ETriggerEvent::Completed, this, &AIntegratedGridController::OnSpeedModifierReleased);
        }
    }
}

void AIntegratedGridController::PlayerTick(float DeltaTime)
{
    Super::PlayerTick(DeltaTime);

    switch (CurrentControlMode)
    {
    case EControlMode::CameraControl:
        UpdateCameraMovement(DeltaTime);
        if (bEnableEdgeScrolling)
        {
            UpdateEdgeScrolling(DeltaTime);
        }
        break;

    case EControlMode::GridInteraction:
        UpdateGridInteraction();
        break;

    case EControlMode::CombatMode:
        UpdateGridInteraction();
        break;
    }
}

void AIntegratedGridController::OnClick()
{
    // TODO: Implement click handling
}

void AIntegratedGridController::OnRightClickPressed()
{
    bIsRightMousePressed = true;
}

void AIntegratedGridController::OnRightClickReleased()
{
    bIsRightMousePressed = false;
}

void AIntegratedGridController::OnShowRange()
{
    // TODO: Implement show range
}

void AIntegratedGridController::OnCancel()
{
    // TODO: Implement cancel
}

void AIntegratedGridController::OnToggleMode()
{
    EControlMode NewMode = EControlMode::GridInteraction;

    switch (CurrentControlMode)
    {
    case EControlMode::GridInteraction:
        NewMode = EControlMode::CombatMode;
        break;
    case EControlMode::CombatMode:
        NewMode = EControlMode::CameraControl;
        break;
    case EControlMode::CameraControl:
        NewMode = EControlMode::GridInteraction;
        break;
    }

    SwitchControlMode(NewMode);
}

void AIntegratedGridController::OnCameraMove(const FInputActionValue& Value)
{
    // TODO: Implement camera movement
}

void AIntegratedGridController::OnCameraRotate(const FInputActionValue& Value)
{
    // TODO: Implement camera rotation
}

void AIntegratedGridController::OnCameraZoom(const FInputActionValue& Value)
{
    // TODO: Implement camera zoom
}

void AIntegratedGridController::OnSpeedModifierPressed()
{
    bIsSpeedModifierPressed = true;
}

void AIntegratedGridController::OnSpeedModifierReleased()
{
    bIsSpeedModifierPressed = false;
}

void AIntegratedGridController::UpdateCameraMovement(float DeltaTime)
{
    // TODO: Implement camera movement update
}

void AIntegratedGridController::UpdateGridInteraction()
{
    // TODO: Implement grid interaction update
}

void AIntegratedGridController::UpdateEdgeScrolling(float DeltaTime)
{
    // TODO: Implement edge scrolling
}

bool AIntegratedGridController::GetGridPositionUnderCursor(FIntPoint& OutGridPos)
{
    if (!GridManager)
        return false;

    FHitResult HitResult;
    if (!GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
        return false;

    OutGridPos = GridManager->WorldToGrid(HitResult.Location);
    return GridManager->IsValidGridPosition(OutGridPos);
}

ATurnBasedCharacter* AIntegratedGridController::GetCurrentTurnCharacter()
{
    if (!TurnManager)
        return nullptr;

    AActor* CurrentActor = TurnManager->GetCurrentTurnCharacter();
    if (!CurrentActor)
        return nullptr;

    return Cast<ATurnBasedCharacter>(CurrentActor);
}

void AIntegratedGridController::SwitchControlMode(EControlMode NewMode)
{
    CurrentControlMode = NewMode;

    switch (NewMode)
    {
    case EControlMode::CameraControl:
        ShowModeNotification(TEXT("Camera Control"));
        break;
    case EControlMode::GridInteraction:
        ShowModeNotification(TEXT("Grid Interaction"));
        break;
    case EControlMode::CombatMode:
        ShowModeNotification(TEXT("Combat Mode"));
        break;
    }
}

void AIntegratedGridController::ShowModeNotification(const FString& ModeName)
{
    if (ModeName.IsEmpty())
    {
        Debug::Print(TEXT("Error: ModeName is empty"), FColor::Red);
        return;
    }

    FString Message = FString::Printf(TEXT("Switched to %s"), *ModeName);
    Debug::Print(Message, FColor::Cyan);
}

void AIntegratedGridController::UpdateGridVisualization()
{
    // TODO: Implement grid visualization update
}

void AIntegratedGridController::ShowPathPreview(FIntPoint TargetPos)
{
    // TODO: Implement path preview
}