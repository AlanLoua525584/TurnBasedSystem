// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CombatStats.generated.h"


// 攻擊類型
UENUM(BlueprintType)
enum class ECombatAttackType : uint8
{
    Melee    UMETA(DisplayName = "Melee"),
    Ranged   UMETA(DisplayName = "Ranged"),
    Magic    UMETA(DisplayName = "Magic"),
    Area     UMETA(DisplayName = "Area of Effect")
};

// 傷害類型
UENUM(BlueprintType )
enum class ECustomDamageType : uint8
{
    Physical    UMETA(DisplayName = "Physical"),
    Magical     UMETA(DisplayName = "Magical"),
    TrueDamage  UMETA(DisplayName = "True Damage"),
    Elemental   UMETA(DisplayName = "Elemental")
};



USTRUCT(BlueprintType)
struct FTurnOrderData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Initiative = 50;  // 基礎先攻值 (0-100)

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Speed = 50;       // 速度屬性 (影響先攻)

    UPROPERTY(BlueprintReadOnly)
    int32 CurrentInitiative = 0;  // 當前回合優先級

    UPROPERTY(BlueprintReadOnly)
    float TurnDelay = 0.0f;  // 延遲行動（被暈眩等）




};


// 戰鬥統計結構
USTRUCT(BlueprintType)
struct PROJECTGATE_API FCombatStats
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn Order")
    FTurnOrderData TurnOrderData;
    

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
    int32 MaxHealth = 100;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
    int32 CurrentHealth = 100;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Offense")
    int32 AttackPower = 20;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
    int32 Defense = 5;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
    int32 MagicResist = 5;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Critical")
    float CriticalChance = 0.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Critical")
    float CriticalMultiplier = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed")
    float AttackSpeed = 1.0f;



    FCombatStats()
    {
        CurrentHealth = MaxHealth;
    }
};



// 攻擊配置
USTRUCT(BlueprintType)
struct PROJECTGATE_API FAttackConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ECombatAttackType AttackType = ECombatAttackType::Ranged;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ECustomDamageType CustomDamageType = ECustomDamageType::Physical;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"))
    float AttackRange = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1"))
    int32 ActionPointCost = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCanAttackMultipleTargets = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"))
    float AreaRadius = 0.0f;
};



// 傷害結果
USTRUCT(BlueprintType)
struct PROJECTGATE_API FDamageResult
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 FinalDamage = 0;

    UPROPERTY(BlueprintReadOnly)
    bool bIsCritical = false;

    UPROPERTY(BlueprintReadOnly)
    bool bIsBlocked = false;

    UPROPERTY(BlueprintReadOnly)
    ECustomDamageType CustomDamageType = ECustomDamageType::Physical;

    UPROPERTY(BlueprintReadOnly)
    AActor* Attacker = nullptr;

    UPROPERTY(BlueprintReadOnly)
    AActor* Target = nullptr;
};



/**
 * 
 */

