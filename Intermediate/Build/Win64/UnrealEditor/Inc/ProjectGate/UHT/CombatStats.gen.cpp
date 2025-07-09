// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/CombatStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatStats() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ECombatAttackType();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ECustomDamageType();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FAttackConfig();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCombatStats();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageResult();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FTurnOrderData();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECombatAttackType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatAttackType;
static UEnum* ECombatAttackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatAttackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatAttackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_ECombatAttackType, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("ECombatAttackType"));
	}
	return Z_Registration_Info_UEnum_ECombatAttackType.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<ECombatAttackType>()
{
	return ECombatAttackType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_ECombatAttackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Area.DisplayName", "Area of Effect" },
		{ "Area.Name", "ECombatAttackType::Area" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Magic.DisplayName", "Magic" },
		{ "Magic.Name", "ECombatAttackType::Magic" },
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "ECombatAttackType::Melee" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
		{ "Ranged.DisplayName", "Ranged" },
		{ "Ranged.Name", "ECombatAttackType::Ranged" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatAttackType::Melee", (int64)ECombatAttackType::Melee },
		{ "ECombatAttackType::Ranged", (int64)ECombatAttackType::Ranged },
		{ "ECombatAttackType::Magic", (int64)ECombatAttackType::Magic },
		{ "ECombatAttackType::Area", (int64)ECombatAttackType::Area },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_ECombatAttackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"ECombatAttackType",
	"ECombatAttackType",
	Z_Construct_UEnum_ProjectGate_ECombatAttackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ECombatAttackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ECombatAttackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_ECombatAttackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_ECombatAttackType()
{
	if (!Z_Registration_Info_UEnum_ECombatAttackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatAttackType.InnerSingleton, Z_Construct_UEnum_ProjectGate_ECombatAttackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatAttackType.InnerSingleton;
}
// ********** End Enum ECombatAttackType ***********************************************************

// ********** Begin Enum ECustomDamageType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomDamageType;
static UEnum* ECustomDamageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomDamageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_ECustomDamageType, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("ECustomDamageType"));
	}
	return Z_Registration_Info_UEnum_ECustomDamageType.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<ECustomDamageType>()
{
	return ECustomDamageType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_ECustomDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Elemental.DisplayName", "Elemental" },
		{ "Elemental.Name", "ECustomDamageType::Elemental" },
		{ "Magical.DisplayName", "Magical" },
		{ "Magical.Name", "ECustomDamageType::Magical" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
		{ "Physical.DisplayName", "Physical" },
		{ "Physical.Name", "ECustomDamageType::Physical" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "TrueDamage.DisplayName", "True Damage" },
		{ "TrueDamage.Name", "ECustomDamageType::TrueDamage" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomDamageType::Physical", (int64)ECustomDamageType::Physical },
		{ "ECustomDamageType::Magical", (int64)ECustomDamageType::Magical },
		{ "ECustomDamageType::TrueDamage", (int64)ECustomDamageType::TrueDamage },
		{ "ECustomDamageType::Elemental", (int64)ECustomDamageType::Elemental },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_ECustomDamageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"ECustomDamageType",
	"ECustomDamageType",
	Z_Construct_UEnum_ProjectGate_ECustomDamageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ECustomDamageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ECustomDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_ECustomDamageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_ECustomDamageType()
{
	if (!Z_Registration_Info_UEnum_ECustomDamageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomDamageType.InnerSingleton, Z_Construct_UEnum_ProjectGate_ECustomDamageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomDamageType.InnerSingleton;
}
// ********** End Enum ECustomDamageType ***********************************************************

// ********** Begin ScriptStruct FTurnOrderData ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTurnOrderData;
class UScriptStruct* FTurnOrderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTurnOrderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTurnOrderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTurnOrderData, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("TurnOrderData"));
	}
	return Z_Registration_Info_UScriptStruct_FTurnOrderData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTurnOrderData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initiative_MetaData[] = {
		{ "Category", "TurnOrderData" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "TurnOrderData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (0-100)\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (0-100)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInitiative_MetaData[] = {
		{ "Category", "TurnOrderData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xa9\xef\xbf\xbd (\xef\xbf\xbdv\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xa9\xef\xbf\xbd (\xef\xbf\xbdv\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnDelay_MetaData[] = {
		{ "Category", "TurnOrderData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Initiative;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentInitiative;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTurnOrderData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewProp_Initiative = { "Initiative", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnOrderData, Initiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initiative_MetaData), NewProp_Initiative_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnOrderData, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewProp_CurrentInitiative = { "CurrentInitiative", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnOrderData, CurrentInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInitiative_MetaData), NewProp_CurrentInitiative_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewProp_TurnDelay = { "TurnDelay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnOrderData, TurnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnDelay_MetaData), NewProp_TurnDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTurnOrderData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewProp_Initiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewProp_CurrentInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewProp_TurnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnOrderData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTurnOrderData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"TurnOrderData",
	Z_Construct_UScriptStruct_FTurnOrderData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnOrderData_Statics::PropPointers),
	sizeof(FTurnOrderData),
	alignof(FTurnOrderData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnOrderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTurnOrderData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTurnOrderData()
{
	if (!Z_Registration_Info_UScriptStruct_FTurnOrderData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTurnOrderData.InnerSingleton, Z_Construct_UScriptStruct_FTurnOrderData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTurnOrderData.InnerSingleton;
}
// ********** End ScriptStruct FTurnOrderData ******************************************************

// ********** Begin ScriptStruct FCombatStats ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombatStats;
class UScriptStruct* FCombatStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombatStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatStats, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("CombatStats"));
	}
	return Z_Registration_Info_UScriptStruct_FCombatStats.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCombatStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xce\xadp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""c\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xce\xadp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderData_MetaData[] = {
		{ "Category", "Turn Order" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Offense" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[] = {
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicResist_MetaData[] = {
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalChance_MetaData[] = {
		{ "Category", "Critical" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalMultiplier_MetaData[] = {
		{ "Category", "Critical" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnOrderData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Defense;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagicResist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_TurnOrderData = { "TurnOrderData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, TurnOrderData), Z_Construct_UScriptStruct_FTurnOrderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderData_MetaData), NewProp_TurnOrderData_MetaData) }; // 140942724
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, Defense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defense_MetaData), NewProp_Defense_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_MagicResist = { "MagicResist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, MagicResist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicResist_MetaData), NewProp_MagicResist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_CriticalChance = { "CriticalChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, CriticalChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalChance_MetaData), NewProp_CriticalChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_CriticalMultiplier = { "CriticalMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, CriticalMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalMultiplier_MetaData), NewProp_CriticalMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatStats, AttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_TurnOrderData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_Defense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_MagicResist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_CriticalChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_CriticalMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatStats_Statics::NewProp_AttackSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"CombatStats",
	Z_Construct_UScriptStruct_FCombatStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatStats_Statics::PropPointers),
	sizeof(FCombatStats),
	alignof(FCombatStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatStats()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombatStats.InnerSingleton, Z_Construct_UScriptStruct_FCombatStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCombatStats.InnerSingleton;
}
// ********** End ScriptStruct FCombatStats ********************************************************

// ********** Begin ScriptStruct FAttackConfig *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAttackConfig;
class UScriptStruct* FAttackConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAttackConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAttackConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackConfig, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("AttackConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAttackConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAttackConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdm\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackType_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDamageType_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPointCost_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanAttackMultipleTargets_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaRadius_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDamageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionPointCost;
	static void NewProp_bCanAttackMultipleTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAttackMultipleTargets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackConfig, AttackType), Z_Construct_UEnum_ProjectGate_ECombatAttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackType_MetaData), NewProp_AttackType_MetaData) }; // 1601793885
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_CustomDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_CustomDamageType = { "CustomDamageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackConfig, CustomDamageType), Z_Construct_UEnum_ProjectGate_ECustomDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDamageType_MetaData), NewProp_CustomDamageType_MetaData) }; // 101092300
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackConfig, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_ActionPointCost = { "ActionPointCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackConfig, ActionPointCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPointCost_MetaData), NewProp_ActionPointCost_MetaData) };
void Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_bCanAttackMultipleTargets_SetBit(void* Obj)
{
	((FAttackConfig*)Obj)->bCanAttackMultipleTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_bCanAttackMultipleTargets = { "bCanAttackMultipleTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackConfig), &Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_bCanAttackMultipleTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanAttackMultipleTargets_MetaData), NewProp_bCanAttackMultipleTargets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_AreaRadius = { "AreaRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackConfig, AreaRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaRadius_MetaData), NewProp_AreaRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_AttackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_AttackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_CustomDamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_CustomDamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_ActionPointCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_bCanAttackMultipleTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackConfig_Statics::NewProp_AreaRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"AttackConfig",
	Z_Construct_UScriptStruct_FAttackConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackConfig_Statics::PropPointers),
	sizeof(FAttackConfig),
	alignof(FAttackConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttackConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttackConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAttackConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAttackConfig.InnerSingleton, Z_Construct_UScriptStruct_FAttackConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAttackConfig.InnerSingleton;
}
// ********** End ScriptStruct FAttackConfig *******************************************************

// ********** Begin ScriptStruct FDamageResult *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDamageResult;
class UScriptStruct* FDamageResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDamageResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDamageResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageResult, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("DamageResult"));
	}
	return Z_Registration_Info_UScriptStruct_FDamageResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDamageResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdG\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdG" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalDamage_MetaData[] = {
		{ "Category", "DamageResult" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCritical_MetaData[] = {
		{ "Category", "DamageResult" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlocked_MetaData[] = {
		{ "Category", "DamageResult" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDamageType_MetaData[] = {
		{ "Category", "DamageResult" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[] = {
		{ "Category", "DamageResult" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "DamageResult" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FinalDamage;
	static void NewProp_bIsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCritical;
	static void NewProp_bIsBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_FinalDamage = { "FinalDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageResult, FinalDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalDamage_MetaData), NewProp_FinalDamage_MetaData) };
void Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_bIsCritical_SetBit(void* Obj)
{
	((FDamageResult*)Obj)->bIsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_bIsCritical = { "bIsCritical", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageResult), &Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_bIsCritical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCritical_MetaData), NewProp_bIsCritical_MetaData) };
void Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_bIsBlocked_SetBit(void* Obj)
{
	((FDamageResult*)Obj)->bIsBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_bIsBlocked = { "bIsBlocked", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageResult), &Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_bIsBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlocked_MetaData), NewProp_bIsBlocked_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_CustomDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_CustomDamageType = { "CustomDamageType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageResult, CustomDamageType), Z_Construct_UEnum_ProjectGate_ECustomDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDamageType_MetaData), NewProp_CustomDamageType_MetaData) }; // 101092300
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageResult, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attacker_MetaData), NewProp_Attacker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageResult, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_FinalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_bIsCritical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_bIsBlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_CustomDamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_CustomDamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageResult_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"DamageResult",
	Z_Construct_UScriptStruct_FDamageResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageResult_Statics::PropPointers),
	sizeof(FDamageResult),
	alignof(FDamageResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageResult()
{
	if (!Z_Registration_Info_UScriptStruct_FDamageResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDamageResult.InnerSingleton, Z_Construct_UScriptStruct_FDamageResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDamageResult.InnerSingleton;
}
// ********** End ScriptStruct FDamageResult *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatAttackType_StaticEnum, TEXT("ECombatAttackType"), &Z_Registration_Info_UEnum_ECombatAttackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1601793885U) },
		{ ECustomDamageType_StaticEnum, TEXT("ECustomDamageType"), &Z_Registration_Info_UEnum_ECustomDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 101092300U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTurnOrderData::StaticStruct, Z_Construct_UScriptStruct_FTurnOrderData_Statics::NewStructOps, TEXT("TurnOrderData"), &Z_Registration_Info_UScriptStruct_FTurnOrderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTurnOrderData), 140942724U) },
		{ FCombatStats::StaticStruct, Z_Construct_UScriptStruct_FCombatStats_Statics::NewStructOps, TEXT("CombatStats"), &Z_Registration_Info_UScriptStruct_FCombatStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatStats), 454819104U) },
		{ FAttackConfig::StaticStruct, Z_Construct_UScriptStruct_FAttackConfig_Statics::NewStructOps, TEXT("AttackConfig"), &Z_Registration_Info_UScriptStruct_FAttackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttackConfig), 346436840U) },
		{ FDamageResult::StaticStruct, Z_Construct_UScriptStruct_FDamageResult_Statics::NewStructOps, TEXT("DamageResult"), &Z_Registration_Info_UScriptStruct_FDamageResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageResult), 1306040926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h__Script_ProjectGate_1673973209(TEXT("/Script/ProjectGate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h__Script_ProjectGate_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
