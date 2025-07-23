// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/GateAbilitySystemComponent.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGateAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAbilitySystemComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAbilityActivated ***************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAbilityActivated_Parms
	{
		UGameplayAbility* Ability;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAbilityActivated_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAbilityActivated_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAbilityActivated__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::_Script_ProjectGate_eventOnAbilityActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::_Script_ProjectGate_eventOnAbilityActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityActivated_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityActivated, UGameplayAbility* Ability, AActor* Target)
{
	struct _Script_ProjectGate_eventOnAbilityActivated_Parms
	{
		UGameplayAbility* Ability;
		AActor* Target;
	};
	_Script_ProjectGate_eventOnAbilityActivated_Parms Parms;
	Parms.Ability=Ability;
	Parms.Target=Target;
	OnAbilityActivated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAbilityActivated *****************************************************

// ********** Begin Delegate FOnAbilityEnded *******************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAbilityEnded_Parms
	{
		UGameplayAbility* Ability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAbilityEnded_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::NewProp_Ability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAbilityEnded__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::_Script_ProjectGate_eventOnAbilityEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::_Script_ProjectGate_eventOnAbilityEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityEnded, UGameplayAbility* Ability)
{
	struct _Script_ProjectGate_eventOnAbilityEnded_Parms
	{
		UGameplayAbility* Ability;
	};
	_Script_ProjectGate_eventOnAbilityEnded_Parms Parms;
	Parms.Ability=Ability;
	OnAbilityEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAbilityEnded *********************************************************

// ********** Begin Class UGateAbilitySystemComponent Function CanAffordAbilityByTag ***************
struct Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics
{
	struct GateAbilitySystemComponent_eventCanAffordAbilityByTag_Parms
	{
		FGameplayTag AbilityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectGate|Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateAbilitySystemComponent_eventCanAffordAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GateAbilitySystemComponent_eventCanAffordAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GateAbilitySystemComponent_eventCanAffordAbilityByTag_Parms), &Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateAbilitySystemComponent, nullptr, "CanAffordAbilityByTag", Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::GateAbilitySystemComponent_eventCanAffordAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::GateAbilitySystemComponent_eventCanAffordAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateAbilitySystemComponent::execCanAffordAbilityByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAffordAbilityByTag(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UGateAbilitySystemComponent Function CanAffordAbilityByTag *****************

// ********** Begin Class UGateAbilitySystemComponent Function GetAbilityAPCost ********************
struct Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics
{
	struct GateAbilitySystemComponent_eventGetAbilityAPCost_Parms
	{
		FGameplayTag AbilityTag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectGate|Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateAbilitySystemComponent_eventGetAbilityAPCost_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateAbilitySystemComponent_eventGetAbilityAPCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateAbilitySystemComponent, nullptr, "GetAbilityAPCost", Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::GateAbilitySystemComponent_eventGetAbilityAPCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::GateAbilitySystemComponent_eventGetAbilityAPCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateAbilitySystemComponent::execGetAbilityAPCost)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityAPCost(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UGateAbilitySystemComponent Function GetAbilityAPCost **********************

// ********** Begin Class UGateAbilitySystemComponent Function GetAbilityCooldownTurns *************
struct Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics
{
	struct GateAbilitySystemComponent_eventGetAbilityCooldownTurns_Parms
	{
		FGameplayTag AbilityTag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectGate|Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateAbilitySystemComponent_eventGetAbilityCooldownTurns_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateAbilitySystemComponent_eventGetAbilityCooldownTurns_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateAbilitySystemComponent, nullptr, "GetAbilityCooldownTurns", Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::GateAbilitySystemComponent_eventGetAbilityCooldownTurns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::GateAbilitySystemComponent_eventGetAbilityCooldownTurns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateAbilitySystemComponent::execGetAbilityCooldownTurns)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityCooldownTurns(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UGateAbilitySystemComponent Function GetAbilityCooldownTurns ***************

// ********** Begin Class UGateAbilitySystemComponent Function GetAvailableAbilities ***************
struct Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics
{
	struct GateAbilitySystemComponent_eventGetAvailableAbilities_Parms
	{
		TArray<FGameplayAbilitySpecHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectGate|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdi\xef\xbf\xbd\xce\xa7\xde\xaf\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdi\xef\xbf\xbd\xce\xa7\xde\xaf\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateAbilitySystemComponent_eventGetAvailableAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateAbilitySystemComponent, nullptr, "GetAvailableAbilities", Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::GateAbilitySystemComponent_eventGetAvailableAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::GateAbilitySystemComponent_eventGetAvailableAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateAbilitySystemComponent::execGetAvailableAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAbilitySpecHandle>*)Z_Param__Result=P_THIS->GetAvailableAbilities();
	P_NATIVE_END;
}
// ********** End Class UGateAbilitySystemComponent Function GetAvailableAbilities *****************

// ********** Begin Class UGateAbilitySystemComponent Function TryActivateAbilityWithTarget ********
struct Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics
{
	struct GateAbilitySystemComponent_eventTryActivateAbilityWithTarget_Parms
	{
		FGameplayTag AbilityTag;
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectGate|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateAbilitySystemComponent_eventTryActivateAbilityWithTarget_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateAbilitySystemComponent_eventTryActivateAbilityWithTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GateAbilitySystemComponent_eventTryActivateAbilityWithTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GateAbilitySystemComponent_eventTryActivateAbilityWithTarget_Parms), &Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateAbilitySystemComponent, nullptr, "TryActivateAbilityWithTarget", Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::GateAbilitySystemComponent_eventTryActivateAbilityWithTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::GateAbilitySystemComponent_eventTryActivateAbilityWithTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateAbilitySystemComponent::execTryActivateAbilityWithTarget)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateAbilityWithTarget(Z_Param_AbilityTag,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UGateAbilitySystemComponent Function TryActivateAbilityWithTarget **********

// ********** Begin Class UGateAbilitySystemComponent Function UpdateCooldownsOnTurnEnd ************
struct Z_Construct_UFunction_UGateAbilitySystemComponent_UpdateCooldownsOnTurnEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectGate|Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdN\xef\xbf\xbdo\xef\xbf\xbd\xde\xb2z\xef\xbf\xbd]\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd^\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdN\xef\xbf\xbdo\xef\xbf\xbd\xde\xb2z\xef\xbf\xbd]\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd^" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateAbilitySystemComponent_UpdateCooldownsOnTurnEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateAbilitySystemComponent, nullptr, "UpdateCooldownsOnTurnEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateAbilitySystemComponent_UpdateCooldownsOnTurnEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateAbilitySystemComponent_UpdateCooldownsOnTurnEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGateAbilitySystemComponent_UpdateCooldownsOnTurnEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateAbilitySystemComponent_UpdateCooldownsOnTurnEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateAbilitySystemComponent::execUpdateCooldownsOnTurnEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCooldownsOnTurnEnd();
	P_NATIVE_END;
}
// ********** End Class UGateAbilitySystemComponent Function UpdateCooldownsOnTurnEnd **************

// ********** Begin Class UGateAbilitySystemComponent **********************************************
void UGateAbilitySystemComponent::StaticRegisterNativesUGateAbilitySystemComponent()
{
	UClass* Class = UGateAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAffordAbilityByTag", &UGateAbilitySystemComponent::execCanAffordAbilityByTag },
		{ "GetAbilityAPCost", &UGateAbilitySystemComponent::execGetAbilityAPCost },
		{ "GetAbilityCooldownTurns", &UGateAbilitySystemComponent::execGetAbilityCooldownTurns },
		{ "GetAvailableAbilities", &UGateAbilitySystemComponent::execGetAvailableAbilities },
		{ "TryActivateAbilityWithTarget", &UGateAbilitySystemComponent::execTryActivateAbilityWithTarget },
		{ "UpdateCooldownsOnTurnEnd", &UGateAbilitySystemComponent::execUpdateCooldownsOnTurnEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGateAbilitySystemComponent;
UClass* UGateAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UGateAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UGateAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GateAbilitySystemComponent"),
			Z_Registration_Info_UClass_UGateAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUGateAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UGateAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister()
{
	return UGateAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGateAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GameplayAbilitySystem/GateAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityActivated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc6\xa5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnBasedCooldowns_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdx\xef\xbf\xbds\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdN\xef\xbf\xbdo\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdx\xef\xbf\xbds\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdN\xef\xbf\xbdo" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityActivated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityEnded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TurnBasedCooldowns_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnBasedCooldowns_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TurnBasedCooldowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGateAbilitySystemComponent_CanAffordAbilityByTag, "CanAffordAbilityByTag" }, // 3603306435
		{ &Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityAPCost, "GetAbilityAPCost" }, // 2347466433
		{ &Z_Construct_UFunction_UGateAbilitySystemComponent_GetAbilityCooldownTurns, "GetAbilityCooldownTurns" }, // 3122834634
		{ &Z_Construct_UFunction_UGateAbilitySystemComponent_GetAvailableAbilities, "GetAvailableAbilities" }, // 2505136503
		{ &Z_Construct_UFunction_UGateAbilitySystemComponent_TryActivateAbilityWithTarget, "TryActivateAbilityWithTarget" }, // 2885165926
		{ &Z_Construct_UFunction_UGateAbilitySystemComponent_UpdateCooldownsOnTurnEnd, "UpdateCooldownsOnTurnEnd" }, // 2772437104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGateAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_OnAbilityActivated = { "OnAbilityActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAbilitySystemComponent, OnAbilityActivated), Z_Construct_UDelegateFunction_ProjectGate_OnAbilityActivated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityActivated_MetaData), NewProp_OnAbilityActivated_MetaData) }; // 3552500983
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_OnAbilityEnded = { "OnAbilityEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAbilitySystemComponent, OnAbilityEnded), Z_Construct_UDelegateFunction_ProjectGate_OnAbilityEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityEnded_MetaData), NewProp_OnAbilityEnded_MetaData) }; // 1224238344
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_TurnBasedCooldowns_ValueProp = { "TurnBasedCooldowns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_TurnBasedCooldowns_Key_KeyProp = { "TurnBasedCooldowns_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_TurnBasedCooldowns = { "TurnBasedCooldowns", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateAbilitySystemComponent, TurnBasedCooldowns), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnBasedCooldowns_MetaData), NewProp_TurnBasedCooldowns_MetaData) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGateAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_OnAbilityActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_OnAbilityEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_TurnBasedCooldowns_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_TurnBasedCooldowns_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateAbilitySystemComponent_Statics::NewProp_TurnBasedCooldowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGateAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGateAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGateAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGateAbilitySystemComponent_Statics::ClassParams = {
	&UGateAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGateAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGateAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGateAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGateAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGateAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UGateAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGateAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGateAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGateAbilitySystemComponent.OuterSingleton;
}
UGateAbilitySystemComponent::UGateAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGateAbilitySystemComponent);
UGateAbilitySystemComponent::~UGateAbilitySystemComponent() {}
// ********** End Class UGateAbilitySystemComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateAbilitySystemComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGateAbilitySystemComponent, UGateAbilitySystemComponent::StaticClass, TEXT("UGateAbilitySystemComponent"), &Z_Registration_Info_UClass_UGateAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGateAbilitySystemComponent), 1472117796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateAbilitySystemComponent_h__Script_ProjectGate_3992620671(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateAbilitySystemComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateAbilitySystemComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
