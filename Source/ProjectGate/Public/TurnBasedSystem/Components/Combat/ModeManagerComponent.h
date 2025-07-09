// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"
#include "ModeManagerComponent.generated.h"

// Forward declarations 
class AGridPlayerController;
class ATurnBasedCharacter;
class UGridVisualComponent;
class UCameraControlComponent;
class UEnhancedMovementSystem;
class AFreeCameraPawn;
class USpringArmComponent;

// Delegate for mode change notifications 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolOnMovementModeChanged, bool, bIsDynamicMode);

/*
*Mode Manager Component - Manages game mode states and transitions
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UModeManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UModeManagerComponent();

    
    void Initialize(APlayerController* InOwnerController);

    // Switch between grid and dynamic movement modes
    UFUNCTION(BlueprintCallable, Category = "Mode")
    void SwitchMovementMode();

    //Toggle dynamic movement mode
    UFUNCTION(BlueprintCallable, Category = "Mode")
    void OnDynamicMode();


   

    // Enter grid mode (free camera + click movement)
    UFUNCTION(BlueprintCallable, Category = "Mode")
    void EnterGridMode();

    // Enter dynamic mode (third-person camera + WASD movement)
    UFUNCTION(BlueprintCallable, Category = "Mode")
    void EnterDynamicMode();

    // Check if currently in dynamic mode
    UFUNCTION(BlueprintPure, Category = "Mode")
    bool IsInDynamicMode() const { return bIsInDynamicMode; }

    // Called when movement mode changes
    UPROPERTY(BlueprintAssignable, Category = "Mode")
    FBoolOnMovementModeChanged OnMovementModeChanged;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;


private:
    // === State Variables  ===
    bool bIsInDynamicMode = false;

    // === References 
     // Owner controller reference
    UPROPERTY()
    APlayerController* OwnerController = nullptr;

    // Cached references for performance
    UPROPERTY()
    UCameraControlComponent* CachedCameraController = nullptr;
    // Get currently controlled character
    ATurnBasedCharacter* GetControlledTurnCharacter() const;
    // Show mode notification on screen
    void ShowModeNotification(const FString& ModeName);
	

    // Update character movement settings
    void UpdateCharacterMovementSettings(ATurnBasedCharacter* Character, bool bDynamic);

    // Handle camera state for mode transitions  
    void HandleCameraTransition(bool bToDynamicMode);

    // Clear or show grid visuals based on mode  
    void UpdateGridVisuals(bool bShowGrid);

    // Setup input mode for current state
   
    void SetupInputMode();

    // Validate mode switch conditions 
    bool CanSwitchMode() const;

    // Save camera state before transition
    void SaveCameraState();

    // Restore camera state after transition  
    void RestoreCameraState();

    // Camera state storage
    FRotator SavedCameraRotation;
    FVector SavedCameraLocation;
    float SavedArmLength = 800.0f;

};
