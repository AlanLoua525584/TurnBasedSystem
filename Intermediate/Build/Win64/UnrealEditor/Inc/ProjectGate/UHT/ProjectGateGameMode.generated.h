// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectGateGameMode.h"

#ifdef PROJECTGATE_ProjectGateGameMode_generated_h
#error "ProjectGateGameMode.generated.h already included, missing '#pragma once' in ProjectGateGameMode.h"
#endif
#define PROJECTGATE_ProjectGateGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UTurnDisplayWidget;
enum class ETurnPhase : uint8;

// ********** Begin Class AProjectGateGameMode *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAPChanged); \
	DECLARE_FUNCTION(execGetTurnDisplayWidget); \
	DECLARE_FUNCTION(execOnPhaseChanged); \
	DECLARE_FUNCTION(execOnTurnChanged);


PROJECTGATE_API UClass* Z_Construct_UClass_AProjectGateGameMode_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectGateGameMode(); \
	friend struct Z_Construct_UClass_AProjectGateGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_AProjectGateGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectGateGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_AProjectGateGameMode_NoRegister) \
	DECLARE_SERIALIZER(AProjectGateGameMode)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectGateGameMode(AProjectGateGameMode&&) = delete; \
	AProjectGateGameMode(const AProjectGateGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectGateGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectGateGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProjectGateGameMode) \
	NO_API virtual ~AProjectGateGameMode();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h_19_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectGateGameMode;

// ********** End Class AProjectGateGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
