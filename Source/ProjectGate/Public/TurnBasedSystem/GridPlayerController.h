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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIOnMovementModeChanged, bool, bIsDynamicMode);

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

	// 相機靈敏度設置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|ThirdPerson")
	float MouseSensitivityX = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|ThirdPerson")
	float MouseSensitivityY = 1.0f;

	// 是否在動態模式下自動隱藏游標
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|ThirdPerson")
	bool bHideCursorInDynamicMode = false;



	// 攻擊公開函數
	bool IsInAttackMode() const { return bIsInAttackMode; }


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


	//處理切換時的視覺效果

	UPROPERTY(BlueprintAssignable, Category = "Movement")
	FUIOnMovementModeChanged UIOnMovementModeChanged;

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


	//進入攻擊狀態
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Actions")
	class UInputAction* AttackModeAction;



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
	void SwitchMovementMode();

	UFUNCTION()
	void OnMove(const FInputActionValue& Value);

	// 獲取當前控制的 EnhancedMovementSystem

	UFUNCTION(BlueprintCallable, Category = "Movement")
	UEnhancedMovementSystem* GetControlledMovementSystem() const;

	void ShowModeNotification(const FString& ModeName);

	//==攻擊系統==

	//動態攻擊Handle

	void HandleDynamicAttackInput();

	//攻擊效果展示
	void ShowAttackPreview(AActor* Target);

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

	//監聽所有角色的血量變化
	void SubscribeToHealthEvents();

	// 攻擊模式相關
	bool bAutoExitAttackMode = true;  // 攻擊後是否自動退出攻擊模式

	// 攻擊模式狀態
	bool bIsInAttackMode = false;

	UFUNCTION()
	void OnCombatExecuted(AActor* Attacker, AActor* Target, const FDamageResult& DamageResult);

	// 血量變化處理
	UFUNCTION()
	void OnAnyCharacterHealthChanged(AActor* AffectedCharacter, int32 CurrentHealth, int32 MaxHealth);


	UFUNCTION()
	void OnCharacterHealthChanged(int32 CurrentHealth, int32 MaxHealth);

	// 當前高亮的目標
	UPROPERTY()
	AActor* CurrentHighlightedTarget;


	// 戰鬥 UI
	UPROPERTY()
	class UCombatDisplayWidget* CombatDisplayWidget;

	// 攻擊模式滑鼠懸停檢測
	void UpdateAttackTargetHighlight();

	// 戰鬥結果回調
	UFUNCTION()
	void OnCombatResultReceived(AActor* Attacker, AActor* Target, const FDamageResult& Result);

	UPROPERTY()
	AActor* LastHighlightedTarget = nullptr;  // 上次高亮的目標

	// 攻擊相關函數
	void OnAttackMode(const FInputActionValue& Value);
	void ProcessAttackClick();
	void ExitAttackMode();


	// 添加切換攻擊模式函數
	void ToggleAttackMode();

	// 創建戰鬥 UI
	void CreateCombatUI();


	//==Possess用函數==
	void OnPossess(APawn* InPawn);
	void OnUnPossess();

	//Getter
	bool GetCharacterUnderCursor(AActor*& OutCharacter);
	bool GetCharacterUnderCursorWithFallback(AActor*& OutCharacter);


};
