// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TurnOrderCalculator.generated.h"

// 前向聲明
class ATurnBasedCharacter;
class UCombatComponent;
struct FCombatStats;

// 先攻值計算結果
USTRUCT(BlueprintType)
struct FInitiativeCalculationResult
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 FinalInitiative = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 BaseInitiative = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 SpeedBonus = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 RandomFactor = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 StatusModifier = 0;

    UPROPERTY(BlueprintReadOnly)
    FString DebugInfo;
};

// 先攻值修正器基類
UCLASS(Abstract, Blueprintable)
class PROJECTGATE_API UInitiativeModifier : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, Category = "Turn Order")
    int32 CalculateModifier(ATurnBasedCharacter* Character) const;
    virtual int32 CalculateModifier_Implementation(ATurnBasedCharacter* Character) const { return 0; }

    UFUNCTION(BlueprintNativeEvent, Category = "Turn Order")
    FString GetModifierName() const;
    virtual FString GetModifierName_Implementation() const { return "Base Modifier"; }
};

// 主要計算器類
UCLASS(Blueprintable)
class PROJECTGATE_API UTurnOrderCalculator : public UObject
{
    GENERATED_BODY()

public:
    UTurnOrderCalculator();

    // 計算單個角色的先攻值
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    FInitiativeCalculationResult CalculateInitiative(ATurnBasedCharacter* Character);

    // 批量計算並排序
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void CalculateAndSortTurnOrder(UPARAM(ref) TArray<AActor*>& TurnOrder);

    // 添加自定義修正器
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void AddModifier(UInitiativeModifier* Modifier);

    // 移除修正器
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void RemoveModifier(UInitiativeModifier* Modifier);

    // 清空所有修正器
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void ClearModifiers();

protected:
    // 註冊的修正器列表
    UPROPERTY()
    TArray<UInitiativeModifier*> InitiativeModifiers;

    // 獲取角色的基礎先攻值
    int32 GetBaseInitiative(ATurnBasedCharacter* Character) const;

    // 初始化默認修正器
    void InitializeDefaultModifiers();
};