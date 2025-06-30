// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/GridManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EGridType();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FGridCell();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGridType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridType;
static UEnum* EGridType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EGridType, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EGridType"));
	}
	return Z_Registration_Info_UEnum_EGridType.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EGridType>()
{
	return EGridType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EGridType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blocked.DisplayName", "Blocked" },
		{ "Blocked.Name", "EGridType::Blocked" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid Type Enum\n" },
#endif
		{ "Difficult.DisplayName", "Difficult Terrain" },
		{ "Difficult.Name", "EGridType::Difficult" },
		{ "HighGround.DisplayName", "High Ground" },
		{ "HighGround.Name", "EGridType::HighGround" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EGridType::Normal" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Type Enum" },
#endif
		{ "Water.Comment", "// Cost more AP to move\n" },
		{ "Water.DisplayName", "Water" },
		{ "Water.Name", "EGridType::Water" },
		{ "Water.ToolTip", "Cost more AP to move" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridType::Normal", (int64)EGridType::Normal },
		{ "EGridType::Blocked", (int64)EGridType::Blocked },
		{ "EGridType::Difficult", (int64)EGridType::Difficult },
		{ "EGridType::Water", (int64)EGridType::Water },
		{ "EGridType::HighGround", (int64)EGridType::HighGround },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EGridType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EGridType",
	"EGridType",
	Z_Construct_UEnum_ProjectGate_EGridType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EGridType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EGridType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EGridType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EGridType()
{
	if (!Z_Registration_Info_UEnum_EGridType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridType.InnerSingleton, Z_Construct_UEnum_ProjectGate_EGridType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridType.InnerSingleton;
}
// ********** End Enum EGridType *******************************************************************

// ********** Begin ScriptStruct FGridCell *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGridCell;
class UScriptStruct* FGridCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGridCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGridCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridCell, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("GridCell"));
	}
	return Z_Registration_Info_UScriptStruct_FGridCell.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGridCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid Cell Structure\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Cell Structure" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCoordinate_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridType_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOccupied_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupyingActor_MetaData[] = {
		{ "Category", "GridCell" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCost_MetaData[] = {
		{ "Category", "GridCell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement cost (for future pathfinding system)\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement cost (for future pathfinding system)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoordinate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GridType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GridType;
	static void NewProp_bIsOccupied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOccupied;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OccupyingActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCell, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_GridCoordinate = { "GridCoordinate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCell, GridCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCoordinate_MetaData), NewProp_GridCoordinate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_GridType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_GridType = { "GridType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCell, GridType), Z_Construct_UEnum_ProjectGate_EGridType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridType_MetaData), NewProp_GridType_MetaData) }; // 2717124246
void Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_bIsOccupied_SetBit(void* Obj)
{
	((FGridCell*)Obj)->bIsOccupied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_bIsOccupied = { "bIsOccupied", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGridCell), &Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_bIsOccupied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOccupied_MetaData), NewProp_bIsOccupied_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_OccupyingActor = { "OccupyingActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCell, OccupyingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupyingActor_MetaData), NewProp_OccupyingActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_MovementCost = { "MovementCost", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCell, MovementCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCost_MetaData), NewProp_MovementCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_GridCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_GridType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_GridType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_bIsOccupied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_OccupyingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCell_Statics::NewProp_MovementCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"GridCell",
	Z_Construct_UScriptStruct_FGridCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCell_Statics::PropPointers),
	sizeof(FGridCell),
	alignof(FGridCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridCell()
{
	if (!Z_Registration_Info_UScriptStruct_FGridCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGridCell.InnerSingleton, Z_Construct_UScriptStruct_FGridCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGridCell.InnerSingleton;
}
// ********** End ScriptStruct FGridCell ***********************************************************

// ********** Begin Class AGridManager Function AnimateHighlight ***********************************
struct Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics
{
	struct GridManager_eventAnimateHighlight_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Visualization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation effects\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation effects" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventAnimateHighlight_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "AnimateHighlight", Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::GridManager_eventAnimateHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::GridManager_eventAnimateHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_AnimateHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_AnimateHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execAnimateHighlight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimateHighlight(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function AnimateHighlight *************************************

// ********** Begin Class AGridManager Function CanMoveThrough *************************************
struct Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics
{
	struct GridManager_eventCanMoveThrough_Parms
	{
		FVector Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventCanMoveThrough_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridManager_eventCanMoveThrough_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventCanMoveThrough_Parms), &Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "CanMoveThrough", Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::GridManager_eventCanMoveThrough_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::GridManager_eventCanMoveThrough_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_CanMoveThrough()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_CanMoveThrough_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execCanMoveThrough)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMoveThrough(Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function CanMoveThrough ***************************************

// ********** Begin Class AGridManager Function ClearAllVisuals ************************************
struct Z_Construct_UFunction_AGridManager_ClearAllVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Visualization" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ClearAllVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ClearAllVisuals", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ClearAllVisuals_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridManager_ClearAllVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ClearAllVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execClearAllVisuals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllVisuals();
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ClearAllVisuals **************************************

// ********** Begin Class AGridManager Function ClearCellOccupation ********************************
struct Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics
{
	struct GridManager_eventClearCellOccupation_Parms
	{
		FIntPoint GridCoord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Occupancy" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventClearCellOccupation_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridManager_eventClearCellOccupation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventClearCellOccupation_Parms), &Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ClearCellOccupation", Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::GridManager_eventClearCellOccupation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::GridManager_eventClearCellOccupation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ClearCellOccupation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ClearCellOccupation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execClearCellOccupation)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearCellOccupation(Z_Param_GridCoord);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ClearCellOccupation **********************************

// ********** Begin Class AGridManager Function ClearHighlights ************************************
struct Z_Construct_UFunction_AGridManager_ClearHighlights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Visualization" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ClearHighlights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ClearHighlights", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ClearHighlights_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridManager_ClearHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ClearHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execClearHighlights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearHighlights();
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ClearHighlights **************************************

// ********** Begin Class AGridManager Function GetCellSize ****************************************
struct Z_Construct_UFunction_AGridManager_GetCellSize_Statics
{
	struct GridManager_eventGetCellSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbdj\xef\xbf\xbdp\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbdj\xef\xbf\xbdp" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_GetCellSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetCellSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetCellSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetCellSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetCellSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetCellSize", Z_Construct_UFunction_AGridManager_GetCellSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetCellSize_Statics::GridManager_eventGetCellSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetCellSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetCellSize_Statics::GridManager_eventGetCellSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetCellSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetCellSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetCellSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCellSize();
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetCellSize ******************************************

// ********** Begin Class AGridManager Function GetGridCell ****************************************
struct Z_Construct_UFunction_AGridManager_GetGridCell_Statics
{
	struct GridManager_eventGetGridCell_Parms
	{
		FIntPoint GridCoord;
		FGridCell OutCell;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get grid information\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get grid information" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCell;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetGridCell_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetGridCell_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetGridCell_Statics::NewProp_OutCell = { "OutCell", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetGridCell_Parms, OutCell), Z_Construct_UScriptStruct_FGridCell, METADATA_PARAMS(0, nullptr) }; // 952307137
void Z_Construct_UFunction_AGridManager_GetGridCell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridManager_eventGetGridCell_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_GetGridCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventGetGridCell_Parms), &Z_Construct_UFunction_AGridManager_GetGridCell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGridCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridCell_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridCell_Statics::NewProp_OutCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGridCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGridCell", Z_Construct_UFunction_AGridManager_GetGridCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetGridCell_Statics::GridManager_eventGetGridCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetGridCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetGridCell_Statics::GridManager_eventGetGridCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetGridCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetGridCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetGridCell)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_GET_STRUCT_REF(FGridCell,Z_Param_Out_OutCell);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGridCell(Z_Param_GridCoord,Z_Param_Out_OutCell);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetGridCell ******************************************

// ********** Begin Class AGridManager Function GetMovementCostBetween *****************************
struct Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics
{
	struct GridManager_eventGetMovementCostBetween_Parms
	{
		FVector StartPos;
		FVector EndPos;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interface for future free movement system\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interface for future free movement system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetMovementCostBetween_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetMovementCostBetween_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetMovementCostBetween_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::NewProp_StartPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::NewProp_EndPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetMovementCostBetween", Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::GridManager_eventGetMovementCostBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::GridManager_eventGetMovementCostBetween_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetMovementCostBetween()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetMovementCostBetween_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetMovementCostBetween)
{
	P_GET_STRUCT(FVector,Z_Param_StartPos);
	P_GET_STRUCT(FVector,Z_Param_EndPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementCostBetween(Z_Param_StartPos,Z_Param_EndPos);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetMovementCostBetween *******************************

// ********** Begin Class AGridManager Function GetMovementRange ***********************************
struct Z_Construct_UFunction_AGridManager_GetMovementRange_Statics
{
	struct GridManager_eventGetMovementRange_Parms
	{
		FIntPoint StartCoord;
		int32 MovePoints;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Path and range calculation\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path and range calculation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartCoord;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovePoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::NewProp_StartCoord = { "StartCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetMovementRange_Parms, StartCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::NewProp_MovePoints = { "MovePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetMovementRange_Parms, MovePoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetMovementRange_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::NewProp_StartCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::NewProp_MovePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetMovementRange", Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::GridManager_eventGetMovementRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::GridManager_eventGetMovementRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetMovementRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetMovementRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetMovementRange)
{
	P_GET_STRUCT(FIntPoint,Z_Param_StartCoord);
	P_GET_PROPERTY(FIntProperty,Z_Param_MovePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetMovementRange(Z_Param_StartCoord,Z_Param_MovePoints);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetMovementRange *************************************

// ********** Begin Class AGridManager Function GetPath ********************************************
struct Z_Construct_UFunction_AGridManager_GetPath_Statics
{
	struct GridManager_eventGetPath_Parms
	{
		FIntPoint StartCoord;
		FIntPoint EndCoord;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetPath_Statics::NewProp_StartCoord = { "StartCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetPath_Parms, StartCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetPath_Statics::NewProp_EndCoord = { "EndCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetPath_Parms, EndCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetPath_Statics::NewProp_StartCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetPath_Statics::NewProp_EndCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetPath", Z_Construct_UFunction_AGridManager_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetPath_Statics::GridManager_eventGetPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetPath_Statics::GridManager_eventGetPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetPath)
{
	P_GET_STRUCT(FIntPoint,Z_Param_StartCoord);
	P_GET_STRUCT(FIntPoint,Z_Param_EndCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetPath(Z_Param_StartCoord,Z_Param_EndCoord);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetPath **********************************************

// ********** Begin Class AGridManager Function GetPathCost ****************************************
struct Z_Construct_UFunction_AGridManager_GetPathCost_Statics
{
	struct GridManager_eventGetPathCost_Parms
	{
		TArray<FIntPoint> Path;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetPathCost_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetPathCost_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetPathCost_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_GetPathCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetPathCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetPathCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetPathCost_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetPathCost_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetPathCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetPathCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetPathCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetPathCost", Z_Construct_UFunction_AGridManager_GetPathCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetPathCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetPathCost_Statics::GridManager_eventGetPathCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetPathCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetPathCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetPathCost_Statics::GridManager_eventGetPathCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetPathCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetPathCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetPathCost)
{
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPathCost(Z_Param_Out_Path);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetPathCost ******************************************

// ********** Begin Class AGridManager Function GridToWorld ****************************************
struct Z_Construct_UFunction_AGridManager_GridToWorld_Statics
{
	struct GridManager_eventGridToWorld_Parms
	{
		FIntPoint GridCoord;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Coordinate conversion\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Coordinate conversion" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GridToWorld_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGridToWorld_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GridToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGridToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GridToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GridToWorld_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GridToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GridToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GridToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GridToWorld", Z_Construct_UFunction_AGridManager_GridToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GridToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GridToWorld_Statics::GridManager_eventGridToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GridToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GridToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GridToWorld_Statics::GridManager_eventGridToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GridToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GridToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGridToWorld)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GridToWorld(Z_Param_GridCoord);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GridToWorld ******************************************

// ********** Begin Class AGridManager Function HighlightPath **************************************
struct Z_Construct_UFunction_AGridManager_HighlightPath_Statics
{
	struct GridManager_eventHighlightPath_Parms
	{
		TArray<FIntPoint> Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Visualization" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_HighlightPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_HighlightPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventHighlightPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_HighlightPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_HighlightPath_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_HighlightPath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_HighlightPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "HighlightPath", Z_Construct_UFunction_AGridManager_HighlightPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_HighlightPath_Statics::GridManager_eventHighlightPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_HighlightPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_HighlightPath_Statics::GridManager_eventHighlightPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_HighlightPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_HighlightPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execHighlightPath)
{
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HighlightPath(Z_Param_Out_Path);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function HighlightPath ****************************************

// ********** Begin Class AGridManager Function IsValidGridPosition ********************************
struct Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics
{
	struct GridManager_eventIsValidGridPosition_Parms
	{
		FIntPoint GridCoord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventIsValidGridPosition_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridManager_eventIsValidGridPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventIsValidGridPosition_Parms), &Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "IsValidGridPosition", Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::GridManager_eventIsValidGridPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::GridManager_eventIsValidGridPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_IsValidGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_IsValidGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execIsValidGridPosition)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidGridPosition(Z_Param_GridCoord);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function IsValidGridPosition **********************************

// ********** Begin Class AGridManager Function SetCellOccupied ************************************
struct Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics
{
	struct GridManager_eventSetCellOccupied_Parms
	{
		FIntPoint GridCoord;
		AActor* Occupant;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Occupancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Occupancy management\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Occupancy management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Occupant;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetCellOccupied_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::NewProp_Occupant = { "Occupant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetCellOccupied_Parms, Occupant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridManager_eventSetCellOccupied_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventSetCellOccupied_Parms), &Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::NewProp_Occupant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetCellOccupied", Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::GridManager_eventSetCellOccupied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::GridManager_eventSetCellOccupied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetCellOccupied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetCellOccupied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetCellOccupied)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_GET_OBJECT(AActor,Z_Param_Occupant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCellOccupied(Z_Param_GridCoord,Z_Param_Occupant);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetCellOccupied **************************************

// ********** Begin Class AGridManager Function ShowHoverCell **************************************
struct Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics
{
	struct GridManager_eventShowHoverCell_Parms
	{
		FIntPoint GridCoord;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Visualization" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventShowHoverCell_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::NewProp_GridCoord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ShowHoverCell", Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::GridManager_eventShowHoverCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::GridManager_eventShowHoverCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ShowHoverCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ShowHoverCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execShowHoverCell)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHoverCell(Z_Param_GridCoord);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ShowHoverCell ****************************************

// ********** Begin Class AGridManager Function ShowMovementRange **********************************
struct Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics
{
	struct GridManager_eventShowMovementRange_Parms
	{
		FIntPoint CenterCoord;
		int32 Range;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Visualization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visualization\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visualization" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterCoord;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::NewProp_CenterCoord = { "CenterCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventShowMovementRange_Parms, CenterCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventShowMovementRange_Parms, Range), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::NewProp_CenterCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ShowMovementRange", Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::GridManager_eventShowMovementRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::GridManager_eventShowMovementRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ShowMovementRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ShowMovementRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execShowMovementRange)
{
	P_GET_STRUCT(FIntPoint,Z_Param_CenterCoord);
	P_GET_PROPERTY(FIntProperty,Z_Param_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMovementRange(Z_Param_CenterCoord,Z_Param_Range);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ShowMovementRange ************************************

// ********** Begin Class AGridManager Function WorldToGrid ****************************************
struct Z_Construct_UFunction_AGridManager_WorldToGrid_Statics
{
	struct GridManager_eventWorldToGrid_Parms
	{
		FVector WorldLocation;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventWorldToGrid_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventWorldToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "WorldToGrid", Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::GridManager_eventWorldToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::GridManager_eventWorldToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_WorldToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_WorldToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execWorldToGrid)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->WorldToGrid(Z_Param_WorldLocation);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function WorldToGrid ******************************************

// ********** Begin Class AGridManager *************************************************************
void AGridManager::StaticRegisterNativesAGridManager()
{
	UClass* Class = AGridManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimateHighlight", &AGridManager::execAnimateHighlight },
		{ "CanMoveThrough", &AGridManager::execCanMoveThrough },
		{ "ClearAllVisuals", &AGridManager::execClearAllVisuals },
		{ "ClearCellOccupation", &AGridManager::execClearCellOccupation },
		{ "ClearHighlights", &AGridManager::execClearHighlights },
		{ "GetCellSize", &AGridManager::execGetCellSize },
		{ "GetGridCell", &AGridManager::execGetGridCell },
		{ "GetMovementCostBetween", &AGridManager::execGetMovementCostBetween },
		{ "GetMovementRange", &AGridManager::execGetMovementRange },
		{ "GetPath", &AGridManager::execGetPath },
		{ "GetPathCost", &AGridManager::execGetPathCost },
		{ "GridToWorld", &AGridManager::execGridToWorld },
		{ "HighlightPath", &AGridManager::execHighlightPath },
		{ "IsValidGridPosition", &AGridManager::execIsValidGridPosition },
		{ "SetCellOccupied", &AGridManager::execSetCellOccupied },
		{ "ShowHoverCell", &AGridManager::execShowHoverCell },
		{ "ShowMovementRange", &AGridManager::execShowMovementRange },
		{ "WorldToGrid", &AGridManager::execWorldToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGridManager;
UClass* AGridManager::GetPrivateStaticClass()
{
	using TClass = AGridManager;
	if (!Z_Registration_Info_UClass_AGridManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridManager"),
			Z_Registration_Info_UClass_AGridManager.InnerSingleton,
			StaticRegisterNativesAGridManager,
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
	return Z_Registration_Info_UClass_AGridManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridManager_NoRegister()
{
	return AGridManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TurnBasedSystem/GridManager.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeX_MetaData[] = {
		{ "Category", "Grid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid size\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeY_MetaData[] = {
		{ "Category", "Grid Settings" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Grid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of each cell\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of each cell" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCells_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid data\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMeshComponent_MetaData[] = {
		{ "Category", "Grid Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visualization components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visualization components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMeshComponent_MetaData[] = {
		{ "Category", "Grid Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathMeshComponent_MetaData[] = {
		{ "Category", "Grid Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverMeshComponent_MetaData[] = {
		{ "Category", "Grid Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualComponent_MetaData[] = {
		{ "Category", "Grid Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMaterialInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material instances\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material instances" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridCells;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_AnimateHighlight, "AnimateHighlight" }, // 535641264
		{ &Z_Construct_UFunction_AGridManager_CanMoveThrough, "CanMoveThrough" }, // 2882043185
		{ &Z_Construct_UFunction_AGridManager_ClearAllVisuals, "ClearAllVisuals" }, // 3428753471
		{ &Z_Construct_UFunction_AGridManager_ClearCellOccupation, "ClearCellOccupation" }, // 820402839
		{ &Z_Construct_UFunction_AGridManager_ClearHighlights, "ClearHighlights" }, // 631733642
		{ &Z_Construct_UFunction_AGridManager_GetCellSize, "GetCellSize" }, // 50210406
		{ &Z_Construct_UFunction_AGridManager_GetGridCell, "GetGridCell" }, // 2467477932
		{ &Z_Construct_UFunction_AGridManager_GetMovementCostBetween, "GetMovementCostBetween" }, // 1701430879
		{ &Z_Construct_UFunction_AGridManager_GetMovementRange, "GetMovementRange" }, // 2972940687
		{ &Z_Construct_UFunction_AGridManager_GetPath, "GetPath" }, // 1370845101
		{ &Z_Construct_UFunction_AGridManager_GetPathCost, "GetPathCost" }, // 1539056635
		{ &Z_Construct_UFunction_AGridManager_GridToWorld, "GridToWorld" }, // 2830368761
		{ &Z_Construct_UFunction_AGridManager_HighlightPath, "HighlightPath" }, // 1402660069
		{ &Z_Construct_UFunction_AGridManager_IsValidGridPosition, "IsValidGridPosition" }, // 1886291397
		{ &Z_Construct_UFunction_AGridManager_SetCellOccupied, "SetCellOccupied" }, // 3783823412
		{ &Z_Construct_UFunction_AGridManager_ShowHoverCell, "ShowHoverCell" }, // 156502426
		{ &Z_Construct_UFunction_AGridManager_ShowMovementRange, "ShowMovementRange" }, // 2433952361
		{ &Z_Construct_UFunction_AGridManager_WorldToGrid, "WorldToGrid" }, // 2195196924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeX_MetaData), NewProp_GridSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridSizeY = { "GridSizeY", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeY_MetaData), NewProp_GridSizeY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridCells_Inner = { "GridCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridCell, METADATA_PARAMS(0, nullptr) }; // 952307137
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridCells = { "GridCells", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCells_MetaData), NewProp_GridCells_MetaData) }; // 952307137
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridMeshComponent = { "GridMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMeshComponent_MetaData), NewProp_GridMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_HighlightMeshComponent = { "HighlightMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, HighlightMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMeshComponent_MetaData), NewProp_HighlightMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_PathMeshComponent = { "PathMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, PathMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathMeshComponent_MetaData), NewProp_PathMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_HoverMeshComponent = { "HoverMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, HoverMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverMeshComponent_MetaData), NewProp_HoverMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_VisualComponent = { "VisualComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, VisualComponent), Z_Construct_UClass_UGridVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualComponent_MetaData), NewProp_VisualComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridMaterialInstance = { "GridMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMaterialInstance_MetaData), NewProp_GridMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_HighlightMaterialInstance = { "HighlightMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, HighlightMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMaterialInstance_MetaData), NewProp_HighlightMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_PathMaterialInstance = { "PathMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, PathMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathMaterialInstance_MetaData), NewProp_PathMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_HoverMaterialInstance = { "HoverMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, HoverMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverMaterialInstance_MetaData), NewProp_HoverMaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_HighlightMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_PathMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_HoverMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_VisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_HighlightMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_PathMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_HoverMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
	&AGridManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridManager()
{
	if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
AGridManager::~AGridManager() {}
// ********** End Class AGridManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridType_StaticEnum, TEXT("EGridType"), &Z_Registration_Info_UEnum_EGridType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2717124246U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridCell::StaticStruct, Z_Construct_UScriptStruct_FGridCell_Statics::NewStructOps, TEXT("GridCell"), &Z_Registration_Info_UScriptStruct_FGridCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridCell), 952307137U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 3577099972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h__Script_ProjectGate_3323035808(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h__Script_ProjectGate_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
