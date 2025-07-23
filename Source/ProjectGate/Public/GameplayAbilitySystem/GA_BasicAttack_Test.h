// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/GateGameplayAbility.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "GA_BasicAttack_Test.generated.h"

/**
  * 基礎攻擊測試技能
 * 展示如何整合GAS與現有的戰鬥系統
 */
UCLASS()
class PROJECTGATE_API UGA_BasicAttack_Test : public UGateGameplayAbility
{
	GENERATED_BODY()

public:
	UGA_BasicAttack_Test();

	// === 技能配置 ===

	// 傷害效果類
	UPROPERTY(EditDefaultsOnly, Category = "Ability|Effects")
	TSubclassOf<class UGameplayEffect> DamageEffectClass;

	// 基礎傷害值
	UPROPERTY(EditDefaultsOnly, Category = "Ability|Damage")
	float BaseDamage = 10.0f;

	// 傷害倍率（基於AttackPower屬性）
	UPROPERTY(EditDefaultsOnly, Category = "Ability|Damage")
	float DamageMultiplier = 1.5f;

protected:
	// 技能啟動
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

	// 技能結束
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility,
		bool bWasCancelled) override;

	// 執行攻擊
	UFUNCTION()
	void PerformAttack();

	// 處理攻擊命中
	UFUNCTION()
	void OnAttackHit();

	// 計算傷害
	float CalculateDamage() const;

	// 應用傷害效果
	void ApplyDamageEffect(AActor* Target, float Damage);

private:
	// 當前目標
	UPROPERTY()
	AActor* CurrentTarget;

	// 定時器句柄
	FTimerHandle AttackTimerHandle;

	// 輔助函數
	AActor* FindNearestEnemy(ATurnBasedCharacter* Character) const;
	bool IsFriendly(AActor* ActorA, AActor* ActorB) const;



};
