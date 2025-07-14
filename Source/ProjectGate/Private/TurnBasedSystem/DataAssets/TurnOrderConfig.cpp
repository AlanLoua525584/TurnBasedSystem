// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedSystem/DataAssets/TurnOrderConfig.h"
#include "TurnBasedSystem/TurnOrderCalculator.h"
#include "Public/DebugHelper.h"


TArray<UInitiativeModifier*> UTurnOrderConfig::CreateModifiers(UObject* Outer) const
{
    TArray<UInitiativeModifier*> Result;

    // 根據優先級排序
    TArray<FInitiativeModifierConfig> SortedConfigs = InitiativeModifiers;
    SortedConfigs.Sort([](const FInitiativeModifierConfig& A, const FInitiativeModifierConfig& B)
        {
            return A.Priority > B.Priority;
        });

    // 創建修正器實例
    for (const FInitiativeModifierConfig& Config : SortedConfigs)
    {
        if (!Config.bEnabled || !Config.ModifierClass)
            continue;

        UInitiativeModifier* NewModifier = NewObject<UInitiativeModifier>(
            Outer,
            Config.ModifierClass
        );

        if (NewModifier)
        {
            Result.Add(NewModifier);
            Debug::Print(FString::Printf(TEXT("Created Modifier: %s - %s"),
                *NewModifier->GetModifierName(),
                *Config.Description), FColor::Green);
        }
    }

    return Result;
}

void UTurnOrderConfig::ApplyToCalculator(UTurnOrderCalculator* Calculator) const
{
    if (!Calculator) return;

    // 清空現有修正器
    Calculator->ClearModifiers();

    // 添加配置的修正器
    TArray<UInitiativeModifier*> Modifiers = CreateModifiers(Calculator);
    for (UInitiativeModifier* Modifier : Modifiers)
    {
        Calculator->AddModifier(Modifier);
    }

    Debug::Print(FString::Printf(TEXT("Applied %d modifiers from config"),
        Modifiers.Num()), FColor::Cyan);
}
