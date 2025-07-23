// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GASManagerComponent.h"
#include "GameplayAbilitySystem/GateAbilitySystemComponent.h"
#include "GameplayAbilitySystem/GateAttributeSet.h"
#include "GameplayAbilitySystem/GateGameplayAbility.h"
#include "GameplayAbilitySystem/GateGameplayTags.h"
#include "GameplayAbilitySystem/GASSystemInterface.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffect.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"
#include "Public/DebugHelper.h"



// Sets default values for this component's properties
UGASManagerComponent::UGASManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UGASManagerComponent::InitializeGASSystem(AActor* InOwnerActor)
{
	if (!InOwnerActor)
	{
		Debug::Print(TEXT("GASManager: InitializeGASSystem failed - Invalid owner"), FColor::Red);
		return;
	}

	// 創建AbilitySystemComponent
	AbilitySystemComponent = NewObject<UGateAbilitySystemComponent>(InOwnerActor, TEXT("GateAbilitySystemComponent"));
	AbilitySystemComponent->RegisterComponent();

	// 創建AttributeSet
	AttributeSet = NewObject<UGateAttributeSet>(InOwnerActor, TEXT("GateAttributeSet"));

	// 初始化ASC
	AbilitySystemComponent->InitAbilityActorInfo(InOwnerActor, InOwnerActor);

	// 添加AttributeSet到ASC
	AbilitySystemComponent->AddAttributeSetSubobject(AttributeSet);

	// 設置屬性回調
	SetupAttributeCallbacks();

	// 賦予初始技能
	GrantAbilities(StartingAbilities);

	// 應用初始效果
	for (TSubclassOf<UGameplayEffect> EffectClass : StartingEffects)
	{
		ApplyGameplayEffectToSelf(EffectClass);
	}

	Debug::Print(TEXT("GASManager: System initialized successfully"), FColor::Green);
}

void UGASManagerComponent::GrantAbility(TSubclassOf<class UGateGameplayAbility> AbilityClass, int32 Level)
{
	if (!AbilitySystemComponent || !AbilityClass)
	{
		return;
	}

	FGameplayAbilitySpec AbilitySpec(AbilityClass, Level, INDEX_NONE, GetOwner());
	FGameplayAbilitySpecHandle GrantedHandle = AbilitySystemComponent->GiveAbility(AbilitySpec);

	Debug::Print(FString::Printf(TEXT("GASManager: Granted ability %s at level %d"),
		*GetNameSafe(AbilityClass), Level), FColor::Green);
}

void UGASManagerComponent::GrantAbilities(const TArray<TSubclassOf<class UGateGameplayAbility>>& AbilityClasses)
{
	for (TSubclassOf<UGateGameplayAbility> AbilityClass : AbilityClasses)
	{
		GrantAbility(AbilityClass);
	}
}

bool UGASManagerComponent::TryActivateAbilityByTag(FGameplayTag AbilityTag, AActor* Target)
{
	if (!AbilitySystemComponent)
	{
		return false;
	}

	// 儲存目標信息
	if (Target)
	{
		// TODO: 傳遞目標給技能系統
	}

	bool bSuccess = AbilitySystemComponent->TryActivateAbilitiesByTag(
		FGameplayTagContainer(AbilityTag),
		true
	);

	if (bSuccess)
	{
		// 獲取技能信息並觸發事件
		if (UGateGameplayAbility* Ability = GetAbilityByTag(AbilityTag))
		{
			OnAbilityCommitted.Broadcast(AbilityTag, Ability->APCost, Ability->CooldownTurns);
		}
	}

	return bSuccess;
}

bool UGASManagerComponent::TryActivateAbilityByClass(TSubclassOf<class UGateGameplayAbility> AbilityClass, AActor* Target)
{
	if (!AbilitySystemComponent || !AbilityClass)
	{
		return false;
	}

	// 找到對應的技能規格
	const TArray<FGameplayAbilitySpec>& AbilitySpecs = AbilitySystemComponent->GetActivatableAbilities();
	for (const FGameplayAbilitySpec& Spec : AbilitySpecs)
	{
		if (Spec.Ability && Spec.Ability->GetClass() == AbilityClass)
		{
			return AbilitySystemComponent->TryActivateAbility(Spec.Handle);
		}
	}

	return false;
}

