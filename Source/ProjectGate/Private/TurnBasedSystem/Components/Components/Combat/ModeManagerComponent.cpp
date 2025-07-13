// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnbasedSystem/Components/Combat/ModeManagerComponent.h"
#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "TurnBasedSystem/Components/Camera/CameraControlComponent.h"
#include "TurnBasedSystem/Components/Combat/CombatModeComponent.h"
#include "FreeCameraPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "ProjectGateGameMode.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UModeManagerComponent::UModeManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UModeManagerComponent::Initialize(APlayerController* InOwnerController)
{
	OwnerController = InOwnerController;

	AGridPlayerController* GridPC = Cast<AGridPlayerController>(OwnerController);
	// Cache frequently used components 
	if (GridPC)
	{
		CachedCameraController = GridPC->GetCameraController();
	}

	Debug::Print(TEXT("ModeManagerComponent initialized"), FColor::Green);

}

// Called when the game starts
void UModeManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	// Ensure we start in grid mode 
	bIsInDynamicMode = false;
}
// Switch between movement modes
void UModeManagerComponent::SwitchMovementMode()
{
	OnDynamicMode(); // Reuse the same logic
}
// Toggle dynamic movement mode 
void UModeManagerComponent::OnDynamicMode()
{
	// Validate mode switch
	if (!CanSwitchMode())
	{
		Debug::Print(TEXT("Cannot switch mode"), FColor::Red);
		return;
	}

	// Toggle mode 切換模式
	if (bIsInDynamicMode)
	{
		EnterGridMode();
	}
	else
	{
		EnterDynamicMode();
	}
}
// Enter grid mode (free camera + click movement)
void UModeManagerComponent::EnterGridMode()
{
    if (!bIsInDynamicMode) return; // Already in grid mode

    ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
    if (!ControlledCharacter) return;

    Debug::Print(TEXT("===== Entering GRID MODE 進入網格模式 ====="), FColor::Blue, 5.0f);

    // Stop dynamic movement 停止動態移動
    if (UEnhancedMovementSystem* MovementSystem = ControlledCharacter->GetComponentByClass<UEnhancedMovementSystem>())
    {
        MovementSystem->SwitchMovementMode(ECustomMovementMode::Idle);
    }

    // Update character movement settings 更新角色移動設置
    UpdateCharacterMovementSettings(ControlledCharacter, false);

    //更新角色網格位置
    if (UGridMovementComponent* GridMovement = ControlledCharacter->GetComponentByClass<UGridMovementComponent>())
    {
        GridMovement->UpdateGridPositionFromWorld();
    }

    // Show grid movement range 顯示網格移動範圍
    ControlledCharacter->ShowMovementRange();

    // Handle camera transition 處理相機轉換
    HandleCameraTransition(false);

    // Update grid visuals 更新網格視覺效果
    UpdateGridVisuals(true);

    // Set input mode 設置輸入模式
    SetupInputMode();

    // Update state 更新狀態
    bIsInDynamicMode = false;

    // 同步 GridPlayerController 的狀態
    if (AGridPlayerController* GridPC = Cast<AGridPlayerController>(OwnerController))
    {
        GridPC->bIsInDynamicMode = false;  
        Debug::Print(TEXT("同步 bIsInDynamicMode = false 到 GridPlayerController"), FColor::Magenta);
    }


    // Notify UI 通知UI
    OnMovementModeChanged.Broadcast(false);

    // Update turn display widget 更新回合顯示小部件
    if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(OwnerController->GetWorld()->GetAuthGameMode()))
    {
        if (UTurnDisplayWidget* TurnWidget = GameMode->GetTurnDisplayWidget())
        {
            TurnWidget->UpdateCameraMode(false);
        }
    }


    ShowModeNotification(TEXT("GRID MODE - Click to move"));
}


// Enter dynamic mode (third-person camera + WASD movement)
void UModeManagerComponent::EnterDynamicMode()
{
    if (bIsInDynamicMode) return; // Already in dynamic mode 已經在動態模式

    ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
    if (!ControlledCharacter) return;

    // Get movement system 獲取移動系統
    UEnhancedMovementSystem* MovementSystem = ControlledCharacter->GetComponentByClass<UEnhancedMovementSystem>();
    if (!MovementSystem)
    {
        Debug::Print(TEXT("ERROR: No EnhancedMovementSystem!"), FColor::Red);
        return;
    }

    // Get visual component 獲取視覺組件
    UGridVisualComponent* VisualComp = ControlledCharacter->GetComponentByClass<UGridVisualComponent>();
    if (!VisualComp)
    {
        Debug::Print(TEXT("ERROR: No GridVisualComponent! "), FColor::Red);
        return;
    }

    Debug::Print(TEXT("===== Entering DYNAMIC MODE  ====="), FColor::Green, 5.0f);

    // Clear grid visuals 清除網格視覺效果
    UpdateGridVisuals(false);

    // Start dynamic movement 開始動態移動
    MovementSystem->SwitchMovementMode(ECustomMovementMode::DynamicMove);

    // Update character movement settings 更新角色移動設置
    UpdateCharacterMovementSettings(ControlledCharacter, true);

    // Handle camera transition 處理相機轉換
    HandleCameraTransition(true);

    // Set input mode 設置輸入模式
    SetupInputMode();

    // Update state 更新狀態
    bIsInDynamicMode = true;

    // If exiting dynamic mode while in attack mode, exit attack mode too
    // 如果在攻擊模式下退出動態模式，也退出攻擊模式
    AGridPlayerController* GridPC = Cast<AGridPlayerController>(OwnerController);

    if (UCombatModeComponent* CombatMode = GridPC->GetCombatModeManager())
    {
        if (CombatMode->IsInAttackMode())
        {
            CombatMode->ExitAttackMode();
            Debug::Print(TEXT("Exiting Attack Mode due to Dynamic Mode switch"), FColor::Yellow);
        }
    }

    // 同步 GridPlayerController 的狀態
    if (GridPC)
    {
        GridPC->bIsInDynamicMode = true; 
        Debug::Print(TEXT("Connect bIsInDynamicMode = true to GridPlayerController"), FColor::Magenta);
    }

    // Notify UI 通知UI
    OnMovementModeChanged.Broadcast(true);

    // Update turn display widget 更新回合顯示小部件
    if (AProjectGateGameMode* GameMode = Cast<AProjectGateGameMode>(OwnerController->GetWorld()->GetAuthGameMode()))
    {
        if (UTurnDisplayWidget* TurnWidget = GameMode->GetTurnDisplayWidget())
        {
            TurnWidget->UpdateCameraMode(true);
        }
    }

    ShowModeNotification(TEXT("DYNAMIC MODE - WASD to move "));
}

