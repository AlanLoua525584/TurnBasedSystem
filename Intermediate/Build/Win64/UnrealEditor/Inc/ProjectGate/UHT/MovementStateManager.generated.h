// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/Movement/MovementStateManager.h"

#ifdef PROJECTGATE_MovementStateManager_generated_h
#error "MovementStateManager.generated.h already included, missing '#pragma once' in MovementStateManager.h"
#endif
#define PROJECTGATE_MovementStateManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EMovementSystemType : uint8;

// ********** Begin Delegate FNewOnMovementStateChanged ********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_21_DELEGATE \
PROJECTGATE_API void FNewOnMovementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& NewOnMovementStateChanged, EMovementSystemType SystemType, bool bIsActive);


// ********** End Delegate FNewOnMovementStateChanged **********************************************

// ********** Begin Class UMovementStateManager ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSynchronizeMovementStates); \
	DECLARE_FUNCTION(execIsMovementSystemActive); \
	DECLARE_FUNCTION(execGetActiveMovementSystem); \
	DECLARE_FUNCTION(execActivateMovementSystem); \
	DECLARE_FUNCTION(execHaltMovementSystem); \
	DECLARE_FUNCTION(execHaltAllMovement);


PROJECTGATE_API UClass* Z_Construct_UClass_UMovementStateManager_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementStateManager(); \
	friend struct Z_Construct_UClass_UMovementStateManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UMovementStateManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementStateManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UMovementStateManager_NoRegister) \
	DECLARE_SERIALIZER(UMovementStateManager)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementStateManager(UMovementStateManager&&) = delete; \
	UMovementStateManager(const UMovementStateManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementStateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementStateManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovementStateManager) \
	NO_API virtual ~UMovementStateManager();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_25_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementStateManager;

// ********** End Class UMovementStateManager ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h

// ********** Begin Enum EMovementSystemType *******************************************************
#define FOREACH_ENUM_EMOVEMENTSYSTEMTYPE(op) \
	op(EMovementSystemType::None) \
	op(EMovementSystemType::GridMovement) \
	op(EMovementSystemType::DynamicMovement) \
	op(EMovementSystemType::AIMovement) 

enum class EMovementSystemType : uint8;
template<> struct TIsUEnumClass<EMovementSystemType> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EMovementSystemType>();
// ********** End Enum EMovementSystemType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
