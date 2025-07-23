// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/ScriptMacros.h"
#include "Delegates/DelegateCombinations.h"
#include "AttributeSet.h" // 添加必要的include
#include "GASManagerComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAbilityCommitted, FGameplayTag, AbilityTag, int32, APCost, int32, CooldownTurns);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeChanged, FGameplayTag, AttributeTag, float, NewValue);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UGASManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGASManagerComponent();


    // === 初始化 ===
    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    void InitializeGASSystem(AActor* InOwnerActor);

    // === 技能管理 ===
    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    void GrantAbility(TSubclassOf<class UGateGameplayAbility> AbilityClass, int32 Level = 1);

    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    void GrantAbilities(const TArray<TSubclassOf<class UGateGameplayAbility>>& AbilityClasses);

    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    bool TryActivateAbilityByTag(FGameplayTag AbilityTag, AActor* Target = nullptr);

    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    bool TryActivateAbilityByClass(TSubclassOf<class UGateGameplayAbility> AbilityClass, AActor* Target = nullptr);

    // === 查詢功能 ===
    UFUNCTION(BlueprintPure, Category = "GAS Manager")
    bool CanActivateAbility(FGameplayTag AbilityTag) const;

    UFUNCTION(BlueprintPure, Category = "GAS Manager")
    TArray<FGameplayTag> GetActivatableAbilityTags() const;

    UFUNCTION(BlueprintPure, Category = "GAS Manager")
    int32 GetAbilityCooldownTurns(FGameplayTag AbilityTag) const;

    UFUNCTION(BlueprintPure, Category = "GAS Manager")
    int32 GetAbilityAPCost(FGameplayTag AbilityTag) const;

    // === 屬性訪問 ===
    UFUNCTION(BlueprintPure, Category = "GAS Manager")
    float GetAttributeValue(FGameplayTag AttributeTag) const;

    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    void SetAttributeValue(FGameplayTag AttributeTag, float NewValue);

    // === 效果管理 ===
    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    void ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> EffectClass, float Level = 1.0f);

    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    void RemoveActiveEffectsWithTag(FGameplayTag EffectTag);

    // === 回合制特有 ===
    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    void OnTurnStart();

    UFUNCTION(BlueprintCallable, Category = "GAS Manager")
    void OnTurnEnd();

    // === 事件 ===
    UPROPERTY(BlueprintAssignable)
    FOnAbilityCommitted OnAbilityCommitted;

    UPROPERTY(BlueprintAssignable)
    FOnAttributeChanged OnAttributeChanged;

    // === 組件獲取 ===
    UFUNCTION(BlueprintPure, Category = "GAS Manager")
    class UGateAbilitySystemComponent* GetAbilitySystemComponent() const { return AbilitySystemComponent; }

    UFUNCTION(BlueprintPure, Category = "GAS Manager")
    class UGateAttributeSet* GetAttributeSet() const { return AttributeSet; }


protected:
	// Called when the game starts
	virtual void BeginPlay() override;


    // GAS核心組件 - 使用正確的Gate前綴
    UPROPERTY()
    class UGateAbilitySystemComponent* AbilitySystemComponent;

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    UGateGameplayAbility* GetAbilityByTag(FGameplayTag AbilityTag) const;

    UPROPERTY()
    class UGateAttributeSet* AttributeSet;

    // 起始配置
    UPROPERTY(EditDefaultsOnly, Category = "GAS Config")
    TArray<TSubclassOf<class UGateGameplayAbility>> StartingAbilities;

    UPROPERTY(EditDefaultsOnly, Category = "GAS Config")
    TArray<TSubclassOf<class UGameplayEffect>> StartingEffects;

    // 回合制冷卻管理
    UPROPERTY()
    TMap<FGameplayAbilitySpecHandle, int32> AbilityCooldowns;

public:	
	// Called every frame

    void SetupAttributeCallbacks();
    void HandleAttributeChange(const struct FOnAttributeChangeData& Data);
		
};
