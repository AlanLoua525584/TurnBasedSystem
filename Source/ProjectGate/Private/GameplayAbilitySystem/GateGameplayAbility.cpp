// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GateGameplayAbility.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h"
#include "CombatSystem/CombatComponent.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "GameplayAbilitySpec.h"
#include "Kismet/GameplayStatics.h"
#include "Public/DebugHelper.h"




UGateGameplayAbility::UGateGameplayAbility()
{

    // 設置預設值
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;

    // 回合制預設值
    APCost = 3;
    CooldownTurns = 0;
    RangeInGrids = 1;
    bRequiresLineOfSight = true;
    TargetType = EAbilityTargetType::SingleEnemy;
}

void UGateGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) 
{
    Super::OnGiveAbility(ActorInfo, Spec);

    // 在這裡可以進行技能授予時的初始化
    Debug::Print(FString::Printf(TEXT("GateGameplayAbility: %s granted to %s"),
        *GetName(), *GetNameSafe(ActorInfo->AvatarActor.Get())), FColor::Green);
}

bool UGateGameplayAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo, 
    const FGameplayTagContainer* SourceTags, 
    const FGameplayTagContainer* TargetTags,
    OUT FGameplayTagContainer* OptionalRelevantTags) const
{
    if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
    {
        return false;
    }

    // 檢查AP成本
    if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(ActorInfo->AvatarActor.Get()))
    {
        if (UTurnSystemComponent* TurnSystem = Character->GetTurnSystemComponent())
        {
            if (!TurnSystem->CanPerformAction(APCost))
            {
                Debug::Print(TEXT("Cannot activate ability: Not enough AP"), FColor::Yellow);
                return false;
            }
        }

        // 檢查是否是角色的回合
        if (!Character->IsMyTurn())
        {
            Debug::Print(TEXT("Cannot activate ability: Not my turn"), FColor::Yellow);
            return false;
        }
    }

    return true;
}

void UGateGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo, 
    const FGameplayEventData* TriggerEventData)
{
    // 調用父類實作
    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

    Debug::Print(FString::Printf(TEXT("GateGameplayAbility: %s activated"), *GetName()), FColor::Green);

    // 消耗AP
    ConsumeAPAndResources();

    // 如果有動畫，播放它
    if (AbilityAnimation)
    {
        PlayAbilityMontage();
    }
}

void UGateGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, 
    const FGameplayAbilityActorInfo* ActorInfo, 
    const FGameplayAbilityActivationInfo ActivationInfo,
    bool bReplicateEndAbility,
    bool bWasCancelled)
{
    // 清理緩存的目標
    CachedTarget = nullptr;

    Debug::Print(FString::Printf(TEXT("GateGameplayAbility: %s ended"), *GetName()), FColor::Green);

    // 調用父類實作
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

}

bool UGateGameplayAbility::IsTargetInRange(AActor* Target) const
{
    if (!Target || !GetAvatarActorFromActorInfo())
    {
        return false;
    }

    // 獲取網格位置
    ATurnBasedCharacter* OwnerCharacter = Cast<ATurnBasedCharacter>(GetAvatarActorFromActorInfo());
    ATurnBasedCharacter* TargetCharacter = Cast<ATurnBasedCharacter>(Target);

    if (OwnerCharacter && TargetCharacter)
    {
        FIntPoint OwnerPos = OwnerCharacter->GetCurrentGridPosition();
        FIntPoint TargetPos = TargetCharacter->GetCurrentGridPosition();

        // 計算曼哈頓距離
        int32 Distance = FMath::Abs(OwnerPos.X - TargetPos.X) + FMath::Abs(OwnerPos.Y - TargetPos.Y);
        return Distance <= RangeInGrids;
    }

    // 如果不是網格單位，使用世界距離
    float WorldDistance = FVector::Dist(GetAvatarActorFromActorInfo()->GetActorLocation(), Target->GetActorLocation());
    return WorldDistance <= (RangeInGrids * 100.0f); // 假設每格100單位
}

bool UGateGameplayAbility::CheckLineOfSight(AActor* Target) const
{
    if (!bRequiresLineOfSight || !Target || !GetAvatarActorFromActorInfo())
    {
        return true;
    }

    FHitResult HitResult;
    FVector Start = GetAvatarActorFromActorInfo()->GetActorLocation() + FVector(0, 0, 50); // 提高一點避免地面
    FVector End = Target->GetActorLocation() + FVector(0, 0, 50);

    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(GetAvatarActorFromActorInfo());
    QueryParams.AddIgnoredActor(Target);

    bool bHit = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        Start,
        End,
        ECC_Visibility,
        QueryParams
    );

    return !bHit; // 如果沒有碰撞，就有視線
}

