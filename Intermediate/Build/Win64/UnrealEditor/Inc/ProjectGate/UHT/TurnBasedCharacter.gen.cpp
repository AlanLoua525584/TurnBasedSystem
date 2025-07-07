// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/TurnBasedCharacter.h"
#include "TurnBasedSystem/DataAssets/CharacterPortraitData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnBasedCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FPortraitData();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
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

// ********** Begin Delegate FTurnOrderChangedSignature ********************************************
struct Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventTurnOrderChangedSignature_Parms
	{
		int32 NewInitiative;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa7\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa7\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewInitiative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::NewProp_NewInitiative = { "NewInitiative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventTurnOrderChangedSignature_Parms, NewInitiative), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::NewProp_NewInitiative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "TurnOrderChangedSignature__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::_Script_ProjectGate_eventTurnOrderChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::_Script_ProjectGate_eventTurnOrderChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTurnOrderChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& TurnOrderChangedSignature, int32 NewInitiative)
{
	struct _Script_ProjectGate_eventTurnOrderChangedSignature_Parms
	{
		int32 NewInitiative;
	};
	_Script_ProjectGate_eventTurnOrderChangedSignature_Parms Parms;
	Parms.NewInitiative=NewInitiative;
	TurnOrderChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FTurnOrderChangedSignature **********************************************

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

// ********** Begin Class ATurnBasedCharacter Function ExecuteAnimatedAttack ***********************
struct Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics
{
	struct TurnBasedCharacter_eventExecuteAnimatedAttack_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbd\xcb\xa8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbd\xcb\xa8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventExecuteAnimatedAttack_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "ExecuteAnimatedAttack", Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::TurnBasedCharacter_eventExecuteAnimatedAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::TurnBasedCharacter_eventExecuteAnimatedAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execExecuteAnimatedAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteAnimatedAttack(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function ExecuteAnimatedAttack *************************

// ********** Begin Class ATurnBasedCharacter Function GetAnyAvailablePortrait *********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics
{
	struct TurnBasedCharacter_eventGetAnyAvailablePortrait_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdN\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xa1^\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdN\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xa1^" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetAnyAvailablePortrait_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetAnyAvailablePortrait", Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::TurnBasedCharacter_eventGetAnyAvailablePortrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::TurnBasedCharacter_eventGetAnyAvailablePortrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetAnyAvailablePortrait)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetAnyAvailablePortrait();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetAnyAvailablePortrait ***********************

// ********** Begin Class ATurnBasedCharacter Function GetBattlePortrait ***************************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics
{
	struct TurnBasedCharacter_eventGetBattlePortrait_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetBattlePortrait_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetBattlePortrait", Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::TurnBasedCharacter_eventGetBattlePortrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::TurnBasedCharacter_eventGetBattlePortrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetBattlePortrait)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetBattlePortrait();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetBattlePortrait *****************************

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

// ********** Begin Class ATurnBasedCharacter Function GetCurrentGridPosition **********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics
{
	struct TurnBasedCharacter_eventGetCurrentGridPosition_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter for CurrentGridPosition\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for CurrentGridPosition" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetCurrentGridPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetCurrentGridPosition", Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::TurnBasedCharacter_eventGetCurrentGridPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::TurnBasedCharacter_eventGetCurrentGridPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetCurrentGridPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetCurrentGridPosition();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetCurrentGridPosition ************************

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

// ********** Begin Class ATurnBasedCharacter Function GetGridVisualComponent **********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics
{
	struct TurnBasedCharacter_eventGetGridVisualComponent_Parms
	{
		UGridVisualComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter for GridVisualComponent\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for GridVisualComponent" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetGridVisualComponent_Parms, ReturnValue), Z_Construct_UClass_UGridVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetGridVisualComponent", Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::TurnBasedCharacter_eventGetGridVisualComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::TurnBasedCharacter_eventGetGridVisualComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetGridVisualComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGridVisualComponent**)Z_Param__Result=P_THIS->GetGridVisualComponent();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetGridVisualComponent ************************

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

// ********** Begin Class ATurnBasedCharacter Function GetPortraitBorderColor **********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics
{
	struct TurnBasedCharacter_eventGetPortraitBorderColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetPortraitBorderColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetPortraitBorderColor", Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::TurnBasedCharacter_eventGetPortraitBorderColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::TurnBasedCharacter_eventGetPortraitBorderColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetPortraitBorderColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetPortraitBorderColor();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetPortraitBorderColor ************************

// ********** Begin Class ATurnBasedCharacter Function GetUIPortrait *******************************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics
{
	struct TurnBasedCharacter_eventGetUIPortrait_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdK\xef\xbf\xbdQ\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdUI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdK\xef\xbf\xbdQ\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdUI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetUIPortrait_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetUIPortrait", Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::TurnBasedCharacter_eventGetUIPortrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::TurnBasedCharacter_eventGetUIPortrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetUIPortrait)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetUIPortrait();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetUIPortrait *********************************

// ********** Begin Class ATurnBasedCharacter Function IsAlive *************************************
struct Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics
{
	struct TurnBasedCharacter_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xac""d\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xac""d\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "IsAlive", Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::TurnBasedCharacter_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::TurnBasedCharacter_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function IsAlive ***************************************

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

// ********** Begin Class ATurnBasedCharacter Function IsValidCombatTarget *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics
{
	struct TurnBasedCharacter_eventIsValidCombatTarget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xac""d\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbdi\xef\xbf\xbdH\xef\xbf\xbdQ\xef\xbf\xbd\xef\xac\xb0\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xac""d\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbdi\xef\xbf\xbdH\xef\xbf\xbdQ\xef\xbf\xbd\xef\xac\xb0\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventIsValidCombatTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventIsValidCombatTarget_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "IsValidCombatTarget", Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::TurnBasedCharacter_eventIsValidCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::TurnBasedCharacter_eventIsValidCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execIsValidCombatTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidCombatTarget();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function IsValidCombatTarget ***************************

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

// ********** Begin Class ATurnBasedCharacter Function OnDeathAnimationEnd *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd^\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd^\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnDeathAnimationEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execOnDeathAnimationEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeathAnimationEnd();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function OnDeathAnimationEnd ***************************

// ********** Begin Class ATurnBasedCharacter Function OnHealthChanged *****************************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics
{
	struct TurnBasedCharacter_eventOnHealthChanged_Parms
	{
		AActor* Character;
		int32 CurrentHealth;
		int32 MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdq\xef\xbf\xbd\xdc\xa4\xc6\xa6^\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdq\xef\xbf\xbd\xdc\xa4\xc6\xa6^\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnHealthChanged_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnHealthChanged", Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::TurnBasedCharacter_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::TurnBasedCharacter_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execOnHealthChanged)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHealth);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHealthChanged(Z_Param_Character,Z_Param_CurrentHealth,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function OnHealthChanged *******************************

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

// ********** Begin Class ATurnBasedCharacter Function UpdateHealthDisplay *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_UpdateHealthDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_UpdateHealthDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "UpdateHealthDisplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_UpdateHealthDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_UpdateHealthDisplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_UpdateHealthDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_UpdateHealthDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execUpdateHealthDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHealthDisplay();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function UpdateHealthDisplay ***************************

// ********** Begin Class ATurnBasedCharacter ******************************************************
void ATurnBasedCharacter::StaticRegisterNativesATurnBasedCharacter()
{
	UClass* Class = ATurnBasedCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPerformAction", &ATurnBasedCharacter::execCanPerformAction },
		{ "CanPerformDynamicMovement", &ATurnBasedCharacter::execCanPerformDynamicMovement },
		{ "ConsumeActionPoints", &ATurnBasedCharacter::execConsumeActionPoints },
		{ "ExecuteAnimatedAttack", &ATurnBasedCharacter::execExecuteAnimatedAttack },
		{ "GetAnyAvailablePortrait", &ATurnBasedCharacter::execGetAnyAvailablePortrait },
		{ "GetBattlePortrait", &ATurnBasedCharacter::execGetBattlePortrait },
		{ "GetCharacterDisplayName", &ATurnBasedCharacter::execGetCharacterDisplayName },
		{ "GetCurrentActionPoints", &ATurnBasedCharacter::execGetCurrentActionPoints },
		{ "GetCurrentGridPosition", &ATurnBasedCharacter::execGetCurrentGridPosition },
		{ "GetEnhancedMovementSystem", &ATurnBasedCharacter::execGetEnhancedMovementSystem },
		{ "GetGridManager", &ATurnBasedCharacter::execGetGridManager },
		{ "GetGridVisualComponent", &ATurnBasedCharacter::execGetGridVisualComponent },
		{ "GetIsPlayerControlled", &ATurnBasedCharacter::execGetIsPlayerControlled },
		{ "GetMaxActionPoints", &ATurnBasedCharacter::execGetMaxActionPoints },
		{ "GetPortraitBorderColor", &ATurnBasedCharacter::execGetPortraitBorderColor },
		{ "GetUIPortrait", &ATurnBasedCharacter::execGetUIPortrait },
		{ "IsAlive", &ATurnBasedCharacter::execIsAlive },
		{ "IsMyTurn", &ATurnBasedCharacter::execIsMyTurn },
		{ "IsPlayerTurn", &ATurnBasedCharacter::execIsPlayerTurn },
		{ "IsTurnBasedPlayerControlled", &ATurnBasedCharacter::execIsTurnBasedPlayerControlled },
		{ "IsValidCombatTarget", &ATurnBasedCharacter::execIsValidCombatTarget },
		{ "MoveToGridPosition", &ATurnBasedCharacter::execMoveToGridPosition },
		{ "OnDeathAnimationEnd", &ATurnBasedCharacter::execOnDeathAnimationEnd },
		{ "OnHealthChanged", &ATurnBasedCharacter::execOnHealthChanged },
		{ "OnTurnEnd", &ATurnBasedCharacter::execOnTurnEnd },
		{ "OnTurnStart", &ATurnBasedCharacter::execOnTurnStart },
		{ "ResetActionPoints", &ATurnBasedCharacter::execResetActionPoints },
		{ "SetGridManager", &ATurnBasedCharacter::execSetGridManager },
		{ "ShowMovementRange", &ATurnBasedCharacter::execShowMovementRange },
		{ "TryAttack", &ATurnBasedCharacter::execTryAttack },
		{ "TryMove", &ATurnBasedCharacter::execTryMove },
		{ "UpdateGridPositionFromWorld", &ATurnBasedCharacter::execUpdateGridPositionFromWorld },
		{ "UpdateHealthDisplay", &ATurnBasedCharacter::execUpdateHealthDisplay },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlowed_MetaData[] = {
		{ "Category", "Turn System|Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHasted_MetaData[] = {
		{ "Category", "Turn System|Status" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitData_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "DisplayName", "Character Portraits" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnOrderChanged_MetaData[] = {
		{ "Category", "Turn System|TurnOrder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd^\xef\xbf\xbdX\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd^\xef\xbf\xbdX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInitiative_MetaData[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Combat|Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xca\xb5""e" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathEffectClass_MetaData[] = {
		{ "Category", "Combat|Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathDestroyDelay_MetaData[] = {
		{ "Category", "Combat|Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xe1\xa9\xb5\xef\xbf\xbd\xef\xbf\xbdP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb6\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbd\xe1\xa9\xb5\xef\xbf\xbd\xef\xbf\xbdP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb6\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDying_MetaData[] = {
		{ "Category", "Combat|Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""b\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbdL\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""b\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd`\xef\xbf\xbdL\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//=\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd=\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd=" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdK\xef\xbf\xbd[\xef\xbf\xbd}\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdK\xef\xbf\xbd[\xef\xbf\xbd}\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Combat|Animation" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarComponent_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Widget \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Widget \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Widget \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Widget \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimationDelay_MetaData[] = {
		{ "Category", "Combat|Animation" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActionPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentActionPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveActionCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackActionCost;
	static void NewProp_bIsSlowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlowed;
	static void NewProp_bIsHasted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHasted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortraitData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static void NewProp_bIsPlayerControlled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerControlled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPointsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPerformed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnOrderChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentInitiative;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeathEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathDestroyDelay;
	static void NewProp_bIsDying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDying;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridVisualComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedMovementSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static void NewProp_bIsMyTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMyTurn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentGridPosition;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackAnimationDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction, "CanPerformAction" }, // 2263197173
		{ &Z_Construct_UFunction_ATurnBasedCharacter_CanPerformDynamicMovement, "CanPerformDynamicMovement" }, // 1715719788
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints, "ConsumeActionPoints" }, // 4284646026
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack, "ExecuteAnimatedAttack" }, // 2062597536
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait, "GetAnyAvailablePortrait" }, // 3506958243
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait, "GetBattlePortrait" }, // 3212857691
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName, "GetCharacterDisplayName" }, // 885833762
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints, "GetCurrentActionPoints" }, // 284205969
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition, "GetCurrentGridPosition" }, // 3804385965
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem, "GetEnhancedMovementSystem" }, // 3010979660
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager, "GetGridManager" }, // 998814976
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent, "GetGridVisualComponent" }, // 1614271511
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetIsPlayerControlled, "GetIsPlayerControlled" }, // 3164430840
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints, "GetMaxActionPoints" }, // 832912254
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor, "GetPortraitBorderColor" }, // 3933041527
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait, "GetUIPortrait" }, // 2620950360
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsAlive, "IsAlive" }, // 2754266360
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn, "IsMyTurn" }, // 1760035642
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn, "IsPlayerTurn" }, // 4002852299
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsTurnBasedPlayerControlled, "IsTurnBasedPlayerControlled" }, // 953699246
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsValidCombatTarget, "IsValidCombatTarget" }, // 1185996788
		{ &Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition, "MoveToGridPosition" }, // 299613846
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd, "OnDeathAnimationEnd" }, // 4188317962
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged, "OnHealthChanged" }, // 2103470706
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd, "OnTurnEnd" }, // 1218860492
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart, "OnTurnStart" }, // 1764934780
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ResetActionPoints, "ResetActionPoints" }, // 897087114
		{ &Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager, "SetGridManager" }, // 880628463
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange, "ShowMovementRange" }, // 4152946337
		{ &Z_Construct_UFunction_ATurnBasedCharacter_TryAttack, "TryAttack" }, // 3244038415
		{ &Z_Construct_UFunction_ATurnBasedCharacter_TryMove, "TryMove" }, // 8073906
		{ &Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld, "UpdateGridPositionFromWorld" }, // 836284827
		{ &Z_Construct_UFunction_ATurnBasedCharacter_UpdateHealthDisplay, "UpdateHealthDisplay" }, // 4029170852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBasedCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MaxActionPoints = { "MaxActionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, MaxActionPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActionPoints_MetaData), NewProp_MaxActionPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentActionPoints = { "CurrentActionPoints", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CurrentActionPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActionPoints_MetaData), NewProp_CurrentActionPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MoveActionCost = { "MoveActionCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, MoveActionCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionCost_MetaData), NewProp_MoveActionCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackActionCost = { "AttackActionCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, AttackActionCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackActionCost_MetaData), NewProp_AttackActionCost_MetaData) };
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsSlowed_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsSlowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsSlowed = { "bIsSlowed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsSlowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSlowed_MetaData), NewProp_bIsSlowed_MetaData) };
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsHasted_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsHasted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsHasted = { "bIsHasted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsHasted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHasted_MetaData), NewProp_bIsHasted_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_PortraitData = { "PortraitData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, PortraitData), Z_Construct_UScriptStruct_FPortraitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitData_MetaData), NewProp_PortraitData_MetaData) }; // 1433789745
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
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnTurnOrderChanged = { "OnTurnOrderChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, OnTurnOrderChanged), Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnOrderChanged_MetaData), NewProp_OnTurnOrderChanged_MetaData) }; // 175113032
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentInitiative = { "CurrentInitiative", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CurrentInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInitiative_MetaData), NewProp_CurrentInitiative_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontage_MetaData), NewProp_DeathMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathEffectClass = { "DeathEffectClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, DeathEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathEffectClass_MetaData), NewProp_DeathEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathDestroyDelay = { "DeathDestroyDelay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, DeathDestroyDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathDestroyDelay_MetaData), NewProp_DeathDestroyDelay_MetaData) };
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsDying_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsDying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsDying = { "bIsDying", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsDying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDying_MetaData), NewProp_bIsDying_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridVisualComponent = { "GridVisualComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridVisualComponent), Z_Construct_UClass_UGridVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridVisualComponent_MetaData), NewProp_GridVisualComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_EnhancedMovementSystem = { "EnhancedMovementSystem", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, EnhancedMovementSystem), Z_Construct_UClass_UEnhancedMovementSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedMovementSystem_MetaData), NewProp_EnhancedMovementSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, TeamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) };
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMyTurn_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsMyTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMyTurn = { "bIsMyTurn", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMyTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMyTurn_MetaData), NewProp_bIsMyTurn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarComponent = { "HealthBarComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, HealthBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarComponent_MetaData), NewProp_HealthBarComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, HealthBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHealthBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetClass_MetaData), NewProp_HealthBarWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, HealthBarWidget), Z_Construct_UClass_UHealthBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidget_MetaData), NewProp_HealthBarWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentGridPosition = { "CurrentGridPosition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CurrentGridPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGridPosition_MetaData), NewProp_CurrentGridPosition_MetaData) };
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridMoveSpeed = { "GridMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMoveSpeed_MetaData), NewProp_GridMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackAnimationDelay = { "AttackAnimationDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, AttackAnimationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimationDelay_MetaData), NewProp_AttackAnimationDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MaxActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MoveActionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackActionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsSlowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsHasted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_PortraitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnActionPerformed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnTurnOrderChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathDestroyDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsDying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridVisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_EnhancedMovementSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMyTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentGridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AttackAnimationDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATurnBasedCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATurnBasedCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(ATurnBasedCharacter, ICombatInterface), false },  // 743786838
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurnBasedCharacter_Statics::ClassParams = {
	&ATurnBasedCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_ATurnBasedCharacter, ATurnBasedCharacter::StaticClass, TEXT("ATurnBasedCharacter"), &Z_Registration_Info_UClass_ATurnBasedCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnBasedCharacter), 1953617823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_2996631237(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
