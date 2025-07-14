// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/DataAssets/TurnOrderConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnOrderConfig() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PROJECTGATE_API UClass* Z_Construct_UClass_UInitiativeModifier_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderCalculator_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderConfig();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderConfig_NoRegister();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FInitiativeModifierConfig();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInitiativeModifierConfig *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInitiativeModifierConfig;
class UScriptStruct* FInitiativeModifierConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInitiativeModifierConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInitiativeModifierConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInitiativeModifierConfig, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("InitiativeModifierConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FInitiativeModifierConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdm\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierClass_MetaData[] = {
		{ "Category", "InitiativeModifierConfig" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "InitiativeModifierConfig" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "InitiativeModifierConfig" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "InitiativeModifierConfig" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModifierClass;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInitiativeModifierConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeModifierConfig, ModifierClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInitiativeModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierClass_MetaData), NewProp_ModifierClass_MetaData) };
void Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FInitiativeModifierConfig*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInitiativeModifierConfig), &Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeModifierConfig, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeModifierConfig, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_ModifierClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"InitiativeModifierConfig",
	Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::PropPointers),
	sizeof(FInitiativeModifierConfig),
	alignof(FInitiativeModifierConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInitiativeModifierConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FInitiativeModifierConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInitiativeModifierConfig.InnerSingleton, Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInitiativeModifierConfig.InnerSingleton;
}
// ********** End ScriptStruct FInitiativeModifierConfig *******************************************

