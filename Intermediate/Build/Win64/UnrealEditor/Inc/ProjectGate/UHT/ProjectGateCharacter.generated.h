// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectGateCharacter.h"

#ifdef PROJECTGATE_ProjectGateCharacter_generated_h
#error "ProjectGateCharacter.generated.h already included, missing '#pragma once' in ProjectGateCharacter.h"
#endif
#define PROJECTGATE_ProjectGateCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectGateCharacter ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


PROJECTGATE_API UClass* Z_Construct_UClass_AProjectGateCharacter_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectGateCharacter(); \
	friend struct Z_Construct_UClass_AProjectGateCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_AProjectGateCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectGateCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_AProjectGateCharacter_NoRegister) \
	DECLARE_SERIALIZER(AProjectGateCharacter)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectGateCharacter(AProjectGateCharacter&&) = delete; \
	AProjectGateCharacter(const AProjectGateCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectGateCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectGateCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProjectGateCharacter) \
	NO_API virtual ~AProjectGateCharacter();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h_21_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectGateCharacter;

// ********** End Class AProjectGateCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
