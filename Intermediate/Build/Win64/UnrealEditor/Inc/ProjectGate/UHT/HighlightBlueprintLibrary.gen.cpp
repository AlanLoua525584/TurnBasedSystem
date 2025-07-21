// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HighlightSystem/HighlightBlueprintLibrary.h"
#include "HighlightSystem/HighlightTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHighlightBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightBlueprintLibrary();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightBlueprintLibrary_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EHighlightType();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FHighlightConfig();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHighlightBlueprintLibrary Function ClearActorHighlights *****************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics
{
	struct HighlightBlueprintLibrary_eventClearActorHighlights_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe6\xb8\x85\xe9\x99\xa4 Actor \xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xab\x98\xe4\xba\xae\n     */" },
#endif
		{ "DisplayName", "Clear All Highlights" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\x85\xe9\x99\xa4 Actor \xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xab\x98\xe4\xba\xae" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventClearActorHighlights_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventClearActorHighlights_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "ClearActorHighlights", Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::HighlightBlueprintLibrary_eventClearActorHighlights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::HighlightBlueprintLibrary_eventClearActorHighlights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execClearActorHighlights)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::ClearActorHighlights(Z_Param_WorldContextObject,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function ClearActorHighlights *******************

// ********** Begin Class UHighlightBlueprintLibrary Function ClearAllHighlightsInWorld ************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics
{
	struct HighlightBlueprintLibrary_eventClearAllHighlightsInWorld_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Batch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe6\xb8\x85\xe9\x99\xa4\xe4\xb8\x96\xe7\x95\x8c\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xab\x98\xe4\xba\xae\n     */" },
#endif
		{ "DisplayName", "Clear All Highlights In World" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\x85\xe9\x99\xa4\xe4\xb8\x96\xe7\x95\x8c\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xab\x98\xe4\xba\xae" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventClearAllHighlightsInWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "ClearAllHighlightsInWorld", Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::HighlightBlueprintLibrary_eventClearAllHighlightsInWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::HighlightBlueprintLibrary_eventClearAllHighlightsInWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execClearAllHighlightsInWorld)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::ClearAllHighlightsInWorld(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function ClearAllHighlightsInWorld **************

// ********** Begin Class UHighlightBlueprintLibrary Function ClearAllHighlightsOfType *************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics
{
	struct HighlightBlueprintLibrary_eventClearAllHighlightsOfType_Parms
	{
		UObject* WorldContextObject;
		EHighlightType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Batch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe6\xb8\x85\xe9\x99\xa4\xe7\x89\xb9\xe5\xae\x9a\xe9\xa1\x9e\xe5\x9e\x8b\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xab\x98\xe4\xba\xae\n     */" },
#endif
		{ "DisplayName", "Clear All Highlights Of Type" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\x85\xe9\x99\xa4\xe7\x89\xb9\xe5\xae\x9a\xe9\xa1\x9e\xe5\x9e\x8b\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xab\x98\xe4\xba\xae" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventClearAllHighlightsOfType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventClearAllHighlightsOfType_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "ClearAllHighlightsOfType", Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::HighlightBlueprintLibrary_eventClearAllHighlightsOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::HighlightBlueprintLibrary_eventClearAllHighlightsOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execClearAllHighlightsOfType)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::ClearAllHighlightsOfType(Z_Param_WorldContextObject,EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function ClearAllHighlightsOfType ***************

// ********** Begin Class UHighlightBlueprintLibrary Function FlashHighlight ***********************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics
{
	struct HighlightBlueprintLibrary_eventFlashHighlight_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		EHighlightType Type;
		float FlashDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe5\x89\xb5\xe5\xbb\xba\xe8\x87\xa8\xe6\x99\x82\xe9\xab\x98\xe4\xba\xae\xe6\x95\x88\xe6\x9e\x9c\xef\xbc\x88\xe8\x87\xaa\xe5\x8b\x95\xe6\xb6\x88\xe5\xa4\xb1\xef\xbc\x89\n     */" },
#endif
		{ "CPP_Default_FlashDuration", "0.500000" },
		{ "DisplayName", "Flash Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x89\xb5\xe5\xbb\xba\xe8\x87\xa8\xe6\x99\x82\xe9\xab\x98\xe4\xba\xae\xe6\x95\x88\xe6\x9e\x9c\xef\xbc\x88\xe8\x87\xaa\xe5\x8b\x95\xe6\xb6\x88\xe5\xa4\xb1\xef\xbc\x89" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlashDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventFlashHighlight_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventFlashHighlight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventFlashHighlight_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_FlashDuration = { "FlashDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventFlashHighlight_Parms, FlashDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::NewProp_FlashDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "FlashHighlight", Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::HighlightBlueprintLibrary_eventFlashHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::HighlightBlueprintLibrary_eventFlashHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execFlashHighlight)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FlashDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::FlashHighlight(Z_Param_WorldContextObject,Z_Param_Actor,EHighlightType(Z_Param_Type),Z_Param_FlashDuration);
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function FlashHighlight *************************

// ********** Begin Class UHighlightBlueprintLibrary Function GetActorHighlights *******************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics
{
	struct HighlightBlueprintLibrary_eventGetActorHighlights_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		TArray<EHighlightType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe7\x8d\xb2\xe5\x8f\x96 Actor \xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\n     */" },
#endif
		{ "DisplayName", "Get Actor Highlights" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8d\xb2\xe5\x8f\x96 Actor \xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetActorHighlights_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetActorHighlights_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetActorHighlights_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "GetActorHighlights", Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::HighlightBlueprintLibrary_eventGetActorHighlights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::HighlightBlueprintLibrary_eventGetActorHighlights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execGetActorHighlights)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EHighlightType>*)Z_Param__Result=UHighlightBlueprintLibrary::GetActorHighlights(Z_Param_WorldContextObject,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function GetActorHighlights *********************

// ********** Begin Class UHighlightBlueprintLibrary Function GetActorsWithHighlight ***************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics
{
	struct HighlightBlueprintLibrary_eventGetActorsWithHighlight_Parms
	{
		UObject* WorldContextObject;
		EHighlightType Type;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe7\x8d\xb2\xe5\x8f\x96\xe5\x85\xb7\xe6\x9c\x89\xe7\x89\xb9\xe5\xae\x9a\xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89 Actor\n     */" },
#endif
		{ "DisplayName", "Get Actors With Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8d\xb2\xe5\x8f\x96\xe5\x85\xb7\xe6\x9c\x89\xe7\x89\xb9\xe5\xae\x9a\xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89 Actor" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetActorsWithHighlight_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetActorsWithHighlight_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetActorsWithHighlight_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "GetActorsWithHighlight", Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::HighlightBlueprintLibrary_eventGetActorsWithHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::HighlightBlueprintLibrary_eventGetActorsWithHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execGetActorsWithHighlight)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UHighlightBlueprintLibrary::GetActorsWithHighlight(Z_Param_WorldContextObject,EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function GetActorsWithHighlight *****************

// ********** Begin Class UHighlightBlueprintLibrary Function GetHighlightConfig *******************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics
{
	struct HighlightBlueprintLibrary_eventGetHighlightConfig_Parms
	{
		UObject* WorldContextObject;
		EHighlightType Type;
		FHighlightConfig ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe7\x8d\xb2\xe5\x8f\x96\xe9\xab\x98\xe4\xba\xae\xe9\x85\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\n     */" },
#endif
		{ "DisplayName", "Get Highlight Config" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8d\xb2\xe5\x8f\x96\xe9\xab\x98\xe4\xba\xae\xe9\x85\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetHighlightConfig_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetHighlightConfig_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventGetHighlightConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FHighlightConfig, METADATA_PARAMS(0, nullptr) }; // 1572855345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "GetHighlightConfig", Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::HighlightBlueprintLibrary_eventGetHighlightConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::HighlightBlueprintLibrary_eventGetHighlightConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execGetHighlightConfig)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHighlightConfig*)Z_Param__Result=UHighlightBlueprintLibrary::GetHighlightConfig(Z_Param_WorldContextObject,EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function GetHighlightConfig *********************

// ********** Begin Class UHighlightBlueprintLibrary Function HasAnyHighlight **********************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics
{
	struct HighlightBlueprintLibrary_eventHasAnyHighlight_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe6\xaa\xa2\xe6\x9f\xa5 Actor \xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe4\xbb\xbb\xe4\xbd\x95\xe9\xab\x98\xe4\xba\xae\n     */" },
#endif
		{ "DisplayName", "Has Any Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaa\xa2\xe6\x9f\xa5 Actor \xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe4\xbb\xbb\xe4\xbd\x95\xe9\xab\x98\xe4\xba\xae" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHasAnyHighlight_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHasAnyHighlight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HighlightBlueprintLibrary_eventHasAnyHighlight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HighlightBlueprintLibrary_eventHasAnyHighlight_Parms), &Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "HasAnyHighlight", Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::HighlightBlueprintLibrary_eventHasAnyHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::HighlightBlueprintLibrary_eventHasAnyHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execHasAnyHighlight)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHighlightBlueprintLibrary::HasAnyHighlight(Z_Param_WorldContextObject,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function HasAnyHighlight ************************

// ********** Begin Class UHighlightBlueprintLibrary Function HighlightActor ***********************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics
{
	struct HighlightBlueprintLibrary_eventHighlightActor_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		EHighlightType Type;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * \xe7\x82\xba Actor \xe8\xa8\xad\xe7\xbd\xae\xe9\xab\x98\xe4\xba\xae\n         * @param WorldContextObject \xe4\xb8\x96\xe7\x95\x8c\xe4\xb8\x8a\xe4\xb8\x8b\xe6\x96\x87\n         * @param Actor \xe8\xa6\x81\xe9\xab\x98\xe4\xba\xae\xe7\x9a\x84 Actor\n         * @param Type \xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\n         * @param Duration \xe6\x8c\x81\xe7\xba\x8c\xe6\x99\x82\xe9\x96\x93\xef\xbc\x88-1 \xe7\x82\xba\xe6\xb0\xb8\xe4\xb9\x85\xef\xbc\x89\n         */" },
#endif
		{ "CPP_Default_Duration", "-1.000000" },
		{ "DisplayName", "Set Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x82\xba Actor \xe8\xa8\xad\xe7\xbd\xae\xe9\xab\x98\xe4\xba\xae\n@param WorldContextObject \xe4\xb8\x96\xe7\x95\x8c\xe4\xb8\x8a\xe4\xb8\x8b\xe6\x96\x87\n@param Actor \xe8\xa6\x81\xe9\xab\x98\xe4\xba\xae\xe7\x9a\x84 Actor\n@param Type \xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\n@param Duration \xe6\x8c\x81\xe7\xba\x8c\xe6\x99\x82\xe9\x96\x93\xef\xbc\x88-1 \xe7\x82\xba\xe6\xb0\xb8\xe4\xb9\x85\xef\xbc\x89" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHighlightActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHighlightActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHighlightActor_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHighlightActor_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "HighlightActor", Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::HighlightBlueprintLibrary_eventHighlightActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::HighlightBlueprintLibrary_eventHighlightActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execHighlightActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::HighlightActor(Z_Param_WorldContextObject,Z_Param_Actor,EHighlightType(Z_Param_Type),Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function HighlightActor *************************

// ********** Begin Class UHighlightBlueprintLibrary Function HighlightActors **********************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics
{
	struct HighlightBlueprintLibrary_eventHighlightActors_Parms
	{
		UObject* WorldContextObject;
		TArray<AActor*> Actors;
		EHighlightType Type;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Batch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe7\x82\xba\xe5\xa4\x9a\xe5\x80\x8b Actor \xe8\xa8\xad\xe7\xbd\xae\xe7\x9b\xb8\xe5\x90\x8c\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\n     */" },
#endif
		{ "CPP_Default_Duration", "-1.000000" },
		{ "DisplayName", "Highlight Multiple Actors" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x82\xba\xe5\xa4\x9a\xe5\x80\x8b Actor \xe8\xa8\xad\xe7\xbd\xae\xe7\x9b\xb8\xe5\x90\x8c\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHighlightActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHighlightActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHighlightActors_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventHighlightActors_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "HighlightActors", Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::HighlightBlueprintLibrary_eventHighlightActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::HighlightBlueprintLibrary_eventHighlightActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execHighlightActors)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::HighlightActors(Z_Param_WorldContextObject,Z_Param_Out_Actors,EHighlightType(Z_Param_Type),Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function HighlightActors ************************

// ********** Begin Class UHighlightBlueprintLibrary Function IsActorHighlighted *******************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics
{
	struct HighlightBlueprintLibrary_eventIsActorHighlighted_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		EHighlightType Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe6\xaa\xa2\xe6\x9f\xa5 Actor \xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe7\x89\xb9\xe5\xae\x9a\xe9\xa1\x9e\xe5\x9e\x8b\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\n     */" },
#endif
		{ "DisplayName", "Is Actor Highlighted" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaa\xa2\xe6\x9f\xa5 Actor \xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe7\x89\xb9\xe5\xae\x9a\xe9\xa1\x9e\xe5\x9e\x8b\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventIsActorHighlighted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventIsActorHighlighted_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventIsActorHighlighted_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
void Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HighlightBlueprintLibrary_eventIsActorHighlighted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HighlightBlueprintLibrary_eventIsActorHighlighted_Parms), &Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "IsActorHighlighted", Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::HighlightBlueprintLibrary_eventIsActorHighlighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::HighlightBlueprintLibrary_eventIsActorHighlighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execIsActorHighlighted)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHighlightBlueprintLibrary::IsActorHighlighted(Z_Param_WorldContextObject,Z_Param_Actor,EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function IsActorHighlighted *********************

// ********** Begin Class UHighlightBlueprintLibrary Function IsHighlightSystemAvailable ***********
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics
{
	struct HighlightBlueprintLibrary_eventIsHighlightSystemAvailable_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe6\xaa\xa2\xe6\x9f\xa5\xe9\xab\x98\xe4\xba\xae\xe7\xb3\xbb\xe7\xb5\xb1\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe7\x94\xa8\n     */" },
#endif
		{ "DisplayName", "Is Highlight System Available" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaa\xa2\xe6\x9f\xa5\xe9\xab\x98\xe4\xba\xae\xe7\xb3\xbb\xe7\xb5\xb1\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe7\x94\xa8" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventIsHighlightSystemAvailable_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HighlightBlueprintLibrary_eventIsHighlightSystemAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HighlightBlueprintLibrary_eventIsHighlightSystemAvailable_Parms), &Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "IsHighlightSystemAvailable", Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::HighlightBlueprintLibrary_eventIsHighlightSystemAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::HighlightBlueprintLibrary_eventIsHighlightSystemAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execIsHighlightSystemAvailable)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHighlightBlueprintLibrary::IsHighlightSystemAvailable(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function IsHighlightSystemAvailable *************

// ********** Begin Class UHighlightBlueprintLibrary Function SwitchHighlight **********************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics
{
	struct HighlightBlueprintLibrary_eventSwitchHighlight_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		EHighlightType FromType;
		EHighlightType ToType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe5\x9c\xa8\xe5\x85\xa9\xe7\xa8\xae\xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\xe4\xb9\x8b\xe9\x96\x93\xe5\x88\x87\xe6\x8f\x9b\n     */" },
#endif
		{ "DisplayName", "Switch Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe5\x85\xa9\xe7\xa8\xae\xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\xe4\xb9\x8b\xe9\x96\x93\xe5\x88\x87\xe6\x8f\x9b" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FromType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FromType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventSwitchHighlight_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventSwitchHighlight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_FromType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_FromType = { "FromType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventSwitchHighlight_Parms, FromType), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_ToType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_ToType = { "ToType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventSwitchHighlight_Parms, ToType), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_FromType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_FromType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_ToType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::NewProp_ToType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "SwitchHighlight", Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::HighlightBlueprintLibrary_eventSwitchHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::HighlightBlueprintLibrary_eventSwitchHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execSwitchHighlight)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_FromType);
	P_GET_ENUM(EHighlightType,Z_Param_ToType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::SwitchHighlight(Z_Param_WorldContextObject,Z_Param_Actor,EHighlightType(Z_Param_FromType),EHighlightType(Z_Param_ToType));
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function SwitchHighlight ************************

// ********** Begin Class UHighlightBlueprintLibrary Function ToggleHighlight **********************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics
{
	struct HighlightBlueprintLibrary_eventToggleHighlight_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		EHighlightType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe5\x88\x87\xe6\x8f\x9b Actor \xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\x8b\x80\xe6\x85\x8b\n     */" },
#endif
		{ "DisplayName", "Toggle Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x87\xe6\x8f\x9b Actor \xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\x8b\x80\xe6\x85\x8b" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventToggleHighlight_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventToggleHighlight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventToggleHighlight_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "ToggleHighlight", Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::HighlightBlueprintLibrary_eventToggleHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::HighlightBlueprintLibrary_eventToggleHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execToggleHighlight)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::ToggleHighlight(Z_Param_WorldContextObject,Z_Param_Actor,EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function ToggleHighlight ************************

// ********** Begin Class UHighlightBlueprintLibrary Function UnhighlightActor *********************
struct Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics
{
	struct HighlightBlueprintLibrary_eventUnhighlightActor_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		EHighlightType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \xe7\xa7\xbb\xe9\x99\xa4 Actor \xe7\x9a\x84\xe7\x89\xb9\xe5\xae\x9a\xe9\xab\x98\xe4\xba\xae\n     */" },
#endif
		{ "DisplayName", "Remove Highlight" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4 Actor \xe7\x9a\x84\xe7\x89\xb9\xe5\xae\x9a\xe9\xab\x98\xe4\xba\xae" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventUnhighlightActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventUnhighlightActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HighlightBlueprintLibrary_eventUnhighlightActor_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightBlueprintLibrary, nullptr, "UnhighlightActor", Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::HighlightBlueprintLibrary_eventUnhighlightActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::HighlightBlueprintLibrary_eventUnhighlightActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHighlightBlueprintLibrary::execUnhighlightActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHighlightBlueprintLibrary::UnhighlightActor(Z_Param_WorldContextObject,Z_Param_Actor,EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UHighlightBlueprintLibrary Function UnhighlightActor ***********************

// ********** Begin Class UHighlightBlueprintLibrary ***********************************************
void UHighlightBlueprintLibrary::StaticRegisterNativesUHighlightBlueprintLibrary()
{
	UClass* Class = UHighlightBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearActorHighlights", &UHighlightBlueprintLibrary::execClearActorHighlights },
		{ "ClearAllHighlightsInWorld", &UHighlightBlueprintLibrary::execClearAllHighlightsInWorld },
		{ "ClearAllHighlightsOfType", &UHighlightBlueprintLibrary::execClearAllHighlightsOfType },
		{ "FlashHighlight", &UHighlightBlueprintLibrary::execFlashHighlight },
		{ "GetActorHighlights", &UHighlightBlueprintLibrary::execGetActorHighlights },
		{ "GetActorsWithHighlight", &UHighlightBlueprintLibrary::execGetActorsWithHighlight },
		{ "GetHighlightConfig", &UHighlightBlueprintLibrary::execGetHighlightConfig },
		{ "HasAnyHighlight", &UHighlightBlueprintLibrary::execHasAnyHighlight },
		{ "HighlightActor", &UHighlightBlueprintLibrary::execHighlightActor },
		{ "HighlightActors", &UHighlightBlueprintLibrary::execHighlightActors },
		{ "IsActorHighlighted", &UHighlightBlueprintLibrary::execIsActorHighlighted },
		{ "IsHighlightSystemAvailable", &UHighlightBlueprintLibrary::execIsHighlightSystemAvailable },
		{ "SwitchHighlight", &UHighlightBlueprintLibrary::execSwitchHighlight },
		{ "ToggleHighlight", &UHighlightBlueprintLibrary::execToggleHighlight },
		{ "UnhighlightActor", &UHighlightBlueprintLibrary::execUnhighlightActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHighlightBlueprintLibrary;
UClass* UHighlightBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UHighlightBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UHighlightBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HighlightBlueprintLibrary"),
			Z_Registration_Info_UClass_UHighlightBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUHighlightBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UHighlightBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UHighlightBlueprintLibrary_NoRegister()
{
	return UHighlightBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHighlightBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint \xe5\x8f\x8b\xe5\xa5\xbd\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\xb3\xbb\xe7\xb5\xb1\xe5\x87\xbd\xe6\x95\xb8\xe5\xba\xab\n * \xe6\x8f\x90\xe4\xbe\x9b\xe7\xb0\xa1\xe5\x96\xae\xe6\x98\x93\xe7\x94\xa8\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe5\x8a\x9f\xe8\x83\xbd\xe6\x8e\xa5\xe5\x8f\xa3\n */" },
#endif
		{ "IncludePath", "HighlightSystem/HighlightBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint \xe5\x8f\x8b\xe5\xa5\xbd\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\xb3\xbb\xe7\xb5\xb1\xe5\x87\xbd\xe6\x95\xb8\xe5\xba\xab\n\xe6\x8f\x90\xe4\xbe\x9b\xe7\xb0\xa1\xe5\x96\xae\xe6\x98\x93\xe7\x94\xa8\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe5\x8a\x9f\xe8\x83\xbd\xe6\x8e\xa5\xe5\x8f\xa3" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearActorHighlights, "ClearActorHighlights" }, // 725238797
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsInWorld, "ClearAllHighlightsInWorld" }, // 3956133409
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_ClearAllHighlightsOfType, "ClearAllHighlightsOfType" }, // 1195595899
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_FlashHighlight, "FlashHighlight" }, // 808908895
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorHighlights, "GetActorHighlights" }, // 367499547
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_GetActorsWithHighlight, "GetActorsWithHighlight" }, // 3842284040
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_GetHighlightConfig, "GetHighlightConfig" }, // 3093781673
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_HasAnyHighlight, "HasAnyHighlight" }, // 2907636252
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActor, "HighlightActor" }, // 186115490
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_HighlightActors, "HighlightActors" }, // 2685328789
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_IsActorHighlighted, "IsActorHighlighted" }, // 195901401
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_IsHighlightSystemAvailable, "IsHighlightSystemAvailable" }, // 43041470
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_SwitchHighlight, "SwitchHighlight" }, // 1049057496
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_ToggleHighlight, "ToggleHighlight" }, // 3473164312
		{ &Z_Construct_UFunction_UHighlightBlueprintLibrary_UnhighlightActor, "UnhighlightActor" }, // 182741780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHighlightBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHighlightBlueprintLibrary_Statics::ClassParams = {
	&UHighlightBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHighlightBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHighlightBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UHighlightBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHighlightBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UHighlightBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHighlightBlueprintLibrary.OuterSingleton;
}
UHighlightBlueprintLibrary::UHighlightBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightBlueprintLibrary);
UHighlightBlueprintLibrary::~UHighlightBlueprintLibrary() {}
// ********** End Class UHighlightBlueprintLibrary *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHighlightBlueprintLibrary, UHighlightBlueprintLibrary::StaticClass, TEXT("UHighlightBlueprintLibrary"), &Z_Registration_Info_UClass_UHighlightBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHighlightBlueprintLibrary), 23493524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h__Script_ProjectGate_4196956928(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
