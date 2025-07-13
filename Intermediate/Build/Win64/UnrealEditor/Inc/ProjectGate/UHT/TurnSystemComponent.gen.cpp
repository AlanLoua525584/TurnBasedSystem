// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/TurnSystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnSystemComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnSystemComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnSystemComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ETurnState();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnEnded__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnStarted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FActionCosts();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActionCosts ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActionCosts;
class UScriptStruct* FActionCosts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActionCosts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActionCosts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionCosts, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("ActionCosts"));
	}
	return Z_Registration_Info_UScriptStruct_FActionCosts.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActionCosts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action cost configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action cost configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveCostPerCell_MetaData[] = {
		{ "Category", "Action Costs" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCost_MetaData[] = {
		{ "Category", "Action Costs" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillCost_MetaData[] = {
		{ "Category", "Action Costs" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemUseCost_MetaData[] = {
		{ "Category", "Action Costs" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveCostPerCell;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkillCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemUseCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionCosts>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActionCosts_Statics::NewProp_MoveCostPerCell = { "MoveCostPerCell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionCosts, MoveCostPerCell), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveCostPerCell_MetaData), NewProp_MoveCostPerCell_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActionCosts_Statics::NewProp_AttackCost = { "AttackCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionCosts, AttackCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCost_MetaData), NewProp_AttackCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActionCosts_Statics::NewProp_SkillCost = { "SkillCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionCosts, SkillCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillCost_MetaData), NewProp_SkillCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActionCosts_Statics::NewProp_ItemUseCost = { "ItemUseCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionCosts, ItemUseCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemUseCost_MetaData), NewProp_ItemUseCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionCosts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionCosts_Statics::NewProp_MoveCostPerCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionCosts_Statics::NewProp_AttackCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionCosts_Statics::NewProp_SkillCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionCosts_Statics::NewProp_ItemUseCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionCosts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionCosts_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"ActionCosts",
	Z_Construct_UScriptStruct_FActionCosts_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionCosts_Statics::PropPointers),
	sizeof(FActionCosts),
	alignof(FActionCosts),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionCosts_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionCosts_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActionCosts()
{
	if (!Z_Registration_Info_UScriptStruct_FActionCosts.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActionCosts.InnerSingleton, Z_Construct_UScriptStruct_FActionCosts_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActionCosts.InnerSingleton;
}
// ********** End ScriptStruct FActionCosts ********************************************************

// ********** Begin Enum ETurnState ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurnState;
static UEnum* ETurnState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETurnState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETurnState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_ETurnState, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("ETurnState"));
	}
	return Z_Registration_Info_UEnum_ETurnState.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<ETurnState>()
{
	return ETurnState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_ETurnState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "ETurnState::Active" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn state enum\n" },
#endif
		{ "Ending.DisplayName", "Ending Turn" },
		{ "Ending.Name", "ETurnState::Ending" },
		{ "Executing.DisplayName", "Executing Action" },
		{ "Executing.Name", "ETurnState::Executing" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn state enum" },
#endif
		{ "Waiting.DisplayName", "Waiting" },
		{ "Waiting.Name", "ETurnState::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETurnState::Waiting", (int64)ETurnState::Waiting },
		{ "ETurnState::Active", (int64)ETurnState::Active },
		{ "ETurnState::Executing", (int64)ETurnState::Executing },
		{ "ETurnState::Ending", (int64)ETurnState::Ending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_ETurnState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"ETurnState",
	"ETurnState",
	Z_Construct_UEnum_ProjectGate_ETurnState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ETurnState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ETurnState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_ETurnState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_ETurnState()
{
	if (!Z_Registration_Info_UEnum_ETurnState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurnState.InnerSingleton, Z_Construct_UEnum_ProjectGate_ETurnState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETurnState.InnerSingleton;
}
// ********** End Enum ETurnState ******************************************************************

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
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
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
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
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

// ********** Begin Delegate FOnTurnStateChanged ***************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnTurnStateChanged_Parms
	{
		ETurnState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnTurnStateChanged_Parms, NewState), Z_Construct_UEnum_ProjectGate_ETurnState, METADATA_PARAMS(0, nullptr) }; // 3859702767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnTurnStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnTurnStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnTurnStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTurnStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnStateChanged, ETurnState NewState)
{
	struct _Script_ProjectGate_eventOnTurnStateChanged_Parms
	{
		ETurnState NewState;
	};
	_Script_ProjectGate_eventOnTurnStateChanged_Parms Parms;
	Parms.NewState=NewState;
	OnTurnStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTurnStateChanged *****************************************************

// ********** Begin Delegate FOnTurnStarted ********************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnTurnStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnTurnStarted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnTurnStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnTurnStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTurnStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTurnStarted)
{
	OnTurnStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTurnStarted **********************************************************

// ********** Begin Delegate FOnTurnEnded **********************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnTurnEnded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnEnded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnTurnEnded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnTurnEnded__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnTurnEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTurnEnded_DelegateWrapper(const FMulticastScriptDelegate& OnTurnEnded)
{
	OnTurnEnded.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTurnEnded ************************************************************

// ********** Begin Delegate FOnInitiativeChanged **************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnInitiativeChanged_Parms
	{
		int32 NewInitiative;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewInitiative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::NewProp_NewInitiative = { "NewInitiative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnInitiativeChanged_Parms, NewInitiative), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::NewProp_NewInitiative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnInitiativeChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnInitiativeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnInitiativeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInitiativeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInitiativeChanged, int32 NewInitiative)
{
	struct _Script_ProjectGate_eventOnInitiativeChanged_Parms
	{
		int32 NewInitiative;
	};
	_Script_ProjectGate_eventOnInitiativeChanged_Parms Parms;
	Parms.NewInitiative=NewInitiative;
	OnInitiativeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnInitiativeChanged ****************************************************

// ********** Begin Class UTurnSystemComponent Function AddActionPoints ****************************
struct Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics
{
	struct TurnSystemComponent_eventAddActionPoints_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventAddActionPoints_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "AddActionPoints", Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::TurnSystemComponent_eventAddActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::TurnSystemComponent_eventAddActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execAddActionPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActionPoints(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function AddActionPoints ******************************

// ********** Begin Class UTurnSystemComponent Function CalculateInitiative ************************
struct Z_Construct_UFunction_UTurnSystemComponent_CalculateInitiative_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initiative management\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiative management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_CalculateInitiative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "CalculateInitiative", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_CalculateInitiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_CalculateInitiative_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnSystemComponent_CalculateInitiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_CalculateInitiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execCalculateInitiative)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateInitiative();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function CalculateInitiative **************************

// ********** Begin Class UTurnSystemComponent Function CanEndTurn *********************************
struct Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics
{
	struct TurnSystemComponent_eventCanEndTurn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnSystemComponent_eventCanEndTurn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventCanEndTurn_Parms), &Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "CanEndTurn", Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::TurnSystemComponent_eventCanEndTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::TurnSystemComponent_eventCanEndTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execCanEndTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEndTurn();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function CanEndTurn ***********************************

// ********** Begin Class UTurnSystemComponent Function CanPerformAction ***************************
struct Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics
{
	struct TurnSystemComponent_eventCanPerformAction_Parms
	{
		int32 ActionCost;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action validation\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action validation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionCost;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::NewProp_ActionCost = { "ActionCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventCanPerformAction_Parms, ActionCost), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnSystemComponent_eventCanPerformAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventCanPerformAction_Parms), &Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::NewProp_ActionCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "CanPerformAction", Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::TurnSystemComponent_eventCanPerformAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::TurnSystemComponent_eventCanPerformAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execCanPerformAction)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ActionCost);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPerformAction(Z_Param_ActionCost);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function CanPerformAction *****************************

// ********** Begin Class UTurnSystemComponent Function ConsumeActionPoints ************************
struct Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics
{
	struct TurnSystemComponent_eventConsumeActionPoints_Parms
	{
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventConsumeActionPoints_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnSystemComponent_eventConsumeActionPoints_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventConsumeActionPoints_Parms), &Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "ConsumeActionPoints", Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::TurnSystemComponent_eventConsumeActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::TurnSystemComponent_eventConsumeActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execConsumeActionPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConsumeActionPoints(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function ConsumeActionPoints **************************

// ********** Begin Class UTurnSystemComponent Function EndTurnEarly *******************************
struct Z_Construct_UFunction_UTurnSystemComponent_EndTurnEarly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_EndTurnEarly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "EndTurnEarly", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_EndTurnEarly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_EndTurnEarly_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnSystemComponent_EndTurnEarly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_EndTurnEarly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execEndTurnEarly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTurnEarly();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function EndTurnEarly *********************************

// ********** Begin Class UTurnSystemComponent Function GetActionPointPercentage *******************
struct Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics
{
	struct TurnSystemComponent_eventGetActionPointPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventGetActionPointPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "GetActionPointPercentage", Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::TurnSystemComponent_eventGetActionPointPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::TurnSystemComponent_eventGetActionPointPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execGetActionPointPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetActionPointPercentage();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function GetActionPointPercentage *********************

// ********** Begin Class UTurnSystemComponent Function GetCurrentActionPoints *********************
struct Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics
{
	struct TurnSystemComponent_eventGetCurrentActionPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventGetCurrentActionPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "GetCurrentActionPoints", Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::TurnSystemComponent_eventGetCurrentActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::TurnSystemComponent_eventGetCurrentActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execGetCurrentActionPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentActionPoints();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function GetCurrentActionPoints ***********************

// ********** Begin Class UTurnSystemComponent Function GetCurrentInitiative ***********************
struct Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics
{
	struct TurnSystemComponent_eventGetCurrentInitiative_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventGetCurrentInitiative_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "GetCurrentInitiative", Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::TurnSystemComponent_eventGetCurrentInitiative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::TurnSystemComponent_eventGetCurrentInitiative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execGetCurrentInitiative)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentInitiative();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function GetCurrentInitiative *************************

// ********** Begin Class UTurnSystemComponent Function GetMaxActionPoints *************************
struct Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics
{
	struct TurnSystemComponent_eventGetMaxActionPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventGetMaxActionPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "GetMaxActionPoints", Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::TurnSystemComponent_eventGetMaxActionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::TurnSystemComponent_eventGetMaxActionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execGetMaxActionPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxActionPoints();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function GetMaxActionPoints ***************************

// ********** Begin Class UTurnSystemComponent Function GetTurnState *******************************
struct Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics
{
	struct TurnSystemComponent_eventGetTurnState_Parms
	{
		ETurnState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventGetTurnState_Parms, ReturnValue), Z_Construct_UEnum_ProjectGate_ETurnState, METADATA_PARAMS(0, nullptr) }; // 3859702767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "GetTurnState", Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::TurnSystemComponent_eventGetTurnState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::TurnSystemComponent_eventGetTurnState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_GetTurnState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_GetTurnState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execGetTurnState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETurnState*)Z_Param__Result=P_THIS->GetTurnState();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function GetTurnState *********************************

// ********** Begin Class UTurnSystemComponent Function IsHasted ***********************************
struct Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics
{
	struct TurnSystemComponent_eventIsHasted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System|Status" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnSystemComponent_eventIsHasted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventIsHasted_Parms), &Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "IsHasted", Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::TurnSystemComponent_eventIsHasted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::TurnSystemComponent_eventIsHasted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_IsHasted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_IsHasted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execIsHasted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHasted();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function IsHasted *************************************

// ********** Begin Class UTurnSystemComponent Function IsMyTurn ***********************************
struct Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics
{
	struct TurnSystemComponent_eventIsMyTurn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === State Queries ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== State Queries ===" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnSystemComponent_eventIsMyTurn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventIsMyTurn_Parms), &Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "IsMyTurn", Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::TurnSystemComponent_eventIsMyTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::TurnSystemComponent_eventIsMyTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execIsMyTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMyTurn();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function IsMyTurn *************************************

// ********** Begin Class UTurnSystemComponent Function IsSlowed ***********************************
struct Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics
{
	struct TurnSystemComponent_eventIsSlowed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System|Status" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnSystemComponent_eventIsSlowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventIsSlowed_Parms), &Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "IsSlowed", Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::TurnSystemComponent_eventIsSlowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::TurnSystemComponent_eventIsSlowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_IsSlowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_IsSlowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execIsSlowed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSlowed();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function IsSlowed *************************************

// ********** Begin Class UTurnSystemComponent Function ModifyInitiative ***************************
struct Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics
{
	struct TurnSystemComponent_eventModifyInitiative_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventModifyInitiative_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "ModifyInitiative", Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::TurnSystemComponent_eventModifyInitiative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::TurnSystemComponent_eventModifyInitiative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execModifyInitiative)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyInitiative(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function ModifyInitiative *****************************

// ********** Begin Class UTurnSystemComponent Function OnCombatAnimationCompleted *****************
struct Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics
{
	struct TurnSystemComponent_eventOnCombatAnimationCompleted_Parms
	{
		AActor* Attacker;
		AActor* Target;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventOnCombatAnimationCompleted_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventOnCombatAnimationCompleted_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((TurnSystemComponent_eventOnCombatAnimationCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventOnCombatAnimationCompleted_Parms), &Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "OnCombatAnimationCompleted", Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::TurnSystemComponent_eventOnCombatAnimationCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::TurnSystemComponent_eventOnCombatAnimationCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execOnCombatAnimationCompleted)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCombatAnimationCompleted(Z_Param_Attacker,Z_Param_Target,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function OnCombatAnimationCompleted *******************

// ********** Begin Class UTurnSystemComponent Function OnCombatAnimationHit ***********************
struct Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics
{
	struct TurnSystemComponent_eventOnCombatAnimationHit_Parms
	{
		AActor* Attacker;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat Animation Event Handlers\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Animation Event Handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventOnCombatAnimationHit_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventOnCombatAnimationHit_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "OnCombatAnimationHit", Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::TurnSystemComponent_eventOnCombatAnimationHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::TurnSystemComponent_eventOnCombatAnimationHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execOnCombatAnimationHit)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCombatAnimationHit(Z_Param_Attacker,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function OnCombatAnimationHit *************************

// ********** Begin Class UTurnSystemComponent Function OnTurnEnd **********************************
struct Z_Construct_UFunction_UTurnSystemComponent_OnTurnEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_OnTurnEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "OnTurnEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_OnTurnEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_OnTurnEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnSystemComponent_OnTurnEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_OnTurnEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execOnTurnEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnEnd();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function OnTurnEnd ************************************

// ********** Begin Class UTurnSystemComponent Function OnTurnStart ********************************
struct Z_Construct_UFunction_UTurnSystemComponent_OnTurnStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn management\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_OnTurnStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "OnTurnStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_OnTurnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_OnTurnStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnSystemComponent_OnTurnStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_OnTurnStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execOnTurnStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnStart();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function OnTurnStart **********************************

// ********** Begin Class UTurnSystemComponent Function ResetActionPoints **************************
struct Z_Construct_UFunction_UTurnSystemComponent_ResetActionPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action point management\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action point management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_ResetActionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "ResetActionPoints", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_ResetActionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_ResetActionPoints_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnSystemComponent_ResetActionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_ResetActionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execResetActionPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActionPoints();
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function ResetActionPoints ****************************

// ********** Begin Class UTurnSystemComponent Function SetHasted **********************************
struct Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics
{
	struct TurnSystemComponent_eventSetHasted_Parms
	{
		bool bHasted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System|Status" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::NewProp_bHasted_SetBit(void* Obj)
{
	((TurnSystemComponent_eventSetHasted_Parms*)Obj)->bHasted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::NewProp_bHasted = { "bHasted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventSetHasted_Parms), &Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::NewProp_bHasted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::NewProp_bHasted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "SetHasted", Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::TurnSystemComponent_eventSetHasted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::TurnSystemComponent_eventSetHasted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_SetHasted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_SetHasted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execSetHasted)
{
	P_GET_UBOOL(Z_Param_bHasted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasted(Z_Param_bHasted);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function SetHasted ************************************

// ********** Begin Class UTurnSystemComponent Function SetSlowed **********************************
struct Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics
{
	struct TurnSystemComponent_eventSetSlowed_Parms
	{
		bool bSlowed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System|Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Status Effects ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Status Effects ===" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSlowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlowed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::NewProp_bSlowed_SetBit(void* Obj)
{
	((TurnSystemComponent_eventSetSlowed_Parms*)Obj)->bSlowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::NewProp_bSlowed = { "bSlowed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventSetSlowed_Parms), &Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::NewProp_bSlowed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::NewProp_bSlowed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "SetSlowed", Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::TurnSystemComponent_eventSetSlowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::TurnSystemComponent_eventSetSlowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_SetSlowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_SetSlowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execSetSlowed)
{
	P_GET_UBOOL(Z_Param_bSlowed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSlowed(Z_Param_bSlowed);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function SetSlowed ************************************

// ********** Begin Class UTurnSystemComponent Function TryPerformAction ***************************
struct Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics
{
	struct TurnSystemComponent_eventTryPerformAction_Parms
	{
		FString ActionName;
		int32 Cost;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventTryPerformAction_Parms, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnSystemComponent_eventTryPerformAction_Parms, Cost), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TurnSystemComponent_eventTryPerformAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnSystemComponent_eventTryPerformAction_Parms), &Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnSystemComponent, nullptr, "TryPerformAction", Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::TurnSystemComponent_eventTryPerformAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::TurnSystemComponent_eventTryPerformAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnSystemComponent::execTryPerformAction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ActionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Cost);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryPerformAction(Z_Param_ActionName,Z_Param_Cost);
	P_NATIVE_END;
}
// ********** End Class UTurnSystemComponent Function TryPerformAction *****************************

// ********** Begin Class UTurnSystemComponent *****************************************************
void UTurnSystemComponent::StaticRegisterNativesUTurnSystemComponent()
{
	UClass* Class = UTurnSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActionPoints", &UTurnSystemComponent::execAddActionPoints },
		{ "CalculateInitiative", &UTurnSystemComponent::execCalculateInitiative },
		{ "CanEndTurn", &UTurnSystemComponent::execCanEndTurn },
		{ "CanPerformAction", &UTurnSystemComponent::execCanPerformAction },
		{ "ConsumeActionPoints", &UTurnSystemComponent::execConsumeActionPoints },
		{ "EndTurnEarly", &UTurnSystemComponent::execEndTurnEarly },
		{ "GetActionPointPercentage", &UTurnSystemComponent::execGetActionPointPercentage },
		{ "GetCurrentActionPoints", &UTurnSystemComponent::execGetCurrentActionPoints },
		{ "GetCurrentInitiative", &UTurnSystemComponent::execGetCurrentInitiative },
		{ "GetMaxActionPoints", &UTurnSystemComponent::execGetMaxActionPoints },
		{ "GetTurnState", &UTurnSystemComponent::execGetTurnState },
		{ "IsHasted", &UTurnSystemComponent::execIsHasted },
		{ "IsMyTurn", &UTurnSystemComponent::execIsMyTurn },
		{ "IsSlowed", &UTurnSystemComponent::execIsSlowed },
		{ "ModifyInitiative", &UTurnSystemComponent::execModifyInitiative },
		{ "OnCombatAnimationCompleted", &UTurnSystemComponent::execOnCombatAnimationCompleted },
		{ "OnCombatAnimationHit", &UTurnSystemComponent::execOnCombatAnimationHit },
		{ "OnTurnEnd", &UTurnSystemComponent::execOnTurnEnd },
		{ "OnTurnStart", &UTurnSystemComponent::execOnTurnStart },
		{ "ResetActionPoints", &UTurnSystemComponent::execResetActionPoints },
		{ "SetHasted", &UTurnSystemComponent::execSetHasted },
		{ "SetSlowed", &UTurnSystemComponent::execSetSlowed },
		{ "TryPerformAction", &UTurnSystemComponent::execTryPerformAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnSystemComponent;
UClass* UTurnSystemComponent::GetPrivateStaticClass()
{
	using TClass = UTurnSystemComponent;
	if (!Z_Registration_Info_UClass_UTurnSystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnSystemComponent"),
			Z_Registration_Info_UClass_UTurnSystemComponent.InnerSingleton,
			StaticRegisterNativesUTurnSystemComponent,
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
	return Z_Registration_Info_UClass_UTurnSystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnSystemComponent_NoRegister()
{
	return UTurnSystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Component that manages turn-based mechanics including Action Points and turn states\n */" },
#endif
		{ "IncludePath", "TurnBasedSystem/Components/TurnSystemComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Component that manages turn-based mechanics including Action Points and turn states" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActionPoints_MetaData[] = {
		{ "Category", "Turn System|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum action points per turn\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum action points per turn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionCosts_MetaData[] = {
		{ "Category", "Turn System|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action costs configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action costs configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseInitiative_MetaData[] = {
		{ "Category", "Turn System|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base initiative value\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base initiative value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedInitiativeMultiplier_MetaData[] = {
		{ "Category", "Turn System|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed affects initiative\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed affects initiative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionPointsChanged_MetaData[] = {
		{ "Category", "Turn System|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Events ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Events ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionPerformed_MetaData[] = {
		{ "Category", "Turn System|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnStateChanged_MetaData[] = {
		{ "Category", "Turn System|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnStarted_MetaData[] = {
		{ "Category", "Turn System|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnEnded_MetaData[] = {
		{ "Category", "Turn System|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInitiativeChanged_MetaData[] = {
		{ "Category", "Turn System|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionPoints_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current action points\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current action points" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current turn state\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current turn state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMyTurn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is it this character's turn\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is it this character's turn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInitiative_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current initiative value\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current initiative value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlowed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Status effects\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Status effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHasted_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnActionHistory_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action history for current turn\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action history for current turn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTurnManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached reference to turn manager\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/TurnSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached reference to turn manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActionPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionCosts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseInitiative;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedInitiativeMultiplier;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPointsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPerformed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitiativeChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentActionPoints;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TurnState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TurnState;
	static void NewProp_bIsMyTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMyTurn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentInitiative;
	static void NewProp_bIsSlowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlowed;
	static void NewProp_bIsHasted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHasted;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TurnActionHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TurnActionHistory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTurnManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnSystemComponent_AddActionPoints, "AddActionPoints" }, // 167518417
		{ &Z_Construct_UFunction_UTurnSystemComponent_CalculateInitiative, "CalculateInitiative" }, // 1586881189
		{ &Z_Construct_UFunction_UTurnSystemComponent_CanEndTurn, "CanEndTurn" }, // 1393057276
		{ &Z_Construct_UFunction_UTurnSystemComponent_CanPerformAction, "CanPerformAction" }, // 942009825
		{ &Z_Construct_UFunction_UTurnSystemComponent_ConsumeActionPoints, "ConsumeActionPoints" }, // 2436311089
		{ &Z_Construct_UFunction_UTurnSystemComponent_EndTurnEarly, "EndTurnEarly" }, // 182717797
		{ &Z_Construct_UFunction_UTurnSystemComponent_GetActionPointPercentage, "GetActionPointPercentage" }, // 1985100565
		{ &Z_Construct_UFunction_UTurnSystemComponent_GetCurrentActionPoints, "GetCurrentActionPoints" }, // 373811226
		{ &Z_Construct_UFunction_UTurnSystemComponent_GetCurrentInitiative, "GetCurrentInitiative" }, // 3392219177
		{ &Z_Construct_UFunction_UTurnSystemComponent_GetMaxActionPoints, "GetMaxActionPoints" }, // 2392721492
		{ &Z_Construct_UFunction_UTurnSystemComponent_GetTurnState, "GetTurnState" }, // 1977918978
		{ &Z_Construct_UFunction_UTurnSystemComponent_IsHasted, "IsHasted" }, // 1471999737
		{ &Z_Construct_UFunction_UTurnSystemComponent_IsMyTurn, "IsMyTurn" }, // 1343932252
		{ &Z_Construct_UFunction_UTurnSystemComponent_IsSlowed, "IsSlowed" }, // 4135379192
		{ &Z_Construct_UFunction_UTurnSystemComponent_ModifyInitiative, "ModifyInitiative" }, // 2058896881
		{ &Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationCompleted, "OnCombatAnimationCompleted" }, // 1382839605
		{ &Z_Construct_UFunction_UTurnSystemComponent_OnCombatAnimationHit, "OnCombatAnimationHit" }, // 2313133056
		{ &Z_Construct_UFunction_UTurnSystemComponent_OnTurnEnd, "OnTurnEnd" }, // 2402014645
		{ &Z_Construct_UFunction_UTurnSystemComponent_OnTurnStart, "OnTurnStart" }, // 2505520533
		{ &Z_Construct_UFunction_UTurnSystemComponent_ResetActionPoints, "ResetActionPoints" }, // 655353681
		{ &Z_Construct_UFunction_UTurnSystemComponent_SetHasted, "SetHasted" }, // 632480224
		{ &Z_Construct_UFunction_UTurnSystemComponent_SetSlowed, "SetSlowed" }, // 3653304986
		{ &Z_Construct_UFunction_UTurnSystemComponent_TryPerformAction, "TryPerformAction" }, // 1941305563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_MaxActionPoints = { "MaxActionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, MaxActionPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActionPoints_MetaData), NewProp_MaxActionPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_ActionCosts = { "ActionCosts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, ActionCosts), Z_Construct_UScriptStruct_FActionCosts, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionCosts_MetaData), NewProp_ActionCosts_MetaData) }; // 4222720002
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_BaseInitiative = { "BaseInitiative", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, BaseInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseInitiative_MetaData), NewProp_BaseInitiative_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_SpeedInitiativeMultiplier = { "SpeedInitiativeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, SpeedInitiativeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedInitiativeMultiplier_MetaData), NewProp_SpeedInitiativeMultiplier_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnActionPointsChanged = { "OnActionPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, OnActionPointsChanged), Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionPointsChanged_MetaData), NewProp_OnActionPointsChanged_MetaData) }; // 1516316071
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnActionPerformed = { "OnActionPerformed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, OnActionPerformed), Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionPerformed_MetaData), NewProp_OnActionPerformed_MetaData) }; // 2180554572
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnTurnStateChanged = { "OnTurnStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, OnTurnStateChanged), Z_Construct_UDelegateFunction_ProjectGate_OnTurnStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnStateChanged_MetaData), NewProp_OnTurnStateChanged_MetaData) }; // 1544247436
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnTurnStarted = { "OnTurnStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, OnTurnStarted), Z_Construct_UDelegateFunction_ProjectGate_OnTurnStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnStarted_MetaData), NewProp_OnTurnStarted_MetaData) }; // 1364392642
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnTurnEnded = { "OnTurnEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, OnTurnEnded), Z_Construct_UDelegateFunction_ProjectGate_OnTurnEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnEnded_MetaData), NewProp_OnTurnEnded_MetaData) }; // 2063993831
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnInitiativeChanged = { "OnInitiativeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, OnInitiativeChanged), Z_Construct_UDelegateFunction_ProjectGate_OnInitiativeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInitiativeChanged_MetaData), NewProp_OnInitiativeChanged_MetaData) }; // 3061781566
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_CurrentActionPoints = { "CurrentActionPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, CurrentActionPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActionPoints_MetaData), NewProp_CurrentActionPoints_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_TurnState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_TurnState = { "TurnState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, TurnState), Z_Construct_UEnum_ProjectGate_ETurnState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnState_MetaData), NewProp_TurnState_MetaData) }; // 3859702767
void Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsMyTurn_SetBit(void* Obj)
{
	((UTurnSystemComponent*)Obj)->bIsMyTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsMyTurn = { "bIsMyTurn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTurnSystemComponent), &Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsMyTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMyTurn_MetaData), NewProp_bIsMyTurn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_CurrentInitiative = { "CurrentInitiative", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, CurrentInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInitiative_MetaData), NewProp_CurrentInitiative_MetaData) };
void Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsSlowed_SetBit(void* Obj)
{
	((UTurnSystemComponent*)Obj)->bIsSlowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsSlowed = { "bIsSlowed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTurnSystemComponent), &Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsSlowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSlowed_MetaData), NewProp_bIsSlowed_MetaData) };
void Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsHasted_SetBit(void* Obj)
{
	((UTurnSystemComponent*)Obj)->bIsHasted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsHasted = { "bIsHasted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTurnSystemComponent), &Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsHasted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHasted_MetaData), NewProp_bIsHasted_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_TurnActionHistory_Inner = { "TurnActionHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_TurnActionHistory = { "TurnActionHistory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, TurnActionHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnActionHistory_MetaData), NewProp_TurnActionHistory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_CachedTurnManager = { "CachedTurnManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnSystemComponent, CachedTurnManager), Z_Construct_UClass_ASimpleTurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTurnManager_MetaData), NewProp_CachedTurnManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_MaxActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_ActionCosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_BaseInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_SpeedInitiativeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnActionPointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnActionPerformed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnTurnStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnTurnStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnTurnEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_OnInitiativeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_CurrentActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_TurnState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_TurnState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsMyTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_CurrentInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsSlowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_bIsHasted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_TurnActionHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_TurnActionHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnSystemComponent_Statics::NewProp_CachedTurnManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnSystemComponent_Statics::ClassParams = {
	&UTurnSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnSystemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnSystemComponent()
{
	if (!Z_Registration_Info_UClass_UTurnSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnSystemComponent.OuterSingleton, Z_Construct_UClass_UTurnSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnSystemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnSystemComponent);
UTurnSystemComponent::~UTurnSystemComponent() {}
// ********** End Class UTurnSystemComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETurnState_StaticEnum, TEXT("ETurnState"), &Z_Registration_Info_UEnum_ETurnState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3859702767U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActionCosts::StaticStruct, Z_Construct_UScriptStruct_FActionCosts_Statics::NewStructOps, TEXT("ActionCosts"), &Z_Registration_Info_UScriptStruct_FActionCosts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionCosts), 4222720002U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnSystemComponent, UTurnSystemComponent::StaticClass, TEXT("UTurnSystemComponent"), &Z_Registration_Info_UClass_UTurnSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnSystemComponent), 3487594764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h__Script_ProjectGate_3887607860(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h__Script_ProjectGate_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
