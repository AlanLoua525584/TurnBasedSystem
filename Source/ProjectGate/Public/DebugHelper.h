#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"


// === 分類調試開關 ===
#ifndef DEBUG_ENABLED
#define DEBUG_ENABLED 0  // 主開關 0 = 關閉，1 = 開啟
#endif

#ifndef UI_DEBUG_ENABLED
#define UI_DEBUG_ENABLED 0  // UI 調試
#endif

#ifndef COMBAT_DEBUG_ENABLED  
#define COMBAT_DEBUG_ENABLED 0  // 戰鬥調試
#endif

#ifndef TURN_DEBUG_ENABLED
#define TURN_DEBUG_ENABLED 0  // 回合系統調試
#endif

namespace Debug
{
    // 冷卻記錄
    static TMap<FString, float> DebugCooldownMap;

    /**
     * 普通Print
     */
    FORCEINLINE static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 Key = -1, float Duration = 5.f)
    {
#if DEBUG_ENABLED
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(Key, Duration, Color, Msg);
            UE_LOG(LogTemp, Log, TEXT("%s"), *Msg);
        }
#endif
    }

    /**
     * 冷卻Print
     */
    FORCEINLINE static void PrintCooldown(UWorld* World, const FString& Key, const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), float CooldownSeconds = 1.0f, int32 KeyOnScreen = -1, float Duration = 5.f)
    {
#if DEBUG_ENABLED
        if (!World || !GEngine) return;

        float CurrentTime = World->GetTimeSeconds();

        float* LastPrintTime = DebugCooldownMap.Find(Key);
        if (!LastPrintTime || (CurrentTime - *LastPrintTime >= CooldownSeconds))
        {
            GEngine->AddOnScreenDebugMessage(KeyOnScreen, Duration, Color, Msg);
            UE_LOG(LogTemp, Log, TEXT("%s"), *Msg);

            DebugCooldownMap.Add(Key, CurrentTime);
        }
#endif
    }

    // === 分類調試方法 ===

  /**
   * UI 相關調試
   */
    FORCEINLINE static void PrintUI(const FString& Msg, const FColor& Color = FColor::Cyan, int32 Key = -1, float Duration = 5.f)
    {
#if UI_DEBUG_ENABLED
        Print(Msg, Color, Key, Duration);
#endif
    }

    /**
     * 戰鬥相關調試
     */
    FORCEINLINE static void PrintCombat(const FString& Msg, const FColor& Color = FColor::Red, int32 Key = -1, float Duration = 5.f)
    {
#if COMBAT_DEBUG_ENABLED
        Print(Msg, Color, Key, Duration);
#endif
    }

    /**
     * 回合系統調試
     */
    FORCEINLINE static void PrintTurn(const FString& Msg, const FColor& Color = FColor::Green, int32 Key = -1, float Duration = 5.f)
    {
#if TURN_DEBUG_ENABLED
        Print(Msg, Color, Key, Duration);
#endif
    }
}
