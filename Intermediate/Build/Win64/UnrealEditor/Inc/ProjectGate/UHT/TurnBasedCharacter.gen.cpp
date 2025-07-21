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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UAnimationManagerComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatAnimationComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridMovementComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightable_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnSystemComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EAnimationType();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FPortraitData();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

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
		{ "Comment", "// Delegates for backward compatibility\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates for backward compatibility" },
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

// ********** Begin Class ATurnBasedCharacter Function AccessCombatComponent ***********************
struct Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics
{
	struct TurnBasedCharacter_eventAccessCombatComponent_Parms
	{
		UCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventAccessCombatComponent_Parms, ReturnValue), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "AccessCombatComponent", Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::TurnBasedCharacter_eventAccessCombatComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::TurnBasedCharacter_eventAccessCombatComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execAccessCombatComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCombatComponent**)Z_Param__Result=P_THIS->AccessCombatComponent();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function AccessCombatComponent *************************

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
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn System delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn System delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventConsumeActionPoints_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventConsumeActionPoints_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventConsumeActionPoints_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints_Statics::NewProp_ReturnValue,
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
	*(bool*)Z_Param__Result=P_THIS->ConsumeActionPoints(Z_Param_Amount);
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
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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

// ********** Begin Class ATurnBasedCharacter Function ExecuteDirectAttack *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics
{
	struct TurnBasedCharacter_eventExecuteDirectAttack_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9f\xb7\xe8\xa1\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x94\xbb\xe6\x93\x8a\xef\xbc\x88\xe7\x84\xa1\xe5\x8b\x95\xe7\x95\xab\xe5\x9b\x9e\xe9\x80\x80\xe6\x96\xb9\xe6\xa1\x88\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xb7\xe8\xa1\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x94\xbb\xe6\x93\x8a\xef\xbc\x88\xe7\x84\xa1\xe5\x8b\x95\xe7\x95\xab\xe5\x9b\x9e\xe9\x80\x80\xe6\x96\xb9\xe6\xa1\x88\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventExecuteDirectAttack_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "ExecuteDirectAttack", Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::TurnBasedCharacter_eventExecuteDirectAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::TurnBasedCharacter_eventExecuteDirectAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execExecuteDirectAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteDirectAttack(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function ExecuteDirectAttack ***************************

// ********** Begin Class ATurnBasedCharacter Function GetAnimationManager *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics
{
	struct TurnBasedCharacter_eventGetAnimationManager_Parms
	{
		UAnimationManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetAnimationManager_Parms, ReturnValue), Z_Construct_UClass_UAnimationManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetAnimationManager", Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::TurnBasedCharacter_eventGetAnimationManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::TurnBasedCharacter_eventGetAnimationManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetAnimationManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimationManagerComponent**)Z_Param__Result=P_THIS->GetAnimationManager();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetAnimationManager ***************************

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
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Utility Functions ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Utility Functions ===" },
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

// ********** Begin Class ATurnBasedCharacter Function GetCombatAnimationComponent *****************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics
{
	struct TurnBasedCharacter_eventGetCombatAnimationComponent_Parms
	{
		UCombatAnimationComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetCombatAnimationComponent_Parms, ReturnValue), Z_Construct_UClass_UCombatAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetCombatAnimationComponent", Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::TurnBasedCharacter_eventGetCombatAnimationComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::TurnBasedCharacter_eventGetCombatAnimationComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetCombatAnimationComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCombatAnimationComponent**)Z_Param__Result=P_THIS->GetCombatAnimationComponent();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetCombatAnimationComponent *******************

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
		{ "Category", "Grid System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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
		{ "Category", "Components" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetEnhancedMovementSystem", Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::TurnBasedCharacter_eventGetEnhancedMovementSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem_Statics::Function_MetaDataParams)},  };
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
		{ "Category", "Grid System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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

// ********** Begin Class ATurnBasedCharacter Function GetGridMovementComponent ********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics
{
	struct TurnBasedCharacter_eventGetGridMovementComponent_Parms
	{
		UGridMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Component Getters ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Component Getters ===" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetGridMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UGridMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetGridMovementComponent", Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::TurnBasedCharacter_eventGetGridMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::TurnBasedCharacter_eventGetGridMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetGridMovementComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGridMovementComponent**)Z_Param__Result=P_THIS->GetGridMovementComponent();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetGridMovementComponent **********************

// ********** Begin Class ATurnBasedCharacter Function GetGridVisualComponent **********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent_Statics
{
	struct TurnBasedCharacter_eventGetGridVisualComponent_Parms
	{
		UGridVisualComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
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
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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

// ********** Begin Class ATurnBasedCharacter Function GetTurnSystemComponent **********************
struct Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics
{
	struct TurnBasedCharacter_eventGetTurnSystemComponent_Parms
	{
		UTurnSystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventGetTurnSystemComponent_Parms, ReturnValue), Z_Construct_UClass_UTurnSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "GetTurnSystemComponent", Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::TurnBasedCharacter_eventGetTurnSystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::TurnBasedCharacter_eventGetTurnSystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execGetTurnSystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTurnSystemComponent**)Z_Param__Result=P_THIS->GetTurnSystemComponent();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function GetTurnSystemComponent ************************

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
		{ "Comment", "// === Portrait Helpers ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Portrait Helpers ===" },
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

// ********** Begin Class ATurnBasedCharacter Function HandleAnimNotify ****************************
struct Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics
{
	struct TurnBasedCharacter_eventHandleAnimNotify_Parms
	{
		FName NotifyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventHandleAnimNotify_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::NewProp_NotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "HandleAnimNotify", Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::TurnBasedCharacter_eventHandleAnimNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::TurnBasedCharacter_eventHandleAnimNotify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execHandleAnimNotify)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAnimNotify(Z_Param_NotifyName);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function HandleAnimNotify ******************************

// ********** Begin Class ATurnBasedCharacter Function IsAlive *************************************
struct Z_Construct_UFunction_ATurnBasedCharacter_IsAlive_Statics
{
	struct TurnBasedCharacter_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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

// ********** Begin Class ATurnBasedCharacter Function IsDying *************************************
struct Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics
{
	struct TurnBasedCharacter_eventIsDying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==Getter\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==Getter" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventIsDying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventIsDying_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "IsDying", Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::TurnBasedCharacter_eventIsDying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::TurnBasedCharacter_eventIsDying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_IsDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_IsDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execIsDying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDying();
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function IsDying ***************************************

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
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid movement integration methods\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid movement integration methods" },
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

// ********** Begin Class ATurnBasedCharacter Function OnAnimationHitEvent *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics
{
	struct TurnBasedCharacter_eventOnAnimationHitEvent_Parms
	{
		EAnimationType AnimationType;
		FName EventName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnAnimationHitEvent_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnAnimationHitEvent_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::NewProp_EventName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnAnimationHitEvent", Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::TurnBasedCharacter_eventOnAnimationHitEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::TurnBasedCharacter_eventOnAnimationHitEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execOnAnimationHitEvent)
{
	P_GET_ENUM(EAnimationType,Z_Param_AnimationType);
	P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnimationHitEvent(EAnimationType(Z_Param_AnimationType),Z_Param_EventName);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function OnAnimationHitEvent ***************************

// ********** Begin Class ATurnBasedCharacter Function OnCombatAnimationCompleted ******************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics
{
	struct TurnBasedCharacter_eventOnCombatAnimationCompleted_Parms
	{
		AActor* Attacker;
		AActor* Target;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnCombatAnimationCompleted_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnCombatAnimationCompleted_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventOnCombatAnimationCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventOnCombatAnimationCompleted_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnCombatAnimationCompleted", Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::TurnBasedCharacter_eventOnCombatAnimationCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::TurnBasedCharacter_eventOnCombatAnimationCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execOnCombatAnimationCompleted)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCombatAnimationCompleted(Z_Param_Attacker,Z_Param_Target,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function OnCombatAnimationCompleted ********************

// ********** Begin Class ATurnBasedCharacter Function OnCombatAnimationHit ************************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics
{
	struct TurnBasedCharacter_eventOnCombatAnimationHit_Parms
	{
		AActor* Attacker;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnCombatAnimationHit_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnCombatAnimationHit_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnCombatAnimationHit", Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::TurnBasedCharacter_eventOnCombatAnimationHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::TurnBasedCharacter_eventOnCombatAnimationHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execOnCombatAnimationHit)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCombatAnimationHit(Z_Param_Attacker,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function OnCombatAnimationHit **************************

// ********** Begin Class ATurnBasedCharacter Function OnDeathAnimationEnd *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnDeathAnimationEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd_Statics::Function_MetaDataParams)},  };
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
		{ "Comment", "// Health change callback\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health change callback" },
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

// ********** Begin Class ATurnBasedCharacter Function OnInitiativeChanged *************************
struct Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics
{
	struct TurnBasedCharacter_eventOnInitiativeChanged_Parms
	{
		int32 NewInitiative;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x99\x95\xe7\x90\x86 Initiative \xe8\xae\x8a\xe5\x8c\x96\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x99\x95\xe7\x90\x86 Initiative \xe8\xae\x8a\xe5\x8c\x96" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewInitiative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::NewProp_NewInitiative = { "NewInitiative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedCharacter_eventOnInitiativeChanged_Parms, NewInitiative), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::NewProp_NewInitiative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "OnInitiativeChanged", Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::TurnBasedCharacter_eventOnInitiativeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::TurnBasedCharacter_eventOnInitiativeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execOnInitiativeChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewInitiative);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInitiativeChanged(Z_Param_NewInitiative);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function OnInitiativeChanged ***************************

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
		{ "Comment", "// Turn System integration methods\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn System integration methods" },
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

// ********** Begin Class ATurnBasedCharacter Function SetGridManager ******************************
struct Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager_Statics
{
	struct TurnBasedCharacter_eventSetGridManager_Parms
	{
		AGridManager* Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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

// ********** Begin Class ATurnBasedCharacter Function SetMovementMode *****************************
struct Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics
{
	struct TurnBasedCharacter_eventSetMovementMode_Parms
	{
		bool bDynamic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement mode control\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement mode control" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDynamic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::NewProp_bDynamic_SetBit(void* Obj)
{
	((TurnBasedCharacter_eventSetMovementMode_Parms*)Obj)->bDynamic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::NewProp_bDynamic = { "bDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedCharacter_eventSetMovementMode_Parms), &Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::NewProp_bDynamic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::NewProp_bDynamic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATurnBasedCharacter, nullptr, "SetMovementMode", Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::TurnBasedCharacter_eventSetMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::TurnBasedCharacter_eventSetMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnBasedCharacter::execSetMovementMode)
{
	P_GET_UBOOL(Z_Param_bDynamic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementMode(Z_Param_bDynamic);
	P_NATIVE_END;
}
// ********** End Class ATurnBasedCharacter Function SetMovementMode *******************************

// ********** Begin Class ATurnBasedCharacter Function ShowMovementRange ***************************
struct Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
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

// ********** Begin Class ATurnBasedCharacter Function UpdateGridPositionFromWorld *****************
struct Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid System delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid System delegates" },
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
		{ "AccessCombatComponent", &ATurnBasedCharacter::execAccessCombatComponent },
		{ "CanPerformAction", &ATurnBasedCharacter::execCanPerformAction },
		{ "ConsumeActionPoints", &ATurnBasedCharacter::execConsumeActionPoints },
		{ "ExecuteAnimatedAttack", &ATurnBasedCharacter::execExecuteAnimatedAttack },
		{ "ExecuteDirectAttack", &ATurnBasedCharacter::execExecuteDirectAttack },
		{ "GetAnimationManager", &ATurnBasedCharacter::execGetAnimationManager },
		{ "GetAnyAvailablePortrait", &ATurnBasedCharacter::execGetAnyAvailablePortrait },
		{ "GetBattlePortrait", &ATurnBasedCharacter::execGetBattlePortrait },
		{ "GetCharacterDisplayName", &ATurnBasedCharacter::execGetCharacterDisplayName },
		{ "GetCombatAnimationComponent", &ATurnBasedCharacter::execGetCombatAnimationComponent },
		{ "GetCurrentActionPoints", &ATurnBasedCharacter::execGetCurrentActionPoints },
		{ "GetCurrentGridPosition", &ATurnBasedCharacter::execGetCurrentGridPosition },
		{ "GetEnhancedMovementSystem", &ATurnBasedCharacter::execGetEnhancedMovementSystem },
		{ "GetGridManager", &ATurnBasedCharacter::execGetGridManager },
		{ "GetGridMovementComponent", &ATurnBasedCharacter::execGetGridMovementComponent },
		{ "GetGridVisualComponent", &ATurnBasedCharacter::execGetGridVisualComponent },
		{ "GetMaxActionPoints", &ATurnBasedCharacter::execGetMaxActionPoints },
		{ "GetPortraitBorderColor", &ATurnBasedCharacter::execGetPortraitBorderColor },
		{ "GetTurnSystemComponent", &ATurnBasedCharacter::execGetTurnSystemComponent },
		{ "GetUIPortrait", &ATurnBasedCharacter::execGetUIPortrait },
		{ "HandleAnimNotify", &ATurnBasedCharacter::execHandleAnimNotify },
		{ "IsAlive", &ATurnBasedCharacter::execIsAlive },
		{ "IsDying", &ATurnBasedCharacter::execIsDying },
		{ "IsMyTurn", &ATurnBasedCharacter::execIsMyTurn },
		{ "IsPlayerTurn", &ATurnBasedCharacter::execIsPlayerTurn },
		{ "MoveToGridPosition", &ATurnBasedCharacter::execMoveToGridPosition },
		{ "OnAnimationHitEvent", &ATurnBasedCharacter::execOnAnimationHitEvent },
		{ "OnCombatAnimationCompleted", &ATurnBasedCharacter::execOnCombatAnimationCompleted },
		{ "OnCombatAnimationHit", &ATurnBasedCharacter::execOnCombatAnimationHit },
		{ "OnDeathAnimationEnd", &ATurnBasedCharacter::execOnDeathAnimationEnd },
		{ "OnHealthChanged", &ATurnBasedCharacter::execOnHealthChanged },
		{ "OnInitiativeChanged", &ATurnBasedCharacter::execOnInitiativeChanged },
		{ "OnTurnEnd", &ATurnBasedCharacter::execOnTurnEnd },
		{ "OnTurnStart", &ATurnBasedCharacter::execOnTurnStart },
		{ "SetGridManager", &ATurnBasedCharacter::execSetGridManager },
		{ "SetMovementMode", &ATurnBasedCharacter::execSetMovementMode },
		{ "ShowMovementRange", &ATurnBasedCharacter::execShowMovementRange },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for all turn-based characters\n * Acts as a container for various gameplay components\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TurnBasedSystem/TurnBasedCharacter.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all turn-based characters\nActs as a container for various gameplay components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "Character|Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Team identification\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team identification" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerControlled_MetaData[] = {
		{ "Category", "Character|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player control flag\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player control flag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitData_MetaData[] = {
		{ "Category", "Character|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Portrait system\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Portrait system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInitiative_MetaData[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Backward Compatibility Properties ===\n// Current initiative (forwarded from TurnSystemComponent)\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Backward Compatibility Properties ===\nCurrent initiative (forwarded from TurnSystemComponent)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnOrderChanged_MetaData[] = {
		{ "Category", "Turn System|TurnOrder" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Camera Components ===\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Camera Components ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMovementComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid movement handling\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid movement handling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSystemComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn system management\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn system management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat handling\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat handling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedMovementSystem_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced movement for dynamic mode\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced movement for dynamic mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridVisualComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid visualization\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid visualization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarComponent_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health bar widget component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health bar widget component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationManager_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===Animation Components==\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===Animation Components==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAnimationComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health bar widget class\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health bar widget class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health bar widget instance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health bar widget instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Combat|Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Death System ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Death System ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathEffectClass_MetaData[] = {
		{ "Category", "Combat|Death" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathDestroyDelay_MetaData[] = {
		{ "Category", "Combat|Death" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDying_MetaData[] = {
		{ "Category", "Combat|Death" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid manager reference\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid manager reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingAttackTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnBasedCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static void NewProp_bIsPlayerControlled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerControlled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortraitData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentInitiative;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnOrderChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnSystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedMovementSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridVisualComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAnimationComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeathEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathDestroyDelay;
	static void NewProp_bIsDying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDying;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingAttackTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurnBasedCharacter_AccessCombatComponent, "AccessCombatComponent" }, // 1806086040
		{ &Z_Construct_UFunction_ATurnBasedCharacter_CanPerformAction, "CanPerformAction" }, // 2263197173
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ConsumeActionPoints, "ConsumeActionPoints" }, // 2491331975
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ExecuteAnimatedAttack, "ExecuteAnimatedAttack" }, // 3379498810
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ExecuteDirectAttack, "ExecuteDirectAttack" }, // 687193074
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetAnimationManager, "GetAnimationManager" }, // 1374292490
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetAnyAvailablePortrait, "GetAnyAvailablePortrait" }, // 1174080209
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetBattlePortrait, "GetBattlePortrait" }, // 2189307095
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCharacterDisplayName, "GetCharacterDisplayName" }, // 1245496288
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCombatAnimationComponent, "GetCombatAnimationComponent" }, // 279192318
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentActionPoints, "GetCurrentActionPoints" }, // 284205969
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetCurrentGridPosition, "GetCurrentGridPosition" }, // 2309597245
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetEnhancedMovementSystem, "GetEnhancedMovementSystem" }, // 2173463415
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetGridManager, "GetGridManager" }, // 3871998865
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetGridMovementComponent, "GetGridMovementComponent" }, // 586422778
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetGridVisualComponent, "GetGridVisualComponent" }, // 2759062919
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetMaxActionPoints, "GetMaxActionPoints" }, // 832912254
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetPortraitBorderColor, "GetPortraitBorderColor" }, // 1376849415
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetTurnSystemComponent, "GetTurnSystemComponent" }, // 837253875
		{ &Z_Construct_UFunction_ATurnBasedCharacter_GetUIPortrait, "GetUIPortrait" }, // 3643449529
		{ &Z_Construct_UFunction_ATurnBasedCharacter_HandleAnimNotify, "HandleAnimNotify" }, // 2317579529
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsAlive, "IsAlive" }, // 3871319002
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsDying, "IsDying" }, // 4073957879
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsMyTurn, "IsMyTurn" }, // 375433927
		{ &Z_Construct_UFunction_ATurnBasedCharacter_IsPlayerTurn, "IsPlayerTurn" }, // 2384771620
		{ &Z_Construct_UFunction_ATurnBasedCharacter_MoveToGridPosition, "MoveToGridPosition" }, // 1220078615
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnAnimationHitEvent, "OnAnimationHitEvent" }, // 3604796770
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationCompleted, "OnCombatAnimationCompleted" }, // 685511800
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnCombatAnimationHit, "OnCombatAnimationHit" }, // 966785050
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnDeathAnimationEnd, "OnDeathAnimationEnd" }, // 4015770381
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnHealthChanged, "OnHealthChanged" }, // 922099546
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnInitiativeChanged, "OnInitiativeChanged" }, // 3692852446
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnTurnEnd, "OnTurnEnd" }, // 1218860492
		{ &Z_Construct_UFunction_ATurnBasedCharacter_OnTurnStart, "OnTurnStart" }, // 54234823
		{ &Z_Construct_UFunction_ATurnBasedCharacter_SetGridManager, "SetGridManager" }, // 896963779
		{ &Z_Construct_UFunction_ATurnBasedCharacter_SetMovementMode, "SetMovementMode" }, // 91090598
		{ &Z_Construct_UFunction_ATurnBasedCharacter_ShowMovementRange, "ShowMovementRange" }, // 676302802
		{ &Z_Construct_UFunction_ATurnBasedCharacter_UpdateGridPositionFromWorld, "UpdateGridPositionFromWorld" }, // 2013269250
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBasedCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, TeamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) };
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsPlayerControlled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled = { "bIsPlayerControlled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerControlled_MetaData), NewProp_bIsPlayerControlled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_PortraitData = { "PortraitData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, PortraitData), Z_Construct_UScriptStruct_FPortraitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitData_MetaData), NewProp_PortraitData_MetaData) }; // 1433789745
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentInitiative = { "CurrentInitiative", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CurrentInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInitiative_MetaData), NewProp_CurrentInitiative_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnTurnOrderChanged = { "OnTurnOrderChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, OnTurnOrderChanged), Z_Construct_UDelegateFunction_ProjectGate_TurnOrderChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnOrderChanged_MetaData), NewProp_OnTurnOrderChanged_MetaData) }; // 1426353778
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridMovementComponent = { "GridMovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridMovementComponent), Z_Construct_UClass_UGridMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMovementComponent_MetaData), NewProp_GridMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_TurnSystemComponent = { "TurnSystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, TurnSystemComponent), Z_Construct_UClass_UTurnSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSystemComponent_MetaData), NewProp_TurnSystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_EnhancedMovementSystem = { "EnhancedMovementSystem", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, EnhancedMovementSystem), Z_Construct_UClass_UEnhancedMovementSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedMovementSystem_MetaData), NewProp_EnhancedMovementSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridVisualComponent = { "GridVisualComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridVisualComponent), Z_Construct_UClass_UGridVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridVisualComponent_MetaData), NewProp_GridVisualComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarComponent = { "HealthBarComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, HealthBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarComponent_MetaData), NewProp_HealthBarComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AnimationManager = { "AnimationManager", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, AnimationManager), Z_Construct_UClass_UAnimationManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationManager_MetaData), NewProp_AnimationManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CombatAnimationComponent = { "CombatAnimationComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, CombatAnimationComponent), Z_Construct_UClass_UCombatAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAnimationComponent_MetaData), NewProp_CombatAnimationComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, HealthBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHealthBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetClass_MetaData), NewProp_HealthBarWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, HealthBarWidget), Z_Construct_UClass_UHealthBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidget_MetaData), NewProp_HealthBarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontage_MetaData), NewProp_DeathMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathEffectClass = { "DeathEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, DeathEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathEffectClass_MetaData), NewProp_DeathEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathDestroyDelay = { "DeathDestroyDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, DeathDestroyDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathDestroyDelay_MetaData), NewProp_DeathDestroyDelay_MetaData) };
void Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsDying_SetBit(void* Obj)
{
	((ATurnBasedCharacter*)Obj)->bIsDying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsDying = { "bIsDying", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATurnBasedCharacter), &Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsDying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDying_MetaData), NewProp_bIsDying_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_PendingAttackTarget = { "PendingAttackTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnBasedCharacter, PendingAttackTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingAttackTarget_MetaData), NewProp_PendingAttackTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsPlayerControlled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_PortraitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CurrentInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_OnTurnOrderChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_TurnSystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_EnhancedMovementSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridVisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_AnimationManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_CombatAnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_HealthBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_DeathDestroyDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_bIsDying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedCharacter_Statics::NewProp_PendingAttackTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATurnBasedCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATurnBasedCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(ATurnBasedCharacter, ICombatInterface), false },  // 2990235492
	{ Z_Construct_UClass_UHighlightable_NoRegister, (int32)VTABLE_OFFSET(ATurnBasedCharacter, IHighlightable), false },  // 566508340
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
		{ Z_Construct_UClass_ATurnBasedCharacter, ATurnBasedCharacter::StaticClass, TEXT("ATurnBasedCharacter"), &Z_Registration_Info_UClass_ATurnBasedCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnBasedCharacter), 1010346018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_4269486881(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
