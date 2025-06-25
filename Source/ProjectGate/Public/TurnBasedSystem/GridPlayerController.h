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


/**
 * 
 */
UCLASS()
class PROJECTGATE_API AGridPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGridPlayerController();

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

	// ===核心組件===
	UPROPERTY()
	AGridManager* GridManager;

	UPROPERTY()
	ASimpleTurnManager* TurnManager;

	//===輸入回調函數===

	void OnClick();
	void OnShowRange();
	void OnCameraRotate(const FInputActionValue& Value);
	void OnCameraZoom(const FInputActionValue& Value);
	void OnCancel();

	//===輔助函數===

		// 獲取滑鼠下的網格位置
	bool GetGridPositionUnderCursor(FIntPoint& OutGridPos);

	//獲取當前回合角色
	class ATurnBasedCharacter* GetCurrentTurnCharacter();


private:
	// 網格管理器引用
	/*UPROPERTY()
	class AGridManager* GridManager;

	// 回合管理器引用
	UPROPERTY()
	class ASimpleTurnManager* TurnManager;*/

	//滑鼠點擊處理
	void OnLeftMouseClick();
	void OnRightMouseClick();

	//相機控制變數
	float CurrentCameraRotation = 0.0f;
	float CurrentCameraZoom = 1000.0f;

};
