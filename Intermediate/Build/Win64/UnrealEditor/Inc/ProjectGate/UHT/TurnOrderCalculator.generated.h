// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/TurnOrderCalculator.h"

#ifdef PROJECTGATE_TurnOrderCalculator_generated_h
#error "TurnOrderCalculator.generated.h already included, missing '#pragma once' in TurnOrderCalculator.h"
#endif
#define PROJECTGATE_TurnOrderCalculator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ATurnBasedCharacter;
class UInitiativeModifier;
struct FInitiativeCalculationResult;

// ********** Begin ScriptStruct FInitiativeCalculationResult **************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FInitiativeCalculationResult;
// ********** End ScriptStruct FInitiativeCalculationResult ****************************************

// ********** Begin Class UInitiativeModifier ******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModifierName); \
	DECLARE_FUNCTION(execCalculateModifier);


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_CALLBACK_WRAPPERS
PROJECTGATE_API UClass* Z_Construct_UClass_UInitiativeModifier_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInitiativeModifier(); \
	friend struct Z_Construct_UClass_UInitiativeModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UInitiativeModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UInitiativeModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UInitiativeModifier_NoRegister) \
	DECLARE_SERIALIZER(UInitiativeModifier)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInitiativeModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInitiativeModifier(UInitiativeModifier&&) = delete; \
	UInitiativeModifier(const UInitiativeModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInitiativeModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitiativeModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitiativeModifier) \
	NO_API virtual ~UInitiativeModifier();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_40_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_CALLBACK_WRAPPERS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInitiativeModifier;

// ********** End Class UInitiativeModifier ********************************************************

// ********** Begin Class UTurnOrderCalculator *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearModifiers); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execAddModifier); \
	DECLARE_FUNCTION(execCalculateAndSortTurnOrder); \
	DECLARE_FUNCTION(execCalculateInitiative);


PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderCalculator_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnOrderCalculator(); \
	friend struct Z_Construct_UClass_UTurnOrderCalculator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderCalculator_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnOrderCalculator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UTurnOrderCalculator_NoRegister) \
	DECLARE_SERIALIZER(UTurnOrderCalculator)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnOrderCalculator(UTurnOrderCalculator&&) = delete; \
	UTurnOrderCalculator(const UTurnOrderCalculator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnOrderCalculator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnOrderCalculator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTurnOrderCalculator) \
	NO_API virtual ~UTurnOrderCalculator();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_56_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_59_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnOrderCalculator;

// ********** End Class UTurnOrderCalculator *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
