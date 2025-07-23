// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatInterface.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/GridManager.h"
#include "TurnBasedSystem/GridVisualComponent.h"
#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h" 
#include "TurnBasedSystem/Components/TurnSystemComponent.h" 
#include "HighlightSystem/HighlightManager.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Public/DebugHelper.h"

// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// 設置默認值
	AttackConfig.AttackType = ECombatAttackType::Ranged;
	AttackConfig.AttackRange = 500.0f;
	AttackConfig.ActionPointCost = 3;
}

// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	 // 獲取擁有者
	OwnerCharacter = Cast<ATurnBasedCharacter>(GetOwner());

	// 初始化生命值
	Stats.CurrentHealth = Stats.MaxHealth;
	OnHealthChanged.Broadcast(GetOwner(), Stats.CurrentHealth, Stats.MaxHealth);


}

void UCombatComponent::InitializeCombat(AGridManager* InGridManager)
{
	GridManager = InGridManager;
}

bool UCombatComponent::CanAttack(AActor* Target) const
{
    Debug::PrintCooldown(GetWorld(), TEXT("Attack"),(TEXT("=== CanAttack Check ===")),
        FColor::Yellow,
        1.0f); // 1秒更新一次

    if (!Target)
    {
        Debug::Print(TEXT("CanAttack: Target is null!"), FColor::Red);
        return false;
    }

    Debug::Print(FString::Printf(TEXT("Target: %s (Class: %s)"),
        *Target->GetName(), *Target->GetClass()->GetName()), FColor::White);


    if (!IsValidTarget(Target))
    {
        Debug::Print(TEXT("CanAttack: IsValidTarget failed"), FColor::Red);

        // 檢查具體原因
        if (Target == GetOwner())
        {
            Debug::Print(TEXT("  - Cannot attack self"), FColor::Red);
        }
        else if (!Target->Implements<UCombatInterface>() &&
            !Target->FindComponentByClass<UCombatComponent>())
        {
            Debug::Print(TEXT("  - Target has no combat ability"), FColor::Red);
        }
        else if (UCombatComponent* TargetCombat = Target->FindComponentByClass<UCombatComponent>())
        {
            if (!TargetCombat->IsAlive())
            {
                Debug::Print(TEXT("  - Target is dead"), FColor::Red);
            }
        }
        return false;
    }

    // 檢查自己是否存活
    if (!IsAlive())
    {
        Debug::Print(TEXT("CanAttack: Attacker is dead"), FColor::Red);
        return false;
    }


    // 檢查距離
    float Distance = FVector::Dist(GetOwner()->GetActorLocation(), Target->GetActorLocation());
    Debug::Print(FString::Printf(TEXT("Distance: %.1f / %.1f"),
        Distance, AttackConfig.AttackRange), FColor::White);
    
    
    
    
    if (Distance > AttackConfig.AttackRange)
    {
        Debug::Print(TEXT("CanAttack: Target out of range"), FColor::Red);
        return false;
    }

    // 近戰攻擊額外檢查
    if (AttackConfig.AttackType == ECombatAttackType::Melee && OwnerCharacter && GridManager)
    {
        // 確保 OwnerCharacter 有 GridMovementComponent
        if (UGridMovementComponent* GridMovement = OwnerCharacter->GetGridMovementComponent())
        {
            FIntPoint MyGrid = GridMovement->GetCurrentGridPosition();
            FIntPoint TargetGrid = GridManager->WorldToGrid(Target->GetActorLocation());

            int32 GridDistance = FMath::Abs(TargetGrid.X - MyGrid.X) +
                FMath::Abs(TargetGrid.Y - MyGrid.Y);

            if (GridDistance > 1)
            {
                Debug::Print(TEXT("CanAttack: Melee target not adjacent"), FColor::Red);
                return false;
            }
        }
        else
        {
            Debug::Print(TEXT("CanAttack: No GridMovementComponent found"), FColor::Red);
            return false;
        }
    }

    // 檢查行動點
    if (OwnerCharacter)
    {
        // 確保有 TurnSystemComponent
        if (UTurnSystemComponent* TurnSystem = OwnerCharacter->GetTurnSystemComponent())
        {
            if (!TurnSystem->CanPerformAction(AttackConfig.ActionPointCost))
            {
                Debug::Print(FString::Printf(TEXT("CanAttack: Not enough AP (%d required)"),
                    AttackConfig.ActionPointCost), FColor::Red);
                return false;
            }
        }
        else
        {
            Debug::Print(TEXT("CanAttack: No TurnSystemComponent found"), FColor::Red);
            return false;
        }
    }
    // 所有檢查都通過
    return true;

}

