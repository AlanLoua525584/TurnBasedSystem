// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "UObject/ScriptMacros.h"
#include "Delegates/DelegateCombinations.h"
#include "GateAbilitySystemComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityActivated, UGameplayAbility*, Ability, AActor*, Target);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityEnded, UGameplayAbility*, Ability);

/**
 * 
 */
UCLASS()
class PROJECTGATE_API UGateAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
    // 回合制特有功能
    UFUNCTION(BlueprintCallable, Category = "ProjectGate|Ability")
    bool TryActivateAbilityWithTarget(FGameplayTag AbilityTag, AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "ProjectGate|Ability")
    bool CanAffordAbilityByTag(FGameplayTag AbilityTag) const;

    UFUNCTION(BlueprintCallable, Category = "ProjectGate|Ability")
    int32 GetAbilityAPCost(FGameplayTag AbilityTag) const;

    UFUNCTION(BlueprintCallable, Category = "ProjectGate|Ability")
    int32 GetAbilityCooldownTurns(FGameplayTag AbilityTag) const;

    // 事件
    UPROPERTY(BlueprintAssignable)
    FOnAbilityActivated OnAbilityActivated;

    UPROPERTY(BlueprintAssignable)
    FOnAbilityEnded OnAbilityEnded;

    // 初始化技能
    void GrantTurnBasedAbilities(const TArray<TSubclassOf<class UProjectGateGameplayAbility>>& Abilities);

    // 冷卻管理（回合制）
    UFUNCTION(BlueprintCallable, Category = "ProjectGate|Cooldown")
    void UpdateCooldownsOnTurnEnd();

    // 獲取可用技能列表
    UFUNCTION(BlueprintCallable, Category = "ProjectGate|Ability")
    TArray<FGameplayAbilitySpecHandle> GetAvailableAbilities() const;

protected:
    // 儲存回合制冷卻
    UPROPERTY()
    TMap<FGameplayAbilitySpecHandle, int32> TurnBasedCooldowns;

};
