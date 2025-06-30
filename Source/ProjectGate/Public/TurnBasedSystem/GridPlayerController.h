// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "Math/Intpoint.h"
#include "GridPlayerController.generated.h"

//�e�V�ŧi
class AGridManager;
class ASimpleTurnManager;
class ATurnBasedCharacter;
class UInputMappingContext;
class UInputAction;
class UEnhancedMovementSystem;
class UCameraComponent;
class USpringArmComponent;


/**
 * 
 */
UCLASS()
class PROJECTGATE_API AGridPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGridPlayerController();
	// �T�O Tick �ҥ�
	virtual void PlayerTick(float DeltaTime) override;

	// �۾����}���
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void FocusOnActor(AActor* TargetActor, float Distance = 800.0f);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void FocusOnCurrentTurnCharacter();


	UFUNCTION(BlueprintCallable, Category = "Camera")
	FVector GetCameraLocation() const;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	FRotator GetCameraRotation() const;

	UPROPERTY(BlueprintReadWrite)
	bool bIsInDynamicMode = false;

	UPROPERTY()
	bool bIsFocusMode = false;

	// ��e����۾� Actor
	UPROPERTY()
	class AActor* CameraPawn;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	AActor* GetCameraPawn() const { return CameraPawn; }

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// ===== Enhanced Input System =====
	/*��J�M�g�W�U��*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* GridInputMappingContext;

	/** ��J�ʧ@ - �I�� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ClickAction;

	/** ��J�ʧ@ - ��ܽd�� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ShowRangeAction;

	/** ��J�ʧ@ - �۾����� */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* RotateCameraAction;

	/** ��J�ʧ@ - �۾��Y�� */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* ZoomCameraAction;

	/** ��J�ʧ@ - ���� */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* CancelAction;

	//�ʺA���ʤ���
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* DynamicModeAction;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* MoveAction;

	// �۾����� Input Actions�]�p�G�٨S�����ܡ^
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* CameraMoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* CameraRotateAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* CameraZoomAction;

	//Camera Focus
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* ToggleFocus;




	UFUNCTION()
	void OnDynamicMode();

	UFUNCTION()
	void OnMove(const FInputActionValue& Value);

	// �����e��� EnhancedMovementSystem

	UFUNCTION(BlueprintCallable, Category = "Movement")
	UEnhancedMovementSystem* GetControlledMovementSystem() const;

	void ShowModeNotification(const FString& ModeName);





	// ===�֤߲ե�===
	UPROPERTY()
	AGridManager* GridManager;

	UPROPERTY()
	ASimpleTurnManager* TurnManager;

	//===��J�^�ը��===

	void OnClick();
	void OnShowRange();
	void OnCancel();

	//===���U���===

		// ����ƹ��U�������m
	bool GetGridPositionUnderCursor(FIntPoint& OutGridPos);

	//�����e�^�X����
	class ATurnBasedCharacter* GetCurrentTurnCharacter();
	class ATurnBasedCharacter* GetControlledTurnCharacter() const;


	// ===== �۾��ե� =====
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComponent;

	// �۾��]�m
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement")
	float CameraBaseMoveSpeed = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement")
	float CameraFastMoveSpeed = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float ZoomSpeed = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float MinZoomLength = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float MaxZoomLength = 2000.0f;






private:
	//�۾������ܼ�
	float CurrentCameraRotation = 0.0f;
	float CurrentCameraZoom = 1000.0f;

	// �۾������N�o
	float LastToggleFocusTime = 0.0f;
	const float ToggleFocusCooldown = 0.5f; // 0.5��N�o

	// �۾����A
	bool bIsRightMousePressed = false;
	bool bIsShiftPressed = false;
	FVector CameraVelocity = FVector::ZeroVector;

	// ��l�ƨ��
	void SetupCamera();

	void FindManagers();

	// �۾�������
	void OnCameraMove(const FInputActionValue& Value);
	void OnCameraRotate(const FInputActionValue& Value);
	void OnCameraZoom(const FInputActionValue& Value);
	void OnShiftPressed() { bIsShiftPressed = true; }
	void OnShiftReleased() { bIsShiftPressed = false; }
	void OnRightMousePressed();
	void OnRightMouseReleased();
	void OnToggleFocus(const FInputActionValue& Value);
	void UpdateCameraMovement(float DeltaTime);

	//==Possess�Ψ��==
	void OnPossess(APawn* InPawn);
	void OnUnPossess();

};
