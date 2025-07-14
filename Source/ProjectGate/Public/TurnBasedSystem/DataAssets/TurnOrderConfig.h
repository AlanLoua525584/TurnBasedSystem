// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TurnBasedSystem/TurnOrderCalculator.h"
#include "TurnOrderConfig.generated.h"


// 前向聲明
class UInitiativeModifier;
class UTurnOrderCalculator;

// 修正器配置
USTRUCT(BlueprintType)
struct FInitiativeModifierConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UInitiativeModifier> ModifierClass;
 

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bEnabled = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Priority = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;
};



UCLASS(BlueprintType)
class PROJECTGATE_API UTurnOrderConfig : public UDataAsset
{
	GENERATED_BODY()

public:
    // === 基礎配置 ===

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Config")
    int32 DefaultInitiative = 50;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Config")
    int32 MinInitiative = 1;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Config")
    int32 MaxInitiative = 200;

    // === 修正器配置 ===

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Modifiers")
    TArray<FInitiativeModifierConfig> InitiativeModifiers;

    // === 回合重計算設置 ===

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Recalculation")
    bool bRecalculateEachRound = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Recalculation",
        meta = (EditCondition = "bRecalculateEachRound"))
    bool bKeepRelativeOrder = true;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Recalculation",
        meta = (EditCondition = "bRecalculateEachRound"))
    float RecalculationVariance = 0.2f;

    // === 特殊規則 ===

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Special Rules")
    bool bPlayerAlwaysFirst = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Special Rules")
    bool bBossAlwaysLast = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Special Rules")
    TMap<FString, int32> TagPriorities;

    // === 方法 ===
    
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    TArray<UInitiativeModifier*> CreateModifiers(UObject* Outer) const;

    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void ApplyToCalculator(class UTurnOrderCalculator* Calculator) const;
  
};
