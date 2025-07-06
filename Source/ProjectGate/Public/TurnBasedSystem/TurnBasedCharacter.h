// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatInterface.h"
#include "CombatSystem/CombatStats.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TurnBasedCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UGridVisualComponent;
class UEnhancedMovementSystem;



// Declare delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionPointsChanged, int32, NewActionPoints);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionPerformed, FString, ActionName, int32, Cost);

UCLASS()
class PROJECTGATE_API ATurnBasedCharacter : public ACharacter, public ICombatInterface
{
    GENERATED_BODY()

public:


    // Sets default values for this character's properties
    ATurnBasedCharacter();

    // Action Points System
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System")
    int32 MaxActionPoints = 3;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Turn System")
    int32 CurrentActionPoints;

    // Action Costs
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Action Cost")
    int32 MoveActionCost = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Action Cost")
    int32 AttackActionCost = 1;


    // Basic Stats (will integrate with GAS later)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
    int32 AttackDamage = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
    float AttackRange = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
    float MoveSpeed = 300.0f;

    // Player Control
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn System|Stats")
    bool bIsPlayerControlled = false;

    // Utility function to check in Blueprint
    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool IsPlayerTurn() const { return bIsPlayerControlled && bIsMyTurn; }

    // Getter for player controlled status
    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool GetIsPlayerControlled() const { return bIsPlayerControlled; }

    // 獲取角色顯示名稱
    UFUNCTION(BlueprintPure, Category = "Turn System")
    FString GetCharacterDisplayName() const
    {
        return GetActorLabel().IsEmpty() ? GetName() : GetActorLabel();
    }

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    int32 GetCurrentActionPoints() const { return CurrentActionPoints; }

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    int32 GetMaxActionPoints() const { return MaxActionPoints; }

    //GetGridManager
    UFUNCTION(BlueprintPure, Category = "Grid")
    AGridManager* GetGridManager() const { return GridManager; }

    // 檢查是否可以執行動態移動
    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool CanPerformDynamicMovement() const;


    // Events
    UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
    FOnActionPointsChanged OnActionPointsChanged;

    UPROPERTY(BlueprintAssignable, Category = "Turn System|Events")
    FOnActionPerformed OnActionPerformed;

    // Action System
    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void ResetActionPoints();

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    bool CanPerformAction(int32 ActionCost) const;

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void ConsumeActionPoints(int32 Amount);

    // Basic Actions
    UFUNCTION(BlueprintCallable, Category = "Turn System|Actions")
    bool TryMove(FVector TargetLocation);

    UFUNCTION(BlueprintCallable, Category = "Turn System|Actions")
    bool TryAttack(AActor* TargetActor);

    UFUNCTION(BlueprintPure, Category = "Turn System")
    bool IsTurnBasedPlayerControlled() const { return bIsPlayerControlled; }

    // 動畫攻擊包裝函數
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void ExecuteAnimatedAttack(AActor* Target);


    // Turn Management
    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void OnTurnStart();

    UFUNCTION(BlueprintCallable, Category = "Turn System")
    void OnTurnEnd();

    // State Query
    UFUNCTION(BlueprintCallable, Category = "Turn System")
    bool IsMyTurn() const;

    // Set Grid Manager
    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    void SetGridManager(AGridManager* Manager);

    // Grid Movement
    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    bool MoveToGridPosition(FIntPoint TargetGridPos);

    // Show Movement Range
    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    void ShowMovementRange();

    //UpdateGridPosition
    UFUNCTION(BlueprintCallable, Category = "Grid|Movement")
    void UpdateGridPositionFromWorld();

    // Getter for GridVisualComponent
    UFUNCTION(BlueprintCallable, Category = "Grid")
    UGridVisualComponent* GetGridVisualComponent() const { return GridVisualComponent; }

    // Getter for CurrentGridPosition
    UFUNCTION(BlueprintCallable, Category = "Grid")
    FIntPoint GetCurrentGridPosition() const { return CurrentGridPosition; }