bool UGASManagerComponent::CanActivateAbility(FGameplayTag AbilityTag) const
{
	if (!AbilitySystemComponent)
	{
		return false;
	}
	// 檢查技能是否存在
	const TArray<FGameplayAbilitySpec>& AbilitySpecs = AbilitySystemComponent->GetActivatableAbilities();
	for (const FGameplayAbilitySpec& Spec : AbilitySpecs)
	{
		if (Spec.Ability)
		{
			const FGameplayTagContainer& AssetTags = Spec.Ability->GetAssetTags();

			if (AssetTags.HasTag(AbilityTag))
			{
				// 檢查AP成本
				if (UGateGameplayAbility* GateAbility = Cast<UGateGameplayAbility>(Spec.Ability))
				{
					if (ATurnBasedCharacter* Character = Cast<ATurnBasedCharacter>(GetOwner()))
					{
						if (UTurnSystemComponent* TurnSystem = Character->GetTurnSystemComponent())
						{
							if (!TurnSystem->CanPerformAction(GateAbility->APCost))
							{
								return false;
							}
						}
					}
				}

				// 檢查冷卻
				if (AbilityCooldowns.Contains(Spec.Handle))
				{
					if (AbilityCooldowns[Spec.Handle] > 0)
					{
						return false;
					}
				}

				return true;
			}
		}
	}

	return false;
}

TArray<FGameplayTag> UGASManagerComponent::GetActivatableAbilityTags() const
{
	TArray<FGameplayTag> Tags;

	if (!AbilitySystemComponent)
	{
		return Tags;
	}


	const TArray<FGameplayAbilitySpec>& AbilitySpecs = AbilitySystemComponent->GetActivatableAbilities();
	for (const FGameplayAbilitySpec& Spec : AbilitySpecs)
	{
		if (Spec.Ability)
		{
			const FGameplayTagContainer& AssetTags = Spec.Ability->GetAssetTags();

			// 獲取第一個標籤作為主要標識
			TArray<FGameplayTag> TagArray;
			AssetTags.GetGameplayTagArray(TagArray);

			if (TagArray.Num() > 0 && CanActivateAbility(TagArray[0]))
			{
				Tags.Add(TagArray[0]);
			}
		}
	}

	return Tags;
}


int32 UGASManagerComponent::GetAbilityCooldownTurns(FGameplayTag AbilityTag) const
{
	if (!AbilitySystemComponent)
	{
		return 0;
	}

	const TArray<FGameplayAbilitySpec>& AbilitySpecs = AbilitySystemComponent->GetActivatableAbilities();
	for (const FGameplayAbilitySpec& Spec : AbilitySpecs)
	{
		if (Spec.Ability)
		{
			const FGameplayTagContainer& AssetTags = Spec.Ability->GetAssetTags();

			if (AssetTags.HasTag(AbilityTag))
			{
				if (AbilityCooldowns.Contains(Spec.Handle))
				{
					return AbilityCooldowns[Spec.Handle];
				}
				return 0;
			}
		}
	}

	return 0;
}


int32 UGASManagerComponent::GetAbilityAPCost(FGameplayTag AbilityTag) const
{
	if (UGateGameplayAbility* Ability = GetAbilityByTag(AbilityTag))
	{
		return Ability->APCost;
	}
	return 0;
}

float UGASManagerComponent::GetAttributeValue(FGameplayTag AttributeTag) const
{
	if (!AbilitySystemComponent || !AttributeSet)
	{
		return 0.0f;
	}

	// 根據標籤獲取對應屬性值
	if (AttributeTag == GateGameplayTags::Attribute_Health)
	{
		return AttributeSet->GetHealth();
	}
	else if (AttributeTag == GateGameplayTags::Attribute_MaxHealth)
	{
		return AttributeSet->GetMaxHealth();
	}
	else if (AttributeTag == GateGameplayTags::Attribute_ActionPoints)
	{
		return AttributeSet->GetActionPoints();
	}
	else if (AttributeTag == GateGameplayTags::Attribute_MaxActionPoints)
	{
		return AttributeSet->GetMaxActionPoints();
	}
	else if (AttributeTag == GateGameplayTags::Attribute_AttackPower)
	{
		return AttributeSet->GetAttackPower();
	}
	else if (AttributeTag == GateGameplayTags::Attribute_Defense)
	{
		return AttributeSet->GetDefense();
	}
	else if (AttributeTag == GateGameplayTags::Attribute_Initiative)
	{
		return AttributeSet->GetInitiative();
	}

	return 0.0f;
}