bool UCombatComponent::ExecuteAttack(AActor* Target)
{
    if (!CanAttack(Target))
    {
        return false;
    }

    // 計算傷害
    FDamageResult DamageResult = CalculateDamage(Target);

    // 應用傷害
    if (Target->Implements<UCombatInterface>())
    {
        ICombatInterface::Execute_OnDamageReceived(Target, DamageResult);
    }
    else if (UCombatComponent* TargetCombat = Target->FindComponentByClass<UCombatComponent>())
    {
        TargetCombat->ApplyDamage(DamageResult);
    }

    // 消耗行動點
    if (OwnerCharacter)
    {
        // 確保有 TurnSystemComponent
        if (UTurnSystemComponent* TurnSystem = OwnerCharacter->GetTurnSystemComponent())
        {
            TurnSystem->ConsumeActionPoints(AttackConfig.ActionPointCost);
        }
        else
        {
            Debug::Print(TEXT("ExecuteAttack: No TurnSystemComponent found"), FColor::Red);
        }
    }

    // 廣播攻擊事件
    OnAttackExecuted.Broadcast(GetOwner(), Target);
    OnAttackExecutedWithResult.Broadcast(GetOwner(), Target, DamageResult);

    // Debug 輸出
    FString AttackMsg = FString::Printf(TEXT("%s attacked %s for %d damage%s!"),
        *GetOwner()->GetName(),
        *Target->GetName(),
        DamageResult.FinalDamage,
        DamageResult.bIsCritical ? TEXT(" (CRITICAL!)") : TEXT(""));

    Debug::Print(AttackMsg, DamageResult.bIsCritical ? FColor::Orange : FColor::Red);

    return true;
}

FDamageResult UCombatComponent::CalculateDamage(AActor* Target)
{
    FDamageResult Result;
    Result.Attacker = GetOwner();
    Result.Target = Target;
    Result.CustomDamageType = AttackConfig.CustomDamageType;

    // 基礎傷害
    int32 BaseDamage = Stats.AttackPower;

    // 獲取目標防禦
    int32 TargetDefense = 0;
    if (UCombatComponent* TargetCombat = Target->FindComponentByClass<UCombatComponent>())
    {
        if (AttackConfig.CustomDamageType == ECustomDamageType::Physical)
        {
            TargetDefense = TargetCombat->Stats.Defense;
        }
        else if (AttackConfig.CustomDamageType == ECustomDamageType::Magical)
        {
            TargetDefense = TargetCombat->Stats.MagicResist;
        }
    }

    // 計算減免
    int32 DamageReduction = FMath::Min(TargetDefense, BaseDamage / 2);
    Result.FinalDamage = BaseDamage - DamageReduction;

    // 暴擊判定
    Result.bIsCritical = FMath::FRandRange(0.0f, 1.0f) < Stats.CriticalChance;
    if (Result.bIsCritical)
    {
        Result.FinalDamage = FMath::RoundToInt(Result.FinalDamage * Stats.CriticalMultiplier);
    }

    // 確保至少造成1點傷害
    Result.FinalDamage = FMath::Max(1, Result.FinalDamage);

    return Result;
}

void UCombatComponent::ApplyDamage(const FDamageResult& DamageResult)
{
    if (!IsAlive() || DamageResult.FinalDamage <= 0)
    {
        return;
    }

    // 應用傷害
    int32 OldHealth = Stats.CurrentHealth;
    Stats.CurrentHealth = FMath::Max(0, Stats.CurrentHealth - DamageResult.FinalDamage);

    // 廣播事件
    OnDamageReceived.Broadcast(DamageResult);
    OnHealthChanged.Broadcast(GetOwner(), Stats.CurrentHealth, Stats.MaxHealth);

    Debug::Print(FString::Printf(TEXT("%s took %d damage! Health: %d/%d"),
        *GetOwner()->GetName(),
        DamageResult.FinalDamage,
        Stats.CurrentHealth,
        Stats.MaxHealth),
        FColor::Red);

    // 死亡處理
    if (!IsAlive())
    {
        HandleDeath(DamageResult.Attacker);
    }
}

