// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HighlightTypes.generated.h"


// 高亮類型枚舉
UENUM(BlueprintType)
enum class EHighlightType : uint8
{
    None = 0,
    CurrentTurn = 1,      // 當前回合
    AttackTarget = 2,     // 可攻擊目標
    Hover = 3,           // 滑鼠懸停
    Selected = 4,        // 已選中
    Ally = 5,            // 友方單位
    Enemy = 6,           // 敵方單位
    Interactable = 7,    // 可互動物件
    Custom = 8           // 自定義類型
};

// 高亮優先級
UENUM(BlueprintType)
enum class EHighlightPriority : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Override = 3  // 最高優先級，總是覆蓋其他
};


// 高亮配置數據
USTRUCT(BlueprintType)
struct FHighlightConfig : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EHighlightType Type = EHighlightType::None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 StencilValue = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLinearColor Color = FLinearColor::White;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EHighlightPriority Priority = EHighlightPriority::Medium;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bPulsing = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PulseSpeed = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bAllowStacking = false;  // 是否允許與其他高亮疊加
};

// 高亮狀態
USTRUCT(BlueprintType)
struct PROJECTGATE_API FHighlightState
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EHighlightType Type = EHighlightType::None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StartTime = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Duration = -1.0f;  // -1 表示永久

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsTemporary = false;
};