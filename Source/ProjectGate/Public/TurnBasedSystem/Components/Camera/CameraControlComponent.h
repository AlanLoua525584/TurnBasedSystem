// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"

#include "CameraControlComponent.generated.h"


class AFreeCameraPawn;
class USpringArmComponent;
class ATurnBasedCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraModeChanged, bool, bIsDynamicMode);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
/**
 * 
 */
class PROJECTGATE_API UCameraControlComponent : public UActorComponent
{
    
        GENERATED_BODY()

    public:
        UCameraControlComponent();

        
        UFUNCTION(BlueprintCallable, Category = "Camera")
        void InitializeCameraSystem(APlayerController * InOwnerController);

       
        UFUNCTION(BlueprintCallable, Category = "Camera")
        void SwitchToFreeCamera();

        UFUNCTION(BlueprintCallable, Category = "Camera")
        void SwitchToDynamicMode();

        UFUNCTION(BlueprintCallable, Category = "Camera")
        void ToggleCameraMode();

        
        void OnCameraMove(const FInputActionValue & Value);
        void OnCameraRotate(const FInputActionValue & Value);
        void OnCameraZoom(const FInputActionValue & Value);

        void FocusOnCurrentTurnCharacter();
        void SetDynamicMode(bool bDynamic);

        AFreeCameraPawn* GetFreeCameraPawn() const;
        
        UFUNCTION(BlueprintCallable, Category = "Camera")
        void FocusOnActor(AActor * TargetActor, float Distance = 800.0f);

        UFUNCTION(BlueprintCallable, Category = "Camera")
        void OnTurnChangedCamera(AActor * NewTurnCharacter, bool bIsPlayerControlled);

       
        UFUNCTION(BlueprintPure, Category = "Camera")
        bool IsInDynamicMode() const { return bIsInDynamicMode; }

        UFUNCTION(BlueprintPure, Category = "Camera")
        FVector GetCameraLocation() const;

        UFUNCTION(BlueprintPure, Category = "Camera")
        FRotator GetCameraRotation() const;

   
        UPROPERTY(BlueprintAssignable, Category = "Camera")
        FOnCameraModeChanged OnCameraModeChanged;



    protected:
        virtual void BeginPlay() override;

    private:
      
        UPROPERTY()
        bool bIsInDynamicMode = false;

    
        UPROPERTY()
        AFreeCameraPawn* FreeCameraPawn = nullptr;

        UPROPERTY()
        APlayerController* OwnerController = nullptr;

   
        FRotator SavedCameraRotation;
        FVector SavedCameraLocation;
        float SavedArmLength = 800.0f;

    
        UPROPERTY(EditAnywhere, Category = "Camera Settings")
        float MouseSensitivity = 1.0f;

        UPROPERTY(EditAnywhere, Category = "Camera Settings")
        float ZoomSpeed = 50.0f;

        UPROPERTY(EditAnywhere, Category = "Camera Settings")
        float MinZoomLength = 300.0f;

        UPROPERTY(EditAnywhere, Category = "Camera Settings")
        float MaxZoomLength = 2000.0f;

      
        void SetupCamera();
        void SafeSetViewTarget(AActor * NewViewTarget);
        void UpdateCameraMovement(float DeltaTime);


        float LastToggleTime = 0.0f;
        const float ToggleCooldown = 0.5f;
    };
