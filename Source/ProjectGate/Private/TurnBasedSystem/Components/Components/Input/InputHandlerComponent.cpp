// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/Components/Input/InputHandlerComponent.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/SimpleTurnManager.h"
#include "TurnBasedSystem/Components/Combat/CombatModeComponent.h"
#include "TurnBasedSystem/Components/Camera/CameraControlComponent.h"
#include "TurnBasedSystem/Components/Combat/ModeManagerComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UInputHandlerComponent::UInputHandlerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
// Initialize component with owner controller
void UInputHandlerComponent::Initialize(APlayerController* InOwnerController)
{
	// Attempt to cast InOwnerController to AGridPlayerController
	OwnerController = Cast<AGridPlayerController>(InOwnerController);

	if (OwnerController)
	{
		// Cache GridManager reference
		CachedGridManager = OwnerController->GetGridManager();
	}
	else
	{
		// Log an error if the cast fails
		Debug::Print(TEXT("Failed to initialize InputHandlerComponent: InOwnerController is not of type AGridPlayerController"), FColor::Red);
	}

	Debug::Print(TEXT("InputHandlerComponent initialized "), FColor::Green);

}

// Called when the game starts
void UInputHandlerComponent::BeginPlay()
{
	Super::BeginPlay();

	// Add input mapping contexts 
	AddInputMappingContexts();

}

void UInputHandlerComponent::SetupInputBindings(UEnhancedInputComponent* InputComponent)
{
    if (!InputComponent)
    {
        Debug::Print(TEXT("ERROR: InputComponent is null! 錯誤：輸入組件為空！"), FColor::Red);
        return;
    }

    // Basic Actions 基本動作
    if (ClickAction)
    {
        InputComponent->BindAction(ClickAction, ETriggerEvent::Triggered, this, &UInputHandlerComponent::OnClick);
        Debug::Print(TEXT("Click action bound 點擊動作已綁定"), FColor::Green);
    }

    if (ShowRangeAction)
    {
        InputComponent->BindAction(ShowRangeAction, ETriggerEvent::Triggered, this, &UInputHandlerComponent::OnShowRange);
    }

    if (CancelAction)
    {
        InputComponent->BindAction(CancelAction, ETriggerEvent::Triggered, this, &UInputHandlerComponent::OnCancel);
    }

    if (MoveAction)
    {
        InputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &UInputHandlerComponent::OnMove);
        Debug::Print(TEXT("Move action bound 移動動作已綁定"), FColor::Green);
    }

    if (DynamicModeAction)
    {
        InputComponent->BindAction(DynamicModeAction, ETriggerEvent::Started, this, &UInputHandlerComponent::OnDynamicMode);
        Debug::Print(TEXT("Dynamic mode action bound 動態模式動作已綁定"), FColor::Green);
    }

    if (AttackModeAction)
    {
        InputComponent->BindAction(AttackModeAction, ETriggerEvent::Started, this, &UInputHandlerComponent::OnAttackMode);
        Debug::Print(TEXT("Attack mode action bound 攻擊模式動作已綁定"), FColor::Green);
    }

    // Camera Actions 相機動作
    if (CameraMoveAction)
    {
        InputComponent->BindAction(CameraMoveAction, ETriggerEvent::Triggered, this, &UInputHandlerComponent::OnCameraMove);
    }

    if (CameraRotateAction)
    {
        InputComponent->BindAction(CameraRotateAction, ETriggerEvent::Triggered, this, &UInputHandlerComponent::OnCameraRotate);
    }

    if (CameraZoomAction)
    {
        InputComponent->BindAction(CameraZoomAction, ETriggerEvent::Triggered, this, &UInputHandlerComponent::OnCameraZoom);
    }

    if (ToggleFocusAction)
    {
        InputComponent->BindAction(ToggleFocusAction, ETriggerEvent::Triggered, this, &UInputHandlerComponent::OnToggleFocus);
    }

    Debug::Print(TEXT("All input bindings setup complete 所有輸入綁定設置完成"), FColor::Cyan);
}


