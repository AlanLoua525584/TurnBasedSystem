// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/UI/TurnOrderWidget.h"
#include "Widgets/Layout/Anchors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnOrderWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterEventHandler_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTurnOrderWidget Function HighlightCurrentCharacter **********************
struct Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics
{
	struct TurnOrderWidget_eventHighlightCurrentCharacter_Parms
	{
		AActor* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe7\x95\xb6\xe5\x89\x8d\xe8\xa7\x92\xe8\x89\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe7\x95\xb6\xe5\x89\x8d\xe8\xa7\x92\xe8\x89\xb2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventHighlightCurrentCharacter_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "HighlightCurrentCharacter", Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::TurnOrderWidget_eventHighlightCurrentCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::TurnOrderWidget_eventHighlightCurrentCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execHighlightCurrentCharacter)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HighlightCurrentCharacter(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderWidget Function HighlightCurrentCharacter ************************

// ********** Begin Class UTurnOrderWidget Function OnCharacterAPChanged ***************************
struct Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics
{
	struct TurnOrderWidget_eventOnCharacterAPChanged_Parms
	{
		AActor* Character;
		int32 NewAP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe6\x89\x80\xe6\x9c\x89\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84 AP \xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x89\x80\xe6\x9c\x89\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84 AP \xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventOnCharacterAPChanged_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::NewProp_NewAP = { "NewAP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventOnCharacterAPChanged_Parms, NewAP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::NewProp_NewAP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "OnCharacterAPChanged", Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::TurnOrderWidget_eventOnCharacterAPChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::TurnOrderWidget_eventOnCharacterAPChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execOnCharacterAPChanged)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCharacterAPChanged(Z_Param_Character,Z_Param_NewAP);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderWidget Function OnCharacterAPChanged *****************************

// ********** Begin Class UTurnOrderWidget Function OnCharacterHealthChanged ***********************
struct Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics
{
	struct TurnOrderWidget_eventOnCharacterHealthChanged_Parms
	{
		AActor* Character;
		int32 CurrentHealth;
		int32 MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb6\x81\xe5\xae\x9a\xe8\xa7\x92\xe8\x89\xb2\xe8\xa1\x80\xe9\x87\x8f\xe8\xae\x8a\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb6\x81\xe5\xae\x9a\xe8\xa7\x92\xe8\x89\xb2\xe8\xa1\x80\xe9\x87\x8f\xe8\xae\x8a\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventOnCharacterHealthChanged_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventOnCharacterHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventOnCharacterHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "OnCharacterHealthChanged", Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::TurnOrderWidget_eventOnCharacterHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::TurnOrderWidget_eventOnCharacterHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execOnCharacterHealthChanged)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHealth);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCharacterHealthChanged(Z_Param_Character,Z_Param_CurrentHealth,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderWidget Function OnCharacterHealthChanged *************************

// ********** Begin Class UTurnOrderWidget Function SetBottomLayout ********************************
struct Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics
{
	struct TurnOrderWidget_eventSetBottomLayout_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa8\xad\xe7\xbd\xae\xe7\x82\xba\xe4\xb8\x8b\xe6\x96\xb9\xe4\xbd\x88\xe5\xb1\x80\n" },
#endif
		{ "CPP_Default_bEnabled", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa8\xad\xe7\xbd\xae\xe7\x82\xba\xe4\xb8\x8b\xe6\x96\xb9\xe4\xbd\x88\xe5\xb1\x80" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((TurnOrderWidget_eventSetBottomLayout_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnOrderWidget_eventSetBottomLayout_Parms), &Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "SetBottomLayout", Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::TurnOrderWidget_eventSetBottomLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::TurnOrderWidget_eventSetBottomLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execSetBottomLayout)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBottomLayout(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderWidget Function SetBottomLayout **********************************

// ********** Begin Class UTurnOrderWidget Function SetCurrentCharacterInfo ************************
struct Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics
{
	struct TurnOrderWidget_eventSetCurrentCharacterInfo_Parms
	{
		ATurnBasedCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventSetCurrentCharacterInfo_Parms, Character), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "SetCurrentCharacterInfo", Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::TurnOrderWidget_eventSetCurrentCharacterInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::TurnOrderWidget_eventSetCurrentCharacterInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execSetCurrentCharacterInfo)
{
	P_GET_OBJECT(ATurnBasedCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentCharacterInfo(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderWidget Function SetCurrentCharacterInfo **************************

// ********** Begin Class UTurnOrderWidget Function UpdateTurnOrder ********************************
struct Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics
{
	struct TurnOrderWidget_eventUpdateTurnOrder_Parms
	{
		TArray<AActor*> OrderedCharacters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderedCharacters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_OrderedCharacters_Inner = { "OrderedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_OrderedCharacters = { "OrderedCharacters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventUpdateTurnOrder_Parms, OrderedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedCharacters_MetaData), NewProp_OrderedCharacters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_OrderedCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_OrderedCharacters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "UpdateTurnOrder", Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::TurnOrderWidget_eventUpdateTurnOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::TurnOrderWidget_eventUpdateTurnOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execUpdateTurnOrder)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OrderedCharacters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTurnOrder(Z_Param_Out_OrderedCharacters);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderWidget Function UpdateTurnOrder **********************************

// ********** Begin Class UTurnOrderWidget *********************************************************
void UTurnOrderWidget::StaticRegisterNativesUTurnOrderWidget()
{
	UClass* Class = UTurnOrderWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HighlightCurrentCharacter", &UTurnOrderWidget::execHighlightCurrentCharacter },
		{ "OnCharacterAPChanged", &UTurnOrderWidget::execOnCharacterAPChanged },
		{ "OnCharacterHealthChanged", &UTurnOrderWidget::execOnCharacterHealthChanged },
		{ "SetBottomLayout", &UTurnOrderWidget::execSetBottomLayout },
		{ "SetCurrentCharacterInfo", &UTurnOrderWidget::execSetCurrentCharacterInfo },
		{ "UpdateTurnOrder", &UTurnOrderWidget::execUpdateTurnOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnOrderWidget;
UClass* UTurnOrderWidget::GetPrivateStaticClass()
{
	using TClass = UTurnOrderWidget;
	if (!Z_Registration_Info_UClass_UTurnOrderWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnOrderWidget"),
			Z_Registration_Info_UClass_UTurnOrderWidget.InnerSingleton,
			StaticRegisterNativesUTurnOrderWidget,
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
	return Z_Registration_Info_UClass_UTurnOrderWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister()
{
	return UTurnOrderWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnOrderWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * TurnOrderWidget - \xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f\xe9\xa1\xaf\xe7\xa4\xba\xe7\xb5\x84\xe4\xbb\xb6\n * \xe8\xb2\xa0\xe8\xb2\xac\xe9\xa1\xaf\xe7\xa4\xba\xe5\x92\x8c\xe7\xae\xa1\xe7\x90\x86\xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8fUI\xef\xbc\x8c\xe6\x8e\xa1\xe7\x94\xa8\xe7\xb5\x84\xe4\xbb\xb6\xe5\x8c\x96\xe8\xa8\xad\xe8\xa8\x88\xe9\x81\xbf\xe5\x85\x8dGod Code\n */" },
#endif
		{ "IncludePath", "TurnBasedSystem/UI/TurnOrderWidget.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurnOrderWidget - \xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f\xe9\xa1\xaf\xe7\xa4\xba\xe7\xb5\x84\xe4\xbb\xb6\n\xe8\xb2\xa0\xe8\xb2\xac\xe9\xa1\xaf\xe7\xa4\xba\xe5\x92\x8c\xe7\xae\xa1\xe7\x90\x86\xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8fUI\xef\xbc\x8c\xe6\x8e\xa1\xe7\x94\xa8\xe7\xb5\x84\xe4\xbb\xb6\xe5\x8c\x96\xe8\xa8\xad\xe8\xa8\x88\xe9\x81\xbf\xe5\x85\x8dGod Code" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderContainer_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb6\x81\xe5\xae\x9a\xe7\x9a\x84 UI \xe5\x85\x83\xe7\xb4\xa0\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb6\x81\xe5\xae\x9a\xe7\x9a\x84 UI \xe5\x85\x83\xe7\xb4\xa0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacterNameText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x96\xb0\xe5\xa2\x9e\xe7\x95\xb6\xe5\x89\x8d\xe8\xa7\x92\xe8\x89\xb2\xe4\xbf\xa1\xe6\x81\xaf\xe9\xa1\xaf\xe7\xa4\xba\xe5\x8d\x80\xe5\x9f\x9f\xef\xbc\x88\xe5\x8f\xaf\xe9\x81\xb8\xef\xbc\x89\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xb0\xe5\xa2\x9e\xe7\x95\xb6\xe5\x89\x8d\xe8\xa7\x92\xe8\x89\xb2\xe4\xbf\xa1\xe6\x81\xaf\xe9\xa1\xaf\xe7\xa4\xba\xe5\x8d\x80\xe5\x9f\x9f\xef\xbc\x88\xe5\x8f\xaf\xe9\x81\xb8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhaseText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderEntryClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Entry Widget \xe9\xa1\x9e\xe5\x88\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry Widget \xe9\xa1\x9e\xe5\x88\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDisplayCharacters_MetaData[] = {
		{ "Category", "UI|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe9\xa1\xaf\xe7\xa4\xba\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb8\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe9\xa1\xaf\xe7\xa4\xba\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb8\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderPosition_MetaData[] = {
		{ "Category", "UI Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn order UI positioning - \xe6\x96\xb0\xe5\xa2\x9e\xe9\x80\x99\xe4\xba\x9b\xe8\xae\x8a\xe6\x95\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn order UI positioning - \xe6\x96\xb0\xe5\xa2\x9e\xe9\x80\x99\xe4\xba\x9b\xe8\xae\x8a\xe6\x95\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderAnchors_MetaData[] = {
		{ "Category", "UI Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderAlignment_MetaData[] = {
		{ "Category", "UI Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe9\x81\x8b\xe8\xa1\x8c\xe6\x99\x82\xe8\xb3\x87\xe6\x96\x99 ===\n// \xe7\xb7\xa9\xe5\xad\x98\xe7\x9a\x84 Entries\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe9\x81\x8b\xe8\xa1\x8c\xe6\x99\x82\xe8\xb3\x87\xe6\x96\x99 ===\n\xe7\xb7\xa9\xe5\xad\x98\xe7\x9a\x84 Entries" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetPool_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\xa9\xe4\xbb\xb6\xe6\xb1\xa0\xef\xbc\x88\xe5\x84\xaa\xe5\x8c\x96\xe7\x94\xa8\xef\xbc\x89\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe4\xbb\xb6\xe6\xb1\xa0\xef\xbc\x88\xe5\x84\xaa\xe5\x8c\x96\xe7\x94\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundCharacters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xad\x98\xe5\x84\xb2\xe5\xb7\xb2\xe7\xb6\x81\xe5\xae\x9a\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe5\xbc\x95\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xad\x98\xe5\x84\xb2\xe5\xb7\xb2\xe7\xb6\x81\xe5\xae\x9a\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe5\xbc\x95\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x95\xb6\xe5\x89\x8d\xe5\x9b\x9e\xe5\x90\x88\xe8\xa7\x92\xe8\x89\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\xb6\xe5\x89\x8d\xe5\x9b\x9e\xe5\x90\x88\xe8\xa7\x92\xe8\x89\xb2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundAPCharacters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb6\x81\xe5\xae\x9a\xe7\x9a\x84 AP \xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb6\x81\xe5\xae\x9a\xe7\x9a\x84 AP \xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventHandlers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe5\x99\xa8\xe8\x80\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe8\xa4\x87\xe9\x9b\x9c\xe7\x9a\x84\xe7\xb6\x81\xe5\xae\x9a\xe9\x82\x8f\xe8\xbc\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe5\x99\xa8\xe8\x80\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe8\xa4\x87\xe9\x9b\x9c\xe7\x9a\x84\xe7\xb6\x81\xe5\xae\x9a\xe9\x82\x8f\xe8\xbc\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacterNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPhaseText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TurnOrderEntryClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDisplayCharacters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnOrderPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnOrderAnchors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnOrderAlignment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntryWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetPool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundCharacters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundAPCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundAPCharacters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventHandlers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventHandlers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter, "HighlightCurrentCharacter" }, // 2998372070
		{ &Z_Construct_UFunction_UTurnOrderWidget_OnCharacterAPChanged, "OnCharacterAPChanged" }, // 2088993725
		{ &Z_Construct_UFunction_UTurnOrderWidget_OnCharacterHealthChanged, "OnCharacterHealthChanged" }, // 876269638
		{ &Z_Construct_UFunction_UTurnOrderWidget_SetBottomLayout, "SetBottomLayout" }, // 4244431001
		{ &Z_Construct_UFunction_UTurnOrderWidget_SetCurrentCharacterInfo, "SetCurrentCharacterInfo" }, // 1093090306
		{ &Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder, "UpdateTurnOrder" }, // 3427720801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnOrderWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderContainer = { "TurnOrderContainer", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnOrderContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderContainer_MetaData), NewProp_TurnOrderContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_CurrentCharacterNameText = { "CurrentCharacterNameText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, CurrentCharacterNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharacterNameText_MetaData), NewProp_CurrentCharacterNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_CurrentPhaseText = { "CurrentPhaseText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, CurrentPhaseText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhaseText_MetaData), NewProp_CurrentPhaseText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderEntryClass = { "TurnOrderEntryClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnOrderEntryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderEntryClass_MetaData), NewProp_TurnOrderEntryClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_MaxDisplayCharacters = { "MaxDisplayCharacters", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, MaxDisplayCharacters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDisplayCharacters_MetaData), NewProp_MaxDisplayCharacters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderPosition = { "TurnOrderPosition", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnOrderPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderPosition_MetaData), NewProp_TurnOrderPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderAnchors = { "TurnOrderAnchors", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnOrderAnchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderAnchors_MetaData), NewProp_TurnOrderAnchors_MetaData) }; // 110128851
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderAlignment = { "TurnOrderAlignment", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnOrderAlignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderAlignment_MetaData), NewProp_TurnOrderAlignment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EntryWidgets_Inner = { "EntryWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EntryWidgets = { "EntryWidgets", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, EntryWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidgets_MetaData), NewProp_EntryWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_WidgetPool_Inner = { "WidgetPool", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_WidgetPool = { "WidgetPool", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, WidgetPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetPool_MetaData), NewProp_WidgetPool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_BoundCharacters_Inner = { "BoundCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_BoundCharacters = { "BoundCharacters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, BoundCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundCharacters_MetaData), NewProp_BoundCharacters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, CurrentCharacter), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharacter_MetaData), NewProp_CurrentCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_BoundAPCharacters_Inner = { "BoundAPCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_BoundAPCharacters = { "BoundAPCharacters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, BoundAPCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundAPCharacters_MetaData), NewProp_BoundAPCharacters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EventHandlers_Inner = { "EventHandlers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterEventHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EventHandlers = { "EventHandlers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, EventHandlers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventHandlers_MetaData), NewProp_EventHandlers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_CurrentCharacterNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_CurrentPhaseText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderEntryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_MaxDisplayCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EntryWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EntryWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_WidgetPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_WidgetPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_BoundCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_BoundCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_CurrentCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_BoundAPCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_BoundAPCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EventHandlers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EventHandlers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnOrderWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnOrderWidget_Statics::ClassParams = {
	&UTurnOrderWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnOrderWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnOrderWidget()
{
	if (!Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton, Z_Construct_UClass_UTurnOrderWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton;
}
UTurnOrderWidget::UTurnOrderWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnOrderWidget);
UTurnOrderWidget::~UTurnOrderWidget() {}
// ********** End Class UTurnOrderWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnOrderWidget, UTurnOrderWidget::StaticClass, TEXT("UTurnOrderWidget"), &Z_Registration_Info_UClass_UTurnOrderWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnOrderWidget), 25636543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_1767896666(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