void UGASManagerComponent::SetAttributeValue(FGameplayTag AttributeTag, float NewValue)
{
	if (!AbilitySystemComponent || !AttributeSet)
	{
		return;
	}

	// 根據標籤設置對應屬性值
	if (AttributeTag == GateGameplayTags::Attribute_Health)
	{
		AttributeSet->SetHealth(NewValue);
	}
	else if (AttributeTag == GateGameplayTags::Attribute_MaxHealth)
	{
		AttributeSet->SetMaxHealth(NewValue);
	}
	else if (AttributeTag == GateGameplayTags::Attribute_ActionPoints)
	{
		AttributeSet->SetActionPoints(NewValue);
	}
	else if (AttributeTag == GateGameplayTags::Attribute_MaxActionPoints)
	{
		AttributeSet->SetMaxActionPoints(NewValue);
	}
	else if (AttributeTag == GateGameplayTags::Attribute_AttackPower)
	{
		AttributeSet->SetAttackPower(NewValue);
	}
	else if (AttributeTag == GateGameplayTags::Attribute_Defense)
	{
		AttributeSet->SetDefense(NewValue);
	}
	else if (AttributeTag == GateGameplayTags::Attribute_Initiative)
	{
		AttributeSet->SetInitiative(NewValue);
	}
}

void UGASManagerComponent::ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> EffectClass, float Level)
{
	if (!AbilitySystemComponent || !EffectClass)
	{
		return;
	}

	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(GetOwner());

	FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(
		EffectClass, Level, EffectContext);

	if (SpecHandle.IsValid())
	{
		AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
}

void UGASManagerComponent::RemoveActiveEffectsWithTag(FGameplayTag EffectTag)
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	FGameplayTagContainer TagContainer(EffectTag);
	AbilitySystemComponent->RemoveActiveEffectsWithTags(TagContainer);
}


void UGASManagerComponent::OnTurnStart()
{
	// 重置行動點
	if (AttributeSet)
	{
		AttributeSet->SetActionPoints(AttributeSet->GetMaxActionPoints());
	}

	Debug::Print(TEXT("GASManager: Turn started, AP reset"), FColor::Green);

}

void UGASManagerComponent::OnTurnEnd()
{
	// 更新所有技能的冷卻時間
	for (auto& CooldownPair : AbilityCooldowns)
	{
		if (CooldownPair.Value > 0)
		{
			CooldownPair.Value--;
		}
	}

	Debug::Print(TEXT("GASManager: Turn ended, cooldowns updated"), FColor::Green);
}


// Called when the game starts
void UGASManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}



void UGASManagerComponent::SetupAttributeCallbacks()
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	// 設置屬性變化回調
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AttributeSet->GetHealthAttribute()
	).AddUObject(this, &UGASManagerComponent::HandleAttributeChange);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AttributeSet->GetActionPointsAttribute()
	).AddUObject(this, &UGASManagerComponent::HandleAttributeChange);

	// 可以添加更多屬性的監聽
}

void UGASManagerComponent::HandleAttributeChange(const FOnAttributeChangeData& Data)
{
	FGameplayTag AttributeTag;

	// 判斷是哪個屬性變化了
	if (Data.Attribute == AttributeSet->GetHealthAttribute())
	{
		AttributeTag = GateGameplayTags::Attribute_Health;
	}
	else if (Data.Attribute == AttributeSet->GetActionPointsAttribute())
	{
		AttributeTag = GateGameplayTags::Attribute_ActionPoints;
	}
	// 添加更多屬性判斷...

	// 廣播事件
	if (AttributeTag.IsValid())
	{
		OnAttributeChanged.Broadcast(AttributeTag, Data.NewValue);
	}
}


UGateGameplayAbility* UGASManagerComponent::GetAbilityByTag(FGameplayTag AbilityTag) const
{
	if (!AbilitySystemComponent)
	{
		return nullptr;
	}

	const TArray<FGameplayAbilitySpec>& AbilitySpecs = AbilitySystemComponent->GetActivatableAbilities();
	for (const FGameplayAbilitySpec& Spec : AbilitySpecs)
	{
		if (Spec.Ability)
		{
			const FGameplayTagContainer& AssetTags = Spec.Ability->GetAssetTags();

			if (AssetTags.HasTag(AbilityTag))
			{
				return Cast<UGateGameplayAbility>(Spec.Ability);
			}
		}
	}

	return nullptr;
}