// ********** Begin Class UTurnOrderConfig Function ApplyToCalculator ******************************
struct Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics
{
	struct TurnOrderConfig_eventApplyToCalculator_Parms
	{
		UTurnOrderCalculator* Calculator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Calculator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::NewProp_Calculator = { "Calculator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderConfig_eventApplyToCalculator_Parms, Calculator), Z_Construct_UClass_UTurnOrderCalculator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::NewProp_Calculator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderConfig, nullptr, "ApplyToCalculator", Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::TurnOrderConfig_eventApplyToCalculator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::TurnOrderConfig_eventApplyToCalculator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderConfig::execApplyToCalculator)
{
	P_GET_OBJECT(UTurnOrderCalculator,Z_Param_Calculator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyToCalculator(Z_Param_Calculator);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderConfig Function ApplyToCalculator ********************************

// ********** Begin Class UTurnOrderConfig Function CreateModifiers ********************************
struct Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics
{
	struct TurnOrderConfig_eventCreateModifiers_Parms
	{
		UObject* Outer;
		TArray<UInitiativeModifier*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbdk ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbdk ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderConfig_eventCreateModifiers_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInitiativeModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderConfig_eventCreateModifiers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderConfig, nullptr, "CreateModifiers", Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::TurnOrderConfig_eventCreateModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::TurnOrderConfig_eventCreateModifiers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderConfig::execCreateModifiers)
{
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInitiativeModifier*>*)Z_Param__Result=P_THIS->CreateModifiers(Z_Param_Outer);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderConfig Function CreateModifiers **********************************

// ********** Begin Class UTurnOrderConfig *********************************************************
void UTurnOrderConfig::StaticRegisterNativesUTurnOrderConfig()
{
	UClass* Class = UTurnOrderConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyToCalculator", &UTurnOrderConfig::execApplyToCalculator },
		{ "CreateModifiers", &UTurnOrderConfig::execCreateModifiers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnOrderConfig;
UClass* UTurnOrderConfig::GetPrivateStaticClass()
{
	using TClass = UTurnOrderConfig;
	if (!Z_Registration_Info_UClass_UTurnOrderConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnOrderConfig"),
			Z_Registration_Info_UClass_UTurnOrderConfig.InnerSingleton,
			StaticRegisterNativesUTurnOrderConfig,
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
	return Z_Registration_Info_UClass_UTurnOrderConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnOrderConfig_NoRegister()
{
	return UTurnOrderConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnOrderConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInitiative_MetaData[] = {
		{ "Category", "Base Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbdt\xef\xbf\xbdm ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbdt\xef\xbf\xbdm ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInitiative_MetaData[] = {
		{ "Category", "Base Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInitiative_MetaData[] = {
		{ "Category", "Base Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitiativeModifiers_MetaData[] = {
		{ "Category", "Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdm ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdm ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateEachRound_MetaData[] = {
		{ "Category", "Recalculation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdm ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdm ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepRelativeOrder_MetaData[] = {
		{ "Category", "Recalculation" },
		{ "EditCondition", "bRecalculateEachRound" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecalculationVariance_MetaData[] = {
		{ "Category", "Recalculation" },
		{ "EditCondition", "bRecalculateEachRound" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerAlwaysFirst_MetaData[] = {
		{ "Category", "Special Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbdh ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdW\xef\xbf\xbdh ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBossAlwaysLast_MetaData[] = {
		{ "Category", "Special Rules" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagPriorities_MetaData[] = {
		{ "Category", "Special Rules" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/TurnOrderConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultInitiative;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinInitiative;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInitiative;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitiativeModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitiativeModifiers;
	static void NewProp_bRecalculateEachRound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateEachRound;
	static void NewProp_bKeepRelativeOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepRelativeOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecalculationVariance;
	static void NewProp_bPlayerAlwaysFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerAlwaysFirst;
	static void NewProp_bBossAlwaysLast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBossAlwaysLast;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagPriorities_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagPriorities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagPriorities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnOrderConfig_ApplyToCalculator, "ApplyToCalculator" }, // 3611731354
		{ &Z_Construct_UFunction_UTurnOrderConfig_CreateModifiers, "CreateModifiers" }, // 1145195976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnOrderConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_DefaultInitiative = { "DefaultInitiative", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderConfig, DefaultInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInitiative_MetaData), NewProp_DefaultInitiative_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_MinInitiative = { "MinInitiative", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderConfig, MinInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInitiative_MetaData), NewProp_MinInitiative_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_MaxInitiative = { "MaxInitiative", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderConfig, MaxInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInitiative_MetaData), NewProp_MaxInitiative_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_InitiativeModifiers_Inner = { "InitiativeModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInitiativeModifierConfig, METADATA_PARAMS(0, nullptr) }; // 3925798845
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_InitiativeModifiers = { "InitiativeModifiers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderConfig, InitiativeModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitiativeModifiers_MetaData), NewProp_InitiativeModifiers_MetaData) }; // 3925798845
void Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bRecalculateEachRound_SetBit(void* Obj)
{
	((UTurnOrderConfig*)Obj)->bRecalculateEachRound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bRecalculateEachRound = { "bRecalculateEachRound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTurnOrderConfig), &Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bRecalculateEachRound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalculateEachRound_MetaData), NewProp_bRecalculateEachRound_MetaData) };
void Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bKeepRelativeOrder_SetBit(void* Obj)
{
	((UTurnOrderConfig*)Obj)->bKeepRelativeOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bKeepRelativeOrder = { "bKeepRelativeOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTurnOrderConfig), &Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bKeepRelativeOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepRelativeOrder_MetaData), NewProp_bKeepRelativeOrder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_RecalculationVariance = { "RecalculationVariance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderConfig, RecalculationVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecalculationVariance_MetaData), NewProp_RecalculationVariance_MetaData) };
void Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bPlayerAlwaysFirst_SetBit(void* Obj)
{
	((UTurnOrderConfig*)Obj)->bPlayerAlwaysFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bPlayerAlwaysFirst = { "bPlayerAlwaysFirst", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTurnOrderConfig), &Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bPlayerAlwaysFirst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerAlwaysFirst_MetaData), NewProp_bPlayerAlwaysFirst_MetaData) };
void Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bBossAlwaysLast_SetBit(void* Obj)
{
	((UTurnOrderConfig*)Obj)->bBossAlwaysLast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bBossAlwaysLast = { "bBossAlwaysLast", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTurnOrderConfig), &Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bBossAlwaysLast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBossAlwaysLast_MetaData), NewProp_bBossAlwaysLast_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_TagPriorities_ValueProp = { "TagPriorities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_TagPriorities_Key_KeyProp = { "TagPriorities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_TagPriorities = { "TagPriorities", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderConfig, TagPriorities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagPriorities_MetaData), NewProp_TagPriorities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnOrderConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_DefaultInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_MinInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_MaxInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_InitiativeModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_InitiativeModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bRecalculateEachRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bKeepRelativeOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_RecalculationVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bPlayerAlwaysFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_bBossAlwaysLast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_TagPriorities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_TagPriorities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderConfig_Statics::NewProp_TagPriorities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnOrderConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnOrderConfig_Statics::ClassParams = {
	&UTurnOrderConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnOrderConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnOrderConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnOrderConfig()
{
	if (!Z_Registration_Info_UClass_UTurnOrderConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnOrderConfig.OuterSingleton, Z_Construct_UClass_UTurnOrderConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnOrderConfig.OuterSingleton;
}
UTurnOrderConfig::UTurnOrderConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnOrderConfig);
UTurnOrderConfig::~UTurnOrderConfig() {}
// ********** End Class UTurnOrderConfig ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h__Script_ProjectGate_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInitiativeModifierConfig::StaticStruct, Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics::NewStructOps, TEXT("InitiativeModifierConfig"), &Z_Registration_Info_UScriptStruct_FInitiativeModifierConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInitiativeModifierConfig), 3925798845U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnOrderConfig, UTurnOrderConfig::StaticClass, TEXT("UTurnOrderConfig"), &Z_Registration_Info_UClass_UTurnOrderConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnOrderConfig), 3261216605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h__Script_ProjectGate_2058439358(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h__Script_ProjectGate_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
