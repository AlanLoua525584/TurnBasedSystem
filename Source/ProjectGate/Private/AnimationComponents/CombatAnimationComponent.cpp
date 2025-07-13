// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimationComponents/CombatAnimationComponent.h"
#include "AnimationComponents/AnimationManagerComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatStats.h"
#include "GameFramework/Character.h"
#include "Public/DebugHelper.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UCombatAnimationComponent::UCombatAnimationComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;

	
}


// Called when the game starts
void UCombatAnimationComponent::BeginPlay()
{
    Super::BeginPlay();

    // ...
	ValidateAttackSequences();
}

void UCombatAnimationComponent::InitializeCombatAnimation(UAnimationManagerComponent* AnimManager, UCombatComponent* CombatComp)
{
    AnimationManager = AnimManager;
    CombatComponent = CombatComp;

    if (AnimationManager)
    {
        AnimationManager->OnAnimationCompleted.AddDynamic(this, &UCombatAnimationComponent::OnSequenceAnimationCompleted);
        AnimationManager->OnAnimationEvent.AddDynamic(this, &UCombatAnimationComponent::OnAttackHit);
    }
}

void UCombatAnimationComponent::ExecuteCombatSequence(AActor* Target, ECombatAttackType AttackType)
{
	if (!Target)
	{
		Debug::Print(TEXT("ExecuteCombatSequence: Target is null"), FColor::Red);
		OnCombatAnimationCompleted.Broadcast(GetOwner(), nullptr, false);
		return;
	}

	CurrentTarget = Target;
	CurrentAttackType = AttackType;
	CurrentSequenceStep = 0;

	Debug::Print(FString::Printf(TEXT("=== Starting Combat Sequence ==="), FColor::Magenta));
	Debug::Print(FString::Printf(TEXT("Attack Type: %s"),
		*UEnum::GetValueAsString(AttackType)), FColor::Cyan);
	Debug::Print(FString::Printf(TEXT("Target: %s"),
		*Target->GetActorLabel()), FColor::Cyan);

	// 檢查是否有對應的攻擊序列配置
	if (!AttackSequences.Contains(AttackType))
	{
		Debug::Print(FString::Printf(TEXT("ERROR: No attack sequence found for type: %s"),
			*UEnum::GetValueAsString(AttackType)), FColor::Red);
		ExecuteDirectAttack();
		return;
	}

	// 檢查是否有動畫管理器
	if (!AnimationManager)
	{
		Debug::Print(TEXT("No AnimationManager - executing direct attack"), FColor::Yellow);
		ExecuteDirectAttack();
		return;
	}

	// 在開始播放序列前，設置攻擊命中的回調
	CurrentTarget = Target;
	CurrentAttackType = AttackType;

	Debug::Print(TEXT("Setting up combat sequence callbacks..."), FColor::Cyan);

	PlayNextSequenceStep();
}

void UCombatAnimationComponent::PlayNextSequenceStep()
{
	if (!AnimationManager)
	{
		Debug::Print(TEXT("No AnimationManager in PlayNextSequenceStep"), FColor::Red);
		ExecuteDirectAttack();
		return;
	}

	FCombatAnimationSequence* Sequence = AttackSequences.Find(CurrentAttackType);
	if (!Sequence)
	{
		Debug::Print(FString::Printf(TEXT("ERROR: Attack sequence lost for type: %s"),
			*UEnum::GetValueAsString(CurrentAttackType)), FColor::Red);
		ExecuteDirectAttack();
		return;
	}

	EAnimationType AnimToPlay = EAnimationType::None;

	switch (CurrentSequenceStep)
	{
	case 0:
		AnimToPlay = Sequence->PreAttackAnimation;
		Debug::Print(TEXT("Playing Pre-Attack Animation"), FColor::Cyan);
		break;
	case 1:
		AnimToPlay = Sequence->AttackAnimation;
		Debug::Print(TEXT("Playing Main Attack Animation"), FColor::Cyan);
		break;
	case 2:
		AnimToPlay = Sequence->PostAttackAnimation;
		Debug::Print(TEXT("Playing Post-Attack Animation"), FColor::Cyan);
		break;
	default:
		Debug::Print(TEXT("Combat sequence completed successfully"), FColor::Green);
		OnCombatAnimationCompleted.Broadcast(GetOwner(), CurrentTarget, true);
		return;
	}

	// 跳過 None 動畫，直接進入下一步
	if (AnimToPlay == EAnimationType::None)
	{
		Debug::Print(FString::Printf(TEXT("Skipping step %d (None animation)"), CurrentSequenceStep), FColor::Yellow);
		CurrentSequenceStep++;
		PlayNextSequenceStep();
		return;
	}

	Debug::Print(FString::Printf(TEXT("Attempting to play: %s (Step %d)"),
		*UEnum::GetValueAsString(AnimToPlay), CurrentSequenceStep), FColor::Green);

	// 檢查動畫管理器是否有這個動畫
	if (!AnimationManager->HasAnimation(AnimToPlay))
	{
		Debug::Print(FString::Printf(TEXT("WARNING: AnimationManager has no config for %s"),
			*UEnum::GetValueAsString(AnimToPlay)), FColor::Yellow);

		// 如果是主攻擊動畫失敗，執行直接攻擊
		if (CurrentSequenceStep == 1)
		{
			ExecuteDirectAttack();
			return;
		}
		else
		{
			// 其他步驟失敗就跳過
			CurrentSequenceStep++;
			PlayNextSequenceStep();
			return;
		}
	}

	if (AnimationManager->PlayAnimation(AnimToPlay, CurrentTarget))
	{
		CurrentSequenceStep++;
		Debug::Print(FString::Printf(TEXT("Animation play started successfully: %s"),
			*UEnum::GetValueAsString(AnimToPlay)), FColor::Green);
	}
	else
	{
		Debug::Print(FString::Printf(TEXT("Animation play failed: %s"),
			*UEnum::GetValueAsString(AnimToPlay)), FColor::Red);

		// 如果是主攻擊動畫失敗，執行直接攻擊
		if (CurrentSequenceStep == 1)
		{
			ExecuteDirectAttack();
		}
		else
		{
			// 其他步驟失敗就跳過
			CurrentSequenceStep++;
			PlayNextSequenceStep();
		}
	}
}


