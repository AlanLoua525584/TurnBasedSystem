// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/TurnBasedCharacter.h"

#ifdef PROJECTGATE_TurnBasedCharacter_generated_h
#error "TurnBasedCharacter.generated.h already included, missing '#pragma once' in TurnBasedCharacter.h"
#endif
#define PROJECTGATE_TurnBasedCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AGridManager;
class UEnhancedMovementSystem;

// ********** Begin Delegate FOnActionPointsChanged ************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_18_DELEGATE \
PROJECTGATE_API void FOnActionPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActionPointsChanged, int32 NewActionPoints);


// ********** End Delegate FOnActionPointsChanged **************************************************

// ********** Begin Delegate FOnActionPerformed ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_19_DELEGATE \
PROJECTGATE_API void FOnActionPerformed_DelegateWrapper(const FMulticastScriptDelegate& OnActionPerformed, const FString& ActionName, int32 Cost);


// ********** End Delegate FOnActionPerformed ******************************************************

// ********** Begin Class ATurnBasedCharacter ******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnhancedMovementSystem); \
	DECLARE_FUNCTION(execUpdateGridPositionFromWorld); \
	DECLARE_FUNCTION(execShowMovementRange); \
	DECLARE_FUNCTION(execMoveToGridPosition); \
	DECLARE_FUNCTION(execSetGridManager); \
	DECLARE_FUNCTION(execIsMyTurn); \
	DECLARE_FUNCTION(execOnTurnEnd); \
	DECLARE_FUNCTION(execOnTurnStart); \
	DECLARE_FUNCTION(execIsTurnBasedPlayerControlled); \
	DECLARE_FUNCTION(execTryAttack); \
	DECLARE_FUNCTION(execTryMove); \
	DECLARE_FUNCTION(execConsumeActionPoints); \
	DECLARE_FUNCTION(execCanPerformAction); \
	DECLARE_FUNCTION(execResetActionPoints); \
	DECLARE_FUNCTION(execCanPerformDynamicMovement); \
	DECLARE_FUNCTION(execGetGridManager); \
	DECLARE_FUNCTION(execGetMaxActionPoints); \
	DECLARE_FUNCTION(execGetCurrentActionPoints); \
	DECLARE_FUNCTION(execGetCharacterDisplayName); \
	DECLARE_FUNCTION(execGetIsPlayerControlled); \
	DECLARE_FUNCTION(execIsPlayerTurn);


PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnBasedCharacter(); \
	friend struct Z_Construct_UClass_ATurnBasedCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATurnBasedCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_ATurnBasedCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATurnBasedCharacter)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATurnBasedCharacter(ATurnBasedCharacter&&) = delete; \
	ATurnBasedCharacter(const ATurnBasedCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnBasedCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnBasedCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurnBasedCharacter) \
	NO_API virtual ~ATurnBasedCharacter();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_21_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATurnBasedCharacter;

// ********** End Class ATurnBasedCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
