#pragma once

#include "Engine/Engine.h"

namespace Debug
{
	// �x�s�C��Key�̫�@����ܪ��ɶ�
	static TMap<FString, float> DebugCooldownMap;

	/**
	 * ���qPrint
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
	 * ���N�o�ɶ���Print
	 *
	 * @param Key             �C�ӰT�����ߤ@�W�١]�ΨӰl�ܧN�o�^
	 * @param Msg             ��ܪ���r
	 * @param Color           �C��
	 * @param CooldownSeconds ���j�h�֬�~��ܤ@��
	 * @param InKey           �̹��W��Debug Key�]-1��ܦ۰ʤ��t�^
	 */
	static void PrintCooldown(const FString& Key, const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), float CooldownSeconds = 1.0f, int32 InKey = -1)
	{
		if (!GEngine) return;

		UWorld* World = GEngine->GetWorldContexts().Num() > 0 ? GEngine->GetWorldContexts()[0].World() : nullptr;
		if (!World) return;

		float CurrentTime = World->GetTimeSeconds();

		// ��Key
		float* LastPrintTime = DebugCooldownMap.Find(Key);
		if (!LastPrintTime || CurrentTime - *LastPrintTime >= CooldownSeconds)
		{
			GEngine->AddOnScreenDebugMessage(InKey, 5.f, Color, Msg);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);

			DebugCooldownMap.Add(Key, CurrentTime);
		}
	}

	//���q�ΪkDebug::Print(TEXT("���q�T��"), FColor::Green);
	/*
	��Cooldown�Ϊk
	Debug::PrintCooldown(TEXT("GridPosition"),
	FString::Printf(TEXT("%s grid position (%d, %d)"), *GetActorLabel(), CurrentGridPosition.X, CurrentGridPosition.Y),
		FColor::Yellow,
		1.0f); // 1���s�@��

	*/
}