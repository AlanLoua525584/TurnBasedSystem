// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/SimpleTurnManager.h"

#ifdef PROJECTGATE_SimpleTurnManager_generated_h
#error "SimpleTurnManager.generated.h already included, missing '#pragma once' in SimpleTurnManager.h"
#endif
#define PROJECTGATE_SimpleTurnManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
enum class ETurnPhase : uint8;

// ********** Begin Delegate FOnTurnChanged ********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_21_DELEGATE \
PROJECTGATE_API void FOnTurnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnChanged, AActor* CurrentCharacter);


// ********** End Delegate FOnTurnChanged **********************************************************

// ********** Begin Delegate FOnPhaseChanged *******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_23_DELEGATE \
PROJECTGATE_API void FOnPhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseChanged, AActor* CurrentCharacter, ETurnPhase NewPhase);


// ********** End Delegate FOnPhaseChanged *********************************************************

// ********** Begin Class ASimpleTurnManager *******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentCharacterIndex); \
	DECLARE_FUNCTION(execGetTurnOrder); \
	DECLARE_FUNCTION(execGetCurrentTurnCharacter); \
	DECLARE_FUNCTION(execGetTurnCount); \
	DECLARE_FUNCTION(execGetCurrentPhase); \
	DECLARE_FUNCTION(execNextPhase); \
	DECLARE_FUNCTION(execNextTurn); \
	DECLARE_FUNCTION(execStartBattle); \
	DECLARE_FUNCTION(execAddCharacter);


PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimpleTurnManager(); \
	friend struct Z_Construct_UClass_ASimpleTurnManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ASimpleTurnManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_ASimpleTurnManager_NoRegister) \
	DECLARE_SERIALIZER(ASimpleTurnManager)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASimpleTurnManager(ASimpleTurnManager&&) = delete; \
	ASimpleTurnManager(const ASimpleTurnManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleTurnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleTurnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimpleTurnManager) \
	NO_API virtual ~ASimpleTurnManager();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_27_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_30_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASimpleTurnManager;

// ********** End Class ASimpleTurnManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h

// ********** Begin Enum ETurnPhase ****************************************************************
#define FOREACH_ENUM_ETURNPHASE(op) \
	op(ETurnPhase::TurnStart) \
	op(ETurnPhase::MainPhase) \
	op(ETurnPhase::TurnEnd) 

enum class ETurnPhase : uint8;
template<> struct TIsUEnumClass<ETurnPhase> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<ETurnPhase>();
// ********** End Enum ETurnPhase ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
