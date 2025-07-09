// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"
#include "Math/IntPoint.h"
#include "TurnBasedSystem/GridManager.h"
#include "InputHandlerComponent.generated.h"

// Forward declarations 
class UInputMappingContext;
class UInputAction;
class AGridManager;
class ATurnBasedCharacter;
class UEnhancedInputComponent;
class AGridPlayerController;

/**
 * Input Handler Component - Manages all input-related functionality
 */

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UInputHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInputHandlerComponent();


	void Initialize(APlayerController* InOwnerController);
	void SetupInputBindings(class UEnhancedInputComponent* InputComponent);

    // Add input mapping contexts 
    void AddInputMappingContexts();

    // Input Handlers
	void OnClick();
	void OnShowRange();
	void OnCancel();
	void OnMove(const FInputActionValue& Value);
    void OnDynamicMode();
    void OnAttackMode();

    // Camera Input Handlers 
    void OnCameraMove(const FInputActionValue& Value);
    void OnCameraRotate(const FInputActionValue& Value);
    void OnCameraZoom(const FInputActionValue& Value);
    void OnToggleFocus();

    // Utility Functions 
    UFUNCTION(BlueprintCallable, Category = "Input")
    bool GetGridPositionUnderCursor(FIntPoint& OutGridPos);

  

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
   
    // === Input Mapping Contexts  ===
    UPROPERTY(EditDefaultsOnly, Category = "Input|Contexts")
    UInputMappingContext* GridInputMappingContext = nullptr;

    // === Input Actions  ===
    // Basic Actions 
    UPROPERTY(EditDefaultsOnly, Category = "Input|Actions")
    UInputAction* ClickAction = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "Input|Actions")
    UInputAction* ShowRangeAction = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "Input|Actions")
    UInputAction* CancelAction = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "Input|Actions")
    UInputAction* MoveAction = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "Input|Actions")
    UInputAction* DynamicModeAction = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "Input|Actions")
    UInputAction* AttackModeAction = nullptr;

    // Camera Actions 
    UPROPERTY(EditDefaultsOnly, Category = "Input|Camera")
    UInputAction* CameraMoveAction = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "Input|Camera")
    UInputAction* CameraRotateAction = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "Input|Camera")
    UInputAction* CameraZoomAction = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "Input|Camera")
    UInputAction* ToggleFocusAction = nullptr;

    // Owner References 
    UPROPERTY()
    AGridPlayerController* OwnerController = nullptr;

    UPROPERTY()
    AGridManager* CachedGridManager = nullptr;

    // Helper to get current controlled character
    ATurnBasedCharacter* GetControlledTurnCharacter() const;

};
