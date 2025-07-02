// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatSystem/CombatStats.h"
#include "CombatInterface.generated.h"
UINTERFACE(MinimalAPI, Blueprintable)
class UCombatInterface : public UInterface
{
    GENERATED_BODY()
};

class PROJECTGATE_API ICombatInterface
{
    GENERATED_BODY()

public:
    // === 核心戰鬥接口 ===
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
    bool CanBeAttacked() const;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
    bool CanAttack(AActor* Target) const;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
    void OnDamageReceived(const FDamageResult& DamageResult);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
    class UCombatComponent* GetCombatComponent() const;

    // === 可選接口 ===
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
    FVector GetAttackSourceLocation() const;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Combat")
    void OnDeath(AActor* Killer);

    // === 默認實現 ===
    virtual bool CanBeAttacked_Implementation() const { return true; }
    virtual bool CanAttack_Implementation(AActor* Target) const { return true; }
    virtual void OnDamageReceived_Implementation(const FDamageResult& DamageResult) {}
    virtual UCombatComponent* GetCombatComponent_Implementation() const { return nullptr; }
    virtual FVector GetAttackSourceLocation_Implementation() const { return FVector::ZeroVector; }
    virtual void OnDeath_Implementation(AActor* Killer) {}
};