// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HighlightSystem/HighlightComponent.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHighlightComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightManager_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EHighlightType();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHighlightStateChanged **********************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnHighlightStateChanged_Parms
	{
		EHighlightType Type;
		bool bIsHighlighted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bIsHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHighlighted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnHighlightStateChanged_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
void Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::NewProp_bIsHighlighted_SetBit(void* Obj)
{
	((_Script_ProjectGate_eventOnHighlightStateChanged_Parms*)Obj)->bIsHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::NewProp_bIsHighlighted = { "bIsHighlighted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectGate_eventOnHighlightStateChanged_Parms), &Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::NewProp_bIsHighlighted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::NewProp_bIsHighlighted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnHighlightStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnHighlightStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnHighlightStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHighlightStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHighlightStateChanged, EHighlightType Type, bool bIsHighlighted)
{
	struct _Script_ProjectGate_eventOnHighlightStateChanged_Parms
	{
		EHighlightType Type;
		bool bIsHighlighted;
	};
	_Script_ProjectGate_eventOnHighlightStateChanged_Parms Parms;
	Parms.Type=Type;
	Parms.bIsHighlighted=bIsHighlighted ? true : false;
	OnHighlightStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHighlightStateChanged ************************************************

// ********** Begin Class UHighlightComponent Function ClearAllHighlights **************************
struct Z_Construct_UFunction_UHighlightComponent_ClearAllHighlights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_ClearAllHighlights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "ClearAllHighlights", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_ClearAllHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_ClearAllHighlights_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHighlightComponent_ClearAllHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_ClearAllHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execClearAllHighlights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllHighlights();
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function ClearAllHighlights ****************************

// ********** Begin Class UHighlightComponent Function GetActiveHighlights *************************
struct Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics
{
	struct HighlightComponent_eventGetActiveHighlights_Parms
	{
		TArray<EHighlightType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventGetActiveHighlights_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "GetActiveHighlights", Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::HighlightComponent_eventGetActiveHighlights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::HighlightComponent_eventGetActiveHighlights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execGetActiveHighlights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EHighlightType>*)Z_Param__Result=P_THIS->GetActiveHighlights();
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function GetActiveHighlights ***************************

// ********** Begin Class UHighlightComponent Function HasAnyHighlight *****************************
struct Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics
{
	struct HighlightComponent_eventHasAnyHighlight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HighlightComponent_eventHasAnyHighlight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HighlightComponent_eventHasAnyHighlight_Parms), &Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "HasAnyHighlight", Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::HighlightComponent_eventHasAnyHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::HighlightComponent_eventHasAnyHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execHasAnyHighlight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnyHighlight();
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function HasAnyHighlight *******************************

// ********** Begin Class UHighlightComponent Function HighlightActor ******************************
struct Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics
{
	struct HighlightComponent_eventHighlightActor_Parms
	{
		EHighlightType Type;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe5\x9f\xba\xe6\x9c\xac\xe9\xab\x98\xe4\xba\xae\xe5\x8a\x9f\xe8\x83\xbd ===\n" },
#endif
		{ "CPP_Default_Duration", "-1.000000" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe5\x9f\xba\xe6\x9c\xac\xe9\xab\x98\xe4\xba\xae\xe5\x8a\x9f\xe8\x83\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventHighlightActor_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventHighlightActor_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "HighlightActor", Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::HighlightComponent_eventHighlightActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::HighlightComponent_eventHighlightActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_HighlightActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_HighlightActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execHighlightActor)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HighlightActor(EHighlightType(Z_Param_Type),Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function HighlightActor ********************************

// ********** Begin Class UHighlightComponent Function IsHighlighted *******************************
struct Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics
{
	struct HighlightComponent_eventIsHighlighted_Parms
	{
		EHighlightType Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe6\x9f\xa5\xe8\xa9\xa2\xe5\x8a\x9f\xe8\x83\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe6\x9f\xa5\xe8\xa9\xa2\xe5\x8a\x9f\xe8\x83\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventIsHighlighted_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
void Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HighlightComponent_eventIsHighlighted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HighlightComponent_eventIsHighlighted_Parms), &Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "IsHighlighted", Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::HighlightComponent_eventIsHighlighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::HighlightComponent_eventIsHighlighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_IsHighlighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_IsHighlighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execIsHighlighted)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHighlighted(EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function IsHighlighted *********************************

// ********** Begin Class UHighlightComponent Function OnActorClicked ******************************
struct Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics
{
	struct HighlightComponent_eventOnActorClicked_Parms
	{
		AActor* TouchedActor;
		FKey ButtonPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventOnActorClicked_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventOnActorClicked_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::NewProp_TouchedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::NewProp_ButtonPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "OnActorClicked", Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::HighlightComponent_eventOnActorClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::HighlightComponent_eventOnActorClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_OnActorClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_OnActorClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execOnActorClicked)
{
	P_GET_OBJECT(AActor,Z_Param_TouchedActor);
	P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorClicked(Z_Param_TouchedActor,Z_Param_ButtonPressed);
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function OnActorClicked ********************************

// ********** Begin Class UHighlightComponent Function OnActorDeselected ***************************
struct Z_Construct_UFunction_UHighlightComponent_OnActorDeselected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_OnActorDeselected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "OnActorDeselected", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnActorDeselected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_OnActorDeselected_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHighlightComponent_OnActorDeselected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_OnActorDeselected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execOnActorDeselected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorDeselected();
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function OnActorDeselected *****************************

// ********** Begin Class UHighlightComponent Function OnActorSelected *****************************
struct Z_Construct_UFunction_UHighlightComponent_OnActorSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_OnActorSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "OnActorSelected", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnActorSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_OnActorSelected_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHighlightComponent_OnActorSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_OnActorSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execOnActorSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorSelected();
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function OnActorSelected *******************************

// ********** Begin Class UHighlightComponent Function OnMouseBegin ********************************
struct Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics
{
	struct HighlightComponent_eventOnMouseBegin_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xbc\xa0\xe6\xa8\x99\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbc\xa0\xe6\xa8\x99\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventOnMouseBegin_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "OnMouseBegin", Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::HighlightComponent_eventOnMouseBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::HighlightComponent_eventOnMouseBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_OnMouseBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_OnMouseBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execOnMouseBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMouseBegin(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function OnMouseBegin **********************************

// ********** Begin Class UHighlightComponent Function OnMouseEnd **********************************
struct Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics
{
	struct HighlightComponent_eventOnMouseEnd_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventOnMouseEnd_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "OnMouseEnd", Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::HighlightComponent_eventOnMouseEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::HighlightComponent_eventOnMouseEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_OnMouseEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_OnMouseEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execOnMouseEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMouseEnd(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function OnMouseEnd ************************************

// ********** Begin Class UHighlightComponent Function RefreshHighlightComponents ******************
struct Z_Construct_UFunction_UHighlightComponent_RefreshHighlightComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe6\x89\xb9\xe9\x87\x8f\xe6\x93\x8d\xe4\xbd\x9c\xe6\x94\xaf\xe6\x8c\x81 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe6\x89\xb9\xe9\x87\x8f\xe6\x93\x8d\xe4\xbd\x9c\xe6\x94\xaf\xe6\x8c\x81 ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_RefreshHighlightComponents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "RefreshHighlightComponents", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_RefreshHighlightComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_RefreshHighlightComponents_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHighlightComponent_RefreshHighlightComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_RefreshHighlightComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execRefreshHighlightComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshHighlightComponents();
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function RefreshHighlightComponents ********************

// ********** Begin Class UHighlightComponent Function ToggleHighlight *****************************
struct Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics
{
	struct HighlightComponent_eventToggleHighlight_Parms
	{
		EHighlightType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventToggleHighlight_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "ToggleHighlight", Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::HighlightComponent_eventToggleHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::HighlightComponent_eventToggleHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_ToggleHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_ToggleHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execToggleHighlight)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleHighlight(EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function ToggleHighlight *******************************

// ********** Begin Class UHighlightComponent Function UnhighlightActor ****************************
struct Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics
{
	struct HighlightComponent_eventUnhighlightActor_Parms
	{
		EHighlightType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightComponent_eventUnhighlightActor_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightComponent, nullptr, "UnhighlightActor", Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::HighlightComponent_eventUnhighlightActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::HighlightComponent_eventUnhighlightActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightComponent_UnhighlightActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightComponent_UnhighlightActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightComponent::execUnhighlightActor)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnhighlightActor(EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightComponent Function UnhighlightActor ******************************

// ********** Begin Class UHighlightComponent ******************************************************
void UHighlightComponent::StaticRegisterNativesUHighlightComponent()
{
	UClass* Class = UHighlightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllHighlights", &UHighlightComponent::execClearAllHighlights },
		{ "GetActiveHighlights", &UHighlightComponent::execGetActiveHighlights },
		{ "HasAnyHighlight", &UHighlightComponent::execHasAnyHighlight },
		{ "HighlightActor", &UHighlightComponent::execHighlightActor },
		{ "IsHighlighted", &UHighlightComponent::execIsHighlighted },
		{ "OnActorClicked", &UHighlightComponent::execOnActorClicked },
		{ "OnActorDeselected", &UHighlightComponent::execOnActorDeselected },
		{ "OnActorSelected", &UHighlightComponent::execOnActorSelected },
		{ "OnMouseBegin", &UHighlightComponent::execOnMouseBegin },
		{ "OnMouseEnd", &UHighlightComponent::execOnMouseEnd },
		{ "RefreshHighlightComponents", &UHighlightComponent::execRefreshHighlightComponents },
		{ "ToggleHighlight", &UHighlightComponent::execToggleHighlight },
		{ "UnhighlightActor", &UHighlightComponent::execUnhighlightActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHighlightComponent;
UClass* UHighlightComponent::GetPrivateStaticClass()
{
	using TClass = UHighlightComponent;
	if (!Z_Registration_Info_UClass_UHighlightComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HighlightComponent"),
			Z_Registration_Info_UClass_UHighlightComponent.InnerSingleton,
			StaticRegisterNativesUHighlightComponent,
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
	return Z_Registration_Info_UClass_UHighlightComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHighlightComponent_NoRegister()
{
	return UHighlightComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHighlightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\xb5\x84\xe4\xbb\xb6\xe5\x8c\x96\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n * \xe5\x8f\xaf\xe4\xbb\xa5\xe9\x99\x84\xe5\x8a\xa0\xe5\x88\xb0\xe4\xbb\xbb\xe4\xbd\x95 Actor \xe4\xb8\x8a\xef\xbc\x8c\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe6\x8d\xb7\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe5\x8a\x9f\xe8\x83\xbd\n */" },
#endif
		{ "IncludePath", "HighlightSystem/HighlightComponent.h" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb5\x84\xe4\xbb\xb6\xe5\x8c\x96\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x99\x84\xe5\x8a\xa0\xe5\x88\xb0\xe4\xbb\xbb\xe4\xbd\x95 Actor \xe4\xb8\x8a\xef\xbc\x8c\xe6\x8f\x90\xe4\xbe\x9b\xe4\xbe\xbf\xe6\x8d\xb7\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe5\x8a\x9f\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoHighlightOnHover_MetaData[] = {
		{ "Category", "Auto Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe8\x87\xaa\xe5\x8b\x95\xe9\xab\x98\xe4\xba\xae\xe8\xa8\xad\xe7\xbd\xae ===\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe8\x87\xaa\xe5\x8b\x95\xe9\xab\x98\xe4\xba\xae\xe8\xa8\xad\xe7\xbd\xae ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoHighlightWhenSelected_MetaData[] = {
		{ "Category", "Auto Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRemoveHoverOnMouseLeave_MetaData[] = {
		{ "Category", "Auto Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverHighlightType_MetaData[] = {
		{ "Category", "Auto Highlight" },
		{ "EditCondition", "bAutoHighlightOnHover" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlightType_MetaData[] = {
		{ "Category", "Auto Highlight" },
		{ "EditCondition", "bAutoHighlightWhenSelected" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeHighlighted_MetaData[] = {
		{ "Category", "Highlight Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe9\xab\x98\xe4\xba\xae\xe8\xa6\x86\xe8\x93\x8b\xe8\xa8\xad\xe7\xbd\xae ===\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe9\xab\x98\xe4\xba\xae\xe8\xa6\x86\xe8\x93\x8b\xe8\xa8\xad\xe7\xbd\xae ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomHighlightComponents_MetaData[] = {
		{ "Category", "Highlight Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChildComponents_MetaData[] = {
		{ "Category", "Highlight Settings" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHighlightChanged_MetaData[] = {
		{ "Category", "Highlight Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe4\xba\x8b\xe4\xbb\xb6 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe4\xba\x8b\xe4\xbb\xb6 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedHighlightManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb7\xa9\xe5\xad\x98\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\xbc\x95\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb7\xa9\xe5\xad\x98\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\xbc\x95\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutoHighlightOnHover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoHighlightOnHover;
	static void NewProp_bAutoHighlightWhenSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoHighlightWhenSelected;
	static void NewProp_bAutoRemoveHoverOnMouseLeave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRemoveHoverOnMouseLeave;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HoverHighlightType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HoverHighlightType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionHighlightType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionHighlightType;
	static void NewProp_bCanBeHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeHighlighted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomHighlightComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomHighlightComponents;
	static void NewProp_bIncludeChildComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildComponents;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHighlightChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedHighlightManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightComponent_ClearAllHighlights, "ClearAllHighlights" }, // 1715519670
		{ &Z_Construct_UFunction_UHighlightComponent_GetActiveHighlights, "GetActiveHighlights" }, // 1402945107
		{ &Z_Construct_UFunction_UHighlightComponent_HasAnyHighlight, "HasAnyHighlight" }, // 2241575180
		{ &Z_Construct_UFunction_UHighlightComponent_HighlightActor, "HighlightActor" }, // 4241830502
		{ &Z_Construct_UFunction_UHighlightComponent_IsHighlighted, "IsHighlighted" }, // 123670370
		{ &Z_Construct_UFunction_UHighlightComponent_OnActorClicked, "OnActorClicked" }, // 4150274941
		{ &Z_Construct_UFunction_UHighlightComponent_OnActorDeselected, "OnActorDeselected" }, // 448199941
		{ &Z_Construct_UFunction_UHighlightComponent_OnActorSelected, "OnActorSelected" }, // 2908877120
		{ &Z_Construct_UFunction_UHighlightComponent_OnMouseBegin, "OnMouseBegin" }, // 274086025
		{ &Z_Construct_UFunction_UHighlightComponent_OnMouseEnd, "OnMouseEnd" }, // 120681577
		{ &Z_Construct_UFunction_UHighlightComponent_RefreshHighlightComponents, "RefreshHighlightComponents" }, // 4289654301
		{ &Z_Construct_UFunction_UHighlightComponent_ToggleHighlight, "ToggleHighlight" }, // 3495905027
		{ &Z_Construct_UFunction_UHighlightComponent_UnhighlightActor, "UnhighlightActor" }, // 1581923239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoHighlightOnHover_SetBit(void* Obj)
{
	((UHighlightComponent*)Obj)->bAutoHighlightOnHover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoHighlightOnHover = { "bAutoHighlightOnHover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHighlightComponent), &Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoHighlightOnHover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoHighlightOnHover_MetaData), NewProp_bAutoHighlightOnHover_MetaData) };
void Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoHighlightWhenSelected_SetBit(void* Obj)
{
	((UHighlightComponent*)Obj)->bAutoHighlightWhenSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoHighlightWhenSelected = { "bAutoHighlightWhenSelected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHighlightComponent), &Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoHighlightWhenSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoHighlightWhenSelected_MetaData), NewProp_bAutoHighlightWhenSelected_MetaData) };
void Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoRemoveHoverOnMouseLeave_SetBit(void* Obj)
{
	((UHighlightComponent*)Obj)->bAutoRemoveHoverOnMouseLeave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoRemoveHoverOnMouseLeave = { "bAutoRemoveHoverOnMouseLeave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHighlightComponent), &Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoRemoveHoverOnMouseLeave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRemoveHoverOnMouseLeave_MetaData), NewProp_bAutoRemoveHoverOnMouseLeave_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_HoverHighlightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_HoverHighlightType = { "HoverHighlightType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHighlightComponent, HoverHighlightType), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverHighlightType_MetaData), NewProp_HoverHighlightType_MetaData) }; // 2403232974
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_SelectionHighlightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_SelectionHighlightType = { "SelectionHighlightType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHighlightComponent, SelectionHighlightType), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionHighlightType_MetaData), NewProp_SelectionHighlightType_MetaData) }; // 2403232974
void Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bCanBeHighlighted_SetBit(void* Obj)
{
	((UHighlightComponent*)Obj)->bCanBeHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bCanBeHighlighted = { "bCanBeHighlighted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHighlightComponent), &Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bCanBeHighlighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeHighlighted_MetaData), NewProp_bCanBeHighlighted_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_CustomHighlightComponents_Inner = { "CustomHighlightComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_CustomHighlightComponents = { "CustomHighlightComponents", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHighlightComponent, CustomHighlightComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomHighlightComponents_MetaData), NewProp_CustomHighlightComponents_MetaData) };
void Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bIncludeChildComponents_SetBit(void* Obj)
{
	((UHighlightComponent*)Obj)->bIncludeChildComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bIncludeChildComponents = { "bIncludeChildComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHighlightComponent), &Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bIncludeChildComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeChildComponents_MetaData), NewProp_bIncludeChildComponents_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_OnHighlightChanged = { "OnHighlightChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHighlightComponent, OnHighlightChanged), Z_Construct_UDelegateFunction_ProjectGate_OnHighlightStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHighlightChanged_MetaData), NewProp_OnHighlightChanged_MetaData) }; // 1426758522
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHighlightComponent_Statics::NewProp_CachedHighlightManager = { "CachedHighlightManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHighlightComponent, CachedHighlightManager), Z_Construct_UClass_UHighlightManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedHighlightManager_MetaData), NewProp_CachedHighlightManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighlightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoHighlightOnHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoHighlightWhenSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bAutoRemoveHoverOnMouseLeave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_HoverHighlightType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_HoverHighlightType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_SelectionHighlightType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_SelectionHighlightType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bCanBeHighlighted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_CustomHighlightComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_CustomHighlightComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_bIncludeChildComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_OnHighlightChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightComponent_Statics::NewProp_CachedHighlightManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHighlightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHighlightComponent_Statics::ClassParams = {
	&UHighlightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHighlightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHighlightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHighlightComponent()
{
	if (!Z_Registration_Info_UClass_UHighlightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHighlightComponent.OuterSingleton, Z_Construct_UClass_UHighlightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHighlightComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightComponent);
UHighlightComponent::~UHighlightComponent() {}
// ********** End Class UHighlightComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHighlightComponent, UHighlightComponent::StaticClass, TEXT("UHighlightComponent"), &Z_Registration_Info_UClass_UHighlightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHighlightComponent), 1535168063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h__Script_ProjectGate_1386779065(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
