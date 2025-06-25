// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnBasedCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnActionPointsChanged ************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnActionPointsChanged_Parms
	{
		int32 NewActionPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc5\xa7i\xef\xbf\xbd""e\xef\xbf\xbdU\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc5\xa7i\xef\xbf\xbd""e\xef\xbf\xbdU" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewActionPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::NewProp_NewActionPoints = { "NewActionPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnActionPointsChanged_Parms, NewActionPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::NewProp_NewActionPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnActionPointsChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnActionPointsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnActionPointsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActionPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActionPointsChanged, int32 NewActionPoints)
{
	struct _Script_ProjectGate_eventOnActionPointsChanged_Parms
	{
		int32 NewActionPoints;
	};
	_Script_ProjectGate_eventOnActionPointsChanged_Parms Parms;
	Parms.NewActionPoints=NewActionPoints;
	OnActionPointsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnActionPointsChanged **************************************************

// ********** Begin Delegate FOnActionPerformed ****************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnActionPerformed_Parms
	{
		FString ActionName;
		int32 Cost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnActionPerformed_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnActionPerformed_Parms, Cost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::NewProp_Cost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnActionPerformed__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::_Script_ProjectGate_eventOnActionPerformed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::_Script_ProjectGate_eventOnActionPerformed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActionPerformed_DelegateWrapper(const FMulticastScriptDelegate& OnActionPerformed, const FString& ActionName, int32 Cost)
{
	struct _Script_ProjectGate_eventOnActionPerformed_Parms
	{
		FString ActionName;
		int32 Cost;
	};
	_Script_ProjectGate_eventOnActionPerformed_Parms Parms;
	Parms.ActionName=ActionName;
	Parms.Cost=Cost;
	OnActionPerformed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnActionPerformed ******************************************************

// ********** Begin Class ATurnBasedCharacter Function CanPerformAction ****************************
struct Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics
{
	struct TurnBasedCharacter_eventCanPerformAction_Parms
	{
		int32 ActionCost;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionCost;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::NewProp_ActionCost = { "ActionCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventCanPerformAction_Parms, ActionCost), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventCanPerformAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventCanPerformAction_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::NewProp_ActionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "CanPerformAction", Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::TurnBasedCharacter_eventCanPerformAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::TurnBasedCharacter_eventCanPerformAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execCanPerformAction)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ActionCost);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPerformAction(Z_Param_ActionCost);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function CanPerformAction ******************************

// ********** Begin Class ATurnBasedCharacter Function ConsumeActionPoints *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics
{
	struct TurnBasedCharacter_eventConsumeActionPoints_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventConsumeActionPoints_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "ConsumeActionPoints", Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::TurnBasedCharacter_eventConsumeActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::TurnBasedCharacter_eventConsumeActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execConsumeActionPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeActionPoints(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function ConsumeActionPoints ***************************

// ********** Begin Class ATurnBasedCharacter Function IsMyTurn ************************************
struct Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics
{
	struct TurnBasedCharacter_eventIsMyTurn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd""d\xef\xbf\xbd\xdf\xaa\xef\xbf\xbd\xef\xbf\xbd""A\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""d\xef\xbf\xbd\xdf\xaa\xef\xbf\xbd\xef\xbf\xbd""A" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventIsMyTurn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventIsMyTurn_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "IsMyTurn", Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::TurnBasedCharacter_eventIsMyTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::TurnBasedCharacter_eventIsMyTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execIsMyTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMyTurn();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function IsMyTurn **************************************

// ********** Begin Class ATurnBasedCharacter Function MoveToGridPosition **************************
struct Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics
{
	struct TurnBasedCharacter_eventMoveToGridPosition_Parms
	{
		FIntPoint TargetGridPos;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xb2\xbe\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xb2\xbe\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPos;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::NewProp_TargetGridPos = { "TargetGridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventMoveToGridPosition_Parms, TargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventMoveToGridPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventMoveToGridPosition_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::NewProp_TargetGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "MoveToGridPosition", Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::TurnBasedCharacter_eventMoveToGridPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::TurnBasedCharacter_eventMoveToGridPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execMoveToGridPosition)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TargetGridPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MoveToGridPosition(Z_Param_TargetGridPos);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function MoveToGridPosition ****************************

// ********** Begin Class ATurnBasedCharacter Function OnTurnEnd ***********************************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnTurnEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execOnTurnEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnEnd();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function OnTurnEnd *************************************

// ********** Begin Class ATurnBasedCharacter Function OnTurnStart *********************************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xde\xb2z\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xde\xb2z" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnTurnStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execOnTurnStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnStart();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function OnTurnStart ***********************************

// ********** Begin Class ATurnBasedCharacter Function ResetActionPoints ***************************
struct Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "ResetActionPoints", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execResetActionPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActionPoints();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function ResetActionPoints *****************************

// ********** Begin Class ATurnBasedCharacter Function SetGridManager ******************************
struct Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics
{
	struct TurnBasedCharacter_eventSetGridManager_Parms
	{
		AGridManager* Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd]\xef\xbf\xbdm\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb2z\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd]\xef\xbf\xbdm\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb2z\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventSetGridManager_Parms, Manager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "SetGridManager", Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::TurnBasedCharacter_eventSetGridManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::TurnBasedCharacter_eventSetGridManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execSetGridManager)
{
	P_GET_OBJECT(AGridManager,Z_Param_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGridManager(Z_Param_Manager);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function SetGridManager ********************************

// ********** Begin Class ATurnBasedCharacter Function ShowMovementRange ***************************
struct Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xdc\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xbd""d\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xdc\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xbd""d\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "ShowMovementRange", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execShowMovementRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMovementRange();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function ShowMovementRange *****************************

// ********** Begin Class ATurnBasedCharacter Function TryAttack ***********************************
struct Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics
{
	struct TurnBasedCharacter_eventTryAttack_Parms
	{
		AActor* TargetActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventTryAttack_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventTryAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventTryAttack_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "TryAttack", Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::TurnBasedCharacter_eventTryAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::TurnBasedCharacter_eventTryAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_TryAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_TryAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execTryAttack)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryAttack(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function TryAttack *************************************

// ********** Begin Class ATurnBasedCharacter Function TryMove *************************************
struct Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics
{
	struct TurnBasedCharacter_eventTryMove_Parms
	{
		FVector TargetLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xf2\xa5\xbb\xa6\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xf2\xa5\xbb\xa6\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventTryMove_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventTryMove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventTryMove_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "TryMove", Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::TurnBasedCharacter_eventTryMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::TurnBasedCharacter_eventTryMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_TryMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_TryMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execTryMove)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryMove(Z_Param_TargetLocation);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function TryMove ***************************************

// ********** Begin Class ATurnBasedCharacter ******************************************************
void ATurnBasedCharacter::StaticRegisterNativesATurnBasedCharacter()
{
	UClass* Class = ATurnBasedCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPerformAction", &ATurnBasedCharacter::execCanPerformAction },
		{ "ConsumeActionPoints", &ATurnBasedCharacter::execConsumeActionPoints },
		{ "IsMyTurn", &ATurnBasedCharacter::execIsMyTurn },
		{ "MoveToGridPosition", &ATurnBasedCharacter::execMoveToGridPosition },
		{ "OnTurnEnd", &ATurnBasedCharacter::execOnTurnEnd },
		{ "OnTurnStart", &ATurnBasedCharacter::execOnTurnStart },
		{ "ResetActionPoints", &ATurnBasedCharacter::execResetActionPoints },
		{ "SetGridManager", &ATurnBasedCharacter::execSetGridManager },
		{ "ShowMovementRange", &ATurnBasedCharacter::execShowMovementRange },
		{ "TryAttack", &ATurnBasedCharacter::execTryAttack },
		{ "TryMove", &ATurnBasedCharacter::execTryMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATurnBasedCharacter;
UClass* ATurnBasedCharacter::GetPrivateStaticClass()
{
	using TClass = ATurnBasedCharacter;
	if (!Z_Registration_Info_UClass_ATurnBasedCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnBasedCharacter"),
			Z_Registration_Info_UClass_ATurnBasedCharacter.InnerSingleton,
			StaticRegisterNativesATurnBasedCharacter,
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
	return Z_Registration_Info_UClass_ATurnBasedCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister()
{
	return ATurnBasedCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATurnBasedCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TurnBasedSystem/TurnBasedCharacter.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActionPoints_MetaData[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdI\xef\xbf\xbd\xc6\xa8t\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdI\xef\xbf\xbd\xc6\xa8t\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionPoints_MetaData[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionCost_MetaData[] = {
		{ "Category", "Turn System|Action Cost" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xca\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackActionCost_MetaData[] = {
		{ "Category", "Turn System|Action Cost" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Turn System|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xdd\xa9\xef\xbf\xbd(\xef\xbf\xbdN\xef\xbf\xbd\xd3\xbb\xdd\xbbPGAS\xef\xbf\xbd\xef\xbf\xbdX)\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xdd\xa9\xef\xbf\xbd(\xef\xbf\xbdN\xef\xbf\xbd\xd3\xbb\xdd\xbbPGAS\xef\xbf\xbd\xef\xbf\xbdX)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Turn System|Stats" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Turn System|Stats" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionPointsChanged_MetaData[] = {
		{ "Category", "Turn System|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionPerformed_MetaData[] = {
		{ "Category", "Turn System|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMyTurn_MetaData[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGridPosition_MetaData[] = {
		{ "Category", "Grid|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xd2\xa6""b\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xa7\xa4\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xd2\xa6""b\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xa7\xa4\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb3t\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb3t\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActionPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentActionPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveActionCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackActionCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPointsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPerformed;
	static void NewProp_bIsMyTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMyTurn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentGridPosition;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridMoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction, "CanPerformAction" }, // 2263197173
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints, "ConsumeActionPoints" }, // 4284646026
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn, "IsMyTurn" }, // 4140552380
		{ &Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition, "MoveToGridPosition" }, // 2554241082
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd, "OnTurnEnd" }, // 1218860492
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart, "OnTurnStart" }, // 869873300
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints, "ResetActionPoints" }, // 879862725
		{ &Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager, "SetGridManager" }, // 2108601099
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange, "ShowMovementRange" }, // 3956650648
		{ &Z_Construct_UFunction_ATurnBasedCharacter_TryAttack, "TryAttack" }, // 3244038415
		{ &Z_Construct_UFunction_ATurnBasedCharacter_TryMove, "TryMove" }, // 3661582391
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBasedCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MaxActionPoints = { "MaxActionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, MaxActionPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActionPoints_MetaData), NewProp_MaxActionPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentActionPoints = { "CurrentActionPoints", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CurrentActionPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActionPoints_MetaData), NewProp_CurrentActionPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MoveActionCost = { "MoveActionCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, MoveActionCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionCost_MetaData), NewProp_MoveActionCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackActionCost = { "AttackActionCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, AttackActionCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackActionCost_MetaData), NewProp_AttackActionCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPointsChanged = { "OnActionPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, OnActionPointsChanged), Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionPointsChanged_MetaData), NewProp_OnActionPointsChanged_MetaData) }; // 251500784
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPerformed = { "OnActionPerformed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, OnActionPerformed), Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionPerformed_MetaData), NewProp_OnActionPerformed_MetaData) }; // 38371339
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMyTurn_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsMyTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMyTurn = { "bIsMyTurn", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMyTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMyTurn_MetaData), NewProp_bIsMyTurn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentGridPosition = { "CurrentGridPosition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CurrentGridPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGridPosition_MetaData), NewProp_CurrentGridPosition_MetaData) };
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridMoveSpeed = { "GridMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMoveSpeed_MetaData), NewProp_GridMoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MaxActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MoveActionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackActionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPerformed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMyTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentGridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridMoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATurnBasedCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurnBasedCharacter_Statics::ClassParams = {
	&ATurnBasedCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurnBasedCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurnBasedCharacter()
{
	if (!Z_Registration_Info_UClass_ATurnBasedCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurnBasedCharacter.OuterSingleton, Z_Construct_UClass_ATurnBasedCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurnBasedCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnBasedCharacter);
ATurnBasedCharacter::~ATurnBasedCharacter() {}
// ********** End Class ATurnBasedCharacter ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurnBasedCharacter, ATurnBasedCharacter::StaticClass, TEXT("ATurnBasedCharacter"), &Z_Registration_Info_UClass_ATurnBasedCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnBasedCharacter), 423231850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_2541619877(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
