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

	// ===�֤߲ե�===
	UPROPERTY()
	AGridManager* GridManager;

	UPROPERTY()
	ASimpleTurnManager* TurnManager;

	//===��J�^�ը��===

	void OnClick();
	void OnShowRange();
	void OnCameraRotate(const FInputActionValue& Value);
	void OnCameraZoom(const FInputActionValue& Value);
	void OnCancel();

	//===���U���===

		// ����ƹ��U�������m
	bool GetGridPositionUnderCursor(FIntPoint& OutGridPos);

	//�����e�^�X����
	class ATurnBasedCharacter* GetCurrentTurnCharacter();


private:
	// ����޲z���ޥ�
	/*UPROPERTY()
	class AGridManager* GridManager;

	// �^�X�޲z���ޥ�
	UPROPERTY()
	class ASimpleTurnManager* TurnManager;*/

	//�ƹ��I���B�z
	void OnLeftMouseClick();
	void OnRightMouseClick();

	//�۾������ܼ�
	float CurrentCameraRotation = 0.0f;
	float CurrentCameraZoom = 1000.0f;

};
