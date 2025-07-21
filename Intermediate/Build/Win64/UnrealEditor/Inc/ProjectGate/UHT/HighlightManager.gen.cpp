// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HighlightSystem/HighlightManager.h"
#include "HighlightSystem/HighlightTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHighlightManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightManager();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightManager_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EHighlightType();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FHighlightConfig();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHighlightChanged ***************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnHighlightChanged_Parms
	{
		AActor* Actor;
		EHighlightType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnHighlightChanged_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnHighlightChanged_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnHighlightChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnHighlightChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnHighlightChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHighlightChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHighlightChanged, AActor* Actor, EHighlightType Type)
{
	struct _Script_ProjectGate_eventOnHighlightChanged_Parms
	{
		AActor* Actor;
		EHighlightType Type;
	};
	_Script_ProjectGate_eventOnHighlightChanged_Parms Parms;
	Parms.Actor=Actor;
	Parms.Type=Type;
	OnHighlightChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHighlightChanged *****************************************************

// ********** Begin Class UHighlightManager Function ClearAllHighlights ****************************
struct Z_Construct_UFunction_UHighlightManager_ClearAllHighlights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_ClearAllHighlights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "ClearAllHighlights", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_ClearAllHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_ClearAllHighlights_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHighlightManager_ClearAllHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_ClearAllHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execClearAllHighlights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllHighlights();
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function ClearAllHighlights ******************************

// ********** Begin Class UHighlightManager Function ClearAllHighlightsOfType **********************
struct Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics
{
	struct HighlightManager_eventClearAllHighlightsOfType_Parms
	{
		EHighlightType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventClearAllHighlightsOfType_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "ClearAllHighlightsOfType", Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::HighlightManager_eventClearAllHighlightsOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::HighlightManager_eventClearAllHighlightsOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execClearAllHighlightsOfType)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllHighlightsOfType(EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function ClearAllHighlightsOfType ************************

// ********** Begin Class UHighlightManager Function GetActorHighlights ****************************
struct Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics
{
	struct HighlightManager_eventGetActorHighlights_Parms
	{
		AActor* Actor;
		TArray<EHighlightType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventGetActorHighlights_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventGetActorHighlights_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "GetActorHighlights", Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::HighlightManager_eventGetActorHighlights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::HighlightManager_eventGetActorHighlights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_GetActorHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_GetActorHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execGetActorHighlights)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EHighlightType>*)Z_Param__Result=P_THIS->GetActorHighlights(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function GetActorHighlights ******************************

// ********** Begin Class UHighlightManager Function GetActorsWithHighlight ************************
struct Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics
{
	struct HighlightManager_eventGetActorsWithHighlight_Parms
	{
		EHighlightType Type;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventGetActorsWithHighlight_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventGetActorsWithHighlight_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "GetActorsWithHighlight", Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::HighlightManager_eventGetActorsWithHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::HighlightManager_eventGetActorsWithHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execGetActorsWithHighlight)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsWithHighlight(EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function GetActorsWithHighlight **************************

// ********** Begin Class UHighlightManager Function GetHighlightConfig ****************************
struct Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics
{
	struct HighlightManager_eventGetHighlightConfig_Parms
	{
		EHighlightType Type;
		FHighlightConfig ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventGetHighlightConfig_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventGetHighlightConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FHighlightConfig, METADATA_PARAMS(0, nullptr) }; // 1572855345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "GetHighlightConfig", Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::HighlightManager_eventGetHighlightConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::HighlightManager_eventGetHighlightConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_GetHighlightConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_GetHighlightConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execGetHighlightConfig)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHighlightConfig*)Z_Param__Result=P_THIS->GetHighlightConfig(EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function GetHighlightConfig ******************************

// ********** Begin Class UHighlightManager Function HasHighlight **********************************
struct Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics
{
	struct HighlightManager_eventHasHighlight_Parms
	{
		AActor* Actor;
		EHighlightType Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe6\x9f\xa5\xe8\xa9\xa2\xe5\x8a\x9f\xe8\x83\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe6\x9f\xa5\xe8\xa9\xa2\xe5\x8a\x9f\xe8\x83\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventHasHighlight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventHasHighlight_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
void Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HighlightManager_eventHasHighlight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HighlightManager_eventHasHighlight_Parms), &Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "HasHighlight", Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::HighlightManager_eventHasHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::HighlightManager_eventHasHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_HasHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_HasHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execHasHighlight)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasHighlight(Z_Param_Actor,EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function HasHighlight ************************************

// ********** Begin Class UHighlightManager Function LoadHighlightConfigs **************************
struct Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics
{
	struct HighlightManager_eventLoadHighlightConfigs_Parms
	{
		UDataTable* ConfigTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe9\x85\x8d\xe7\xbd\xae ===\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe9\x85\x8d\xe7\xbd\xae ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfigTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::NewProp_ConfigTable = { "ConfigTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventLoadHighlightConfigs_Parms, ConfigTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::NewProp_ConfigTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "LoadHighlightConfigs", Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::HighlightManager_eventLoadHighlightConfigs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::HighlightManager_eventLoadHighlightConfigs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execLoadHighlightConfigs)
{
	P_GET_OBJECT(UDataTable,Z_Param_ConfigTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadHighlightConfigs(Z_Param_ConfigTable);
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function LoadHighlightConfigs ****************************

// ********** Begin Class UHighlightManager Function RemoveAllHighlights ***************************
struct Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics
{
	struct HighlightManager_eventRemoveAllHighlights_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventRemoveAllHighlights_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "RemoveAllHighlights", Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::HighlightManager_eventRemoveAllHighlights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::HighlightManager_eventRemoveAllHighlights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execRemoveAllHighlights)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllHighlights(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function RemoveAllHighlights *****************************

// ********** Begin Class UHighlightManager Function RemoveHighlight *******************************
struct Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics
{
	struct HighlightManager_eventRemoveHighlight_Parms
	{
		AActor* Actor;
		EHighlightType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventRemoveHighlight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventRemoveHighlight_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "RemoveHighlight", Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::HighlightManager_eventRemoveHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::HighlightManager_eventRemoveHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_RemoveHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_RemoveHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execRemoveHighlight)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveHighlight(Z_Param_Actor,EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function RemoveHighlight *********************************

// ********** Begin Class UHighlightManager Function SetHighlight **********************************
struct Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics
{
	struct HighlightManager_eventSetHighlight_Parms
	{
		AActor* Actor;
		EHighlightType Type;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe6\xa0\xb8\xe5\xbf\x83\xe5\x8a\x9f\xe8\x83\xbd ===\n" },
#endif
		{ "CPP_Default_Duration", "-1.000000" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe6\xa0\xb8\xe5\xbf\x83\xe5\x8a\x9f\xe8\x83\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventSetHighlight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventSetHighlight_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightManager_eventSetHighlight_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightManager, nullptr, "SetHighlight", Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::HighlightManager_eventSetHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::HighlightManager_eventSetHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightManager_SetHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightManager_SetHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightManager::execSetHighlight)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighlight(Z_Param_Actor,EHighlightType(Z_Param_Type),Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UHighlightManager Function SetHighlight ************************************

// ********** Begin Class UHighlightManager ********************************************************
void UHighlightManager::StaticRegisterNativesUHighlightManager()
{
	UClass* Class = UHighlightManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllHighlights", &UHighlightManager::execClearAllHighlights },
		{ "ClearAllHighlightsOfType", &UHighlightManager::execClearAllHighlightsOfType },
		{ "GetActorHighlights", &UHighlightManager::execGetActorHighlights },
		{ "GetActorsWithHighlight", &UHighlightManager::execGetActorsWithHighlight },
		{ "GetHighlightConfig", &UHighlightManager::execGetHighlightConfig },
		{ "HasHighlight", &UHighlightManager::execHasHighlight },
		{ "LoadHighlightConfigs", &UHighlightManager::execLoadHighlightConfigs },
		{ "RemoveAllHighlights", &UHighlightManager::execRemoveAllHighlights },
		{ "RemoveHighlight", &UHighlightManager::execRemoveHighlight },
		{ "SetHighlight", &UHighlightManager::execSetHighlight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHighlightManager;
UClass* UHighlightManager::GetPrivateStaticClass()
{
	using TClass = UHighlightManager;
	if (!Z_Registration_Info_UClass_UHighlightManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HighlightManager"),
			Z_Registration_Info_UClass_UHighlightManager.InnerSingleton,
			StaticRegisterNativesUHighlightManager,
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
	return Z_Registration_Info_UClass_UHighlightManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UHighlightManager_NoRegister()
{
	return UHighlightManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHighlightManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HighlightSystem/HighlightManager.h" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHighlightApplied_MetaData[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe4\xba\x8b\xe4\xbb\xb6 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe4\xba\x8b\xe4\xbb\xb6 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHighlightRemoved_MetaData[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHighlightApplied;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHighlightRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightManager_ClearAllHighlights, "ClearAllHighlights" }, // 4089386748
		{ &Z_Construct_UFunction_UHighlightManager_ClearAllHighlightsOfType, "ClearAllHighlightsOfType" }, // 3916515932
		{ &Z_Construct_UFunction_UHighlightManager_GetActorHighlights, "GetActorHighlights" }, // 4285802665
		{ &Z_Construct_UFunction_UHighlightManager_GetActorsWithHighlight, "GetActorsWithHighlight" }, // 2147365419
		{ &Z_Construct_UFunction_UHighlightManager_GetHighlightConfig, "GetHighlightConfig" }, // 3785673567
		{ &Z_Construct_UFunction_UHighlightManager_HasHighlight, "HasHighlight" }, // 133694517
		{ &Z_Construct_UFunction_UHighlightManager_LoadHighlightConfigs, "LoadHighlightConfigs" }, // 3136186704
		{ &Z_Construct_UFunction_UHighlightManager_RemoveAllHighlights, "RemoveAllHighlights" }, // 774664928
		{ &Z_Construct_UFunction_UHighlightManager_RemoveHighlight, "RemoveHighlight" }, // 387656709
		{ &Z_Construct_UFunction_UHighlightManager_SetHighlight, "SetHighlight" }, // 3959997279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightManager_Statics::NewProp_OnHighlightApplied = { "OnHighlightApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHighlightManager, OnHighlightApplied), Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHighlightApplied_MetaData), NewProp_OnHighlightApplied_MetaData) }; // 1460614195
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightManager_Statics::NewProp_OnHighlightRemoved = { "OnHighlightRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHighlightManager, OnHighlightRemoved), Z_Construct_UDelegateFunction_ProjectGate_OnHighlightChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHighlightRemoved_MetaData), NewProp_OnHighlightRemoved_MetaData) }; // 1460614195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighlightManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightManager_Statics::NewProp_OnHighlightApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightManager_Statics::NewProp_OnHighlightRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHighlightManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHighlightManager_Statics::ClassParams = {
	&UHighlightManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHighlightManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UHighlightManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHighlightManager()
{
	if (!Z_Registration_Info_UClass_UHighlightManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHighlightManager.OuterSingleton, Z_Construct_UClass_UHighlightManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHighlightManager.OuterSingleton;
}
UHighlightManager::UHighlightManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightManager);
UHighlightManager::~UHighlightManager() {}
// ********** End Class UHighlightManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHighlightManager, UHighlightManager::StaticClass, TEXT("UHighlightManager"), &Z_Registration_Info_UClass_UHighlightManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHighlightManager), 2168399713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h__Script_ProjectGate_562608452(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
