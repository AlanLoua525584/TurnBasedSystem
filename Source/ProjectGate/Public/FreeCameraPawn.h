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
	//相機組件

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* CameraComponent;

	//相機臂
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* SpringArmComponent;

	//移動速度設定
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement")
	float BaseMoveSpeed = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement")
	float FastMoveSpeed = 1000.0f;

	// 旋轉速度設定
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|MOvement")
	float BaseLookUpRate = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|MOvement")
	float BaseTurnRate = 45.0f;

	//縮放設定
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float ZoomSpeed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float MinZoomLength = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Zoom")
	float MaxZoomLength = 2000.0f;

	//邊緣滾動設定
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
	bool bEnableEdgeScrolling = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
	float EdgeScrollBorder = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|EdgeScrolling")
	float EdgeScrollSpeed = 500.0f;

private:
	//輸入狀態標記
	bool bIsShiftPressed = false;
	bool bIsRightMousePressed = false;

	//平滑移動
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


	//移動函數

	void MoveForward(float Value);
	void MoveRight(float Value);
	void MoveUp(float Value);

	//旋轉函數
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);
	void AddControllerYawInput(float Value)override;
	void AddControllerPitchInput(float Value) override;

	//縮放函數
	void ZoomIn();
	void ZoomOut();
	void Zoom(float Value);

    //快速移動函數
	void OnShiftPressed() { bIsShiftPressed = true; };
	void OnShiftReleased() { bIsShiftPressed = false; }

	//滑鼠控制
	void OnRightMousePressed();
	void OnRightMouseReleased();

	//邊緣滾動函數
	void HandleEdgeScrolling(float DeltaTime);
	
	//平滑移動函數
	void UpdateMovement(float DeltaTime);

public:	


	//快速定位到目標
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void FocusOnActor(AActor* TargetActor,float Distance =500.0f);

	//聚焦並跟隨目標
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetFollowTarget(AActor* TargetActor);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void ClearFollowTarget();

	//獲取當前相機位置和旋轉
	UFUNCTION(BlueprintCallable, Category = "Camera")
	FVector GetCameraLocation() const;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	FRotator GetCameraRotation() const;

	//設置移動邊界
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetMovementBounds(FVector MinBounds, FVector MaxBounds);



private:

	//跟隨目標
	UPROPERTY()
	AActor* FollowTarget;

	//移動邊界
	bool bUseBounds = false;
	
	FVector MinBounds;
	FVector MaxBounds;
};
