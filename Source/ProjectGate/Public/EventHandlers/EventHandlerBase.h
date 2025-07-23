// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventHandlerBase.generated.h"

/**
 * 通用事件處理基類 - 解決動態委託不支援 Lambda 的問題
 * 這是一個可重用的模式，可以用於任何需要 Lambda 的動態委託場景
 */
UCLASS()
class PROJECTGATE_API UEventHandlerBase : public UObject
{
	GENERATED_BODY()


public:
    // 虛擬析構函數
    virtual ~UEventHandlerBase() = default;

protected:
    // 確保在銷毀時解綁所有事件
    virtual void BeginDestroy() override
    {
        UnbindAll();
        Super::BeginDestroy();
    }

    // 子類實現具體的解綁邏輯
    virtual void UnbindAll() {}
};
