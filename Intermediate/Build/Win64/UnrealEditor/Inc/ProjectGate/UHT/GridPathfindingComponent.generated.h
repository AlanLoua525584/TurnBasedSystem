// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/GridPathfindingComponent.h"

#ifdef PROJECTGATE_GridPathfindingComponent_generated_h
#error "GridPathfindingComponent.generated.h already included, missing '#pragma once' in GridPathfindingComponent.h"
#endif
#define PROJECTGATE_GridPathfindingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AGridManager;

// ********** Begin Class UGridPathfindingComponent ************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculatePathCost); \
	DECLARE_FUNCTION(execFindPath); \
	DECLARE_FUNCTION(execInitializeGrid);


PROJECTGATE_API UClass* Z_Construct_UClass_UGridPathfindingComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridPathfindingComponent(); \
	friend struct Z_Construct_UClass_UGridPathfindingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGridPathfindingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGridPathfindingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGridPathfindingComponent_NoRegister) \
	DECLARE_SERIALIZER(UGridPathfindingComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGridPathfindingComponent(UGridPathfindingComponent&&) = delete; \
	UGridPathfindingComponent(const UGridPathfindingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPathfindingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPathfindingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridPathfindingComponent) \
	NO_API virtual ~UGridPathfindingComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h_11_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGridPathfindingComponent;

// ********** End Class UGridPathfindingComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