TArray<AActor*> UGateGameplayAbility::GetValidTargets() const
{
    TArray<AActor*> ValidTargets;

    if (!GetAvatarActorFromActorInfo())
    {
        return ValidTargets;
    }

    // 獲取所有潛在目標
    TArray<AActor*> AllActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedCharacter::StaticClass(), AllActors);

    for (AActor* Actor : AllActors)
    {
        // 根據目標類型過濾
        if (IsValidTarget(Actor))
        {
            ValidTargets.Add(Actor);
        }
    }

    return ValidTargets;
}

void UGateGameplayAbility::ConsumeAPAndResources()
{
    if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetAvatarActorFromActorInfo()))
    {
        if (UTurnSystemComponent* TurnSystem = Character->GetTurnSystemComponent())
        {
            TurnSystem->ConsumeActionPoints(APCost);
            Debug::Print(FString::Printf(TEXT("Consumed %d AP"), APCost), FColor::Yellow);
        }
    }
}

void UGateGameplayAbility::PlayAbilityMontage()
{
    if (!AbilityAnimation)
    {
        return;
    }

    if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetAvatarActorFromActorInfo()))
    {
        if (UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance())
        {
            AnimInstance->Montage_Play(AbilityAnimation);
        }
    }
}

UGridMovementComponent* UGateGameplayAbility::GetOwnerGridMovement() const
{
    if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetAvatarActorFromActorInfo()))
    {
        return Character->GetGridMovementComponent();
    }
    return nullptr;
}

UCombatComponent* UGateGameplayAbility::GetOwnerCombatComponent() const
{
    if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetAvatarActorFromActorInfo()))
    {
        return Character->AccessCombatComponent();
    }
    return nullptr;
}

UTurnSystemComponent* UGateGameplayAbility::GetOwnerTurnComponent() const
{
    if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetAvatarActorFromActorInfo()))
    {
        return Character->GetTurnSystemComponent();
    }
    return nullptr;
}

float UGateGameplayAbility::CalculateDamageWithCurrentSystem(float BaseDamage, AActor* Target) const
{
    float FinalDamage = BaseDamage;

    // 使用現有的戰鬥系統計算傷害
    if (UCombatComponent* CombatComp = GetOwnerCombatComponent())
    {
        // 這裡可以整合現有的傷害計算邏輯
        // 例如：考慮攻擊力、防禦力、暴擊等
        FinalDamage = BaseDamage * (1.0f + CombatComp->GetAttackPower() / 100.0f);
    }

    return FinalDamage;
}


bool UGateGameplayAbility::IsValidTarget(AActor* PotentialTarget) const
{
    if (!PotentialTarget || PotentialTarget == GetAvatarActorFromActorInfo())
    {
        return false;
    }

    ATurnBasedCharacter* TargetCharacter = Cast<ATurnBasedCharacter>(PotentialTarget);
    if (!TargetCharacter || !TargetCharacter->IsAlive())
    {
        return false;
    }

    // 根據目標類型檢查
    bool bIsFriendly = IsFriendlyTarget(PotentialTarget);

    switch (TargetType)
    {
    case EAbilityTargetType::Self:
        return PotentialTarget == GetAvatarActorFromActorInfo();

    case EAbilityTargetType::SingleEnemy:
    case EAbilityTargetType::AllEnemies:
        return !bIsFriendly && IsTargetInRange(PotentialTarget) && CheckLineOfSight(PotentialTarget);

    case EAbilityTargetType::SingleAlly:
    case EAbilityTargetType::AllAllies:
        return bIsFriendly && IsTargetInRange(PotentialTarget) && CheckLineOfSight(PotentialTarget);

    case EAbilityTargetType::AreaOfEffect:
        return IsTargetInRange(PotentialTarget) && CheckLineOfSight(PotentialTarget);

    default:
        return false;
    }
}

bool UGateGameplayAbility::IsFriendlyTarget(AActor* Target) const
{
    // 簡化的友軍判斷，實際應該基於隊伍系統
    ATurnBasedCharacter* OwnerChar = Cast<ATurnBasedCharacter>(GetAvatarActorFromActorInfo());
    ATurnBasedCharacter* TargetChar = Cast<ATurnBasedCharacter>(Target);

    if (OwnerChar && TargetChar)
    {
        // 暫時使用玩家控制作為判斷標準
        return OwnerChar->IsPlayerControlled() == TargetChar->IsPlayerControlled();
    }

    return false;
}

