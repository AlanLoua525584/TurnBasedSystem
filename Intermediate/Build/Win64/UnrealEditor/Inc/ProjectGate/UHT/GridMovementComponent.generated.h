// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/Movement/GridMovementComponent.h"

#ifdef PROJECTGATE_GridMovementComponent_generated_h
#error "GridMovementComponent.generated.h already included, missing '#pragma once' in GridMovementComponent.h"
#endif
#define PROJECTGATE_GridMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AGridManager;
class UMovementStateManager;
class UMovementValidatorComponent;
enum class EGridMovementState : uint8;

// ********** Begin Delegate FOnGridPositionChanged ************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_29_DELEGATE \
PROJECTGATE_API void FOnGridPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGridPositionChanged, FIntPoint OldPosition, FIntPoint NewPosition);


// ********** End Delegate FOnGridPositionChanged **************************************************

// ********** Begin Delegate FOnMovementStateChanged ***********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_30_DELEGATE \
PROJECTGATE_API void FOnMovementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovementStateChanged, EGridMovementState NewState);


// ********** End Delegate FOnMovementStateChanged *************************************************

// ********** Begin Delegate FOnMovementCompleted **************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_31_DELEGATE \
PROJECTGATE_API void FOnMovementCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnMovementCompleted, FIntPoint StartPos, FIntPoint EndPos);


// ********** End Delegate FOnMovementCompleted ****************************************************

// ********** Begin Class UGridMovementComponent ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGridManager); \
	DECLARE_FUNCTION(execCalculateMovementCost); \
	DECLARE_FUNCTION(execGetReachableCells); \
	DECLARE_FUNCTION(execIsMoving); \
	DECLARE_FUNCTION(execGetMovementState); \
	DECLARE_FUNCTION(execGetCurrentGridPosition); \
	DECLARE_FUNCTION(execCanMoveTo); \
	DECLARE_FUNCTION(execGetMovementStateManager); \
	DECLARE_FUNCTION(execGetMovementValidator); \
	DECLARE_FUNCTION(execAbortGridMovement); \
	DECLARE_FUNCTION(execUpdateGridPositionFromWorld); \
	DECLARE_FUNCTION(execClearMovementRange); \
	DECLARE_FUNCTION(execShowMovementRange); \
	DECLARE_FUNCTION(execMoveToGridPosition); \
	DECLARE_FUNCTION(execInitializeGridMovement);


PROJECTGATE_API UClass* Z_Construct_UClass_UGridMovementComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridMovementComponent(); \
	friend struct Z_Construct_UClass_UGridMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGridMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGridMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGridMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UGridMovementComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGridMovementComponent(UGridMovementComponent&&) = delete; \
	UGridMovementComponent(const UGridMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridMovementComponent) \
	NO_API virtual ~UGridMovementComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_38_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_41_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGridMovementComponent;

// ********** End Class UGridMovementComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_GridMovementComponent_h

// ********** Begin Enum EGridMovementState ********************************************************
#define FOREACH_ENUM_EGRIDMOVEMENTSTATE(op) \
	op(EGridMovementState::Idle) \
	op(EGridMovementState::Moving) \
	op(EGridMovementState::PathBlocked) 

enum class EGridMovementState : uint8;
template<> struct TIsUEnumClass<EGridMovementState> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EGridMovementState>();
// ********** End Enum EGridMovementState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
