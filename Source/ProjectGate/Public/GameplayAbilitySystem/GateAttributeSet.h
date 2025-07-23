// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GateAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class PROJECTGATE_API UGateAttributeSet : public UAttributeSet
{
	GENERATED_BODY()


public:
    UGateAttributeSet();

    // === 基礎屬性 ===
    UPROPERTY(BlueprintReadOnly, Category = "Health")
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, Health)

        UPROPERTY(BlueprintReadOnly, Category = "Health")
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, MaxHealth)

        // === 回合制特有 ===
        UPROPERTY(BlueprintReadOnly, Category = "Action")
    FGameplayAttributeData ActionPoints;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, ActionPoints)

        UPROPERTY(BlueprintReadOnly, Category = "Action")
    FGameplayAttributeData MaxActionPoints;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, MaxActionPoints)

        // === 資源系統 ===
        UPROPERTY(BlueprintReadOnly, Category = "Resource")
    FGameplayAttributeData Mana;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, Mana)

        UPROPERTY(BlueprintReadOnly, Category = "Resource")
    FGameplayAttributeData MaxMana;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, MaxMana)

        UPROPERTY(BlueprintReadOnly, Category = "Resource")
    FGameplayAttributeData Stamina;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, Stamina)

        UPROPERTY(BlueprintReadOnly, Category = "Resource")
    FGameplayAttributeData MaxStamina;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, MaxStamina)

        // === 戰鬥屬性（保留現有系統的數值） ===
        UPROPERTY(BlueprintReadOnly, Category = "Combat")
    FGameplayAttributeData AttackPower;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, AttackPower)

        UPROPERTY(BlueprintReadOnly, Category = "Combat")
    FGameplayAttributeData MagicPower;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, MagicPower)

        UPROPERTY(BlueprintReadOnly, Category = "Combat")
    FGameplayAttributeData Defense;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, Defense)

        UPROPERTY(BlueprintReadOnly, Category = "Combat")
    FGameplayAttributeData MagicDefense;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, MagicDefense)

        UPROPERTY(BlueprintReadOnly, Category = "Combat")
    FGameplayAttributeData CriticalChance;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, CriticalChance)

        UPROPERTY(BlueprintReadOnly, Category = "Combat")
    FGameplayAttributeData CriticalDamage;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, CriticalDamage)

        // === 回合順序 ===
        UPROPERTY(BlueprintReadOnly, Category = "TurnOrder")
    FGameplayAttributeData Initiative;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, Initiative)

        UPROPERTY(BlueprintReadOnly, Category = "TurnOrder")
    FGameplayAttributeData Speed;
    ATTRIBUTE_ACCESSORS(UGateAttributeSet, Speed)


protected:
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
};
