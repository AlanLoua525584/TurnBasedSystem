// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/GASManagerComponent.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGASManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTGATE_API UClass* Z_Construct_UClass_UGASManagerComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UGASManagerComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAttributeSet_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateGameplayAbility_NoRegister();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAbilityCommitted ***************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAbilityCommitted_Parms
	{
		FGameplayTag AbilityTag;
		int32 APCost;
		int32 CooldownTurns;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_APCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CooldownTurns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAbilityCommitted_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::NewProp_APCost = { "APCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAbilityCommitted_Parms, APCost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::NewProp_CooldownTurns = { "CooldownTurns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAbilityCommitted_Parms, CooldownTurns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::NewProp_APCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::NewProp_CooldownTurns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAbilityCommitted__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAbilityCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAbilityCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityCommitted_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCommitted, FGameplayTag AbilityTag, int32 APCost, int32 CooldownTurns)
{
	struct _Script_ProjectGate_eventOnAbilityCommitted_Parms
	{
		FGameplayTag AbilityTag;
		int32 APCost;
		int32 CooldownTurns;
	};
	_Script_ProjectGate_eventOnAbilityCommitted_Parms Parms;
	Parms.AbilityTag=AbilityTag;
	Parms.APCost=APCost;
	Parms.CooldownTurns=CooldownTurns;
	OnAbilityCommitted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAbilityCommitted *****************************************************

// ********** Begin Delegate FOnAttributeChanged ***************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAttributeChanged_Parms
	{
		FGameplayTag AttributeTag;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAttributeChanged_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAttributeChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAttributeChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnAttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnAttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, FGameplayTag AttributeTag, float NewValue)
{
	struct _Script_ProjectGate_eventOnAttributeChanged_Parms
	{
		FGameplayTag AttributeTag;
		float NewValue;
	};
	_Script_ProjectGate_eventOnAttributeChanged_Parms Parms;
	Parms.AttributeTag=AttributeTag;
	Parms.NewValue=NewValue;
	OnAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttributeChanged *****************************************************

// ********** Begin Class UGASManagerComponent Function ApplyGameplayEffectToSelf ******************
struct Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics
{
	struct GASManagerComponent_eventApplyGameplayEffectToSelf_Parms
	{
		TSubclassOf<UGameplayEffect> EffectClass;
		float Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xc4\xaaG\xef\xbf\xbd\xde\xb2z ===\n" },
#endif
		{ "CPP_Default_Level", "1.000000" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xc4\xaaG\xef\xbf\xbd\xde\xb2z ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventApplyGameplayEffectToSelf_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventApplyGameplayEffectToSelf_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "ApplyGameplayEffectToSelf", Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::GASManagerComponent_eventApplyGameplayEffectToSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::GASManagerComponent_eventApplyGameplayEffectToSelf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execApplyGameplayEffectToSelf)
{
	P_GET_OBJECT(UClass,Z_Param_EffectClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyGameplayEffectToSelf(Z_Param_EffectClass,Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function ApplyGameplayEffectToSelf ********************

// ********** Begin Class UGASManagerComponent Function CanActivateAbility *************************
struct Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics
{
	struct GASManagerComponent_eventCanActivateAbility_Parms
	{
		FGameplayTag AbilityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd""d\xef\xbf\xbd\xdf\xa5\\\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd""d\xef\xbf\xbd\xdf\xa5\\\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventCanActivateAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASManagerComponent_eventCanActivateAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASManagerComponent_eventCanActivateAbility_Parms), &Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "CanActivateAbility", Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::GASManagerComponent_eventCanActivateAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::GASManagerComponent_eventCanActivateAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execCanActivateAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanActivateAbility(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function CanActivateAbility ***************************

// ********** Begin Class UGASManagerComponent Function GetAbilityAPCost ***************************
struct Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics
{
	struct GASManagerComponent_eventGetAbilityAPCost_Parms
	{
		FGameplayTag AbilityTag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAbilityAPCost_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAbilityAPCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GetAbilityAPCost", Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::GASManagerComponent_eventGetAbilityAPCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::GASManagerComponent_eventGetAbilityAPCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGetAbilityAPCost)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityAPCost(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GetAbilityAPCost *****************************

// ********** Begin Class UGASManagerComponent Function GetAbilityByTag ****************************
struct Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics
{
	struct GASManagerComponent_eventGetAbilityByTag_Parms
	{
		FGameplayTag AbilityTag;
		UGateGameplayAbility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAbilityByTag_Parms, ReturnValue), Z_Construct_UClass_UGateGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GetAbilityByTag", Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::GASManagerComponent_eventGetAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::GASManagerComponent_eventGetAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGetAbilityByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGateGameplayAbility**)Z_Param__Result=P_THIS->GetAbilityByTag(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GetAbilityByTag ******************************

// ********** Begin Class UGASManagerComponent Function GetAbilityCooldownTurns ********************
struct Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics
{
	struct GASManagerComponent_eventGetAbilityCooldownTurns_Parms
	{
		FGameplayTag AbilityTag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAbilityCooldownTurns_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAbilityCooldownTurns_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GetAbilityCooldownTurns", Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::GASManagerComponent_eventGetAbilityCooldownTurns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::GASManagerComponent_eventGetAbilityCooldownTurns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGetAbilityCooldownTurns)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityCooldownTurns(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GetAbilityCooldownTurns **********************

// ********** Begin Class UGASManagerComponent Function GetAbilitySystemComponent ******************
struct Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics
{
	struct GASManagerComponent_eventGetAbilitySystemComponent_Parms
	{
		UGateAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GetAbilitySystemComponent", Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::GASManagerComponent_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::GASManagerComponent_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGateAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GetAbilitySystemComponent ********************

// ********** Begin Class UGASManagerComponent Function GetActivatableAbilityTags ******************
struct Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics
{
	struct GASManagerComponent_eventGetActivatableAbilityTags_Parms
	{
		TArray<FGameplayTag> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetActivatableAbilityTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GetActivatableAbilityTags", Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::GASManagerComponent_eventGetActivatableAbilityTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::GASManagerComponent_eventGetActivatableAbilityTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGetActivatableAbilityTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetActivatableAbilityTags();
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GetActivatableAbilityTags ********************

// ********** Begin Class UGASManagerComponent Function GetAttributeSet ****************************
struct Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics
{
	struct GASManagerComponent_eventGetAttributeSet_Parms
	{
		UGateAttributeSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAttributeSet_Parms, ReturnValue), Z_Construct_UClass_UGateAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GetAttributeSet", Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::GASManagerComponent_eventGetAttributeSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::GASManagerComponent_eventGetAttributeSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGetAttributeSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGateAttributeSet**)Z_Param__Result=P_THIS->GetAttributeSet();
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GetAttributeSet ******************************

// ********** Begin Class UGASManagerComponent Function GetAttributeValue **************************
struct Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics
{
	struct GASManagerComponent_eventGetAttributeValue_Parms
	{
		FGameplayTag AttributeTag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xdd\xa9\xca\xb3X\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xdd\xa9\xca\xb3X\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAttributeValue_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GetAttributeValue", Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::GASManagerComponent_eventGetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::GASManagerComponent_eventGetAttributeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGetAttributeValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeTag);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GetAttributeValue ****************************

// ********** Begin Class UGASManagerComponent Function GrantAbilities *****************************
struct Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics
{
	struct GASManagerComponent_eventGrantAbilities_Parms
	{
		TArray<TSubclassOf<UGateGameplayAbility>> AbilityClasses;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClasses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::NewProp_AbilityClasses_Inner = { "AbilityClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGateGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::NewProp_AbilityClasses = { "AbilityClasses", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGrantAbilities_Parms, AbilityClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClasses_MetaData), NewProp_AbilityClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::NewProp_AbilityClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::NewProp_AbilityClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GrantAbilities", Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::GASManagerComponent_eventGrantAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::GASManagerComponent_eventGrantAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GrantAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GrantAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGrantAbilities)
{
	P_GET_TARRAY_REF(TSubclassOf<UGateGameplayAbility>,Z_Param_Out_AbilityClasses);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantAbilities(Z_Param_Out_AbilityClasses);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GrantAbilities *******************************

// ********** Begin Class UGASManagerComponent Function GrantAbility *******************************
struct Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics
{
	struct GASManagerComponent_eventGrantAbility_Parms
	{
		TSubclassOf<UGateGameplayAbility> AbilityClass;
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xde\xaf\xef\xbf\xbd\xde\xb2z ===\n" },
#endif
		{ "CPP_Default_Level", "1" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xde\xaf\xef\xbf\xbd\xde\xb2z ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGrantAbility_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGateGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventGrantAbility_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "GrantAbility", Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::GASManagerComponent_eventGrantAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::GASManagerComponent_eventGrantAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_GrantAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_GrantAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execGrantAbility)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantAbility(Z_Param_AbilityClass,Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function GrantAbility *********************************

// ********** Begin Class UGASManagerComponent Function InitializeGASSystem ************************
struct Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics
{
	struct GASManagerComponent_eventInitializeGASSystem_Parms
	{
		AActor* InOwnerActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventInitializeGASSystem_Parms, InOwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::NewProp_InOwnerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "InitializeGASSystem", Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::GASManagerComponent_eventInitializeGASSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::GASManagerComponent_eventInitializeGASSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execInitializeGASSystem)
{
	P_GET_OBJECT(AActor,Z_Param_InOwnerActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeGASSystem(Z_Param_InOwnerActor);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function InitializeGASSystem **************************

// ********** Begin Class UGASManagerComponent Function OnTurnEnd **********************************
struct Z_Construct_UFunction_UGASManagerComponent_OnTurnEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_OnTurnEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "OnTurnEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_OnTurnEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_OnTurnEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGASManagerComponent_OnTurnEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_OnTurnEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execOnTurnEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnEnd();
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function OnTurnEnd ************************************

// ********** Begin Class UGASManagerComponent Function OnTurnStart ********************************
struct Z_Construct_UFunction_UGASManagerComponent_OnTurnStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_OnTurnStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "OnTurnStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_OnTurnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_OnTurnStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGASManagerComponent_OnTurnStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_OnTurnStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execOnTurnStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnStart();
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function OnTurnStart **********************************

// ********** Begin Class UGASManagerComponent Function RemoveActiveEffectsWithTag *****************
struct Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics
{
	struct GASManagerComponent_eventRemoveActiveEffectsWithTag_Parms
	{
		FGameplayTag EffectTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::NewProp_EffectTag = { "EffectTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventRemoveActiveEffectsWithTag_Parms, EffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::NewProp_EffectTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "RemoveActiveEffectsWithTag", Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::GASManagerComponent_eventRemoveActiveEffectsWithTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::GASManagerComponent_eventRemoveActiveEffectsWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execRemoveActiveEffectsWithTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EffectTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveActiveEffectsWithTag(Z_Param_EffectTag);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function RemoveActiveEffectsWithTag *******************

// ********** Begin Class UGASManagerComponent Function SetAttributeValue **************************
struct Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics
{
	struct GASManagerComponent_eventSetAttributeValue_Parms
	{
		FGameplayTag AttributeTag;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventSetAttributeValue_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventSetAttributeValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "SetAttributeValue", Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::GASManagerComponent_eventSetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::GASManagerComponent_eventSetAttributeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execSetAttributeValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttributeValue(Z_Param_AttributeTag,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function SetAttributeValue ****************************

// ********** Begin Class UGASManagerComponent Function TryActivateAbilityByClass ******************
struct Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics
{
	struct GASManagerComponent_eventTryActivateAbilityByClass_Parms
	{
		TSubclassOf<UGateGameplayAbility> AbilityClass;
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventTryActivateAbilityByClass_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGateGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventTryActivateAbilityByClass_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASManagerComponent_eventTryActivateAbilityByClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASManagerComponent_eventTryActivateAbilityByClass_Parms), &Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "TryActivateAbilityByClass", Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::GASManagerComponent_eventTryActivateAbilityByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::GASManagerComponent_eventTryActivateAbilityByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execTryActivateAbilityByClass)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateAbilityByClass(Z_Param_AbilityClass,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function TryActivateAbilityByClass ********************

// ********** Begin Class UGASManagerComponent Function TryActivateAbilityByTag ********************
struct Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics
{
	struct GASManagerComponent_eventTryActivateAbilityByTag_Parms
	{
		FGameplayTag AbilityTag;
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS Manager" },
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventTryActivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASManagerComponent_eventTryActivateAbilityByTag_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASManagerComponent_eventTryActivateAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASManagerComponent_eventTryActivateAbilityByTag_Parms), &Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASManagerComponent, nullptr, "TryActivateAbilityByTag", Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::GASManagerComponent_eventTryActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::GASManagerComponent_eventTryActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASManagerComponent::execTryActivateAbilityByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateAbilityByTag(Z_Param_AbilityTag,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UGASManagerComponent Function TryActivateAbilityByTag **********************

// ********** Begin Class UGASManagerComponent *****************************************************
void UGASManagerComponent::StaticRegisterNativesUGASManagerComponent()
{
	UClass* Class = UGASManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyGameplayEffectToSelf", &UGASManagerComponent::execApplyGameplayEffectToSelf },
		{ "CanActivateAbility", &UGASManagerComponent::execCanActivateAbility },
		{ "GetAbilityAPCost", &UGASManagerComponent::execGetAbilityAPCost },
		{ "GetAbilityByTag", &UGASManagerComponent::execGetAbilityByTag },
		{ "GetAbilityCooldownTurns", &UGASManagerComponent::execGetAbilityCooldownTurns },
		{ "GetAbilitySystemComponent", &UGASManagerComponent::execGetAbilitySystemComponent },
		{ "GetActivatableAbilityTags", &UGASManagerComponent::execGetActivatableAbilityTags },
		{ "GetAttributeSet", &UGASManagerComponent::execGetAttributeSet },
		{ "GetAttributeValue", &UGASManagerComponent::execGetAttributeValue },
		{ "GrantAbilities", &UGASManagerComponent::execGrantAbilities },
		{ "GrantAbility", &UGASManagerComponent::execGrantAbility },
		{ "InitializeGASSystem", &UGASManagerComponent::execInitializeGASSystem },
		{ "OnTurnEnd", &UGASManagerComponent::execOnTurnEnd },
		{ "OnTurnStart", &UGASManagerComponent::execOnTurnStart },
		{ "RemoveActiveEffectsWithTag", &UGASManagerComponent::execRemoveActiveEffectsWithTag },
		{ "SetAttributeValue", &UGASManagerComponent::execSetAttributeValue },
		{ "TryActivateAbilityByClass", &UGASManagerComponent::execTryActivateAbilityByClass },
		{ "TryActivateAbilityByTag", &UGASManagerComponent::execTryActivateAbilityByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGASManagerComponent;
UClass* UGASManagerComponent::GetPrivateStaticClass()
{
	using TClass = UGASManagerComponent;
	if (!Z_Registration_Info_UClass_UGASManagerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GASManagerComponent"),
			Z_Registration_Info_UClass_UGASManagerComponent.InnerSingleton,
			StaticRegisterNativesUGASManagerComponent,
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
	return Z_Registration_Info_UClass_UGASManagerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGASManagerComponent_NoRegister()
{
	return UGASManagerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGASManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameplayAbilitySystem/GASManagerComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCommitted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xc6\xa5\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xc6\xa5\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GAS\xef\xbf\xbd\xd6\xa4\xdf\xb2\xd5\xa5\xef\xbf\xbd - \xef\xbf\xbd\xcf\xa5\xce\xa5\xef\xbf\xbd\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbdGate\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAS\xef\xbf\xbd\xd6\xa4\xdf\xb2\xd5\xa5\xef\xbf\xbd - \xef\xbf\xbd\xcf\xa5\xce\xa5\xef\xbf\xbd\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbdGate\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAbilities_MetaData[] = {
		{ "Category", "GAS Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd_\xef\xbf\xbdl\xef\xbf\xbdt\xef\xbf\xbdm\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd_\xef\xbf\xbdl\xef\xbf\xbdt\xef\xbf\xbdm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingEffects_MetaData[] = {
		{ "Category", "GAS Config" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldowns_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdN\xef\xbf\xbdo\xef\xbf\xbd\xde\xb2z\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GASManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbdN\xef\xbf\xbdo\xef\xbf\xbd\xde\xb2z" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCommitted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingEffects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityCooldowns_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityCooldowns_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityCooldowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASManagerComponent_ApplyGameplayEffectToSelf, "ApplyGameplayEffectToSelf" }, // 3852775420
		{ &Z_Construct_UFunction_UGASManagerComponent_CanActivateAbility, "CanActivateAbility" }, // 1965476899
		{ &Z_Construct_UFunction_UGASManagerComponent_GetAbilityAPCost, "GetAbilityAPCost" }, // 1787810796
		{ &Z_Construct_UFunction_UGASManagerComponent_GetAbilityByTag, "GetAbilityByTag" }, // 1325169110
		{ &Z_Construct_UFunction_UGASManagerComponent_GetAbilityCooldownTurns, "GetAbilityCooldownTurns" }, // 4069189425
		{ &Z_Construct_UFunction_UGASManagerComponent_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 1193711073
		{ &Z_Construct_UFunction_UGASManagerComponent_GetActivatableAbilityTags, "GetActivatableAbilityTags" }, // 1243059344
		{ &Z_Construct_UFunction_UGASManagerComponent_GetAttributeSet, "GetAttributeSet" }, // 808280986
		{ &Z_Construct_UFunction_UGASManagerComponent_GetAttributeValue, "GetAttributeValue" }, // 4147425711
		{ &Z_Construct_UFunction_UGASManagerComponent_GrantAbilities, "GrantAbilities" }, // 596566267
		{ &Z_Construct_UFunction_UGASManagerComponent_GrantAbility, "GrantAbility" }, // 3298647618
		{ &Z_Construct_UFunction_UGASManagerComponent_InitializeGASSystem, "InitializeGASSystem" }, // 3581636900
		{ &Z_Construct_UFunction_UGASManagerComponent_OnTurnEnd, "OnTurnEnd" }, // 1258418923
		{ &Z_Construct_UFunction_UGASManagerComponent_OnTurnStart, "OnTurnStart" }, // 3760455700
		{ &Z_Construct_UFunction_UGASManagerComponent_RemoveActiveEffectsWithTag, "RemoveActiveEffectsWithTag" }, // 178946910
		{ &Z_Construct_UFunction_UGASManagerComponent_SetAttributeValue, "SetAttributeValue" }, // 3044992442
		{ &Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByClass, "TryActivateAbilityByClass" }, // 679311752
		{ &Z_Construct_UFunction_UGASManagerComponent_TryActivateAbilityByTag, "TryActivateAbilityByTag" }, // 3436732153
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_OnAbilityCommitted = { "OnAbilityCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASManagerComponent, OnAbilityCommitted), Z_Construct_UDelegateFunction_ProjectGate_OnAbilityCommitted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityCommitted_MetaData), NewProp_OnAbilityCommitted_MetaData) }; // 3949125410
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_OnAttributeChanged = { "OnAttributeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASManagerComponent, OnAttributeChanged), Z_Construct_UDelegateFunction_ProjectGate_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttributeChanged_MetaData), NewProp_OnAttributeChanged_MetaData) }; // 2526510175
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASManagerComponent, AbilitySystemComponent), Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASManagerComponent, AttributeSet), Z_Construct_UClass_UGateAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_StartingAbilities_Inner = { "StartingAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGateGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_StartingAbilities = { "StartingAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASManagerComponent, StartingAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAbilities_MetaData), NewProp_StartingAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_StartingEffects_Inner = { "StartingEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_StartingEffects = { "StartingEffects", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASManagerComponent, StartingEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingEffects_MetaData), NewProp_StartingEffects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AbilityCooldowns_ValueProp = { "AbilityCooldowns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AbilityCooldowns_Key_KeyProp = { "AbilityCooldowns_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AbilityCooldowns = { "AbilityCooldowns", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASManagerComponent, AbilityCooldowns), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCooldowns_MetaData), NewProp_AbilityCooldowns_MetaData) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_OnAbilityCommitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_OnAttributeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_StartingAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_StartingAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_StartingEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_StartingEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AbilityCooldowns_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AbilityCooldowns_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASManagerComponent_Statics::NewProp_AbilityCooldowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGASManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASManagerComponent_Statics::ClassParams = {
	&UGASManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGASManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGASManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGASManagerComponent()
{
	if (!Z_Registration_Info_UClass_UGASManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASManagerComponent.OuterSingleton, Z_Construct_UClass_UGASManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASManagerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGASManagerComponent);
UGASManagerComponent::~UGASManagerComponent() {}
// ********** End Class UGASManagerComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASManagerComponent, UGASManagerComponent::StaticClass, TEXT("UGASManagerComponent"), &Z_Registration_Info_UClass_UGASManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASManagerComponent), 2689970088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h__Script_ProjectGate_1070525360(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
