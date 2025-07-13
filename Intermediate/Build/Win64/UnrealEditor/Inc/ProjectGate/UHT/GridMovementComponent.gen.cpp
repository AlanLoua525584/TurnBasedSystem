// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/Movement/GridMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridMovementComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridMovementComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridPathfindingComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EGridMovementState();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGridMovementState ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridMovementState;
static UEnum* EGridMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EGridMovementState, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EGridMovementState"));
	}
	return Z_Registration_Info_UEnum_EGridMovementState.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EGridMovementState>()
{
	return EGridMovementState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EGridMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement state enum\n" },
#endif
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EGridMovementState::Idle" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
		{ "Moving.DisplayName", "Moving" },
		{ "Moving.Name", "EGridMovementState::Moving" },
		{ "PathBlocked.DisplayName", "Path Blocked" },
		{ "PathBlocked.Name", "EGridMovementState::PathBlocked" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement state enum" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridMovementState::Idle", (int64)EGridMovementState::Idle },
		{ "EGridMovementState::Moving", (int64)EGridMovementState::Moving },
		{ "EGridMovementState::PathBlocked", (int64)EGridMovementState::PathBlocked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EGridMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EGridMovementState",
	"EGridMovementState",
	Z_Construct_UEnum_ProjectGate_EGridMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EGridMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EGridMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EGridMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EGridMovementState()
{
	if (!Z_Registration_Info_UEnum_EGridMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridMovementState.InnerSingleton, Z_Construct_UEnum_ProjectGate_EGridMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridMovementState.InnerSingleton;
}
// ********** End Enum EGridMovementState **********************************************************

// ********** Begin Delegate FOnGridPositionChanged ************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnGridPositionChanged_Parms
	{
		FIntPoint OldPosition;
		FIntPoint NewPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::NewProp_OldPosition = { "OldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnGridPositionChanged_Parms, OldPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnGridPositionChanged_Parms, NewPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::NewProp_OldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnGridPositionChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnGridPositionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnGridPositionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGridPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGridPositionChanged, FIntPoint OldPosition, FIntPoint NewPosition)
{
	struct _Script_ProjectGate_eventOnGridPositionChanged_Parms
	{
		FIntPoint OldPosition;
		FIntPoint NewPosition;
	};
	_Script_ProjectGate_eventOnGridPositionChanged_Parms Parms;
	Parms.OldPosition=OldPosition;
	Parms.NewPosition=NewPosition;
	OnGridPositionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGridPositionChanged **************************************************

// ********** Begin Delegate FOnMovementStateChanged ***********************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnMovementStateChanged_Parms
	{
		EGridMovementState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnMovementStateChanged_Parms, NewState), Z_Construct_UEnum_ProjectGate_EGridMovementState, METADATA_PARAMS(0, nullptr) }; // 4141896492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnMovementStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnMovementStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnMovementStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMovementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovementStateChanged, EGridMovementState NewState)
{
	struct _Script_ProjectGate_eventOnMovementStateChanged_Parms
	{
		EGridMovementState NewState;
	};
	_Script_ProjectGate_eventOnMovementStateChanged_Parms Parms;
	Parms.NewState=NewState;
	OnMovementStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMovementStateChanged *************************************************

// ********** Begin Delegate FOnMovementCompleted **************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnMovementCompleted_Parms
	{
		FIntPoint StartPos;
		FIntPoint EndPos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnMovementCompleted_Parms, StartPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnMovementCompleted_Parms, EndPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::NewProp_StartPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::NewProp_EndPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnMovementCompleted__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::_Script_ProjectGate_eventOnMovementCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::_Script_ProjectGate_eventOnMovementCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMovementCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnMovementCompleted, FIntPoint StartPos, FIntPoint EndPos)
{
	struct _Script_ProjectGate_eventOnMovementCompleted_Parms
	{
		FIntPoint StartPos;
		FIntPoint EndPos;
	};
	_Script_ProjectGate_eventOnMovementCompleted_Parms Parms;
	Parms.StartPos=StartPos;
	Parms.EndPos=EndPos;
	OnMovementCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMovementCompleted ****************************************************

// ********** Begin Class UGridMovementComponent Function CalculateMovementCost ********************
struct Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics
{
	struct GridMovementComponent_eventCalculateMovementCost_Parms
	{
		FIntPoint TargetPos;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculate movement cost to target\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate movement cost to target" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::NewProp_TargetPos = { "TargetPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventCalculateMovementCost_Parms, TargetPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventCalculateMovementCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::NewProp_TargetPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "CalculateMovementCost", Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::GridMovementComponent_eventCalculateMovementCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::GridMovementComponent_eventCalculateMovementCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execCalculateMovementCost)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TargetPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CalculateMovementCost(Z_Param_TargetPos);
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function CalculateMovementCost **********************

// ********** Begin Class UGridMovementComponent Function CanMoveTo ********************************
struct Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics
{
	struct GridMovementComponent_eventCanMoveTo_Parms
	{
		FIntPoint GridPos;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if can move to a position\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if can move to a position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPos;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::NewProp_GridPos = { "GridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventCanMoveTo_Parms, GridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridMovementComponent_eventCanMoveTo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridMovementComponent_eventCanMoveTo_Parms), &Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::NewProp_GridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "CanMoveTo", Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::GridMovementComponent_eventCanMoveTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::GridMovementComponent_eventCanMoveTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_CanMoveTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_CanMoveTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execCanMoveTo)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMoveTo(Z_Param_GridPos);
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function CanMoveTo **********************************

// ********** Begin Class UGridMovementComponent Function ClearMovementRange ***********************
struct Z_Construct_UFunction_UGridMovementComponent_ClearMovementRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear movement range visualization\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear movement range visualization" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_ClearMovementRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "ClearMovementRange", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_ClearMovementRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_ClearMovementRange_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGridMovementComponent_ClearMovementRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_ClearMovementRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execClearMovementRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMovementRange();
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function ClearMovementRange *************************

// ********** Begin Class UGridMovementComponent Function GetCurrentGridPosition *******************
struct Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics
{
	struct GridMovementComponent_eventGetCurrentGridPosition_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get current grid position\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current grid position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventGetCurrentGridPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "GetCurrentGridPosition", Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::GridMovementComponent_eventGetCurrentGridPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::GridMovementComponent_eventGetCurrentGridPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execGetCurrentGridPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetCurrentGridPosition();
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function GetCurrentGridPosition *********************

// ********** Begin Class UGridMovementComponent Function GetGridManager ***************************
struct Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics
{
	struct GridMovementComponent_eventGetGridManager_Parms
	{
		AGridManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Grid Manager Access ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Grid Manager Access ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventGetGridManager_Parms, ReturnValue), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "GetGridManager", Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::GridMovementComponent_eventGetGridManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::GridMovementComponent_eventGetGridManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_GetGridManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_GetGridManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execGetGridManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGridManager**)Z_Param__Result=P_THIS->GetGridManager();
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function GetGridManager *****************************

// ********** Begin Class UGridMovementComponent Function GetMovementState *************************
struct Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics
{
	struct GridMovementComponent_eventGetMovementState_Parms
	{
		EGridMovementState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get movement state\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get movement state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventGetMovementState_Parms, ReturnValue), Z_Construct_UEnum_ProjectGate_EGridMovementState, METADATA_PARAMS(0, nullptr) }; // 4141896492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "GetMovementState", Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::GridMovementComponent_eventGetMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::GridMovementComponent_eventGetMovementState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_GetMovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_GetMovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execGetMovementState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGridMovementState*)Z_Param__Result=P_THIS->GetMovementState();
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function GetMovementState ***************************

// ********** Begin Class UGridMovementComponent Function GetReachableCells ************************
struct Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics
{
	struct GridMovementComponent_eventGetReachableCells_Parms
	{
		int32 MovementPoints;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get reachable cells based on movement points\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get reachable cells based on movement points" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::NewProp_MovementPoints = { "MovementPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventGetReachableCells_Parms, MovementPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventGetReachableCells_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::NewProp_MovementPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "GetReachableCells", Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::GridMovementComponent_eventGetReachableCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::GridMovementComponent_eventGetReachableCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_GetReachableCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_GetReachableCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execGetReachableCells)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MovementPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetReachableCells(Z_Param_MovementPoints);
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function GetReachableCells **************************

// ********** Begin Class UGridMovementComponent Function InitializeGridMovement *******************
struct Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics
{
	struct GridMovementComponent_eventInitializeGridMovement_Parms
	{
		AGridManager* InGridManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Initialization ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Initialization ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGridManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::NewProp_InGridManager = { "InGridManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventInitializeGridMovement_Parms, InGridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::NewProp_InGridManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "InitializeGridMovement", Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::GridMovementComponent_eventInitializeGridMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::GridMovementComponent_eventInitializeGridMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execInitializeGridMovement)
{
	P_GET_OBJECT(AGridManager,Z_Param_InGridManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeGridMovement(Z_Param_InGridManager);
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function InitializeGridMovement *********************

// ********** Begin Class UGridMovementComponent Function IsMoving *********************************
struct Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics
{
	struct GridMovementComponent_eventIsMoving_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if currently moving\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if currently moving" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridMovementComponent_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridMovementComponent_eventIsMoving_Parms), &Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "IsMoving", Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::GridMovementComponent_eventIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::GridMovementComponent_eventIsMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_IsMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_IsMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execIsMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMoving();
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function IsMoving ***********************************

// ********** Begin Class UGridMovementComponent Function MoveToGridPosition ***********************
struct Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics
{
	struct GridMovementComponent_eventMoveToGridPosition_Parms
	{
		FIntPoint TargetGridPos;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move to a specific grid position\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move to a specific grid position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPos;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::NewProp_TargetGridPos = { "TargetGridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridMovementComponent_eventMoveToGridPosition_Parms, TargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridMovementComponent_eventMoveToGridPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridMovementComponent_eventMoveToGridPosition_Parms), &Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::NewProp_TargetGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "MoveToGridPosition", Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::GridMovementComponent_eventMoveToGridPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::GridMovementComponent_eventMoveToGridPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execMoveToGridPosition)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TargetGridPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MoveToGridPosition(Z_Param_TargetGridPos);
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function MoveToGridPosition *************************

// ********** Begin Class UGridMovementComponent Function ShowMovementRange ************************
struct Z_Construct_UFunction_UGridMovementComponent_ShowMovementRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show movement range visualization\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show movement range visualization" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_ShowMovementRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "ShowMovementRange", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_ShowMovementRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_ShowMovementRange_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGridMovementComponent_ShowMovementRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_ShowMovementRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execShowMovementRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMovementRange();
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function ShowMovementRange **************************

// ********** Begin Class UGridMovementComponent Function UpdateGridPositionFromWorld **************
struct Z_Construct_UFunction_UGridMovementComponent_UpdateGridPositionFromWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update grid position based on world location\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update grid position based on world location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridMovementComponent_UpdateGridPositionFromWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridMovementComponent, nullptr, "UpdateGridPositionFromWorld", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridMovementComponent_UpdateGridPositionFromWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridMovementComponent_UpdateGridPositionFromWorld_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGridMovementComponent_UpdateGridPositionFromWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridMovementComponent_UpdateGridPositionFromWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridMovementComponent::execUpdateGridPositionFromWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGridPositionFromWorld();
	P_NATIVE_END;
}
// ********** End Class UGridMovementComponent Function UpdateGridPositionFromWorld ****************

// ********** Begin Class UGridMovementComponent ***************************************************
void UGridMovementComponent::StaticRegisterNativesUGridMovementComponent()
{
	UClass* Class = UGridMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateMovementCost", &UGridMovementComponent::execCalculateMovementCost },
		{ "CanMoveTo", &UGridMovementComponent::execCanMoveTo },
		{ "ClearMovementRange", &UGridMovementComponent::execClearMovementRange },
		{ "GetCurrentGridPosition", &UGridMovementComponent::execGetCurrentGridPosition },
		{ "GetGridManager", &UGridMovementComponent::execGetGridManager },
		{ "GetMovementState", &UGridMovementComponent::execGetMovementState },
		{ "GetReachableCells", &UGridMovementComponent::execGetReachableCells },
		{ "InitializeGridMovement", &UGridMovementComponent::execInitializeGridMovement },
		{ "IsMoving", &UGridMovementComponent::execIsMoving },
		{ "MoveToGridPosition", &UGridMovementComponent::execMoveToGridPosition },
		{ "ShowMovementRange", &UGridMovementComponent::execShowMovementRange },
		{ "UpdateGridPositionFromWorld", &UGridMovementComponent::execUpdateGridPositionFromWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGridMovementComponent;
UClass* UGridMovementComponent::GetPrivateStaticClass()
{
	using TClass = UGridMovementComponent;
	if (!Z_Registration_Info_UClass_UGridMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridMovementComponent"),
			Z_Registration_Info_UClass_UGridMovementComponent.InnerSingleton,
			StaticRegisterNativesUGridMovementComponent,
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
	return Z_Registration_Info_UClass_UGridMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGridMovementComponent_NoRegister()
{
	return UGridMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGridMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that handles all grid-based movement for turn-based characters\n */" },
#endif
		{ "IncludePath", "TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that handles all grid-based movement for turn-based characters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGridPositionChanged_MetaData[] = {
		{ "Category", "Grid Movement|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Events ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Events ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementStateChanged_MetaData[] = {
		{ "Category", "Grid Movement|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementCompleted_MetaData[] = {
		{ "Category", "Grid Movement|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMoveSpeed_MetaData[] = {
		{ "Category", "Grid Movement|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement speed for grid-based movement\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement speed for grid-based movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Grid Movement|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Acceptable distance to consider movement complete\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acceptable distance to consider movement complete" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugVisualization_MetaData[] = {
		{ "Category", "Grid Movement|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show debug visualization\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show debug visualization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Core References ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Core References ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGridPosition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === State ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== State ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGridPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current path for movement\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/GridMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current path for movement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGridPositionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementCompleted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static void NewProp_bShowDebugVisualization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugVisualization;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathfindingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentGridPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridMovementComponent_CalculateMovementCost, "CalculateMovementCost" }, // 2392128086
		{ &Z_Construct_UFunction_UGridMovementComponent_CanMoveTo, "CanMoveTo" }, // 900104442
		{ &Z_Construct_UFunction_UGridMovementComponent_ClearMovementRange, "ClearMovementRange" }, // 2633655973
		{ &Z_Construct_UFunction_UGridMovementComponent_GetCurrentGridPosition, "GetCurrentGridPosition" }, // 1979989395
		{ &Z_Construct_UFunction_UGridMovementComponent_GetGridManager, "GetGridManager" }, // 1824976397
		{ &Z_Construct_UFunction_UGridMovementComponent_GetMovementState, "GetMovementState" }, // 3238898908
		{ &Z_Construct_UFunction_UGridMovementComponent_GetReachableCells, "GetReachableCells" }, // 2149769189
		{ &Z_Construct_UFunction_UGridMovementComponent_InitializeGridMovement, "InitializeGridMovement" }, // 87985425
		{ &Z_Construct_UFunction_UGridMovementComponent_IsMoving, "IsMoving" }, // 3712386500
		{ &Z_Construct_UFunction_UGridMovementComponent_MoveToGridPosition, "MoveToGridPosition" }, // 2126023872
		{ &Z_Construct_UFunction_UGridMovementComponent_ShowMovementRange, "ShowMovementRange" }, // 1727950214
		{ &Z_Construct_UFunction_UGridMovementComponent_UpdateGridPositionFromWorld, "UpdateGridPositionFromWorld" }, // 3799657218
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_OnGridPositionChanged = { "OnGridPositionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, OnGridPositionChanged), Z_Construct_UDelegateFunction_ProjectGate_OnGridPositionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGridPositionChanged_MetaData), NewProp_OnGridPositionChanged_MetaData) }; // 291377496
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_OnMovementStateChanged = { "OnMovementStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, OnMovementStateChanged), Z_Construct_UDelegateFunction_ProjectGate_OnMovementStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovementStateChanged_MetaData), NewProp_OnMovementStateChanged_MetaData) }; // 55748288
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_OnMovementCompleted = { "OnMovementCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, OnMovementCompleted), Z_Construct_UDelegateFunction_ProjectGate_OnMovementCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovementCompleted_MetaData), NewProp_OnMovementCompleted_MetaData) }; // 3159529723
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_GridMoveSpeed = { "GridMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, GridMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMoveSpeed_MetaData), NewProp_GridMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) };
void Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_bShowDebugVisualization_SetBit(void* Obj)
{
	((UGridMovementComponent*)Obj)->bShowDebugVisualization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_bShowDebugVisualization = { "bShowDebugVisualization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridMovementComponent), &Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_bShowDebugVisualization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugVisualization_MetaData), NewProp_bShowDebugVisualization_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_PathfindingComponent = { "PathfindingComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, PathfindingComponent), Z_Construct_UClass_UGridPathfindingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfindingComponent_MetaData), NewProp_PathfindingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_VisualComponent = { "VisualComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, VisualComponent), Z_Construct_UClass_UGridVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualComponent_MetaData), NewProp_VisualComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_CurrentGridPosition = { "CurrentGridPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, CurrentGridPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGridPosition_MetaData), NewProp_CurrentGridPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_TargetGridPosition = { "TargetGridPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, TargetGridPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGridPosition_MetaData), NewProp_TargetGridPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, MovementState), Z_Construct_UEnum_ProjectGate_EGridMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementState_MetaData), NewProp_MovementState_MetaData) }; // 4141896492
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_CurrentPath_Inner = { "CurrentPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_CurrentPath = { "CurrentPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridMovementComponent, CurrentPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPath_MetaData), NewProp_CurrentPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_OnGridPositionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_OnMovementStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_OnMovementCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_GridMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_bShowDebugVisualization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_PathfindingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_VisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_CurrentGridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_TargetGridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_MovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_CurrentPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMovementComponent_Statics::NewProp_CurrentPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridMovementComponent_Statics::ClassParams = {
	&UGridMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGridMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridMovementComponent()
{
	if (!Z_Registration_Info_UClass_UGridMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridMovementComponent.OuterSingleton, Z_Construct_UClass_UGridMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridMovementComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridMovementComponent);
UGridMovementComponent::~UGridMovementComponent() {}
// ********** End Class UGridMovementComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridMovementState_StaticEnum, TEXT("EGridMovementState"), &Z_Registration_Info_UEnum_EGridMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4141896492U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridMovementComponent, UGridMovementComponent::StaticClass, TEXT("UGridMovementComponent"), &Z_Registration_Info_UClass_UGridMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridMovementComponent), 3920939830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h__Script_ProjectGate_1970362043(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
