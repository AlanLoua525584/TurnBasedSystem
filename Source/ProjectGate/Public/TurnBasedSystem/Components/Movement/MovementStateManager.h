// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementStateManager.generated.h"

// 移動系統類型
UENUM(BlueprintType)
enum class EMovementSystemType : uint8
{
	None,
	GridMovement,
	DynamicMovement,
	AIMovement
};

// 移動狀態變更委託
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewOnMovementStateChanged,
	EMovementSystemType, SystemType, bool, bIsActive);



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UMovementStateManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovementStateManager();

    // === 核心功能 ===

    // 停止所有移動系統
    UFUNCTION(BlueprintCallable, Category = "Movement State")
    void HaltAllMovement();

    // 停止特定的移動系統
    UFUNCTION(BlueprintCallable, Category = "Movement State")
    void HaltMovementSystem(EMovementSystemType SystemType);

    // 激活特定的移動系統（會自動停止其他系統）
    UFUNCTION(BlueprintCallable, Category = "Movement State")
    bool ActivateMovementSystem(EMovementSystemType SystemType);

    // 查詢當前活動的移動系統
    UFUNCTION(BlueprintPure, Category = "Movement State")
    EMovementSystemType GetActiveMovementSystem() const { return ActiveMovementSystem; }

    // 檢查特定系統是否活動
    UFUNCTION(BlueprintPure, Category = "Movement State")
    bool IsMovementSystemActive(EMovementSystemType SystemType) const;

    // 同步所有移動組件狀態
    UFUNCTION(BlueprintCallable, Category = "Movement State")
    void SynchronizeMovementStates();

    // === 事件 ===
    UPROPERTY(BlueprintAssignable, Category = "Movement State")
    FNewOnMovementStateChanged NewOnMovementStateChanged;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;


private:
    // 當前活動的移動系統
    EMovementSystemType ActiveMovementSystem;

    // 緩存的組件引用
    UPROPERTY()
    class UGridMovementComponent* GridMovement;

    UPROPERTY()
    class UEnhancedMovementSystem* DynamicMovement;

    UPROPERTY()
    class UCharacterMovementComponent* CharacterMovement;

    // 內部函數
    void StopGridMovement();
    
    void StopDynamicMovementByManager();
    
    void StopCharacterMovement();
		
};
