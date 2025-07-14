// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/DefaultInitiativeModifiers.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatInterface.h"
#include "CombatSystem/CombatStats.h"
#include "Public/DebugHelper.h"

// === SpeedInitiativeModifier Implementation ===

int32 USpeedInitiativeModifier::CalculateModifier_Implementation(ATurnBasedCharacter* Character) const
{
    if (!Character) return 0;

    UCombatComponent* CombatComp = nullptr;
    if (Character->Implements<UCombatInterface>())
    {
        CombatComp = ICombatInterface::Execute_GetCombatComponent(Character);
    }

    if (!CombatComp) return 0;

    const FCombatStats& Stats = CombatComp->GetStats();
    return FMath::RoundToInt(Stats.TurnOrderData.Speed * SpeedMultiplier);
}

// === StatusInitiativeModifier Implementation ===

int32 UStatusInitiativeModifier::CalculateModifier_Implementation(ATurnBasedCharacter* Character) const
{
    if (!Character) return 0;

    UTurnSystemComponent* TurnSystem = Character->GetTurnSystemComponent();
    if (!TurnSystem) return 0;

    int32 Modifier = 0;

    if (TurnSystem->IsSlowed())
    {
        Modifier += SlowedPenalty;
    }

    if (TurnSystem->IsHasted())
    {
        Modifier += HasteBonus;
    }

    return Modifier;
}

// === RandomInitiativeModifier Implementation ===


int32 URandomInitiativeModifier::CalculateModifier_Implementation(ATurnBasedCharacter* Character) const
{
    return FMath::RandRange(MinRandom, MaxRandom);
}
