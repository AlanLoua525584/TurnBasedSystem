// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/DataAssets/TurnOrderConfig.h"

#ifdef PROJECTGATE_TurnOrderConfig_generated_h
#error "TurnOrderConfig.generated.h already included, missing '#pragma once' in TurnOrderConfig.h"
#endif
#define PROJECTGATE_TurnOrderConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInitiativeModifier;
class UObject;
class UTurnOrderCalculator;

// ********** Begin ScriptStruct FInitiativeModifierConfig *****************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInitiativeModifierConfig_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FInitiativeModifierConfig;
// ********** End ScriptStruct FInitiativeModifierConfig *******************************************

// ********** Begin Class UTurnOrderConfig *********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyToCalculator); \
	DECLARE_FUNCTION(execCreateModifiers);


PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderConfig_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnOrderConfig(); \
	friend struct Z_Construct_UClass_UTurnOrderConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnOrderConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UTurnOrderConfig_NoRegister) \
	DECLARE_SERIALIZER(UTurnOrderConfig)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnOrderConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnOrderConfig(UTurnOrderConfig&&) = delete; \
	UTurnOrderConfig(const UTurnOrderConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnOrderConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnOrderConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnOrderConfig) \
	NO_API virtual ~UTurnOrderConfig();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_37_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_40_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnOrderConfig;

// ********** End Class UTurnOrderConfig ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_TurnOrderConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
