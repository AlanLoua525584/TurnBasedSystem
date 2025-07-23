// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/GateAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGateAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAttributeSet();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGateAttributeSet ********************************************************
void UGateAttributeSet::StaticRegisterNativesUGateAttributeSet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGateAttributeSet;
UClass* UGateAttributeSet::GetPrivateStaticClass()
{
	using TClass = UGateAttributeSet;
	if (!Z_Registration_Info_UClass_UGateAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GateAttributeSet"),
			Z_Registration_Info_UClass_UGateAttributeSet.InnerSingleton,
			StaticRegisterNativesUGateAttributeSet,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGateAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UGateAttributeSet_NoRegister()
{
	return UGateAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGateAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GateAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xdd\xa9\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xdd\xa9\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPoints_MetaData[] = {
		{ "Category", "Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActionPoints_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Resource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xea\xb7\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xea\xb7\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xdd\xa9\xca\xa1]\xef\xbf\xbdO\xef\xbf\xbd""d\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xce\xaa\xef\xbf\xbd\xef\xbf\xbd\xc6\xad\xc8\xa1^ ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xdd\xa9\xca\xa1]\xef\xbf\xbdO\xef\xbf\xbd""d\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xce\xaa\xef\xbf\xbd\xef\xbf\xbd\xc6\xad\xc8\xa1^ ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicPower_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicDefense_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalChance_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initiative_MetaData[] = {
		{ "Category", "TurnOrder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "TurnOrder" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxActionPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Defense;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicDefense;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Initiative;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGateAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_ActionPoints = { "ActionPoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, ActionPoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPoints_MetaData), NewProp_ActionPoints_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MaxActionPoints = { "MaxActionPoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, MaxActionPoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActionPoints_MetaData), NewProp_MaxActionPoints_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MagicPower = { "MagicPower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, MagicPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicPower_MetaData), NewProp_MagicPower_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, Defense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defense_MetaData), NewProp_Defense_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MagicDefense = { "MagicDefense", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, MagicDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicDefense_MetaData), NewProp_MagicDefense_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_CriticalChance = { "CriticalChance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, CriticalChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalChance_MetaData), NewProp_CriticalChance_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_CriticalDamage = { "CriticalDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, CriticalDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalDamage_MetaData), NewProp_CriticalDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Initiative = { "Initiative", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, Initiative), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initiative_MetaData), NewProp_Initiative_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGateAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_ActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MaxActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MagicPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Defense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_MagicDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_CriticalChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_CriticalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Initiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAttributeSet_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGateAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGateAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGateAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGateAttributeSet_Statics::ClassParams = {
	&UGateAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGateAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGateAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGateAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGateAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGateAttributeSet()
{
	if (!Z_Registration_Info_UClass_UGateAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGateAttributeSet.OuterSingleton, Z_Construct_UClass_UGateAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGateAttributeSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGateAttributeSet);
UGateAttributeSet::~UGateAttributeSet() {}
// ********** End Class UGateAttributeSet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateAttributeSet_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGateAttributeSet, UGateAttributeSet::StaticClass, TEXT("UGateAttributeSet"), &Z_Registration_Info_UClass_UGateAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGateAttributeSet), 518740763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateAttributeSet_h__Script_ProjectGate_453860829(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateAttributeSet_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateAttributeSet_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
