// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationManagerComponent.h"
#include "CombatSystem/CombatStats.h"
#include "CombatAnimationComponent.generated.h"

// 戰鬥動畫序列
USTRUCT(BlueprintType)
struct FCombatAnimationSequence
{
    GENERATED_BODY()

    // 攻擊前搖動畫
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAnimationType PreAttackAnimation = EAnimationType::None;

    // 主要攻擊動畫
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAnimationType AttackAnimation = EAnimationType::MeleeAttack;

    // 攻擊後搖動畫
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAnimationType PostAttackAnimation = EAnimationType::None;

    // 是否需要移動到目標附近
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bRequiresMoveToTarget = false;

    // 攻擊距離
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AttackRange = 150.0f;
};

// 委託
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCombatAnimationHit, AActor*, Attacker, AActor*, Target);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCombatAnimationCompleted, AActor*, Attacker, AActor*, Target, bool, bSuccess);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTGATE_API UCombatAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatAnimationComponent();

    // === 初始化 ===
    UFUNCTION(BlueprintCallable, Category = "Combat Animation")
    void InitializeCombatAnimation(UAnimationManagerComponent* AnimManager, class UCombatComponent* CombatComp);

    // === 主要功能 ===

    // 執行完整的戰鬥動畫序列
    UFUNCTION(BlueprintCallable, Category = "Combat Animation")
    void ExecuteCombatSequence(AActor* Target, ECombatAttackType AttackType);

    // 播放受擊動畫
    UFUNCTION(BlueprintCallable, Category = "Combat Animation")
    void PlayHitReaction(const FDamageResult& DamageResult);

    // 播放格擋動畫
    UFUNCTION(BlueprintCallable, Category = "Combat Animation")
    void PlayBlockAnimation();

    // 播放閃避動畫
    UFUNCTION(BlueprintCallable, Category = "Combat Animation")
    void PlayDodgeAnimation(FVector DodgeDirection);

    // 播放死亡動畫
    UFUNCTION(BlueprintCallable, Category = "Combat Animation")
    void PlayDeathAnimation(AActor* Killer);

    // === GAS 能力動畫 ===

    // 播放能力動畫
    UFUNCTION(BlueprintCallable, Category = "Combat Animation|GAS")
    void PlayAbilityAnimation(FGameplayTag AbilityTag, AActor* Target = nullptr);

    // 播放施法動畫
    UFUNCTION(BlueprintCallable, Category = "Combat Animation|GAS")
    void PlayCastingAnimation(float CastTime, FGameplayTag SpellTag);

    // === 配置 ===

    // 不同攻擊類型的動畫序列
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Animation|Config")
    TMap<ECombatAttackType, FCombatAnimationSequence> AttackSequences;

    // 連擊系統
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Animation|Combo")
    TArray<EAnimationType> ComboAnimations;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Animation|Combo")
    float ComboWindowTime = 0.5f;

    // === 事件 ===

    UPROPERTY(BlueprintAssignable, Category = "Combat Animation|Events")
    FOnCombatAnimationHit OnCombatAnimationHit;

    UPROPERTY(BlueprintAssignable, Category = "Combat Animation|Events")
    FOnCombatAnimationCompleted OnCombatAnimationCompleted;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
    // 組件引用
    UPROPERTY()
    UAnimationManagerComponent* AnimationManager;

    UPROPERTY()
    class UCombatComponent* CombatComponent;

    // 當前戰鬥序列狀態
    UPROPERTY()
    AActor* CurrentTarget;

    UPROPERTY()
    ECombatAttackType CurrentAttackType;

    int32 CurrentSequenceStep = 0;
    int32 CurrentComboIndex = 0;

    FTimerHandle SequenceTimerHandle;
    FTimerHandle ComboWindowTimerHandle;

    // 內部函數
    void PlayNextSequenceStep();
    void ResetCombo();
    void ExecuteDirectAttack();

    UFUNCTION()
    void OnSequenceAnimationCompleted(EAnimationType AnimationType);

    UFUNCTION()
    void OnAttackHit(EAnimationType AnimationType, FName NotifyName);

    // 移動到攻擊範圍
    void MoveToAttackRange(AActor* Target, float Range);
    bool IsInAttackRange(AActor* Target, float Range) const;

    // 驗證攻擊序列配置
    void ValidateAttackSequences();
		
};
