#pragma once

#include "Engine/Engine.h"

namespace Debug
{
	// 儲存每個Key最後一次顯示的時間
	static TMap<FString, float> DebugCooldownMap;

	/**
	 * 普通Print
	 */
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey, 5.f, Color, Msg);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
		}
	}

	/**
	 * 有冷卻時間的Print
	 *
	 * @param Key             每個訊息的唯一名稱（用來追蹤冷卻）
	 * @param Msg             顯示的文字
	 * @param Color           顏色
	 * @param CooldownSeconds 間隔多少秒才顯示一次
	 * @param InKey           屏幕上的Debug Key（-1表示自動分配）
	 */
	static void PrintCooldown(const FString& Key, const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), float CooldownSeconds = 1.0f, int32 InKey = -1)
	{
		if (!GEngine) return;

		UWorld* World = GEngine->GetWorldContexts().Num() > 0 ? GEngine->GetWorldContexts()[0].World() : nullptr;
		if (!World) return;

		float CurrentTime = World->GetTimeSeconds();

		// 找Key
		float* LastPrintTime = DebugCooldownMap.Find(Key);
		if (!LastPrintTime || CurrentTime - *LastPrintTime >= CooldownSeconds)
		{
			GEngine->AddOnScreenDebugMessage(InKey, 5.f, Color, Msg);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);

			DebugCooldownMap.Add(Key, CurrentTime);
		}
	}

	//普通用法Debug::Print(TEXT("普通訊息"), FColor::Green);
	/*
	有Cooldown用法
	Debug::PrintCooldown(TEXT("GridPosition"),
	FString::Printf(TEXT("%s grid position (%d, %d)"), *GetActorLabel(), CurrentGridPosition.X, CurrentGridPosition.Y),
		FColor::Yellow,
		1.0f); // 1秒更新一次

	*/
}