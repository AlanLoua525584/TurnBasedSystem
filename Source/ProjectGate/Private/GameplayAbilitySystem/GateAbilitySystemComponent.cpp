// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GateAbilitySystemComponent.h"
#include "GameplayAbilitySystem/GASManagerComponent.h"


bool UGateAbilitySystemComponent::TryActivateAbilityWithTarget(FGameplayTag AbilityTag, AActor* Target)
{
	return false;
}

bool UGateAbilitySystemComponent::CanAffordAbilityByTag(FGameplayTag AbilityTag) const
{
	return false;
}

int32 UGateAbilitySystemComponent::GetAbilityAPCost(FGameplayTag AbilityTag) const
{
	return int32();
}



int32 UGateAbilitySystemComponent::GetAbilityCooldownTurns(FGameplayTag AbilityTag) const
{
	return int32();
}

void UGateAbilitySystemComponent::GrantTurnBasedAbilities(const TArray<TSubclassOf<class UProjectGateGameplayAbility>>& Abilities)
{
}

void UGateAbilitySystemComponent::UpdateCooldownsOnTurnEnd()
{
}

TArray<FGameplayAbilitySpecHandle> UGateAbilitySystemComponent::GetAvailableAbilities() const
{
	return TArray<FGameplayAbilitySpecHandle>();
}
