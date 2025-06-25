// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/GridManager.h"

#ifdef PROJECTGATE_GridManager_generated_h
#error "GridManager.generated.h already included, missing '#pragma once' in GridManager.h"
#endif
#define PROJECTGATE_GridManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FGridCell;

// ********** Begin ScriptStruct FGridCell *********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridCell_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FGridCell;
// ********** End ScriptStruct FGridCell ***********************************************************

// ********** Begin Class AGridManager *************************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanMoveThrough); \
	DECLARE_FUNCTION(execGetMovementCostBetween); \
	DECLARE_FUNCTION(execHighlightPath); \
	DECLARE_FUNCTION(execClearHighlights); \
	DECLARE_FUNCTION(execShowMovementRange); \
	DECLARE_FUNCTION(execClearCellOccupation); \
	DECLARE_FUNCTION(execSetCellOccupied); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetMovementRange); \
	DECLARE_FUNCTION(execIsValidGridPosition); \
	DECLARE_FUNCTION(execGetGridCell); \
	DECLARE_FUNCTION(execWorldToGrid); \
	DECLARE_FUNCTION(execGridToWorld);


PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_AGridManager_NoRegister) \
	DECLARE_SERIALIZER(AGridManager)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridManager(AGridManager&&) = delete; \
	AGridManager(const AGridManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridManager) \
	NO_API virtual ~AGridManager();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_61_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_64_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridManager;

// ********** End Class AGridManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridManager_h

// ********** Begin Enum EGridType *****************************************************************
#define FOREACH_ENUM_EGRIDTYPE(op) \
	op(EGridType::Normal) \
	op(EGridType::Blocked) \
	op(EGridType::Difficult) \
	op(EGridType::Water) \
	op(EGridType::HighGround) 

enum class EGridType : uint8;
template<> struct TIsUEnumClass<EGridType> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EGridType>();
// ********** End Enum EGridType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