void UCombatAnimationComponent::PlayHitReaction(const FDamageResult& DamageResult)
{
	if (AnimationManager)
	{
		AnimationManager->PlayAnimation(EAnimationType::TakeDamage, DamageResult.Attacker);
	}
}

void UCombatAnimationComponent::PlayBlockAnimation()
{
	if (AnimationManager)
	{
		AnimationManager->PlayAnimation(EAnimationType::Block);
	}
}

void UCombatAnimationComponent::PlayDodgeAnimation(FVector DodgeDirection)
{
	if (AnimationManager)
	{
		AnimationManager->PlayAnimation(EAnimationType::Dodge);
	}
}

void UCombatAnimationComponent::PlayDeathAnimation(AActor* Killer)
{
	if (AnimationManager)
	{
		AnimationManager->PlayAnimation(EAnimationType::Death, Killer);
	}
}

void UCombatAnimationComponent::PlayAbilityAnimation(FGameplayTag AbilityTag, AActor* Target)
{
	if (AnimationManager)
	{
		AnimationManager->PlayAnimationByTag(AbilityTag, Target);
	}
}

void UCombatAnimationComponent::PlayCastingAnimation(float CastTime, FGameplayTag SpellTag)
{
	if (AnimationManager)
	{
		AnimationManager->PlayAnimationByTag(SpellTag);
	}
}



void UCombatAnimationComponent::ResetCombo()
{
	CurrentComboIndex = 0;
	GetWorld()->GetTimerManager().ClearTimer(ComboWindowTimerHandle);
}

void UCombatAnimationComponent::ExecuteDirectAttack()
{
	// 直接執行攻擊，不依賴動畫
	Debug::Print(TEXT("Executing direct attack (no animation)"), FColor::Yellow);

	if (CurrentTarget && GetOwner())
	{
		// 直接觸發攻擊命中事件
		OnCombatAnimationHit.Broadcast(GetOwner(), CurrentTarget);

		// 短暫延遲後完成
		GetWorld()->GetTimerManager().SetTimer(
			SequenceTimerHandle,
			[this]()
			{
				OnCombatAnimationCompleted.Broadcast(GetOwner(), CurrentTarget, true);
			},
			0.1f,
			false
		);
	}
	else
	{
		OnCombatAnimationCompleted.Broadcast(GetOwner(), CurrentTarget, false);
	}
}

void UCombatAnimationComponent::OnSequenceAnimationCompleted(EAnimationType AnimationType)
{
	// 這邊是動畫播放完成時處理
	PlayNextSequenceStep();
}

void UCombatAnimationComponent::OnAttackHit(EAnimationType AnimationType, FName NotifyName)
{
	if (NotifyName == "Hit" || NotifyName == "AttackHit")
	{
		// 觸發傷害計算等
		if (CurrentTarget)
		{
			OnCombatAnimationHit.Broadcast(GetOwner(), CurrentTarget);
		}
	}
}


bool UCombatAnimationComponent::IsInAttackRange(AActor* Target, float Range) const
{
	if (!Target) return false;
	FVector MyLocation = GetOwner()->GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();
	return FVector::Dist2D(MyLocation, TargetLocation) <= Range;
}

void UCombatAnimationComponent::ValidateAttackSequences()
{
	Debug::Print(FString::Printf(TEXT("=== Validating Attack Sequences ==="), AttackSequences.Num()), FColor::Magenta);

	for (auto& Pair : AttackSequences)
	{
		ECombatAttackType AttackType = Pair.Key;
		FCombatAnimationSequence& Sequence = Pair.Value;

		Debug::Print(FString::Printf(TEXT("Attack Type: %s"),
			*UEnum::GetValueAsString(AttackType)), FColor::White);
		Debug::Print(FString::Printf(TEXT("  - Pre Attack: %s"),
			*UEnum::GetValueAsString(Sequence.PreAttackAnimation)), FColor::White);
		Debug::Print(FString::Printf(TEXT("  - Main Attack: %s"),
			*UEnum::GetValueAsString(Sequence.AttackAnimation)), FColor::White);
		Debug::Print(FString::Printf(TEXT("  - Post Attack: %s"),
			*UEnum::GetValueAsString(Sequence.PostAttackAnimation)), FColor::White);
		Debug::Print(FString::Printf(TEXT("  - Range: %.1f"),
			Sequence.AttackRange), FColor::White);
	}

	if (AttackSequences.Num() == 0)
	{
		Debug::Print(TEXT("WARNING: No attack sequences configured!"), FColor::Red);
	}
}

void UCombatAnimationComponent::MoveToAttackRange(AActor* Target, float Range)
{
	// 預留未來 AI 或 DynamicMove 使用
	Debug::Print(TEXT("MoveToAttackRange 尚未實作"), FColor::Yellow);
}




