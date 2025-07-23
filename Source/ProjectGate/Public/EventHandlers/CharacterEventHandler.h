// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventHandlers/EventHandlerBase.h"
#include "CharacterEventHandler.generated.h"


// 前向聲明
class UTurnOrderWidget;
class ATurnBasedCharacter;
class UTurnSystemComponent;

/**
 ** 角色事件處理器 - 專門處理單個角色的所有事件
 * 每個角色一個實例，避免了索引映射的複雜性
 */
UCLASS()
class PROJECTGATE_API UCharacterEventHandler : public UEventHandlerBase
{
	GENERATED_BODY()


public:
    // 初始化處理器
    void Initialize(UTurnOrderWidget* InWidget, ATurnBasedCharacter* InCharacter);

    // 綁定所有事件
    void BindEvents();

    // 事件處理函數
    UFUNCTION()
    void HandleAPChanged(int32 NewAP);

    UFUNCTION()
    void HandleHealthChanged(AActor* Character, int32 CurrentHealth, int32 MaxHealth);

    // 獲取關聯的角色
    ATurnBasedCharacter* GetCharacter() const { return TargetCharacter; }

protected:
    virtual void UnbindAll() override;

private:
    UPROPERTY()
    UTurnOrderWidget* OwnerWidget;

    UPROPERTY()
    ATurnBasedCharacter* TargetCharacter;

    UPROPERTY()
    UTurnSystemComponent* CachedTurnSystem;

    UPROPERTY()
    class UCombatComponent* CachedCombatComponent;
};
