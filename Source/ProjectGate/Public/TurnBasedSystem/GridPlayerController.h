// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "Math/Intpoint.h"
#include "GridPlayerController.generated.h"

//前向宣告
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
	// 確保 Tick 啟用
	virtual void PlayerTick(float DeltaTime) override;

	// 相機公開函數
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

	// 當前控制的相機 Actor
	UPROPERTY()
	class AActor* CameraPawn;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	AActor* GetCameraPawn() const { return CameraPawn; }

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// ===== Enhanced Input System =====
	/*輸入映射上下文*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* GridInputMappingContext;

	/** 輸入動作 - 點擊 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ClickAction;

	/** 輸入動作 - 顯示範圍 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* ShowRangeAction;

	/** 輸入動作 - 相機旋轉 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* RotateCameraAction;

	/** 輸入動作 - 相機縮放 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* ZoomCameraAction;

	/** 輸入動作 - 取消 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* CancelAction;

	//動態移動切換
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* DynamicModeAction;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* MoveAction;

	// 相機控制 Input Actions（如果還沒有的話）
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

	// 獲取當前控制的 EnhancedMovementSystem

	UFUNCTION(BlueprintCallable, Category = "Movement")
	UEnhancedMovementSystem* GetControlledMovementSystem() const;

	void ShowModeNotification(const FString& ModeName);





	// ===核心組件===
	UPROPERTY()
	AGridManager* GridManager;

	UPROPERTY()
	ASimpleTurnManager* TurnManager;

	//===輸入回調函數===

	void OnClick();
	void OnShowRange();
	void OnCancel();

	//===輔助函數===

		// 獲取滑鼠下的網格位置
	bool GetGridPositionUnderCursor(FIntPoint& OutGridPos);

	//獲取當前回合角色
	class ATurnBasedCharacter* GetCurrentTurnCharacter();
	class ATurnBasedCharacter* GetControlledTurnCharacter() const;


	// ===== 相機組件 =====
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComponent;

	// 相機設置
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
	//相機控制變數
	float CurrentCameraRotation = 0.0f;
	float CurrentCameraZoom = 1000.0f;

	// 相機切換冷卻
	float LastToggleFocusTime = 0.0f;
	const float ToggleFocusCooldown = 0.5f; // 0.5秒冷卻

	// 相機狀態
	bool bIsRightMousePressed = false;
	bool bIsShiftPressed = false;
	FVector CameraVelocity = FVector::ZeroVector;

	// 初始化函數
	void SetupCamera();

	void FindManagers();

	// 相機控制函數
	void OnCameraMove(const FInputActionValue& Value);
	void OnCameraRotate(const FInputActionValue& Value);
	void OnCameraZoom(const FInputActionValue& Value);
	void OnShiftPressed() { bIsShiftPressed = true; }
	void OnShiftReleased() { bIsShiftPressed = false; }
	void OnRightMousePressed();
	void OnRightMouseReleased();
	void OnToggleFocus(const FInputActionValue& Value);
	void UpdateCameraMovement(float DeltaTime);

	//==Possess用函數==
	void OnPossess(APawn* InPawn);
	void OnUnPossess();

};
