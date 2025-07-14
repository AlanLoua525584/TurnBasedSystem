// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TurnBasedSystem/TurnOrderCalculator.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "DefaultInitiativeModifiers.generated.h"

/**
 * 
 */
 // 速度修正器
UCLASS(Blueprintable)
class PROJECTGATE_API USpeedInitiativeModifier : public UInitiativeModifier
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
    float SpeedMultiplier = 0.5f;

    virtual int32 CalculateModifier_Implementation(ATurnBasedCharacter* Character) const override;
    virtual FString GetModifierName_Implementation() const override { return "Speed Bonus"; }
};

// 狀態效果修正器
UCLASS(Blueprintable)
class PROJECTGATE_API UStatusInitiativeModifier : public UInitiativeModifier
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
    int32 SlowedPenalty = -20;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
    int32 HasteBonus = 20;

    virtual int32 CalculateModifier_Implementation(ATurnBasedCharacter* Character) const override;
    virtual FString GetModifierName_Implementation() const override { return "Status Effects"; }
};

// 隨機修正器
UCLASS(Blueprintable)
class PROJECTGATE_API URandomInitiativeModifier : public UInitiativeModifier
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
    int32 MinRandom = -10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
    int32 MaxRandom = 10;

    virtual int32 CalculateModifier_Implementation(ATurnBasedCharacter* Character) const override;
    virtual FString GetModifierName_Implementation() const override { return "Random Factor"; }
};