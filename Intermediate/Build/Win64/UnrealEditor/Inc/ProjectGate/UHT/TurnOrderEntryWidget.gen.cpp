// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnOrderEntryWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderEntryWidget();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTurnOrderEntryWidget Function GetAssociatedCharacter ********************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics
{
	struct TurnOrderEntryWidget_eventGetAssociatedCharacter_Parms
	{
		ATurnBasedCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getter\xe5\x87\xbd\xe6\x95\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter\xe5\x87\xbd\xe6\x95\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderEntryWidget_eventGetAssociatedCharacter_Parms, ReturnValue), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "GetAssociatedCharacter", Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::TurnOrderEntryWidget_eventGetAssociatedCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::TurnOrderEntryWidget_eventGetAssociatedCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execGetAssociatedCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATurnBasedCharacter**)Z_Param__Result=P_THIS->GetAssociatedCharacter();
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function GetAssociatedCharacter **********************

// ********** Begin Class UTurnOrderEntryWidget Function PlayHighlightAnimation ********************
static FName NAME_UTurnOrderEntryWidget_PlayHighlightAnimation = FName(TEXT("PlayHighlightAnimation"));
void UTurnOrderEntryWidget::PlayHighlightAnimation()
{
	UFunction* Func = FindFunctionChecked(NAME_UTurnOrderEntryWidget_PlayHighlightAnimation);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintImplementableEvent\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe5\xaf\xa6\xe4\xbd\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintImplementableEvent\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe5\xaf\xa6\xe4\xbd\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "PlayHighlightAnimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTurnOrderEntryWidget Function PlayHighlightAnimation **********************

// ********** Begin Class UTurnOrderEntryWidget Function SetAsCurrentCharacter *********************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics
{
	struct TurnOrderEntryWidget_eventSetAsCurrentCharacter_Parms
	{
		bool bIsCurrent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::NewProp_bIsCurrent_SetBit(void* Obj)
{
	((TurnOrderEntryWidget_eventSetAsCurrentCharacter_Parms*)Obj)->bIsCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::NewProp_bIsCurrent = { "bIsCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnOrderEntryWidget_eventSetAsCurrentCharacter_Parms), &Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::NewProp_bIsCurrent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::NewProp_bIsCurrent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "SetAsCurrentCharacter", Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::TurnOrderEntryWidget_eventSetAsCurrentCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::TurnOrderEntryWidget_eventSetAsCurrentCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execSetAsCurrentCharacter)
{
	P_GET_UBOOL(Z_Param_bIsCurrent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAsCurrentCharacter(Z_Param_bIsCurrent);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function SetAsCurrentCharacter ***********************

// ********** Begin Class UTurnOrderEntryWidget Function SetCharacterData **************************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics
{
	struct TurnOrderEntryWidget_eventSetCharacterData_Parms
	{
		ATurnBasedCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderEntryWidget_eventSetCharacterData_Parms, Character), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "SetCharacterData", Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::TurnOrderEntryWidget_eventSetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::TurnOrderEntryWidget_eventSetCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execSetCharacterData)
{
	P_GET_OBJECT(ATurnBasedCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterData(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function SetCharacterData ****************************

// ********** Begin Class UTurnOrderEntryWidget Function SetHighlighted ****************************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics
{
	struct TurnOrderEntryWidget_eventSetHighlighted_Parms
	{
		bool bHighlight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHighlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::NewProp_bHighlight_SetBit(void* Obj)
{
	((TurnOrderEntryWidget_eventSetHighlighted_Parms*)Obj)->bHighlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::NewProp_bHighlight = { "bHighlight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnOrderEntryWidget_eventSetHighlighted_Parms), &Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::NewProp_bHighlight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::NewProp_bHighlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "SetHighlighted", Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::TurnOrderEntryWidget_eventSetHighlighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::TurnOrderEntryWidget_eventSetHighlighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execSetHighlighted)
{
	P_GET_UBOOL(Z_Param_bHighlight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighlighted(Z_Param_bHighlight);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function SetHighlighted ******************************

// ********** Begin Class UTurnOrderEntryWidget Function SetTurnOrderNumber ************************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics
{
	struct TurnOrderEntryWidget_eventSetTurnOrderNumber_Parms
	{
		int32 Number;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderEntryWidget_eventSetTurnOrderNumber_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::NewProp_Number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "SetTurnOrderNumber", Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::TurnOrderEntryWidget_eventSetTurnOrderNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::TurnOrderEntryWidget_eventSetTurnOrderNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execSetTurnOrderNumber)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTurnOrderNumber(Z_Param_Number);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function SetTurnOrderNumber **************************

// ********** Begin Class UTurnOrderEntryWidget Function UpdateActionPoints ************************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics
{
	struct TurnOrderEntryWidget_eventUpdateActionPoints_Parms
	{
		ATurnBasedCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AP \xe7\x9b\xb8\xe9\x97\x9c\xe6\x96\xb9\xe6\xb3\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AP \xe7\x9b\xb8\xe9\x97\x9c\xe6\x96\xb9\xe6\xb3\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderEntryWidget_eventUpdateActionPoints_Parms, Character), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "UpdateActionPoints", Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::TurnOrderEntryWidget_eventUpdateActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::TurnOrderEntryWidget_eventUpdateActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execUpdateActionPoints)
{
	P_GET_OBJECT(ATurnBasedCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateActionPoints(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function UpdateActionPoints **************************

// ********** Begin Class UTurnOrderEntryWidget Function UpdateAllCharacterInfo ********************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateAllCharacterInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateAllCharacterInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "UpdateAllCharacterInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateAllCharacterInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateAllCharacterInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateAllCharacterInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateAllCharacterInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execUpdateAllCharacterInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAllCharacterInfo();
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function UpdateAllCharacterInfo **********************

// ********** Begin Class UTurnOrderEntryWidget Function UpdateHealthDisplay ***********************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateHealthDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe8\xa1\x80\xe9\x87\x8f\xe9\xa1\xaf\xe7\xa4\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe8\xa1\x80\xe9\x87\x8f\xe9\xa1\xaf\xe7\xa4\xba" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateHealthDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "UpdateHealthDisplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateHealthDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateHealthDisplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateHealthDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateHealthDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execUpdateHealthDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHealthDisplay();
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function UpdateHealthDisplay *************************

// ********** Begin Class UTurnOrderEntryWidget ****************************************************
void UTurnOrderEntryWidget::StaticRegisterNativesUTurnOrderEntryWidget()
{
	UClass* Class = UTurnOrderEntryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssociatedCharacter", &UTurnOrderEntryWidget::execGetAssociatedCharacter },
		{ "SetAsCurrentCharacter", &UTurnOrderEntryWidget::execSetAsCurrentCharacter },
		{ "SetCharacterData", &UTurnOrderEntryWidget::execSetCharacterData },
		{ "SetHighlighted", &UTurnOrderEntryWidget::execSetHighlighted },
		{ "SetTurnOrderNumber", &UTurnOrderEntryWidget::execSetTurnOrderNumber },
		{ "UpdateActionPoints", &UTurnOrderEntryWidget::execUpdateActionPoints },
		{ "UpdateAllCharacterInfo", &UTurnOrderEntryWidget::execUpdateAllCharacterInfo },
		{ "UpdateHealthDisplay", &UTurnOrderEntryWidget::execUpdateHealthDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnOrderEntryWidget;
UClass* UTurnOrderEntryWidget::GetPrivateStaticClass()
{
	using TClass = UTurnOrderEntryWidget;
	if (!Z_Registration_Info_UClass_UTurnOrderEntryWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnOrderEntryWidget"),
			Z_Registration_Info_UClass_UTurnOrderEntryWidget.InnerSingleton,
			StaticRegisterNativesUTurnOrderEntryWidget,
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
	return Z_Registration_Info_UClass_UTurnOrderEntryWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister()
{
	return UTurnOrderEntryWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnOrderEntryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n  * TurnOrderEntryWidget - \xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f\xe4\xb8\xad\xe5\x96\xae\xe5\x80\x8b\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe9\xa1\xaf\xe7\xa4\xba\xe6\xa2\x9d\xe7\x9b\xae\n * \xe8\xb2\xa0\xe8\xb2\xac\xe9\xa1\xaf\xe7\xa4\xba\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe9\xa0\xad\xe5\x83\x8f\xe3\x80\x81\xe8\xa1\x80\xe9\x87\x8f\xe3\x80\x81""AP \xe7\xad\x89\xe4\xbf\xa1\xe6\x81\xaf\n */" },
#endif
		{ "IncludePath", "TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurnOrderEntryWidget - \xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f\xe4\xb8\xad\xe5\x96\xae\xe5\x80\x8b\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe9\xa1\xaf\xe7\xa4\xba\xe6\xa2\x9d\xe7\x9b\xae\n\xe8\xb2\xa0\xe8\xb2\xac\xe9\xa1\xaf\xe7\xa4\xba\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe9\xa0\xad\xe5\x83\x8f\xe3\x80\x81\xe8\xa1\x80\xe9\x87\x8f\xe3\x80\x81""AP \xe7\xad\x89\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPortrait_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitiativeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightFrame_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamColorBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPointsBar_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x96\xb0\xe5\xa2\x9e AP \xe7\x9b\xb8\xe9\x97\x9c\xe7\xb5\x84\xe4\xbb\xb6\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 Blueprint \xe4\xb8\xad\xe6\xb7\xbb\xe5\x8a\xa0\xef\xbc\x89\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xb0\xe5\xa2\x9e AP \xe7\x9b\xb8\xe9\x97\x9c\xe7\xb5\x84\xe4\xbb\xb6\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 Blueprint \xe4\xb8\xad\xe6\xb7\xbb\xe5\x8a\xa0\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPointsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacterIndicator_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x95\xb6\xe5\x89\x8d\xe8\xa7\x92\xe8\x89\xb2\xe6\x8c\x87\xe7\xa4\xba\xe5\x99\xa8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\xb6\xe5\x89\x8d\xe8\xa7\x92\xe8\x89\xb2\xe6\x8c\x87\xe7\xa4\xba\xe5\x99\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderNumber_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f\xe6\x95\xb8\xe5\xad\x97\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f\xe6\x95\xb8\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedCharacter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x95\xb8\xe6\x93\x9a\xe6\x88\x90\xe5\x93\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\xb8\xe6\x93\x9a\xe6\x88\x90\xe5\x93\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPortrait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitiativeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamColorBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionPointsBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionPointsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacterIndicator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter, "GetAssociatedCharacter" }, // 680806997
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation, "PlayHighlightAnimation" }, // 926811410
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_SetAsCurrentCharacter, "SetAsCurrentCharacter" }, // 265144568
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData, "SetCharacterData" }, // 1998659893
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted, "SetHighlighted" }, // 656477071
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_SetTurnOrderNumber, "SetTurnOrderNumber" }, // 2182204897
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateActionPoints, "UpdateActionPoints" }, // 1769826029
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateAllCharacterInfo, "UpdateAllCharacterInfo" }, // 2567588371
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_UpdateHealthDisplay, "UpdateHealthDisplay" }, // 3893275785
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnOrderEntryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CharacterPortrait = { "CharacterPortrait", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, CharacterPortrait), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPortrait_MetaData), NewProp_CharacterPortrait_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_InitiativeText = { "InitiativeText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, InitiativeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitiativeText_MetaData), NewProp_InitiativeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CharacterNameText = { "CharacterNameText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, CharacterNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNameText_MetaData), NewProp_CharacterNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_HighlightFrame = { "HighlightFrame", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, HighlightFrame), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightFrame_MetaData), NewProp_HighlightFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_TeamColorBorder = { "TeamColorBorder", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, TeamColorBorder), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamColorBorder_MetaData), NewProp_TeamColorBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_ActionPointsBar = { "ActionPointsBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, ActionPointsBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPointsBar_MetaData), NewProp_ActionPointsBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_ActionPointsText = { "ActionPointsText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, ActionPointsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPointsText_MetaData), NewProp_ActionPointsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CurrentCharacterIndicator = { "CurrentCharacterIndicator", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, CurrentCharacterIndicator), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharacterIndicator_MetaData), NewProp_CurrentCharacterIndicator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_TurnOrderNumber = { "TurnOrderNumber", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, TurnOrderNumber), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderNumber_MetaData), NewProp_TurnOrderNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_AssociatedCharacter = { "AssociatedCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, AssociatedCharacter), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedCharacter_MetaData), NewProp_AssociatedCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnOrderEntryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CharacterPortrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_InitiativeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CharacterNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_HighlightFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_TeamColorBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_ActionPointsBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_ActionPointsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CurrentCharacterIndicator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_TurnOrderNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_AssociatedCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderEntryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnOrderEntryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderEntryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::ClassParams = {
	&UTurnOrderEntryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnOrderEntryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderEntryWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderEntryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnOrderEntryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnOrderEntryWidget()
{
	if (!Z_Registration_Info_UClass_UTurnOrderEntryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnOrderEntryWidget.OuterSingleton, Z_Construct_UClass_UTurnOrderEntryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnOrderEntryWidget.OuterSingleton;
}
UTurnOrderEntryWidget::UTurnOrderEntryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnOrderEntryWidget);
UTurnOrderEntryWidget::~UTurnOrderEntryWidget() {}
// ********** End Class UTurnOrderEntryWidget ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnOrderEntryWidget, UTurnOrderEntryWidget::StaticClass, TEXT("UTurnOrderEntryWidget"), &Z_Registration_Info_UClass_UTurnOrderEntryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnOrderEntryWidget), 2462172477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h__Script_ProjectGate_961648169(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
