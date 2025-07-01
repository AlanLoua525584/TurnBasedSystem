// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/UI/TurnDisplayWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnDisplayWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnDisplayWidget();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnDisplayWidget_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ETurnPhase();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTurnDisplayWidget Function HandleEndTurnClicked *************************
struct Z_Construct_UFunction_UTurnDisplayWidget_HandleEndTurnClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_HandleEndTurnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "HandleEndTurnClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_HandleEndTurnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_HandleEndTurnClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_HandleEndTurnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_HandleEndTurnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execHandleEndTurnClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEndTurnClicked();
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function HandleEndTurnClicked ***************************

// ********** Begin Class UTurnDisplayWidget Function HandleNextPhaseClicked ***********************
struct Z_Construct_UFunction_UTurnDisplayWidget_HandleNextPhaseClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbdI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""B\xef\xbf\xbdz\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbdI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""B\xef\xbf\xbdz" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_HandleNextPhaseClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "HandleNextPhaseClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_HandleNextPhaseClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_HandleNextPhaseClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_HandleNextPhaseClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_HandleNextPhaseClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execHandleNextPhaseClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleNextPhaseClicked();
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function HandleNextPhaseClicked *************************

// ********** Begin Class UTurnDisplayWidget Function UpdateActionPoints ***************************
struct Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics
{
	struct TurnDisplayWidget_eventUpdateActionPoints_Parms
	{
		int32 CurrentAP;
		int32 MaxAP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Display" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::NewProp_CurrentAP = { "CurrentAP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdateActionPoints_Parms, CurrentAP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::NewProp_MaxAP = { "MaxAP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdateActionPoints_Parms, MaxAP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::NewProp_CurrentAP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::NewProp_MaxAP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "UpdateActionPoints", Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::TurnDisplayWidget_eventUpdateActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::TurnDisplayWidget_eventUpdateActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execUpdateActionPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentAP);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateActionPoints(Z_Param_CurrentAP,Z_Param_MaxAP);
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function UpdateActionPoints *****************************

// ********** Begin Class UTurnDisplayWidget Function UpdateCameraMode *****************************
struct Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics
{
	struct TurnDisplayWidget_eventUpdateCameraMode_Parms
	{
		bool bIsFocusMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Display" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFocusMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::NewProp_bIsFocusMode_SetBit(void* Obj)
{
	((TurnDisplayWidget_eventUpdateCameraMode_Parms*)Obj)->bIsFocusMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::NewProp_bIsFocusMode = { "bIsFocusMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnDisplayWidget_eventUpdateCameraMode_Parms), &Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::NewProp_bIsFocusMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::NewProp_bIsFocusMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "UpdateCameraMode", Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::TurnDisplayWidget_eventUpdateCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::TurnDisplayWidget_eventUpdateCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execUpdateCameraMode)
{
	P_GET_UBOOL(Z_Param_bIsFocusMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCameraMode(Z_Param_bIsFocusMode);
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function UpdateCameraMode *******************************

// ********** Begin Class UTurnDisplayWidget Function UpdateCurrentCharacter ***********************
struct Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics
{
	struct TurnDisplayWidget_eventUpdateCurrentCharacter_Parms
	{
		FString CharacterName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Display" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdateCurrentCharacter_Parms, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "UpdateCurrentCharacter", Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::TurnDisplayWidget_eventUpdateCurrentCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::TurnDisplayWidget_eventUpdateCurrentCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execUpdateCurrentCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurrentCharacter(Z_Param_CharacterName);
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function UpdateCurrentCharacter *************************

// ********** Begin Class UTurnDisplayWidget Function UpdatePhase **********************************
struct Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics
{
	struct TurnDisplayWidget_eventUpdatePhase_Parms
	{
		ETurnPhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Display" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdatePhase_Parms, NewPhase), Z_Construct_UEnum_ProjectGate_ETurnPhase, METADATA_PARAMS(0, nullptr) }; // 1421385386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "UpdatePhase", Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::TurnDisplayWidget_eventUpdatePhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::TurnDisplayWidget_eventUpdatePhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execUpdatePhase)
{
	P_GET_ENUM(ETurnPhase,Z_Param_NewPhase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePhase(ETurnPhase(Z_Param_NewPhase));
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function UpdatePhase ************************************

// ********** Begin Class UTurnDisplayWidget Function UpdateStamina ********************************
struct Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics
{
	struct TurnDisplayWidget_eventUpdateStamina_Parms
	{
		float CurrentStamina;
		float MaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdateStamina_Parms, CurrentStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdateStamina_Parms, MaxStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "UpdateStamina", Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::TurnDisplayWidget_eventUpdateStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::TurnDisplayWidget_eventUpdateStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execUpdateStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentStamina);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateStamina(Z_Param_CurrentStamina,Z_Param_MaxStamina);
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function UpdateStamina **********************************

// ********** Begin Class UTurnDisplayWidget Function UpdateTurnCount ******************************
struct Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics
{
	struct TurnDisplayWidget_eventUpdateTurnCount_Parms
	{
		int32 NewTurnCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xdc\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xdc\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTurnCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::NewProp_NewTurnCount = { "NewTurnCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdateTurnCount_Parms, NewTurnCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::NewProp_NewTurnCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "UpdateTurnCount", Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::TurnDisplayWidget_eventUpdateTurnCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::TurnDisplayWidget_eventUpdateTurnCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execUpdateTurnCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTurnCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTurnCount(Z_Param_NewTurnCount);
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function UpdateTurnCount ********************************

// ********** Begin Class UTurnDisplayWidget Function UpdateTurnOrder ******************************
struct Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics
{
	struct TurnDisplayWidget_eventUpdateTurnOrder_Parms
	{
		TArray<FString> CharacterNames;
		int32 CurrentIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Display" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::NewProp_CharacterNames_Inner = { "CharacterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::NewProp_CharacterNames = { "CharacterNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdateTurnOrder_Parms, CharacterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNames_MetaData), NewProp_CharacterNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnDisplayWidget_eventUpdateTurnOrder_Parms, CurrentIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::NewProp_CharacterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::NewProp_CharacterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::NewProp_CurrentIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnDisplayWidget, nullptr, "UpdateTurnOrder", Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::TurnDisplayWidget_eventUpdateTurnOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::TurnDisplayWidget_eventUpdateTurnOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnDisplayWidget::execUpdateTurnOrder)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_CharacterNames);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTurnOrder(Z_Param_Out_CharacterNames,Z_Param_CurrentIndex);
	P_NATIVE_END;
}
// ********** End Class UTurnDisplayWidget Function UpdateTurnOrder ********************************

// ********** Begin Class UTurnDisplayWidget *******************************************************
void UTurnDisplayWidget::StaticRegisterNativesUTurnDisplayWidget()
{
	UClass* Class = UTurnDisplayWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleEndTurnClicked", &UTurnDisplayWidget::execHandleEndTurnClicked },
		{ "HandleNextPhaseClicked", &UTurnDisplayWidget::execHandleNextPhaseClicked },
		{ "UpdateActionPoints", &UTurnDisplayWidget::execUpdateActionPoints },
		{ "UpdateCameraMode", &UTurnDisplayWidget::execUpdateCameraMode },
		{ "UpdateCurrentCharacter", &UTurnDisplayWidget::execUpdateCurrentCharacter },
		{ "UpdatePhase", &UTurnDisplayWidget::execUpdatePhase },
		{ "UpdateStamina", &UTurnDisplayWidget::execUpdateStamina },
		{ "UpdateTurnCount", &UTurnDisplayWidget::execUpdateTurnCount },
		{ "UpdateTurnOrder", &UTurnDisplayWidget::execUpdateTurnOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnDisplayWidget;
UClass* UTurnDisplayWidget::GetPrivateStaticClass()
{
	using TClass = UTurnDisplayWidget;
	if (!Z_Registration_Info_UClass_UTurnDisplayWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnDisplayWidget"),
			Z_Registration_Info_UClass_UTurnDisplayWidget.InnerSingleton,
			StaticRegisterNativesUTurnDisplayWidget,
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
	return Z_Registration_Info_UClass_UTurnDisplayWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnDisplayWidget_NoRegister()
{
	return UTurnDisplayWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnDisplayWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TurnBasedSystem/UI/TurnDisplayWidget.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd@\xef\xbf\xbdO\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd@\xef\xbf\xbdO\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnCountText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdj\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdr\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdj\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdr\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacterText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextPhaseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTurnButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderListBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPointsText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === AP \xef\xbf\xbd\xef\xbf\xbd\xdc\xa4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== AP \xef\xbf\xbd\xef\xbf\xbd\xdc\xa4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPointsBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnCountText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacterText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhaseText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextPhaseButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndTurnButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderListBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionPointsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionPointsBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnDisplayWidget_HandleEndTurnClicked, "HandleEndTurnClicked" }, // 2395198862
		{ &Z_Construct_UFunction_UTurnDisplayWidget_HandleNextPhaseClicked, "HandleNextPhaseClicked" }, // 182892488
		{ &Z_Construct_UFunction_UTurnDisplayWidget_UpdateActionPoints, "UpdateActionPoints" }, // 481437736
		{ &Z_Construct_UFunction_UTurnDisplayWidget_UpdateCameraMode, "UpdateCameraMode" }, // 4016839498
		{ &Z_Construct_UFunction_UTurnDisplayWidget_UpdateCurrentCharacter, "UpdateCurrentCharacter" }, // 31170205
		{ &Z_Construct_UFunction_UTurnDisplayWidget_UpdatePhase, "UpdatePhase" }, // 3192808887
		{ &Z_Construct_UFunction_UTurnDisplayWidget_UpdateStamina, "UpdateStamina" }, // 2375569204
		{ &Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnCount, "UpdateTurnCount" }, // 1909222742
		{ &Z_Construct_UFunction_UTurnDisplayWidget_UpdateTurnOrder, "UpdateTurnOrder" }, // 777601712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnDisplayWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_StaminaText = { "StaminaText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, StaminaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaText_MetaData), NewProp_StaminaText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_StaminaBar = { "StaminaBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, StaminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaBar_MetaData), NewProp_StaminaBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_TurnCountText = { "TurnCountText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, TurnCountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnCountText_MetaData), NewProp_TurnCountText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_CurrentCharacterText = { "CurrentCharacterText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, CurrentCharacterText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharacterText_MetaData), NewProp_CurrentCharacterText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_PhaseText = { "PhaseText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, PhaseText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseText_MetaData), NewProp_PhaseText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_NextPhaseButton = { "NextPhaseButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, NextPhaseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextPhaseButton_MetaData), NewProp_NextPhaseButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_EndTurnButton = { "EndTurnButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, EndTurnButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTurnButton_MetaData), NewProp_EndTurnButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_OrderListBox = { "OrderListBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, OrderListBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderListBox_MetaData), NewProp_OrderListBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_CameraModeText = { "CameraModeText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, CameraModeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeText_MetaData), NewProp_CameraModeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_ActionPointsText = { "ActionPointsText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, ActionPointsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPointsText_MetaData), NewProp_ActionPointsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_ActionPointsBar = { "ActionPointsBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnDisplayWidget, ActionPointsBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPointsBar_MetaData), NewProp_ActionPointsBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnDisplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_StaminaText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_StaminaBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_TurnCountText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_CurrentCharacterText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_PhaseText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_NextPhaseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_EndTurnButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_OrderListBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_CameraModeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_ActionPointsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnDisplayWidget_Statics::NewProp_ActionPointsBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnDisplayWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnDisplayWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnDisplayWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnDisplayWidget_Statics::ClassParams = {
	&UTurnDisplayWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnDisplayWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnDisplayWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnDisplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnDisplayWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnDisplayWidget()
{
	if (!Z_Registration_Info_UClass_UTurnDisplayWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnDisplayWidget.OuterSingleton, Z_Construct_UClass_UTurnDisplayWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnDisplayWidget.OuterSingleton;
}
UTurnDisplayWidget::UTurnDisplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnDisplayWidget);
UTurnDisplayWidget::~UTurnDisplayWidget() {}
// ********** End Class UTurnDisplayWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnDisplayWidget, UTurnDisplayWidget::StaticClass, TEXT("UTurnDisplayWidget"), &Z_Registration_Info_UClass_UTurnDisplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnDisplayWidget), 958781610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h__Script_ProjectGate_488711217(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