TArray<AActor*> UCombatComponent::GetAttackableTargets() const
{
    TArray<AActor*> ValidTargets;

    if (!GetOwner())
    {
        return ValidTargets;
    }

    // 獲取所有潛在目標
    TArray<AActor*> AllActors;
    UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UCombatInterface::StaticClass(), AllActors);

    // 也檢查有 CombatComponent 的角色
    TArray<AActor*> CombatActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedCharacter::StaticClass(), CombatActors);
    AllActors.Append(CombatActors);

    // 篩選有效目標
    for (AActor* Actor : AllActors)
    {
        if (Actor && Actor != GetOwner() && CanAttack(Actor))
        {
            ValidTargets.AddUnique(Actor);
        }
    }

    return ValidTargets;
}


void UCombatComponent::ShowAttackRange()
{
    if (!OwnerCharacter || bIsShowingAttackRange)
    {
        return;
    }

    Debug::Print(FString::Printf(TEXT("=== %s: Showing Attack Range (%.0f units) ==="),
        *GetOwner()->GetName(), AttackConfig.AttackRange), FColor::Red);

    // 使用 GridVisualComponent 顯示範圍
    if (UGridVisualComponent* VisualComp = OwnerCharacter->GetGridVisualComponent())
    {
        // 確保有 GridMovementComponent 來獲取位置
        if (UGridMovementComponent* GridMovement = OwnerCharacter->GetGridMovementComponent())
        {
            VisualComp->ClearVisualType(EGridVisualType::MovementRange);
            VisualComp->ShowAttackRange(GridMovement->GetCurrentGridPosition(), AttackConfig.AttackRange);
        }
        else
        {
            Debug::Print(TEXT("ShowAttackRange: No GridMovementComponent found"), FColor::Red);
        }
    }

    // 高亮可攻擊目標
    HighlightedTargets = GetAttackableTargets();

    if (UHighlightManager* HighlightMgr = GetWorld()->GetSubsystem<UHighlightManager>())
    {
        // 高亮所有可攻擊目標
        for (AActor* Target : HighlightedTargets)
        {
            HighlightMgr->SetHighlight(Target, EHighlightType::AttackTarget);
        }
    }

    bIsShowingAttackRange = true;

    Debug::Print(FString::Printf(TEXT("Found %d attackable targets"), HighlightedTargets.Num()), FColor::Yellow);

}

void UCombatComponent::HideAttackRange()
{
    if (!bIsShowingAttackRange)
    {
        return;
    }

    Debug::Print(FString::Printf(TEXT("=== %s: Hiding Attack Range ==="), *GetOwner()->GetName()), FColor::Blue);

    // 清除範圍顯示
    if (OwnerCharacter)
    {
        if (UGridVisualComponent* VisualComp = OwnerCharacter->GetGridVisualComponent())
        {
            VisualComp->ClearVisualType(EGridVisualType::AttackRange);
        }
    }

    // 清除攻擊目標高亮
    if (UHighlightManager* HighlightMgr = GetWorld()->GetSubsystem<UHighlightManager>())
    {
        for (AActor* Target : HighlightedTargets)
        {
            HighlightMgr->RemoveHighlight(Target, EHighlightType::AttackTarget);
        }
    }

    HighlightedTargets.Empty();
    bIsShowingAttackRange = false;
}

float UCombatComponent::GetHealthPercent() const
{
    return Stats.MaxHealth > 0 ? (float)Stats.CurrentHealth / Stats.MaxHealth : 0.0f;
}




bool UCombatComponent::IsValidTarget(AActor* Target) const
{
    if (!Target || Target == GetOwner())
    {
        return false;
    }


    // 檢查是否正在死亡
    if (ATurnBasedCharacter* TurnChar = Cast<ATurnBasedCharacter>(Target))
    {
        if (TurnChar->IsDying())
        {
            Debug::Print(TEXT("Target is dying, not valid"), FColor::Red);
            return false;
        }
    }


    // 檢查是否有戰鬥能力
    bool bHasCombatAbility = Target->Implements<UCombatInterface>() ||
        Target->FindComponentByClass<UCombatComponent>() != nullptr;

    if (!bHasCombatAbility)
    {
        return false;
    }

    // 檢查目標是否存活
    if (UCombatComponent* TargetCombat = Target->FindComponentByClass<UCombatComponent>())
    {
        if (!TargetCombat->IsAlive())
        {
            return false;
        }
    }

    return true;
}

void UCombatComponent::HandleDeath(AActor* Killer)
{
    OnDeath.Broadcast(Killer);

 
    // 如果實現了接口，調用接口方法
    if (GetOwner()->Implements<UCombatInterface>())
    {
        ICombatInterface::Execute_OnDeath(GetOwner(), Killer);
    }
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

