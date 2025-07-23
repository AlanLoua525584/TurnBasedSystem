// Fill out your copyright notice in the Description page of Project Settings.


#include "EventHandlers/CharacterEventHandler.h"
#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "Public/DebugHelper.h"

void UCharacterEventHandler::Initialize(UTurnOrderWidget* InWidget, ATurnBasedCharacter* InCharacter)
{
    OwnerWidget = InWidget;
    TargetCharacter = InCharacter;

    if (TargetCharacter)
    {
        CachedTurnSystem = TargetCharacter->GetTurnSystemComponent();
        CachedCombatComponent = TargetCharacter->AccessCombatComponent();
    }
}

void UCharacterEventHandler::BindEvents()
{
    if (!TargetCharacter)
    {
        Debug::Print(TEXT("ERROR: No target character for event binding"), FColor::Red);
        return;
    }

    // 綁定 AP 事件
    if (CachedTurnSystem)
    {
        CachedTurnSystem->OnActionPointsChanged.AddDynamic(this, &UCharacterEventHandler::HandleAPChanged);
        Debug::Print(FString::Printf(TEXT(" 綁定 AP 事件: %s"), *TargetCharacter->GetName()), FColor::Blue);
    }

    // 綁定血量事件
    if (CachedCombatComponent)
    {
        CachedCombatComponent->OnHealthChanged.AddDynamic(this, &UCharacterEventHandler::HandleHealthChanged);
        Debug::Print(FString::Printf(TEXT(" 綁定血量事件: %s"), *TargetCharacter->GetName()), FColor::Green);
    }
}

void UCharacterEventHandler::UnbindAll()
{
    // 解綁 AP 事件
    if (CachedTurnSystem)
    {
        CachedTurnSystem->OnActionPointsChanged.RemoveDynamic(this, &UCharacterEventHandler::HandleAPChanged);
    }

    // 解綁血量事件
    if (CachedCombatComponent)
    {
        CachedCombatComponent->OnHealthChanged.RemoveDynamic(this, &UCharacterEventHandler::HandleHealthChanged);
    }

    Debug::Print(FString::Printf(TEXT("✓ 解綁所有事件: %s"),
        TargetCharacter ? *TargetCharacter->GetName() : TEXT("Unknown")), FColor::Yellow);
}

void UCharacterEventHandler::HandleAPChanged(int32 NewAP)
{
    if (OwnerWidget && TargetCharacter)
    {
        // 轉發給 Widget，現在包含了角色參數
        OwnerWidget->OnCharacterAPChanged(TargetCharacter, NewAP);
    }
}

void UCharacterEventHandler::HandleHealthChanged(AActor* Character, int32 CurrentHealth, int32 MaxHealth)
{
    if (OwnerWidget)
    {
        // 直接轉發，因為已經有角色參數
        OwnerWidget->OnCharacterHealthChanged(Character, CurrentHealth, MaxHealth);
    }
}

