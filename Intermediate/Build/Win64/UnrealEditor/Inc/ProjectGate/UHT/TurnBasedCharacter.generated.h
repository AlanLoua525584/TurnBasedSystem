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
class UAnimationManagerComponent;
class UCombatAnimationComponent;
class UCombatComponent;
class UEnhancedMovementSystem;
class UGridMovementComponent;
class UGridVisualComponent;
class UMovementStateManager;
class UMovementValidatorComponent;
class UTexture2D;
class UTurnSystemComponent;
enum class EAnimationType : uint8;
struct FLinearColor;

// ********** Begin Delegate FTurnOrderChangedSignature ********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_33_DELEGATE \
PROJECTGATE_API void FTurnOrderChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& TurnOrderChangedSignature, int32 NewInitiative);


// ********** End Delegate FTurnOrderChangedSignature **********************************************

// ********** Begin Class ATurnBasedCharacter ******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleAnimNotify); \
	DECLARE_FUNCTION(execGetCombatAnimationComponent); \
	DECLARE_FUNCTION(execGetAnimationManager); \
	DECLARE_FUNCTION(execOnInitiativeChanged); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnDeathAnimationEnd); \
	DECLARE_FUNCTION(execSynchronizeMovementComponents); \
	DECLARE_FUNCTION(execHaltAllMovementSystems); \
	DECLARE_FUNCTION(execExecuteDirectAttack); \
	DECLARE_FUNCTION(execExecuteAnimatedAttack); \
	DECLARE_FUNCTION(execIsDying); \
	DECLARE_FUNCTION(execSetGridManager); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execIsPlayerTurn); \
	DECLARE_FUNCTION(execGetCharacterDisplayName); \
	DECLARE_FUNCTION(execMoveToGridPosition); \
	DECLARE_FUNCTION(execOnTurnEnd); \
	DECLARE_FUNCTION(execOnTurnStart); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execGetGridManager); \
	DECLARE_FUNCTION(execGetCurrentGridPosition); \
	DECLARE_FUNCTION(execShowMovementRange); \
	DECLARE_FUNCTION(execUpdateGridPositionFromWorld); \
	DECLARE_FUNCTION(execCanPerformAction); \
	DECLARE_FUNCTION(execIsMyTurn); \
	DECLARE_FUNCTION(execGetMaxActionPoints); \
	DECLARE_FUNCTION(execGetCurrentActionPoints); \
	DECLARE_FUNCTION(execConsumeActionPoints); \
	DECLARE_FUNCTION(execGetMovementStateManager); \
	DECLARE_FUNCTION(execGetMovementValidator); \
	DECLARE_FUNCTION(execGetGridVisualComponent); \
	DECLARE_FUNCTION(execGetEnhancedMovementSystem); \
	DECLARE_FUNCTION(execAccessCombatComponent); \
	DECLARE_FUNCTION(execGetTurnSystemComponent); \
	DECLARE_FUNCTION(execGetGridMovementComponent); \
	DECLARE_FUNCTION(execGetPortraitBorderColor); \
	DECLARE_FUNCTION(execGetAnyAvailablePortrait); \
	DECLARE_FUNCTION(execGetBattlePortrait); \
	DECLARE_FUNCTION(execGetUIPortrait); \
	DECLARE_FUNCTION(execOnCombatAnimationCompleted); \
	DECLARE_FUNCTION(execOnCombatAnimationHit); \
	DECLARE_FUNCTION(execOnAnimationHitEvent);


PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnBasedCharacter(); \
	friend struct Z_Construct_UClass_ATurnBasedCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATurnBasedCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_ATurnBasedCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATurnBasedCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ATurnBasedCharacter*>(this); }


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATurnBasedCharacter(ATurnBasedCharacter&&) = delete; \
	ATurnBasedCharacter(const ATurnBasedCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnBasedCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnBasedCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurnBasedCharacter) \
	NO_API virtual ~ATurnBasedCharacter();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_41_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_44_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATurnBasedCharacter;

// ********** End Class ATurnBasedCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnBasedCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
