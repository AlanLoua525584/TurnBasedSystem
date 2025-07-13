// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatSystem/CombatStats.h"
#include "CombatComponent.generated.h"

// 前向聲明
class ATurnBasedCharacter;
class AGridManager;
class UDamageNumberComponent;
class UCombatEffectsComponent;

// === 委託事件 ===
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageReceived, const FDamageResult&, DamageResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHealthChanged, AActor*, Character, int32, CurrentHealth, int32, MaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, AActor*, Killer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttackExecuted, AActor*, Attacker, AActor*, Target);

//==傷害結果委託==

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
    FOnAttackExecutedWithResult,
    AActor*, Attacker,
    AActor*, Target,
    const FDamageResult&, DamageResult
);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatComponent();


    // === 初始化 ===
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void InitializeCombat(AGridManager* InGridManager);

    // === 核心戰鬥功能 ===
    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool CanAttack(AActor* Target) const;

    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool ExecuteAttack(AActor* Target);


    UFUNCTION(BlueprintCallable, Category = "Combat")
    FDamageResult CalculateDamage(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void ApplyDamage(const FDamageResult& DamageResult);

    // === 範圍功能 ===
    UFUNCTION(BlueprintCallable, Category = "Combat")
    TArray<AActor*> GetAttackableTargets() const;

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void ShowAttackRange();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void HideAttackRange();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool IsShowingAttackRange() const { return bIsShowingAttackRange; }

    // === 狀態查詢 ===
    UFUNCTION(BlueprintPure, Category = "Combat")
    bool IsAlive() const { return Stats.CurrentHealth > 0; }

    //==Getter==

    UFUNCTION(BlueprintPure, Category = "Combat")
    float GetHealthPercent() const;

    UFUNCTION(BlueprintPure, Category = "Combat")
    int32 GetAttackCost() const { return AttackConfig.ActionPointCost; }

    UFUNCTION(BlueprintPure, Category = "Combat")
    float GetAttackRange() const { return AttackConfig.AttackRange; }

    const FAttackConfig& GetAttackConfig() const { return AttackConfig; }

    int32 GetCurrentHealth() const { return Stats.CurrentHealth; }

    int32 GetMaxHealth() const { return Stats.MaxHealth; }

    const FCombatStats& GetStats() const { return Stats; }


    // === 屬性 ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat|Stats")
    FCombatStats Stats;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat|Config")
    FAttackConfig AttackConfig;

  

    UPROPERTY(BlueprintAssignable, Category = "Combat")
    FOnDamageReceived OnDamageReceived;

    UPROPERTY(BlueprintAssignable, Category = "Combat")
    FOnHealthChanged OnHealthChanged;

    UPROPERTY(BlueprintAssignable, Category = "Combat")
    FOnDeath OnDeath;

    UPROPERTY(BlueprintAssignable, Category = "Combat")
    FOnAttackExecuted OnAttackExecuted;

    UPROPERTY(BlueprintAssignable, Category = "Combat")
    FOnAttackExecutedWithResult OnAttackExecutedWithResult;


    //Getter
     // 獲取攻擊類型
    UFUNCTION(BlueprintPure, Category = "Combat")
    ECombatAttackType GetAttackType() const { return AttackConfig.AttackType; }



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    // 內部函數
    bool IsValidTarget(AActor* Target) const;
    void HandleDeath(AActor* Killer);


private:
    UPROPERTY()
    ATurnBasedCharacter* OwnerCharacter;

    UPROPERTY()
    AGridManager* GridManager;

    UPROPERTY()
    TArray<AActor*> HighlightedTargets;

    bool bIsShowingAttackRange = false;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
