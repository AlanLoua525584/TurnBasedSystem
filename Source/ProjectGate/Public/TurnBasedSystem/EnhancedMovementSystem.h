// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "EnhancedMovementSystem.generated.h"


//ALS ���������ʪ��A

UENUM(BlueprintType)
enum class EALSMovementState :uint8
{
	None     UMETA(DisplayName = "None"),
	Grounded UMETA(DisplayName = "Grounded"),
	InAir    UMETA(DisplayName = "InAir"),
	Mantling UMETA(DisplayName = "Mantling"),
	Ragdoll  UMETA(DisplayName = "Ragdoll"),
};

//ALS �B�A����
UENUM(BlueprintType)
enum class EALSGait : uint8
{
	Walking   UMETA(DisplayName = "Walking"),
	Running   UMETA(DisplayName = "Running"),
	Sprinting UMETA(DisplayName = "Sprinting"),
};

//���ʼҦ��T�|
UENUM(BlueprintType)
enum class ECustomMovementMode :uint8
{
	Idle        UMETA(DisplayName = "Idle"),
	GridMove    UMETA(DisplayName = "Grid Movement"),
	DynamicMove UMETA(DisplayName = "Dynamic Movement"),
};

//ALS ��X�ƥ�
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnALSStateChanged, EALSMovementState, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnALSGaitChanged, EALSGait, NewGait);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMovementDataUpdated, FVector, Velocity, float, MovementSpeed);

//�즳���e�U�ƥ�
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementModeChanged, ECustomMovementMode, NewMode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResourceChanged, float, CurrentResource);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResourceDepleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartMove);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStopMove);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UEnhancedMovementSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnhancedMovementSystem();

	//==���A�޲z==
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Movement|State")
	ECustomMovementMode CurrentMovementMode = ECustomMovementMode::DynamicMove;

	//==ALS��X==
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Movement|State")
	EALSMovementState ALSMovementState = EALSMovementState::Grounded;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Movement|State")
	EALSGait CurrentGait = EALSGait::Walking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|State")
	bool bUseALSIntergration = false;

	void  InitializeSystem();

	//ALS �t���H��
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|ALS")
	float WalkSpeedThreshold = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|ALS")
	float RunSpeedThreshold = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|ALS")
	float SprintSpeedThreshold = 600.0f;

	//==�귽�޲z==
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Resource", meta = (ClampMin = "0"))
	float MaxMovementResource = 100.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly ,Category = "Movement|Resource")
	float CurrentMovementResource = 100.0f;

	//���P�B�A���귽����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|Resource")
	float WalkingResourceRate = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|Resource")
	float RunningResourceRate = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|Resource")
	float SprintingResourceRate = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|Resource")
	float ResourceRecoverRate = 10.0f;

	//==���ʰѼ�==
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|Speed")
	float DynamicMoveSpeed = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement|Resource")
	float GridMoveSpeed = 300.0f;


	//==���ʼƾ�(��ALS�ϥ�)==
	UPROPERTY(BlueprintReadOnly, Category = "Movement|Data")
	FVector LastVelocity;

	UPROPERTY(BlueprintReadOnly, Category = "Movement|Data")
	FVector Acceleration;

	UPROPERTY(BlueprintReadOnly, Category = "Movement|Data")
	float MovementInputAmount;

	UPROPERTY(BlueprintReadOnly, Category = "Movement|Data")
	bool bHasMovementInput;



	//==ALS�ƥ�==
	UPROPERTY(BlueprintAssignable, Category = "Movement|ALS Events")
	FOnALSStateChanged OnALSStateChanged;

	UPROPERTY(BlueprintAssignable, Category = "Movement|ALS Events")
	FOnALSGaitChanged OnALSGaitChanged;

	UPROPERTY(BlueprintAssignable, Category = "Movement|ALS Events")
	FOnMovementDataUpdated OnMovementDataUpdated;

	//==�즳�ƥ�==
	UPROPERTY(BlueprintAssignable, Category = "Movement|Events")
	FOnMovementModeChanged OnMovementModeChanged;

	UPROPERTY(BlueprintAssignable, Category = "Movement|Events")
	FOnResourceChanged OnResourceChanged;

	UPROPERTY(BlueprintAssignable, Category = "Movement|Events")
	FOnResourceDepleted OnResourceDepleted;

	UPROPERTY(BlueprintAssignable, Category = "Movement|Events")
	FOnStartMove OnStartMove;

	UPROPERTY(BlueprintAssignable, Category = "Movement|Events")
	FOnStopMove OnStopMove;

	//==�D�n�\��==
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SwitchMovementMode(ECustomMovementMode NewMode);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StartDynamicMovement();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopDynamicMovement();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void ResetResource();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void ProcessMovementInput(const FVector2D& InputVector);

	//==ALS���f���==
	UFUNCTION(BlueprintCallable, Category = "Movement|ALS ")
	void SetALSMovementState(EALSMovementState NewState);

	UFUNCTION(BlueprintCallable, Category = "Movement|ALS ")
	void SetALSGait(EALSGait NewGait);

	UFUNCTION(BlueprintCallable, Category = "Movement|ALS ")
	void UpdateMovementDate(const FVector& Velocity, const FVector& InputVector);

	UFUNCTION(BlueprintPure, Category = "Movement|ALS ")
	float GetCurrentSpeedBaseOnGait() const;

	UFUNCTION(BlueprintPure, Category = "Movement|ALS ")
	bool ShouldSPrint() const { return CurrentGait == EALSGait::Sprinting && CanMove(); }

	UFUNCTION(BlueprintPure, Category = "Movement|ALS ")
	FVector GetMovementInput() const { return CurrentMovementInput; }

	//==�d�ߨ��==
	UFUNCTION(BlueprintPure , Category = "Movement")
	bool CanMove() const {return CurrentMovementResource>0;}

	UFUNCTION(BlueprintPure, Category = "Movement")
	float GetResourcePercent() const;

	UFUNCTION(BlueprintPure, Category = "Movement")
	float CalculateMaxRange() const;

	UFUNCTION(BlueprintPure, Category = "Movement")
	bool IsInDynamicMovement() const { return CurrentMovementMode == ECustomMovementMode::DynamicMove; }


protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


private:
	UPROPERTY()
	class ACharacter* OwnerCharacter;

	UPROPERTY()
	class UCharacterMovementComponent* MovementComponent;

	FVector MovementStartPosition;
	FVector CurrentMovementInput;
	float AccumulatedDistance;
	bool bIsActuallyMoving;
	
	void ConsumeResource(float DeltaTime);
	void RecoverResource(float DeltaTime);
	void UpdateMovementSpeed();
	void CheckResourceDepletion();
	void UpdateALSDate(float DeltaTime);
	void DetermineGaitFromSpeed(float Speed);
	float GetResourceConsumptionRate() const;
};
