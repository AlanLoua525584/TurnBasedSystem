// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FreeCameraPawn.generated.h"

UCLASS()
class PROJECTGATE_API AFreeCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFreeCameraPawn();

protected:
	//�۾��ե�

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* CameraComponent;

	//�۾��u
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* SpringArmComponent;

	//���ʳt�׳]�w
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement")
	float BaseMoveSpeed = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement")
	float FastMoveSpeed = 1000.0f;

	// ����t�׳]�w
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|MOvement")
	float BaseLookUpRate = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|MOvement")
	float BaseTurnRate = 45.0f;

	//�Y��]�w
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float ZoomSpeed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float MinZoomLength = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float MaxZoomLength = 2000.0f;

	//��t�u�ʳ]�w
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
	bool bEnableEdgeScrolling = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
	float EdgeScrollBorder = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
	float EdgeScrollSpeed = 500.0f;

private:
	//��J���A�аO
	bool bIsShiftPressed = false;
	bool bIsRightMousePressed = false;

	//���Ʋ���
	FVector CurrentVelocity;
	FVector TargetVelocity;

	UPROPERTY(EditAnywhere, Category = "Camera Movement", meta = (AllowPrivateAccess = "true"))
	float MovementSmoothness = 10.0f;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//���ʨ��

	void MoveForward(float Value);
	void MoveRight(float Value);
	void MoveUp(float Value);

	//������
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);
	void AddControllerYawInput(float Value)override;
	void AddControllerPitchInput(float Value) override;

	//�Y����
	void ZoomIn();
	void ZoomOut();
	void Zoom(float Value);

    //�ֳt���ʨ��
	void OnShiftPressed() { bIsShiftPressed = true; };
	void OnShiftReleased() { bIsShiftPressed = false; }

	//�ƹ�����
	void OnRightMousePressed();
	void OnRightMouseReleased();

	//��t�u�ʨ��
	void HandleEdgeScrolling(float DeltaTime);
	
	//���Ʋ��ʨ��
	void UpdateMovement(float DeltaTime);

public:	


	//�ֳt�w���ؼ�
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void FocusOnActor(AActor* TargetActor,float Distance =500.0f);

	//�E�J�ø��H�ؼ�
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetFollowTarget(AActor* TargetActor);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void ClearFollowTarget();

	//�����e�۾���m�M����
	UFUNCTION(BlueprintCallable, Category = "Camera")
	FVector GetCameraLocation() const;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	FRotator GetCameraRotation() const;

	//�]�m�������
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetMovementBounds(FVector MinBounds, FVector MaxBounds);



private:

	//���H�ؼ�
	UPROPERTY()
	AActor* FollowTarget;

	//�������
	bool bUseBounds = false;
	
	FVector MinBounds;
	FVector MaxBounds;
};
