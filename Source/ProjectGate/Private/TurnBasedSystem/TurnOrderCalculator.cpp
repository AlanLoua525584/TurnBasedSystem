// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/TurnOrderCalculator.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "TurnBasedSystem/DefaultInitiativeModifiers.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatInterface.h"
#include "CombatSystem/CombatStats.h"
#include "Public/DebugHelper.h"

// === TurnOrderCalculator Implementation ===

UTurnOrderCalculator::UTurnOrderCalculator()
{
    InitializeDefaultModifiers();
}

void UTurnOrderCalculator::InitializeDefaultModifiers()
{
    
    // 創建默認修正器
    USpeedInitiativeModifier* SpeedMod = NewObject<USpeedInitiativeModifier>(this, USpeedInitiativeModifier::StaticClass(), TEXT("SpeedMod"));
    UStatusInitiativeModifier* StatusMod = NewObject<UStatusInitiativeModifier>(this, UStatusInitiativeModifier::StaticClass(), TEXT("StatusMod"));
    URandomInitiativeModifier* RandomMod = NewObject<URandomInitiativeModifier>(this, URandomInitiativeModifier::StaticClass(), TEXT("RandomMod"));
    

    InitiativeModifiers.Add(SpeedMod);
    InitiativeModifiers.Add(StatusMod);
    InitiativeModifiers.Add(RandomMod);
    
}

FInitiativeCalculationResult UTurnOrderCalculator::CalculateInitiative(ATurnBasedCharacter* Character)
{
    FInitiativeCalculationResult Result;

    if (!Character)
    {
        Result.DebugInfo = "Error: Character is null";
        return Result;
    }

    // 獲取基礎先攻值
    Result.BaseInitiative = GetBaseInitiative(Character);
    Result.FinalInitiative = Result.BaseInitiative;

    // 應用所有修正器
    for (UInitiativeModifier* Modifier : InitiativeModifiers)
    {
        if (Modifier)
        {
            int32 ModifierValue = Modifier->CalculateModifier(Character);
            Result.FinalInitiative += ModifierValue;

            // 記錄特定修正器的值
            FString ModName = Modifier->GetModifierName();
            if (ModName.Contains("Speed"))
            {
                Result.SpeedBonus = ModifierValue;
            }
            else if (ModName.Contains("Status"))
            {
                Result.StatusModifier = ModifierValue;
            }
            else if (ModName.Contains("Random"))
            {
                Result.RandomFactor = ModifierValue;
            }

            // 添加到調試信息
            Result.DebugInfo += FString::Printf(TEXT("%s: %+d | "),
                *ModName, ModifierValue);
        }
    }

    // 確保最小值為 1
    Result.FinalInitiative = FMath::Max(1, Result.FinalInitiative);

    // 完成調試信息
    Result.DebugInfo = FString::Printf(
        TEXT("%s - Base:%d + Speed:%d + Status:%d + Random:%d = %d"),
        *Character->GetActorLabel(),
        Result.BaseInitiative,
        Result.SpeedBonus,
        Result.StatusModifier,
        Result.RandomFactor,
        Result.FinalInitiative
    );

    Debug::Print(Result.DebugInfo, FColor::White);

    return Result;
}

void UTurnOrderCalculator::CalculateAndSortTurnOrder(TArray<AActor*>& TurnOrder)
{
    // 計算所有角色的先攻值
    for (AActor* Actor : TurnOrder)
    {
        if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(Actor))
        {
            FInitiativeCalculationResult Result = CalculateInitiative(Character);
            Character->CurrentInitiative = Result.FinalInitiative;

            // 廣播更新事件
            Character->OnTurnOrderChanged.Broadcast(Character->CurrentInitiative);
        }
    }

    // 根據先攻值排序
    TurnOrder.Sort([](const AActor& A, const AActor& B)
        {
            const ATurnBasedCharacter* CharA = Cast<ATurnBasedCharacter>(&A);
            const ATurnBasedCharacter* CharB = Cast<ATurnBasedCharacter>(&B);

            if (!CharA || !CharB) return false;

            // 先攻值高的排前面
            return CharA->CurrentInitiative > CharB->CurrentInitiative;
        });

    Debug::Print(TEXT("=== Turn Order Sorted ==="), FColor::Cyan);
    for (int32 i = 0; i < TurnOrder.Num(); i++)
    {
        if (ATurnBasedCharacter* Char = Cast<ATurnBasedCharacter>(TurnOrder[i]))
        {
            Debug::Print(FString::Printf(TEXT("%d. %s (Initiative: %d)"),
                i + 1,
                *Char->GetActorLabel(),
                Char->CurrentInitiative),
                FColor::White);
        }
    }
}

int32 UTurnOrderCalculator::GetBaseInitiative(ATurnBasedCharacter* Character) const
{
    if (!Character) return 0;

    UCombatComponent* CombatComp = nullptr;
    if (Character->Implements<UCombatInterface>())
    {
        CombatComp = ICombatInterface::Execute_GetCombatComponent(Character);
    }

    if (!CombatComp)
    {
        Debug::Print(FString::Printf(TEXT("GetBaseInitiative: %s has no CombatComponent"),
            *Character->GetActorLabel()), FColor::Red);
        return 50; // 默認值
    }

    const FCombatStats& Stats = CombatComp->GetStats();
    return Stats.TurnOrderData.Initiative;
}

void UTurnOrderCalculator::AddModifier(UInitiativeModifier* Modifier)
{
    if (Modifier && !InitiativeModifiers.Contains(Modifier))
    {
        InitiativeModifiers.Add(Modifier);
        Debug::Print(FString::Printf(TEXT("Added Initiative Modifier: %s"),
            *Modifier->GetModifierName()), FColor::Green);
    }
}

void UTurnOrderCalculator::RemoveModifier(UInitiativeModifier* Modifier)
{
    if (Modifier)
    {
        InitiativeModifiers.Remove(Modifier);
        Debug::Print(FString::Printf(TEXT("Removed Initiative Modifier: %s"),
            *Modifier->GetModifierName()), FColor::Yellow);
    }
}

void UTurnOrderCalculator::ClearModifiers()
{
    InitiativeModifiers.Empty();
    Debug::Print(TEXT("Cleared all Initiative Modifiers"), FColor::Orange);
}