// Add input mapping contexts to the subsystem
void UInputHandlerComponent::AddInputMappingContexts()
{
    if (!OwnerController) return;

    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
        OwnerController->GetLocalPlayer()))
    {
        if (GridInputMappingContext)
        {
            Subsystem->AddMappingContext(GridInputMappingContext, 0);
            Debug::Print(TEXT("Grid input mapping context added 網格輸入映射上下文已添加"), FColor::Green);
        }
        else
        {
            Debug::Print(TEXT("ERROR: GridInputMappingContext is null! 錯誤：網格輸入映射上下文為空！"), FColor::Red);
        }
    }
}
// === Input Handler Implementations ==
void UInputHandlerComponent::OnClick()
{
    if (!OwnerController)
    {
        Debug::Print(TEXT("Error: OwnerController is null!"), FColor::Red);
        return;
    }

    Debug::Print(TEXT("Click detected by InputHandlerComponent"));

    // 轉交 PlayerController 處理
    OwnerController->OnClick();
}
// Handle show range input 
void UInputHandlerComponent::OnShowRange()
{
    if (!OwnerController) return;

    OwnerController->OnShowRange();
}
// Handle cancel input
void UInputHandlerComponent::OnCancel()
{
    if (!OwnerController) return;

    Debug::Print(TEXT("Cancel pressed 按下取消"), FColor::Orange);
    OwnerController->OnCancel();
}
// Handle movement input 
void UInputHandlerComponent::OnMove(const FInputActionValue& Value)
{
    if (!OwnerController) return;

    OwnerController->OnMove(Value);
}
// Handle dynamic mode toggle
void UInputHandlerComponent::OnDynamicMode()
{
    if (!OwnerController) return;

    // Get ModeManager component 
    if (UModeManagerComponent* ModeManager = OwnerController->GetModeManager())
    {
        ModeManager->OnDynamicMode();
    }
}

// Handle attack mode toggle 
void UInputHandlerComponent::OnAttackMode()
{
    if (!OwnerController) return;

    Debug::Print(TEXT("Q key pressed! "), FColor::Magenta);

    // Get CombatModeManager component 
    if (UCombatModeComponent* CombatManager = OwnerController->GetCombatModeManager())
    {
        CombatManager->ToggleAttackMode();
    }
}
// === Camera Input Handlers===
void UInputHandlerComponent::OnCameraMove(const FInputActionValue& Value)
{
    if (!OwnerController) return;

    // Delegate to camera controller
    if (UCameraControlComponent* CameraController = OwnerController->GetCameraController())
    {
        CameraController->OnCameraMove(Value);
    }
}


void UInputHandlerComponent::OnCameraRotate(const FInputActionValue& Value)
{
    if (!OwnerController) return;

    if (UCameraControlComponent* CameraController = OwnerController->GetCameraController())
    {
        CameraController->OnCameraRotate(Value);
    }
}

void UInputHandlerComponent::OnCameraZoom(const FInputActionValue& Value)
{
    if (!OwnerController) return;

    if (UCameraControlComponent* CameraController = OwnerController->GetCameraController())
    {
        CameraController->OnCameraZoom(Value);
    }
}

void UInputHandlerComponent::OnToggleFocus()
{
    if (!OwnerController) return;

    if (UCameraControlComponent* CameraController = OwnerController->GetCameraController())
    {
        CameraController->ToggleCameraMode();
    }
}

// === Utility Functions ===
// Get grid position under cursor

bool UInputHandlerComponent::GetGridPositionUnderCursor(FIntPoint& OutGridPos)
{
    if (!OwnerController || !CachedGridManager) return false;

    // Get world coordinates under cursor 獲取游標下的世界座標
    FHitResult HitResult;
    if (!OwnerController->GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
        return false;

    // Convert to grid coordinates 轉換為網格座標
    OutGridPos = CachedGridManager->WorldToGrid(HitResult.Location);

    // Check if valid 檢查是否有效
    if (!CachedGridManager->IsValidGridPosition(OutGridPos))
        return false;

    // Show debug visualization 顯示調試可視化
    DrawDebugSphere(
        OwnerController->GetWorld(),
        HitResult.Location,
        25.0f,
        12,
        FColor::Yellow,
        false,
        1.0f
    );

    // Also show grid center 同時顯示網格中心
    FVector GridCenter = CachedGridManager->GridToWorld(OutGridPos);
    DrawDebugSphere(
        OwnerController->GetWorld(),
        GridCenter,
        15.0f,
        12,
        FColor::Green,
        false,
        1.0f
    );

    return true;
}

// Get currently controlled turn-based character
ATurnBasedCharacter* UInputHandlerComponent::GetControlledTurnCharacter() const
{
    if (!OwnerController) return nullptr;

    return Cast<ATurnBasedCharacter>(OwnerController->GetPawn());
}

