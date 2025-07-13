// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/CombatComponent.h"
#include "CombatSystem/CombatStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ECombatAttackType();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FAttackConfig();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCombatStats();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageResult();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnDamageReceived *****************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnDamageReceived_Parms
	{
		FDamageResult DamageResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd""e\xef\xbf\xbdU\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd""e\xef\xbf\xbdU\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::NewProp_DamageResult = { "DamageResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnDamageReceived_Parms, DamageResult), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageResult_MetaData), NewProp_DamageResult_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::NewProp_DamageResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnDamageReceived__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::_Script_ProjectGate_eventOnDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::_Script_ProjectGate_eventOnDamageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDamageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnDamageReceived, FDamageResult const& DamageResult)
{
	struct _Script_ProjectGate_eventOnDamageReceived_Parms
	{
		FDamageResult DamageResult;
	};
	_Script_ProjectGate_eventOnDamageReceived_Parms Parms;
	Parms.DamageResult=DamageResult;
	OnDamageReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDamageReceived *******************************************************

// ********** Begin Delegate FOnHealthChanged ******************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnHealthChanged_Parms
	{
		AActor* Character;
		int32 CurrentHealth;
		int32 MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnHealthChanged_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnHealthChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, AActor* Character, int32 CurrentHealth, int32 MaxHealth)
{
	struct _Script_ProjectGate_eventOnHealthChanged_Parms
	{
		AActor* Character;
		int32 CurrentHealth;
		int32 MaxHealth;
	};
	_Script_ProjectGate_eventOnHealthChanged_Parms Parms;
	Parms.Character=Character;
	Parms.CurrentHealth=CurrentHealth;
	Parms.MaxHealth=MaxHealth;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChanged ********************************************************

// ********** Begin Delegate FOnDeath **************************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnDeath_Parms
	{
		AActor* Killer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnDeath_Parms, Killer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::NewProp_Killer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnDeath__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::_Script_ProjectGate_eventOnDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::_Script_ProjectGate_eventOnDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, AActor* Killer)
{
	struct _Script_ProjectGate_eventOnDeath_Parms
	{
		AActor* Killer;
	};
	_Script_ProjectGate_eventOnDeath_Parms Parms;
	Parms.Killer=Killer;
	OnDeath.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnAttackExecuted *****************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAttackExecuted_Parms
	{
		AActor* Attacker;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAttackExecuted_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAttackExecuted_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAttackExecuted__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAttackExecuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAttackExecuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttackExecuted_DelegateWrapper(const FMulticastScriptDelegate& OnAttackExecuted, AActor* Attacker, AActor* Target)
{
	struct _Script_ProjectGate_eventOnAttackExecuted_Parms
	{
		AActor* Attacker;
		AActor* Target;
	};
	_Script_ProjectGate_eventOnAttackExecuted_Parms Parms;
	Parms.Attacker=Attacker;
	Parms.Target=Target;
	OnAttackExecuted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttackExecuted *******************************************************

// ********** Begin Delegate FOnAttackExecutedWithResult *******************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAttackExecutedWithResult_Parms
	{
		AActor* Attacker;
		AActor* Target;
		FDamageResult DamageResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdG\xef\xbf\xbd""e\xef\xbf\xbdU==\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdG\xef\xbf\xbd""e\xef\xbf\xbdU==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAttackExecutedWithResult_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAttackExecutedWithResult_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::NewProp_DamageResult = { "DamageResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAttackExecutedWithResult_Parms, DamageResult), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageResult_MetaData), NewProp_DamageResult_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::NewProp_DamageResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAttackExecutedWithResult__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::_Script_ProjectGate_eventOnAttackExecutedWithResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::_Script_ProjectGate_eventOnAttackExecutedWithResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttackExecutedWithResult_DelegateWrapper(const FMulticastScriptDelegate& OnAttackExecutedWithResult, AActor* Attacker, AActor* Target, FDamageResult const& DamageResult)
{
	struct _Script_ProjectGate_eventOnAttackExecutedWithResult_Parms
	{
		AActor* Attacker;
		AActor* Target;
		FDamageResult DamageResult;
	};
	_Script_ProjectGate_eventOnAttackExecutedWithResult_Parms Parms;
	Parms.Attacker=Attacker;
	Parms.Target=Target;
	Parms.DamageResult=DamageResult;
	OnAttackExecutedWithResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttackExecutedWithResult *********************************************

// ********** Begin Class UCombatComponent Function ApplyDamage ************************************
struct Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics
{
	struct CombatComponent_eventApplyDamage_Parms
	{
		FDamageResult DamageResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::NewProp_DamageResult = { "DamageResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventApplyDamage_Parms, DamageResult), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageResult_MetaData), NewProp_DamageResult_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::NewProp_DamageResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ApplyDamage", Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::CombatComponent_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::CombatComponent_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execApplyDamage)
{
	P_GET_STRUCT_REF(FDamageResult,Z_Param_Out_DamageResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_Out_DamageResult);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ApplyDamage **************************************

// ********** Begin Class UCombatComponent Function CalculateDamage ********************************
struct Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics
{
	struct CombatComponent_eventCalculateDamage_Parms
	{
		AActor* Target;
		FDamageResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventCalculateDamage_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventCalculateDamage_Parms, ReturnValue), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(0, nullptr) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "CalculateDamage", Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::CombatComponent_eventCalculateDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::CombatComponent_eventCalculateDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_CalculateDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_CalculateDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execCalculateDamage)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDamageResult*)Z_Param__Result=P_THIS->CalculateDamage(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function CalculateDamage **********************************

// ********** Begin Class UCombatComponent Function CanAttack **************************************
struct Z_Construct_UFunction_UCombatComponent_CanAttack_Statics
{
	struct CombatComponent_eventCanAttack_Parms
	{
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xd6\xa4\xdf\xbe\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xd6\xa4\xdf\xbe\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventCanAttack_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatComponent_eventCanAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComponent_eventCanAttack_Parms), &Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "CanAttack", Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::CombatComponent_eventCanAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::CombatComponent_eventCanAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_CanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_CanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execCanAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAttack(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function CanAttack ****************************************

// ********** Begin Class UCombatComponent Function ExecuteAttack **********************************
struct Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics
{
	struct CombatComponent_eventExecuteAttack_Parms
	{
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventExecuteAttack_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatComponent_eventExecuteAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComponent_eventExecuteAttack_Parms), &Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ExecuteAttack", Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::CombatComponent_eventExecuteAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::CombatComponent_eventExecuteAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_ExecuteAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ExecuteAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execExecuteAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ExecuteAttack(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ExecuteAttack ************************************

// ********** Begin Class UCombatComponent Function GetAttackableTargets ***************************
struct Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics
{
	struct CombatComponent_eventGetAttackableTargets_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd""d\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd""d\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventGetAttackableTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "GetAttackableTargets", Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::CombatComponent_eventGetAttackableTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::CombatComponent_eventGetAttackableTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_GetAttackableTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_GetAttackableTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execGetAttackableTargets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAttackableTargets();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function GetAttackableTargets *****************************

// ********** Begin Class UCombatComponent Function GetAttackCost **********************************
struct Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics
{
	struct CombatComponent_eventGetAttackCost_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventGetAttackCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "GetAttackCost", Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::CombatComponent_eventGetAttackCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::CombatComponent_eventGetAttackCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_GetAttackCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_GetAttackCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execGetAttackCost)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAttackCost();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function GetAttackCost ************************************

// ********** Begin Class UCombatComponent Function GetAttackRange *********************************
struct Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics
{
	struct CombatComponent_eventGetAttackRange_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventGetAttackRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "GetAttackRange", Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::CombatComponent_eventGetAttackRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::CombatComponent_eventGetAttackRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_GetAttackRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_GetAttackRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execGetAttackRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttackRange();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function GetAttackRange ***********************************

// ********** Begin Class UCombatComponent Function GetAttackType **********************************
struct Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics
{
	struct CombatComponent_eventGetAttackType_Parms
	{
		ECombatAttackType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getter\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter\n \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventGetAttackType_Parms, ReturnValue), Z_Construct_UEnum_ProjectGate_ECombatAttackType, METADATA_PARAMS(0, nullptr) }; // 1601793885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "GetAttackType", Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::CombatComponent_eventGetAttackType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::CombatComponent_eventGetAttackType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_GetAttackType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_GetAttackType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execGetAttackType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECombatAttackType*)Z_Param__Result=P_THIS->GetAttackType();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function GetAttackType ************************************

// ********** Begin Class UCombatComponent Function GetHealthPercent *******************************
struct Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics
{
	struct CombatComponent_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==Getter==\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==Getter==" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "GetHealthPercent", Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::CombatComponent_eventGetHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::CombatComponent_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_GetHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_GetHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function GetHealthPercent *********************************

// ********** Begin Class UCombatComponent Function HideAttackRange ********************************
struct Z_Construct_UFunction_UCombatComponent_HideAttackRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_HideAttackRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "HideAttackRange", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_HideAttackRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_HideAttackRange_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_HideAttackRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_HideAttackRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execHideAttackRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideAttackRange();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function HideAttackRange **********************************

// ********** Begin Class UCombatComponent Function InitializeCombat *******************************
struct Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics
{
	struct CombatComponent_eventInitializeCombat_Parms
	{
		AGridManager* InGridManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGridManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::NewProp_InGridManager = { "InGridManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponent_eventInitializeCombat_Parms, InGridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::NewProp_InGridManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "InitializeCombat", Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::CombatComponent_eventInitializeCombat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::CombatComponent_eventInitializeCombat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_InitializeCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_InitializeCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execInitializeCombat)
{
	P_GET_OBJECT(AGridManager,Z_Param_InGridManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCombat(Z_Param_InGridManager);
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function InitializeCombat *********************************

// ********** Begin Class UCombatComponent Function IsAlive ****************************************
struct Z_Construct_UFunction_UCombatComponent_IsAlive_Statics
{
	struct CombatComponent_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd""d\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd""d\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "IsAlive", Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::CombatComponent_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::CombatComponent_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function IsAlive ******************************************

// ********** Begin Class UCombatComponent Function IsShowingAttackRange ***************************
struct Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics
{
	struct CombatComponent_eventIsShowingAttackRange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatComponent_eventIsShowingAttackRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComponent_eventIsShowingAttackRange_Parms), &Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "IsShowingAttackRange", Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::CombatComponent_eventIsShowingAttackRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::CombatComponent_eventIsShowingAttackRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execIsShowingAttackRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsShowingAttackRange();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function IsShowingAttackRange *****************************

// ********** Begin Class UCombatComponent Function ShowAttackRange ********************************
struct Z_Construct_UFunction_UCombatComponent_ShowAttackRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ShowAttackRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ShowAttackRange", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ShowAttackRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ShowAttackRange_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatComponent_ShowAttackRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ShowAttackRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent::execShowAttackRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAttackRange();
	P_NATIVE_END;
}
// ********** End Class UCombatComponent Function ShowAttackRange **********************************

// ********** Begin Class UCombatComponent *********************************************************
void UCombatComponent::StaticRegisterNativesUCombatComponent()
{
	UClass* Class = UCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &UCombatComponent::execApplyDamage },
		{ "CalculateDamage", &UCombatComponent::execCalculateDamage },
		{ "CanAttack", &UCombatComponent::execCanAttack },
		{ "ExecuteAttack", &UCombatComponent::execExecuteAttack },
		{ "GetAttackableTargets", &UCombatComponent::execGetAttackableTargets },
		{ "GetAttackCost", &UCombatComponent::execGetAttackCost },
		{ "GetAttackRange", &UCombatComponent::execGetAttackRange },
		{ "GetAttackType", &UCombatComponent::execGetAttackType },
		{ "GetHealthPercent", &UCombatComponent::execGetHealthPercent },
		{ "HideAttackRange", &UCombatComponent::execHideAttackRange },
		{ "InitializeCombat", &UCombatComponent::execInitializeCombat },
		{ "IsAlive", &UCombatComponent::execIsAlive },
		{ "IsShowingAttackRange", &UCombatComponent::execIsShowingAttackRange },
		{ "ShowAttackRange", &UCombatComponent::execShowAttackRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatComponent;
UClass* UCombatComponent::GetPrivateStaticClass()
{
	using TClass = UCombatComponent;
	if (!Z_Registration_Info_UClass_UCombatComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatComponent"),
			Z_Registration_Info_UClass_UCombatComponent.InnerSingleton,
			StaticRegisterNativesUCombatComponent,
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
	return Z_Registration_Info_UClass_UCombatComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
{
	return UCombatComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CombatSystem/CombatComponent.h" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "Combat|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xdd\xa9\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xdd\xa9\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackConfig_MetaData[] = {
		{ "Category", "Combat|Config" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDamageReceived_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackExecuted_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackExecutedWithResult_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatSystem/CombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackConfig;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamageReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackExecuted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackExecutedWithResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightedTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HighlightedTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_ApplyDamage, "ApplyDamage" }, // 2526677707
		{ &Z_Construct_UFunction_UCombatComponent_CalculateDamage, "CalculateDamage" }, // 1449917060
		{ &Z_Construct_UFunction_UCombatComponent_CanAttack, "CanAttack" }, // 888943081
		{ &Z_Construct_UFunction_UCombatComponent_ExecuteAttack, "ExecuteAttack" }, // 2518261500
		{ &Z_Construct_UFunction_UCombatComponent_GetAttackableTargets, "GetAttackableTargets" }, // 1647352096
		{ &Z_Construct_UFunction_UCombatComponent_GetAttackCost, "GetAttackCost" }, // 208431384
		{ &Z_Construct_UFunction_UCombatComponent_GetAttackRange, "GetAttackRange" }, // 583393437
		{ &Z_Construct_UFunction_UCombatComponent_GetAttackType, "GetAttackType" }, // 2356119273
		{ &Z_Construct_UFunction_UCombatComponent_GetHealthPercent, "GetHealthPercent" }, // 2385014377
		{ &Z_Construct_UFunction_UCombatComponent_HideAttackRange, "HideAttackRange" }, // 3820853457
		{ &Z_Construct_UFunction_UCombatComponent_InitializeCombat, "InitializeCombat" }, // 3493749258
		{ &Z_Construct_UFunction_UCombatComponent_IsAlive, "IsAlive" }, // 3824346180
		{ &Z_Construct_UFunction_UCombatComponent_IsShowingAttackRange, "IsShowingAttackRange" }, // 3543413488
		{ &Z_Construct_UFunction_UCombatComponent_ShowAttackRange, "ShowAttackRange" }, // 4205246913
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, Stats), Z_Construct_UScriptStruct_FCombatStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 454819104
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackConfig = { "AttackConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, AttackConfig), Z_Construct_UScriptStruct_FAttackConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackConfig_MetaData), NewProp_AttackConfig_MetaData) }; // 346436840
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnDamageReceived = { "OnDamageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, OnDamageReceived), Z_Construct_UDelegateFunction_ProjectGate_OnDamageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDamageReceived_MetaData), NewProp_OnDamageReceived_MetaData) }; // 2087800992
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, OnHealthChanged), Z_Construct_UDelegateFunction_ProjectGate_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 1480368307
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, OnDeath), Z_Construct_UDelegateFunction_ProjectGate_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 1799124738
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackExecuted = { "OnAttackExecuted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, OnAttackExecuted), Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecuted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackExecuted_MetaData), NewProp_OnAttackExecuted_MetaData) }; // 568335998
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackExecutedWithResult = { "OnAttackExecutedWithResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, OnAttackExecutedWithResult), Z_Construct_UDelegateFunction_ProjectGate_OnAttackExecutedWithResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackExecutedWithResult_MetaData), NewProp_OnAttackExecutedWithResult_MetaData) }; // 4037473085
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, OwnerCharacter), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_HighlightedTargets_Inner = { "HighlightedTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_HighlightedTargets = { "HighlightedTargets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, HighlightedTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightedTargets_MetaData), NewProp_HighlightedTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnDamageReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackExecuted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackExecutedWithResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_HighlightedTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_HighlightedTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
	&UCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatComponent()
{
	if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
UCombatComponent::~UCombatComponent() {}
// ********** End Class UCombatComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 3662908822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h__Script_ProjectGate_3416505225(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
