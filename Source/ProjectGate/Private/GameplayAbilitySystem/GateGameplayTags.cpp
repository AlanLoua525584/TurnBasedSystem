// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GateGameplayTags.h"


namespace GateGameplayTags
{
    // === 屬性標籤 ===
    UE_DEFINE_GAMEPLAY_TAG(Attribute_Health, "Attribute.Health");
    UE_DEFINE_GAMEPLAY_TAG(Attribute_MaxHealth, "Attribute.MaxHealth");
    UE_DEFINE_GAMEPLAY_TAG(Attribute_ActionPoints, "Attribute.ActionPoints");
    UE_DEFINE_GAMEPLAY_TAG(Attribute_MaxActionPoints, "Attribute.MaxActionPoints");
    UE_DEFINE_GAMEPLAY_TAG(Attribute_AttackPower, "Attribute.AttackPower");
    UE_DEFINE_GAMEPLAY_TAG(Attribute_Defense, "Attribute.Defense");
    UE_DEFINE_GAMEPLAY_TAG(Attribute_Initiative, "Attribute.Initiative");

    // === 技能標籤 ===
    UE_DEFINE_GAMEPLAY_TAG(Ability_BasicAttack, "Ability.BasicAttack");
    UE_DEFINE_GAMEPLAY_TAG(Ability_RangedAttack, "Ability.RangedAttack");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Heal, "Ability.Heal");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Fireball, "Ability.Fireball");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Shield, "Ability.Shield");

    // === 技能分類標籤 ===
    UE_DEFINE_GAMEPLAY_TAG(Ability_Type_Melee, "Ability.Type.Melee");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Type_Ranged, "Ability.Type.Ranged");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Type_Magic, "Ability.Type.Magic");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Type_Support, "Ability.Type.Support");

    // === 冷卻標籤 ===
    UE_DEFINE_GAMEPLAY_TAG(Cooldown_BasicAttack, "Cooldown.BasicAttack");
    UE_DEFINE_GAMEPLAY_TAG(Cooldown_RangedAttack, "Cooldown.RangedAttack");
    UE_DEFINE_GAMEPLAY_TAG(Cooldown_Heal, "Cooldown.Heal");
    UE_DEFINE_GAMEPLAY_TAG(Cooldown_Fireball, "Cooldown.Fireball");

    // === 效果標籤 ===
    UE_DEFINE_GAMEPLAY_TAG(Effect_Damage, "Effect.Damage");
    UE_DEFINE_GAMEPLAY_TAG(Effect_Heal, "Effect.Heal");
    UE_DEFINE_GAMEPLAY_TAG(Effect_Buff, "Effect.Buff");
    UE_DEFINE_GAMEPLAY_TAG(Effect_Debuff, "Effect.Debuff");
    UE_DEFINE_GAMEPLAY_TAG(Effect_Shield, "Effect.Shield");
    UE_DEFINE_GAMEPLAY_TAG(Effect_Burn, "Effect.Burn");
    UE_DEFINE_GAMEPLAY_TAG(Effect_Stun, "Effect.Stun");

    // === 狀態標籤 ===
    UE_DEFINE_GAMEPLAY_TAG(State_Dead, "State.Dead");
    UE_DEFINE_GAMEPLAY_TAG(State_Stunned, "State.Stunned");
    UE_DEFINE_GAMEPLAY_TAG(State_Burning, "State.Burning");
    UE_DEFINE_GAMEPLAY_TAG(State_Shielded, "State.Shielded");
    UE_DEFINE_GAMEPLAY_TAG(State_InCombat, "State.InCombat");

    // === 動畫標籤 ===
    UE_DEFINE_GAMEPLAY_TAG(Animation_Attack_Melee, "Animation.Attack.Melee");
    UE_DEFINE_GAMEPLAY_TAG(Animation_Attack_Ranged, "Animation.Attack.Ranged");
    UE_DEFINE_GAMEPLAY_TAG(Animation_Cast, "Animation.Cast");
    UE_DEFINE_GAMEPLAY_TAG(Animation_Hit, "Animation.Hit");
    UE_DEFINE_GAMEPLAY_TAG(Animation_Death, "Animation.Death");
}