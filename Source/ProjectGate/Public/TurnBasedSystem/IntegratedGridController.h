// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "Math/IntPoint.h"
#include "IntegratedGridController.generated.h"

// Control Mode Enum
UENUM(BlueprintType)
enum class EControlMode : uint8
{
    CameraControl    UMETA(DisplayName = "Camera Control"),
    GridInteraction  UMETA(DisplayName = "Grid Interaction"),
    CombatMode      UMETA(DisplayName = "Combat Mode")
};

/**
 * Integrated controller that handles both camera control and grid interaction
 */
UCLASS()
class PROJECTGATE_API AIntegratedGridController : public APlayerController
{
    GENERATED_BODY()

public:
    AIntegratedGridController();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;
    virtual void PlayerTick(float DeltaTime) override;

    // ===== Enhanced Input System =====
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    class UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    class UInputMappingContext* CameraMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    class UInputMappingContext* GridMappingContext;

    // Basic Input Actions
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Actions")
    class UInputAction* ClickAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Actions")
    class UInputAction* RightClickAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Actions")
    class UInputAction* ShowRangeAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Actions")
    class UInputAction* CancelAction;

    // Camera Control Actions
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Camera")
    class UInputAction* CameraMoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Camera")
    class UInputAction* CameraRotateAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Camera")
    class UInputAction* CameraZoomAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Camera")
    class UInputAction* CameraSpeedModifierAction;

    // Mode Toggle
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Mode")
    class UInputAction* ToggleModeAction;

    // ===== Control Mode =====
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control")
    EControlMode CurrentControlMode = EControlMode::GridInteraction;

    // ===== Camera Settings =====
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float CameraBaseSpeed = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float CameraFastSpeed = 1000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float CameraRotationSpeed = 90.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float CameraZoomSpeed = 20.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float MinCameraDistance = 300.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float MaxCameraDistance = 2000.0f;

    // Edge Scrolling
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
    bool bEnableEdgeScrolling = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
    float EdgeScrollBorder = 20.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
    float EdgeScrollSpeed = 500.0f;

    // ===== Component References =====
    UPROPERTY()
    class AGridManager* GridManager;

    UPROPERTY()
    class ASimpleTurnManager* TurnManager;

    UPROPERTY()
    class AFreeCameraPawn* CameraPawn;

    // ===== State Variables =====
    bool bIsRightMousePressed = false;
    bool bIsSpeedModifierPressed = false;
    FVector CameraVelocity = FVector::ZeroVector;
    float CurrentCameraDistance = 1000.0f;

    // Grid Interaction State
    FIntPoint LastHoveredGridPos = FIntPoint(-1, -1);
    TArray<FIntPoint> CurrentPath;
    bool bIsShowingMovementRange = false;

private:
    // Input Handler Functions
    void OnClick();
    void OnRightClickPressed();
    void OnRightClickReleased();
    void OnShowRange();
    void OnCancel();
    void OnToggleMode();

    // Camera Control
    void OnCameraMove(const FInputActionValue& Value);
    void OnCameraRotate(const FInputActionValue& Value);
    void OnCameraZoom(const FInputActionValue& Value);
    void OnSpeedModifierPressed();
    void OnSpeedModifierReleased();

    // Update Functions
    void UpdateCameraMovement(float DeltaTime);
    void UpdateGridInteraction();
    void UpdateEdgeScrolling(float DeltaTime);

    // Helper Functions
    bool GetGridPositionUnderCursor(FIntPoint& OutGridPos);
    class ATurnBasedCharacter* GetCurrentTurnCharacter();
    void SwitchControlMode(EControlMode NewMode);
    void ShowModeNotification(const FString& ModeName);

    // Grid Visualization
    void UpdateGridVisualization();
    void ShowPathPreview(FIntPoint TargetPos);
};