    // === 死亡相關 ===
    // 死亡動畫
    UPROPERTY(EditDefaultsOnly, Category = "Combat|Death")
    class UAnimMontage* DeathMontage;

    // 死亡特效
    UPROPERTY(EditDefaultsOnly, Category = "Combat|Death")
    TSubclassOf<class AActor> DeathEffectClass;

    // 死亡後延遲銷毀時間
    UPROPERTY(EditDefaultsOnly, Category = "Combat|Death")
    float DeathDestroyDelay = 3.0f;

    // 是否正在死亡過程中
    UPROPERTY(BlueprintReadOnly, Category = "Combat|Death")
    bool bIsDying = false;


    // 死亡處理
    virtual void OnDeath_Implementation(AActor* Killer) override;



    //===組件===

    /* = 相機組件 = */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
    USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
    UCameraComponent* FollowCamera;

    //=視覺組件=
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UGridVisualComponent* GridVisualComponent;


    //=移動組件=
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UEnhancedMovementSystem* EnhancedMovementSystem;

    //=戰鬥組件=
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
    UCombatComponent* CombatComponent;


    // 實現戰鬥接口
    virtual bool CanBeAttacked_Implementation() const override;
    virtual UCombatComponent* GetCombatComponent_Implementation() const override;

    // 添加陣營系統
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    int32 TeamID = 0;  // 0 = 玩家, 1 = 敵人


protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;


    UFUNCTION(BlueprintCallable, Category = "Movement")
    UEnhancedMovementSystem* GetEnhancedMovementSystem() const { return EnhancedMovementSystem; }

    // Turn State
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Turn System")
    bool bIsMyTurn = false;

    UPROPERTY()
    class AGridManager* GridManager;

    UPROPERTY(EditAnywhere, Category = "Combat|Animation")
    class UAnimMontage* AttackMontage;

    // === 死亡相關 ===
  // 死亡計時器
    FTimerHandle DeathTimerHandle;

    // 死亡動畫結束回調
    UFUNCTION()
    void OnDeathAnimationEnd();

    // 通知回合系統
    void NotifyTurnSystemOfDeath();

    // 死亡時的視覺效果
    void PlayDeathEffects();

    // 清理角色（移除高亮、碰撞等）
    void CleanupCharacter();

   

    // 頭頂血條組件
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
    class UWidgetComponent* HealthBarComponent;

    // 血條 Widget 類
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UHealthBarWidget> HealthBarWidgetClass;

    // 血條 Widget 實例
    UPROPERTY()
    class UHealthBarWidget* HealthBarWidget;




    // Current grid position
    UPROPERTY(BlueprintReadOnly, Category = "Grid|Movement")
    FIntPoint CurrentGridPosition;

    // Movement state
    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    bool bIsMoving = false;

    // Movement speed (units/second)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float GridMoveSpeed = 300.0f;

    UPROPERTY(EditAnywhere, Category = "Combat|Animation")
    float AttackAnimationDelay = 0.5f; // 動畫到傷害的延遲

private:
    // Movement target
    FVector MoveTargetLocation;

    // 攻擊計時器
    FTimerHandle AttackTimerHandle;

    // 攻擊目標暫存
    TWeakObjectPtr<AActor> PendingAttackTarget;

    // Helper functions
    void PerformMove();
    void PerformAttack(AActor* TargetActor);
    void OnAttackAnimationHit();

    // 血量變化回調
    UFUNCTION()
    void OnHealthChanged(AActor* Character,int32 CurrentHealth, int32 MaxHealth);


public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    virtual void TestVisualization();

    virtual void TestDifferentVisuals();

    // 更新血條顯示
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void UpdateHealthDisplay();

    // 檢查是否可以被選為目標
    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool IsValidCombatTarget() const { return !bIsDying && IsAlive(); }

    // 檢查是否存活
    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool IsAlive() const;


};