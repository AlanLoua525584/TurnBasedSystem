// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GA_BasicAttack_Test.h"
#include "GameplayAbilitySystem/GateGameplayTags.h"
#include "GameplayAbilitySystem/GateAttributeSet.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "AnimationComponents/AnimationManagerComponent.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Public/DebugHelper.h"

UGA_BasicAttack_Test::UGA_BasicAttack_Test()
{
	// 設置冷卻標籤
	CooldownGameplayEffectClass = nullptr; // 將在藍圖中設置

	// 設置回合制參數
	APCost = 3;
	CooldownTurns = 0;
	RangeInGrids = 1;
	bRequiresLineOfSight = true;
	TargetType = EAbilityTargetType::SingleEnemy;

}

void UGA_BasicAttack_Test::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	Debug::Print(TEXT("GA_BasicAttack: Ability activated"), FColor::Green);

	// 獲取角色和目標
	ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(ActorInfo->AvatarActor.Get());
	if (!Character)
	{
		Debug::Print(TEXT("GA_BasicAttack: Failed - No valid character"), FColor::Red);
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	// 獲取目標（這裡需要整合目標選擇系統）
	// 暫時使用最近的敵人作為目標
	CurrentTarget = FindNearestEnemy(Character);
	if (!CurrentTarget)
	{
		Debug::Print(TEXT("GA_BasicAttack: Failed - No valid target"), FColor::Red);
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	// 消耗AP
	if (UTurnSystemComponent* TurnSystem = Character->GetTurnSystemComponent())
	{
		TurnSystem->ConsumeActionPoints(APCost);
	}

	// 播放攻擊動畫
	if (UAnimationManagerComponent* AnimManager = Character->FindComponentByClass<UAnimationManagerComponent>())
	{
		AnimManager->PlayAnimationByTag(GateGameplayTags::Animation_Attack_Melee, CurrentTarget);
	}

	// 設置定時器來處理攻擊命中
	float AnimationDuration = 1.0f; // 應該從動畫實際長度獲取
	GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle, this,
		&UGA_BasicAttack_Test::OnAttackHit, AnimationDuration * 0.5f, false);
}

void UGA_BasicAttack_Test::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	// 清理定時器
	if (AttackTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
	}

	CurrentTarget = nullptr;

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}


void UGA_BasicAttack_Test::PerformAttack()
{
	if (!CurrentTarget)
	{
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	// 使用現有的戰鬥系統執行攻擊
	if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetAvatarActorFromActorInfo()))
	{
		if (UCombatComponent* Combat = Character->AccessCombatComponent())
		{
			// 執行攻擊
			Combat->ExecuteAttack(CurrentTarget);
		}
	}
}

void UGA_BasicAttack_Test::OnAttackHit()
{
	if (!CurrentTarget || !GetAvatarActorFromActorInfo())
	{
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	// 計算並應用傷害
	float Damage = CalculateDamage();
	ApplyDamageEffect(CurrentTarget, Damage);

	Debug::Print(FString::Printf(TEXT("GA_BasicAttack: Dealt %.1f damage"), Damage), FColor::Yellow);

	// 結束技能
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

float UGA_BasicAttack_Test::CalculateDamage() const
{
	float FinalDamage = BaseDamage;

	// 從屬性集獲取攻擊力
	if (UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo())
	{
		// 獲取攻擊力屬性
		float AttackPower = ASC->GetNumericAttribute(UGateAttributeSet::GetAttackPowerAttribute());
		FinalDamage += AttackPower * DamageMultiplier;
	}

	return FinalDamage;
}

void UGA_BasicAttack_Test::ApplyDamageEffect(AActor* Target, float Damage)
{
	if (!Target || !DamageEffectClass)
	{
		return;
	}

	// 獲取目標的ASC
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Target);
	if (!TargetASC)
	{
		// 如果目標沒有ASC，使用傳統戰鬥系統
		if (UCombatComponent* TargetCombat = Target->FindComponentByClass<UCombatComponent>())
		{
			FDamageResult DamageResult;
			DamageResult.FinalDamage = Damage;
			DamageResult.bIsCritical = false;
			TargetCombat->ApplyDamage(DamageResult);
		}
		return;
	}

	// 創建效果上下文
	FGameplayEffectContextHandle EffectContext = GetAbilitySystemComponentFromActorInfo()->MakeEffectContext();
	EffectContext.AddSourceObject(GetAvatarActorFromActorInfo());

	// 創建效果規格
	FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(
		DamageEffectClass, GetAbilityLevel(), EffectContext);

	if (SpecHandle.IsValid())
	{
		// 設置傷害值
		SpecHandle.Data.Get()->SetSetByCallerMagnitude(
			FGameplayTag::RequestGameplayTag(FName("Damage.Base")), -Damage);

		// 應用效果
		GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(
			*SpecHandle.Data.Get(), TargetASC);
	}
}

AActor* UGA_BasicAttack_Test::FindNearestEnemy(ATurnBasedCharacter* Character) const
{
	// 這是一個簡化的實現，實際應該使用更複雜的目標選擇邏輯
	AActor* NearestEnemy = nullptr;
	float NearestDistance = FLT_MAX;

	// 獲取所有潛在目標
	TArray<AActor*> PotentialTargets;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedCharacter::StaticClass(), PotentialTargets);

	for (AActor* PotentialTarget : PotentialTargets)
	{
		// 跳過自己和友軍
		if (PotentialTarget == Character || IsFriendly(Character, PotentialTarget))
		{
			continue;
		}

		// 檢查是否存活
		if (ATurnBasedCharacter* TargetCharacter = Cast<ATurnBasedCharacter>(PotentialTarget))
		{
			if (!TargetCharacter->IsAlive())
			{
				continue;
			}
		}

		// 計算距離
		float Distance = FVector::Dist(Character->GetActorLocation(), PotentialTarget->GetActorLocation());

		// 檢查範圍
		if (Distance <= RangeInGrids * 100.0f && Distance < NearestDistance) // 假設每格100單位
		{
			NearestDistance = Distance;
			NearestEnemy = PotentialTarget;
		}
	}

	return NearestEnemy;
}

bool UGA_BasicAttack_Test::IsFriendly(AActor* ActorA, AActor* ActorB) const
{
	//簡化的友軍判斷，實際應該基於隊伍系統
		// 這裡假設玩家控制的角色之間是友軍
		ATurnBasedCharacter * CharA = Cast<ATurnBasedCharacter>(ActorA);
	ATurnBasedCharacter* CharB = Cast<ATurnBasedCharacter>(ActorB);

	if (CharA && CharB)
	{
		return CharA->IsPlayerControlled() == CharB->IsPlayerControlled();
	}

	return false;
}
