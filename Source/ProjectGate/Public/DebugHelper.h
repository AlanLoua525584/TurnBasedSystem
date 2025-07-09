#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"

namespace Debug
{
    // 冷卻記錄
    static TMap<FString, float> DebugCooldownMap;

    /**
     * 普通Print
     */
    FORCEINLINE static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 Key = -1, float Duration = 5.f)
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(Key, Duration, Color, Msg);
            UE_LOG(LogTemp, Log, TEXT("%s"), *Msg);
        }
    }

    /**
     * 冷卻Print
     */
    FORCEINLINE static void PrintCooldown(UWorld* World, const FString& Key, const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), float CooldownSeconds = 1.0f, int32 KeyOnScreen = -1, float Duration = 5.f)
    {
        if (!World || !GEngine) return;

        float CurrentTime = World->GetTimeSeconds();

        float* LastPrintTime = DebugCooldownMap.Find(Key);
        if (!LastPrintTime || (CurrentTime - *LastPrintTime >= CooldownSeconds))
        {
            GEngine->AddOnScreenDebugMessage(KeyOnScreen, Duration, Color, Msg);
            UE_LOG(LogTemp, Log, TEXT("%s"), *Msg);

            DebugCooldownMap.Add(Key, CurrentTime);
        }
    }
}