// === Helper Functions 輔助函數 ===

// Get currently controlled character
ATurnBasedCharacter* UModeManagerComponent::GetControlledTurnCharacter() const
{
    if (!OwnerController) return nullptr;
    return Cast<ATurnBasedCharacter>(OwnerController->GetPawn());
}
// Show mode notification on screen
void UModeManagerComponent::ShowModeNotification(const FString& ModeName)
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,                          // Key (-1 = no override)
            3.0f,                        // Duration 持續時間
            FColor::Yellow,              // Color 顏色
            ModeName,                    // Message 消息
            true,                        // Newer on top 新的在上
            FVector2D(2.0f, 2.0f)       // Text scale 文本縮放
        );
    }

    Debug::Print(ModeName, FColor::Yellow);
}
// Update character movement settings
void UModeManagerComponent::UpdateCharacterMovementSettings(ATurnBasedCharacter* Character, bool bDynamic)
{
    if (!Character) return;

    Character->SetMovementMode(bDynamic);

    Debug::Print(FString::Printf(TEXT("Character movement mode set to: %s "),
        bDynamic ? TEXT("Dynamic ") : TEXT("Grid ")), FColor::Cyan);
}



// Handle camera transition between modes
void UModeManagerComponent::HandleCameraTransition(bool bToDynamicMode)
{
    if (!CachedCameraController) return;

    if (bToDynamicMode)
    {
        // Save current camera state before switching to character camera
        // 在切換到角色相機之前保存當前相機狀態
        SaveCameraState();

     
        // 切換到角色第三人稱相機
        CachedCameraController->SwitchToDynamicMode();  // 使用正確的切換函數
    }
    else
    {
        // Switch to free camera mode
        // 切換到自由相機模式
        CachedCameraController->SwitchToFreeCamera();
        CachedCameraController->SetDynamicMode(false);

        // Restore saved camera state
        // 恢復保存的相機狀態
        RestoreCameraState();
    }
}
// Update grid visuals based on mode
void UModeManagerComponent::UpdateGridVisuals(bool bShowGrid)
{
    ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
    if (!ControlledCharacter) return;

    UGridVisualComponent* VisualComp = ControlledCharacter->GetComponentByClass<UGridVisualComponent>();
    if (!VisualComp) return;

    if (bShowGrid)
    {
        ControlledCharacter->ShowMovementRange();
        Debug::Print(TEXT("Grid visuals shown "), FColor::Green);
    }
    else
    {
        VisualComp->ClearAllVisuals();
        Debug::Print(TEXT("Grid visuals cleared "), FColor::Blue);
    }
}
// Setup input mode for current state
void UModeManagerComponent::SetupInputMode()
{
    if (!OwnerController) return;

    FInputModeGameAndUI InputMode;
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    InputMode.SetHideCursorDuringCapture(false);
    OwnerController->SetInputMode(InputMode);
}
// Validate mode switch conditions
bool UModeManagerComponent::CanSwitchMode() const
{
    ATurnBasedCharacter* ControlledCharacter = GetControlledTurnCharacter();
    if (!ControlledCharacter)
    {
        Debug::Print(TEXT("No controlled character!"), FColor::Red);
        return false;
    }

    if (!ControlledCharacter->IsMyTurn())
    {
        Debug::Print(TEXT("Not this character's turn!"), FColor::Yellow);
        return false;
    }

    return true;
}
// Save camera state before transition
void UModeManagerComponent::SaveCameraState()
{
    if (!OwnerController) return;

    SavedCameraRotation = OwnerController->GetControlRotation();

    if (AFreeCameraPawn* FreeCameraPawn = CachedCameraController->GetFreeCameraPawn())
    {
        SavedCameraLocation = FreeCameraPawn->GetActorLocation();
        if (USpringArmComponent* SpringArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
        {
            SavedArmLength = SpringArm->TargetArmLength;
        }
    }

    Debug::Print(TEXT("Camera state saved"), FColor::Cyan);
}
// Restore camera state after transition
void UModeManagerComponent::RestoreCameraState()
{
    if (!OwnerController || !CachedCameraController) return;

    OwnerController->SetControlRotation(SavedCameraRotation);

    if (AFreeCameraPawn* FreeCameraPawn = CachedCameraController->GetFreeCameraPawn())
    {
        if (USpringArmComponent* SpringArm = FreeCameraPawn->FindComponentByClass<USpringArmComponent>())
        {
            SpringArm->SetWorldRotation(SavedCameraRotation);
            SpringArm->TargetArmLength = SavedArmLength;
        }
    }

    Debug::Print(TEXT("Camera state restored "), FColor::Cyan);
}
