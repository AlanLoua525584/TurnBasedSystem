// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNotify/AttackHitNotify.h"

#ifdef PROJECTGATE_AttackHitNotify_generated_h
#error "AttackHitNotify.generated.h already included, missing '#pragma once' in AttackHitNotify.h"
#endif
#define PROJECTGATE_AttackHitNotify_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAttackHitNotify *********************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UAttackHitNotify_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackHitNotify(); \
	friend struct Z_Construct_UClass_UAttackHitNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UAttackHitNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttackHitNotify, UAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UAttackHitNotify_NoRegister) \
	DECLARE_SERIALIZER(UAttackHitNotify)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackHitNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttackHitNotify(UAttackHitNotify&&) = delete; \
	UAttackHitNotify(const UAttackHitNotify&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackHitNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackHitNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackHitNotify) \
	NO_API virtual ~UAttackHitNotify();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h_12_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttackHitNotify;

// ********** End Class UAttackHitNotify ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
