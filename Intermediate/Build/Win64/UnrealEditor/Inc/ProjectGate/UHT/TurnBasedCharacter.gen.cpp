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
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister();
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
		{ "Comment", "// Declare delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare delegates" },
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

// ********** Begin Class ATurnBasedCharacter Function CanPerformDynamicMovement *******************
struct Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics
{
	struct TurnBasedCharacter_eventCanPerformDynamicMovement_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xac""d\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbdi\xef\xbf\xbdH\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xba""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xac""d\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbdi\xef\xbf\xbdH\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xba""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventCanPerformDynamicMovement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventCanPerformDynamicMovement_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "CanPerformDynamicMovement", Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::TurnBasedCharacter_eventCanPerformDynamicMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::TurnBasedCharacter_eventCanPerformDynamicMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execCanPerformDynamicMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPerformDynamicMovement();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function CanPerformDynamicMovement *********************

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

// ********** Begin Class ATurnBasedCharacter Function GetCharacterDisplayName *********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics
{
	struct TurnBasedCharacter_eventGetCharacterDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xa6W\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xa6W\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetCharacterDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetCharacterDisplayName", Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::TurnBasedCharacter_eventGetCharacterDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::TurnBasedCharacter_eventGetCharacterDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetCharacterDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCharacterDisplayName();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetCharacterDisplayName ***********************

// ********** Begin Class ATurnBasedCharacter Function GetCurrentActionPoints **********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics
{
	struct TurnBasedCharacter_eventGetCurrentActionPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetCurrentActionPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetCurrentActionPoints", Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::TurnBasedCharacter_eventGetCurrentActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::TurnBasedCharacter_eventGetCurrentActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetCurrentActionPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentActionPoints();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetCurrentActionPoints ************************

// ********** Begin Class ATurnBasedCharacter Function GetEnhancedMovementSystem *******************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics
{
	struct TurnBasedCharacter_eventGetEnhancedMovementSystem_Parms
	{
		UEnhancedMovementSystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetEnhancedMovementSystem_Parms, ReturnValue), Z_Construct_UClass_UEnhancedMovementSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetEnhancedMovementSystem", Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::TurnBasedCharacter_eventGetEnhancedMovementSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::TurnBasedCharacter_eventGetEnhancedMovementSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetEnhancedMovementSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedMovementSystem**)Z_Param__Result=P_THIS->GetEnhancedMovementSystem();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetEnhancedMovementSystem *********************

// ********** Begin Class ATurnBasedCharacter Function GetGridManager ******************************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics
{
	struct TurnBasedCharacter_eventGetGridManager_Parms
	{
		AGridManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GetGridManager\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetGridManager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetGridManager_Parms, ReturnValue), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetGridManager", Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::TurnBasedCharacter_eventGetGridManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::TurnBasedCharacter_eventGetGridManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetGridManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGridManager**)Z_Param__Result=P_THIS->GetGridManager();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetGridManager ********************************

// ********** Begin Class ATurnBasedCharacter Function GetIsPlayerControlled ***********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics
{
	struct TurnBasedCharacter_eventGetIsPlayerControlled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter for player controlled status\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for player controlled status" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventGetIsPlayerControlled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventGetIsPlayerControlled_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetIsPlayerControlled", Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::TurnBasedCharacter_eventGetIsPlayerControlled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::TurnBasedCharacter_eventGetIsPlayerControlled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetIsPlayerControlled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsPlayerControlled();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetIsPlayerControlled *************************

// ********** Begin Class ATurnBasedCharacter Function GetMaxActionPoints **************************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics
{
	struct TurnBasedCharacter_eventGetMaxActionPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetMaxActionPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetMaxActionPoints", Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::TurnBasedCharacter_eventGetMaxActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::TurnBasedCharacter_eventGetMaxActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetMaxActionPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxActionPoints();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetMaxActionPoints ****************************

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
		{ "Comment", "// State Query\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State Query" },
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

// ********** Begin Class ATurnBasedCharacter Function IsPlayerTurn ********************************
struct Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics
{
	struct TurnBasedCharacter_eventIsPlayerTurn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility function to check in Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility function to check in Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventIsPlayerTurn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventIsPlayerTurn_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "IsPlayerTurn", Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::TurnBasedCharacter_eventIsPlayerTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::TurnBasedCharacter_eventIsPlayerTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execIsPlayerTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerTurn();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function IsPlayerTurn **********************************

// ********** Begin Class ATurnBasedCharacter Function IsTurnBasedPlayerControlled *****************
struct Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics
{
	struct TurnBasedCharacter_eventIsTurnBasedPlayerControlled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventIsTurnBasedPlayerControlled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventIsTurnBasedPlayerControlled_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "IsTurnBasedPlayerControlled", Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::TurnBasedCharacter_eventIsTurnBasedPlayerControlled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::TurnBasedCharacter_eventIsTurnBasedPlayerControlled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execIsTurnBasedPlayerControlled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTurnBasedPlayerControlled();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function IsTurnBasedPlayerControlled *******************

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
		{ "Comment", "// Grid Movement\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Movement" },
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
		{ "Comment", "// Turn Management\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn Management" },
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
		{ "Comment", "// Action System\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action System" },
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
		{ "Comment", "// Set Grid Manager\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Grid Manager" },
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
		{ "Comment", "// Show Movement Range\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show Movement Range" },
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
		{ "Comment", "// Basic Actions\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Actions" },
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

// ********** Begin Class ATurnBasedCharacter Function UpdateGridPositionFromWorld *****************
struct Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UpdateGridPosition\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UpdateGridPosition" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "UpdateGridPositionFromWorld", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execUpdateGridPositionFromWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGridPositionFromWorld();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function UpdateGridPositionFromWorld *******************

// ********** Begin Class ATurnBasedCharacter ******************************************************
void ATurnBasedCharacter::StaticRegisterNativesATurnBasedCharacter()
{
	UClass* Class = ATurnBasedCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPerformAction", &ATurnBasedCharacter::execCanPerformAction },
		{ "CanPerformDynamicMovement", &ATurnBasedCharacter::execCanPerformDynamicMovement },
		{ "ConsumeActionPoints", &ATurnBasedCharacter::execConsumeActionPoints },
		{ "GetCharacterDisplayName", &ATurnBasedCharacter::execGetCharacterDisplayName },
		{ "GetCurrentActionPoints", &ATurnBasedCharacter::execGetCurrentActionPoints },
		{ "GetEnhancedMovementSystem", &ATurnBasedCharacter::execGetEnhancedMovementSystem },
		{ "GetGridManager", &ATurnBasedCharacter::execGetGridManager },
		{ "GetIsPlayerControlled", &ATurnBasedCharacter::execGetIsPlayerControlled },
		{ "GetMaxActionPoints", &ATurnBasedCharacter::execGetMaxActionPoints },
		{ "IsMyTurn", &ATurnBasedCharacter::execIsMyTurn },
		{ "IsPlayerTurn", &ATurnBasedCharacter::execIsPlayerTurn },
		{ "IsTurnBasedPlayerControlled", &ATurnBasedCharacter::execIsTurnBasedPlayerControlled },
		{ "MoveToGridPosition", &ATurnBasedCharacter::execMoveToGridPosition },
		{ "OnTurnEnd", &ATurnBasedCharacter::execOnTurnEnd },
		{ "OnTurnStart", &ATurnBasedCharacter::execOnTurnStart },
		{ "ResetActionPoints", &ATurnBasedCharacter::execResetActionPoints },
		{ "SetGridManager", &ATurnBasedCharacter::execSetGridManager },
		{ "ShowMovementRange", &ATurnBasedCharacter::execShowMovementRange },
		{ "TryAttack", &ATurnBasedCharacter::execTryAttack },
		{ "TryMove", &ATurnBasedCharacter::execTryMove },
		{ "UpdateGridPositionFromWorld", &ATurnBasedCharacter::execUpdateGridPositionFromWorld },
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
		{ "Comment", "// Action Points System\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action Points System" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionPoints_MetaData[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionCost_MetaData[] = {
		{ "Category", "Turn System|Action Cost" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action Costs\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action Costs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackActionCost_MetaData[] = {
		{ "Category", "Turn System|Action Cost" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Turn System|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic Stats (will integrate with GAS later)\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Stats (will integrate with GAS later)" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerControlled_MetaData[] = {
		{ "Category", "Turn System|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player Control\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Control" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionPointsChanged_MetaData[] = {
		{ "Category", "Turn System|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionPerformed_MetaData[] = {
		{ "Category", "Turn System|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* = \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd = */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "= \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd =" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridVisualComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//=\xef\xbf\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd=\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=\xef\xbf\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd=" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedMovementSystem_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//=\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb2\xd5\xa5\xef\xbf\xbd=\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb2\xd5\xa5\xef\xbf\xbd=" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMyTurn_MetaData[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn State\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGridPosition_MetaData[] = {
		{ "Category", "Grid|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current grid position\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current grid position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement state\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement speed (units/second)\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement speed (units/second)" },
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
	static void NewProp_bIsPlayerControlled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerControlled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPointsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPerformed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridVisualComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedMovementSystem;
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
		{ &Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement, "CanPerformDynamicMovement" }, // 1715719788
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints, "ConsumeActionPoints" }, // 4284646026
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName, "GetCharacterDisplayName" }, // 885833762
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints, "GetCurrentActionPoints" }, // 284205969
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem, "GetEnhancedMovementSystem" }, // 3010979660
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager, "GetGridManager" }, // 998814976
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled, "GetIsPlayerControlled" }, // 3164430840
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints, "GetMaxActionPoints" }, // 832912254
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn, "IsMyTurn" }, // 1760035642
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn, "IsPlayerTurn" }, // 4002852299
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled, "IsTurnBasedPlayerControlled" }, // 953699246
		{ &Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition, "MoveToGridPosition" }, // 299613846
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd, "OnTurnEnd" }, // 1218860492
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart, "OnTurnStart" }, // 1764934780
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints, "ResetActionPoints" }, // 897087114
		{ &Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager, "SetGridManager" }, // 880628463
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange, "ShowMovementRange" }, // 4152946337
		{ &Z_Construct_UFunction_ATurnBasedCharacter_TryAttack, "TryAttack" }, // 3244038415
		{ &Z_Construct_UFunction_ATurnBasedCharacter_TryMove, "TryMove" }, // 8073906
		{ &Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld, "UpdateGridPositionFromWorld" }, // 836284827
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
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsPlayerControlled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled = { "bIsPlayerControlled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerControlled_MetaData), NewProp_bIsPlayerControlled_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPointsChanged = { "OnActionPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, OnActionPointsChanged), Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionPointsChanged_MetaData), NewProp_OnActionPointsChanged_MetaData) }; // 1536390471
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPerformed = { "OnActionPerformed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, OnActionPerformed), Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionPerformed_MetaData), NewProp_OnActionPerformed_MetaData) }; // 38371339
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridVisualComponent = { "GridVisualComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridVisualComponent), Z_Construct_UClass_UGridVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridVisualComponent_MetaData), NewProp_GridVisualComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_EnhancedMovementSystem = { "EnhancedMovementSystem", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, EnhancedMovementSystem), Z_Construct_UClass_UEnhancedMovementSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedMovementSystem_MetaData), NewProp_EnhancedMovementSystem_MetaData) };
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPerformed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridVisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_EnhancedMovementSystem,
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
		{ Z_Construct_UClass_ATurnBasedCharacter, ATurnBasedCharacter::StaticClass, TEXT("ATurnBasedCharacter"), &Z_Registration_Info_UClass_ATurnBasedCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnBasedCharacter), 1033571658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_1589781588(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
