// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GateGameplayAbility.generated.h"


UENUM(BlueprintType)
enum class EAbilityTargetType : uint8
{
    None,
    Self,
    SingleEnemy,
    SingleAlly,
    AllEnemies,
    AllAllies,
    AreaOfEffect
};

/**
 * 
 */
UCLASS()
class PROJECTGATE_API UGateGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	

public:
    UGateGameplayAbility();

    // === 回合制設定 ===
    UPROPERTY(EditDefaultsOnly, Category = "Ability|TurnBased")
    int32 APCost = 3;

    UPROPERTY(EditDefaultsOnly, Category = "Ability|TurnBased")
    int32 CooldownTurns = 0;

    UPROPERTY(EditDefaultsOnly, Category = "Ability|TurnBased")
    int32 RangeInGrids = 1;

    UPROPERTY(EditDefaultsOnly, Category = "Ability|TurnBased")
    bool bRequiresLineOfSight = true;

    // === 目標設定 ===
    UPROPERTY(EditDefaultsOnly, Category = "Ability|Targeting")
    EAbilityTargetType TargetType = EAbilityTargetType::SingleEnemy;

    UPROPERTY(EditDefaultsOnly, Category = "Ability|Targeting")
    int32 AreaRadius = 0;

    // === 動畫整合 ===
    UPROPERTY(EditDefaultsOnly, Category = "Ability|Animation")
    class UAnimMontage* AbilityAnimation;

    UPROPERTY(EditDefaultsOnly, Category = "Ability|Animation")
    FGameplayTag AnimationTag;

    // === 特效 ===
    UPROPERTY(EditDefaultsOnly, Category = "Ability|Effects")
    class UParticleSystem* CastEffect;

    UPROPERTY(EditDefaultsOnly, Category = "Ability|Effects")
    class UParticleSystem* ImpactEffect;

    UPROPERTY(EditDefaultsOnly, Category = "Ability|Effects")
    class USoundCue* CastSound;

    // 覆寫的函數

    virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;


    virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayTagContainer* SourceTags = nullptr,
        const FGameplayTagContainer* TargetTags = nullptr,
        OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData) override;

    virtual void EndAbility(const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        bool bReplicateEndAbility,
        bool bWasCancelled) override;


protected:
    // 輔助函數
    UFUNCTION(BlueprintCallable, Category = "Ability")
    bool IsTargetInRange(AActor* Target) const;

    UFUNCTION(BlueprintCallable, Category = "Ability")
    bool CheckLineOfSight(AActor* Target) const;

    UFUNCTION(BlueprintCallable, Category = "Ability")
    bool IsValidTarget(AActor* PotentialTarget) const;

    UFUNCTION(BlueprintCallable, Category = "Ability")
    bool IsFriendlyTarget(AActor* Target) const;


    UFUNCTION(BlueprintCallable, Category = "Ability")
    TArray<AActor*> GetValidTargets() const;

    UFUNCTION(BlueprintCallable, Category = "Ability")
    void ConsumeAPAndResources();

    UFUNCTION(BlueprintCallable, Category = "Ability")
    void PlayAbilityMontage();

    // 與現有系統的橋接
    
    /*待更新 與原有的GridManager衝突嗎?
    UFUNCTION(BlueprintPure, Category = "Ability")
    class AGridManager* GetGridManager() const;
    */

    UFUNCTION(BlueprintPure, Category = "Ability")
    class UGridMovementComponent* GetOwnerGridMovement() const;

    UFUNCTION(BlueprintPure, Category = "Ability")
    class UCombatComponent* GetOwnerCombatComponent() const;

    UFUNCTION(BlueprintPure, Category = "Ability")
    class UTurnSystemComponent* GetOwnerTurnComponent() const;

    // 計算傷害（整合現有系統）
    UFUNCTION(BlueprintCallable, Category = "Ability")
    float CalculateDamageWithCurrentSystem(float BaseDamage, AActor* Target) const;

private:
    // 內部目標儲存
    UPROPERTY()
    AActor* CachedTarget;

};
