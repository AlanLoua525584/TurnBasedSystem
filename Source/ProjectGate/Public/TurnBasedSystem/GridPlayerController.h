// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "Math/Intpoint.h"
#include "GridPlayerController.generated.h"

// Forward declarations
class AGridManager;
class ASimpleTurnManager;
class ATurnBasedCharacter;
class UInputMappingContext;
class UInputAction;
class UEnhancedMovementSystem;
class UCameraComponent;
class USpringArmComponent;
class UTurnOrderWidget;

// Component forward declarations
class UCameraControlComponent;
class UCombatModeComponent;
class UInputHandlerComponent;
class UModeManagerComponent;
class UUIManagerComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIOnMovementModeChanged, bool, bIsInDynamicMode);

/**
 * Grid-based PlayerController with modular component system
 */
UCLASS()
class PROJECTGATE_API AGridPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGridPlayerController();

	// Public interfaces - delegates to components
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void FocusOnActor(AActor* TargetActor, float Distance = 800.0f);

	UFUNCTION(BlueprintPure, Category = "Camera")
	bool IsInDynamicMode() const;

	bool bIsInDynamicMode = false;

	// Attack mode functions
	UFUNCTION(BlueprintPure, Category = "Combat")
	bool IsInAttackMode() const;

	// Turn system interfaces
	// Camera handling for turn changes
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void OnTurnChangedCamera(AActor* NewTurnCharacter, bool bIsPlayerControlled);

	// Get current turn character
	class ATurnBasedCharacter* GetCurrentTurnCharacter();
	class ATurnBasedCharacter* GetControlledTurnCharacter() const;

	// Handle mode change UI effects
	UPROPERTY(BlueprintAssignable, Category = "Movement")
	FUIOnMovementModeChanged UIOnMovementModeChanged;

	// Camera mouse sensitivity settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|ThirdPerson")
	float MouseSensitivity = 1.0f;

	// Auto-hide cursor in dynamic mode
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|ThirdPerson")
	bool bHideCursorInDynamicMode = false;


	
	// ===== Enhanced Input System =====
	// Input mapping contexts
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* GridInputMappingContext;

	/*
	// Input Action - Click
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ClickAction;

	// Input Action - Show Range
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ShowRangeAction;

	// Input Action - Camera Rotation
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* RotateCameraAction;

	// Input Action - Camera Zoom
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* ZoomCameraAction;

	// Input Action - Cancel
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* CancelAction;

	// Dynamic movement toggle
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* DynamicModeAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* MoveAction;

	// Camera control Input Actions (if no existing ones)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* CameraMoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* CameraRotateAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* CameraZoomAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputAction* ToggleFocus;

	// Enter attack state
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Actions")
	class UInputAction* AttackModeAction;
	*/

	// Input response functions
	void OnClick();
	void OnShowRange();
	void OnCancel();
	UFUNCTION()
	void OnMove(const FInputActionValue& Value);

	// Camera control functions

	void OnShiftPressed() { bIsShiftPressed = true; }
	void OnShiftReleased() { bIsShiftPressed = false; }
	void OnRightMousePressed();
	void OnRightMouseReleased();


	

	void OnAttackMode(const FInputActionValue& Value);
	UFUNCTION()
	void OnDynamicMode();

	// Currently controlled camera Actor
	UPROPERTY()
	class AActor* CameraPawn;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	AActor* GetCameraPawn() const { return CameraPawn; }

	// Track FreeCameraPawn
	UPROPERTY()
	class AFreeCameraPawn* FreeCameraPawn;

	class ATurnBasedCharacter* GetPlayerControlledTurnCharacter();

	// Getter for the GridManager
	UFUNCTION(BlueprintCallable, Category = "Managers")
	class AGridManager* GetGridManager() const { return GridManager; }

	// Getter for the ModeManager
	UFUNCTION(BlueprintCallable, Category = "Managers")
	class UModeManagerComponent* GetModeManager() const { return ModeManager; }

	// Add getter for InputHandler 
	UFUNCTION(BlueprintPure, Category = "Components")
	UInputHandlerComponent* GetInputHandler() const { return InputHandler; }

	// Component accessors
	UFUNCTION(BlueprintPure, Category = "Components")
	UCameraControlComponent* GetCameraController() const { return CameraController; }

	UFUNCTION(BlueprintPure, Category = "Components")
	UCombatModeComponent* GetCombatModeManager() const { return CombatModeManager; }

	// Add getter for UIManager
	UFUNCTION(BlueprintPure, Category = "Components")
	UUIManagerComponent* GetUIManager() const { return UIManager; }

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	virtual void PlayerTick(float DeltaTime) override;

	// Possess and UnPossess functions
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

	UFUNCTION()
	void SwitchMovementMode();

	void ProcessGridClick();

	// Get currently controlled EnhancedMovementSystem
	UFUNCTION(BlueprintCallable, Category = "Movement")
	UEnhancedMovementSystem* GetControlledMovementSystem() const;

	void ShowModeNotification(const FString& ModeName);

	// Attack system
	// Dynamic attack handling
	void HandleDynamicAttackInput();


	// Helper functions
	// Get grid position under cursor
	bool GetGridPositionUnderCursor(FIntPoint& OutGridPos);

private:
	// Component System
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraControlComponent* CameraController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCombatModeComponent* CombatModeManager;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UInputHandlerComponent* InputHandler;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UModeManagerComponent* ModeManager;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UUIManagerComponent* UIManager;

	// System references
	// Core components
	UPROPERTY()
	AGridManager* GridManager = nullptr;

	UPROPERTY()
	ASimpleTurnManager* TurnManager = nullptr;


	// Input states (temporary until fully migrated to components)
	bool bIsShiftPressed = false;
	bool bIsRightMousePressed = false;

	// Initialization functions
	void InitializeComponents();
	void FindManagers();

	
	// Component event responses
	UFUNCTION()
	void OnCameraModeChanged(bool bIsDynamicMode);

	UFUNCTION()
	void OnAttackModeChanged(bool bIsNewInAttackMode);

	// For testing
	void TestPortraitSystem();

	void OnMovementModeChanged(bool bIsDynamicMode);

};