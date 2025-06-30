// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/EnhancedMovementSystem.h"

#ifdef PROJECTGATE_EnhancedMovementSystem_generated_h
#error "EnhancedMovementSystem.generated.h already included, missing '#pragma once' in EnhancedMovementSystem.h"
#endif
#define PROJECTGATE_EnhancedMovementSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EALSGait : uint8;
enum class EALSMovementState : uint8;
enum class ECustomMovementMode : uint8;

// ********** Begin Delegate FOnALSStateChanged ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_42_DELEGATE \
PROJECTGATE_API void FOnALSStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnALSStateChanged, EALSMovementState NewState);


// ********** End Delegate FOnALSStateChanged ******************************************************

// ********** Begin Delegate FOnALSGaitChanged *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_43_DELEGATE \
PROJECTGATE_API void FOnALSGaitChanged_DelegateWrapper(const FMulticastScriptDelegate& OnALSGaitChanged, EALSGait NewGait);


// ********** End Delegate FOnALSGaitChanged *******************************************************

// ********** Begin Delegate FOnMovementDataUpdated ************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_44_DELEGATE \
PROJECTGATE_API void FOnMovementDataUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMovementDataUpdated, FVector Velocity, float MovementSpeed);


// ********** End Delegate FOnMovementDataUpdated **************************************************

// ********** Begin Delegate FOnMovementModeChanged ************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_47_DELEGATE \
PROJECTGATE_API void FOnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovementModeChanged, ECustomMovementMode NewMode);


// ********** End Delegate FOnMovementModeChanged **************************************************

// ********** Begin Delegate FOnResourceChanged ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_48_DELEGATE \
PROJECTGATE_API void FOnResourceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnResourceChanged, float CurrentResource);


// ********** End Delegate FOnResourceChanged ******************************************************

// ********** Begin Delegate FOnResourceDepleted ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_49_DELEGATE \
PROJECTGATE_API void FOnResourceDepleted_DelegateWrapper(const FMulticastScriptDelegate& OnResourceDepleted);


// ********** End Delegate FOnResourceDepleted *****************************************************

// ********** Begin Delegate FOnStartMove **********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_50_DELEGATE \
PROJECTGATE_API void FOnStartMove_DelegateWrapper(const FMulticastScriptDelegate& OnStartMove);


// ********** End Delegate FOnStartMove ************************************************************

// ********** Begin Delegate FOnStopMove ***********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_51_DELEGATE \
PROJECTGATE_API void FOnStopMove_DelegateWrapper(const FMulticastScriptDelegate& OnStopMove);


// ********** End Delegate FOnStopMove *************************************************************

// ********** Begin Class UEnhancedMovementSystem **************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsInDynamicMovement); \
	DECLARE_FUNCTION(execCalculateMaxRange); \
	DECLARE_FUNCTION(execGetResourcePercent); \
	DECLARE_FUNCTION(execCanMove); \
	DECLARE_FUNCTION(execGetMovementInput); \
	DECLARE_FUNCTION(execShouldSPrint); \
	DECLARE_FUNCTION(execGetCurrentSpeedBaseOnGait); \
	DECLARE_FUNCTION(execUpdateMovementDate); \
	DECLARE_FUNCTION(execSetALSGait); \
	DECLARE_FUNCTION(execSetALSMovementState); \
	DECLARE_FUNCTION(execProcessMovementInput); \
	DECLARE_FUNCTION(execResetResource); \
	DECLARE_FUNCTION(execStopDynamicMovement); \
	DECLARE_FUNCTION(execStartDynamicMovement); \
	DECLARE_FUNCTION(execSwitchMovementMode);


PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedMovementSystem(); \
	friend struct Z_Construct_UClass_UEnhancedMovementSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedMovementSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UEnhancedMovementSystem_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedMovementSystem)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_57_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedMovementSystem(UEnhancedMovementSystem&&) = delete; \
	UEnhancedMovementSystem(const UEnhancedMovementSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedMovementSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedMovementSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedMovementSystem) \
	NO_API virtual ~UEnhancedMovementSystem();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_54_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_57_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedMovementSystem;

// ********** End Class UEnhancedMovementSystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h

// ********** Begin Enum EALSMovementState *********************************************************
#define FOREACH_ENUM_EALSMOVEMENTSTATE(op) \
	op(EALSMovementState::None) \
	op(EALSMovementState::Grounded) \
	op(EALSMovementState::InAir) \
	op(EALSMovementState::Mantling) \
	op(EALSMovementState::Ragdoll) 

enum class EALSMovementState : uint8;
template<> struct TIsUEnumClass<EALSMovementState> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EALSMovementState>();
// ********** End Enum EALSMovementState ***********************************************************

// ********** Begin Enum EALSGait ******************************************************************
#define FOREACH_ENUM_EALSGAIT(op) \
	op(EALSGait::Walking) \
	op(EALSGait::Running) \
	op(EALSGait::Sprinting) 

enum class EALSGait : uint8;
template<> struct TIsUEnumClass<EALSGait> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EALSGait>();
// ********** End Enum EALSGait ********************************************************************

// ********** Begin Enum ECustomMovementMode *******************************************************
#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(ECustomMovementMode::Idle) \
	op(ECustomMovementMode::GridMove) \
	op(ECustomMovementMode::DynamicMove) 

enum class ECustomMovementMode : uint8;
template<> struct TIsUEnumClass<ECustomMovementMode> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<ECustomMovementMode>();
// ********** End Enum ECustomMovementMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
