// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/GA_BasicAttack_Test.h"

#ifdef PROJECTGATE_GA_BasicAttack_Test_generated_h
#error "GA_BasicAttack_Test.generated.h already included, missing '#pragma once' in GA_BasicAttack_Test.h"
#endif
#define PROJECTGATE_GA_BasicAttack_Test_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGA_BasicAttack_Test *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAttackHit); \
	DECLARE_FUNCTION(execPerformAttack);


PROJECTGATE_API UClass* Z_Construct_UClass_UGA_BasicAttack_Test_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_BasicAttack_Test(); \
	friend struct Z_Construct_UClass_UGA_BasicAttack_Test_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGA_BasicAttack_Test_NoRegister(); \
public: \
	DECLARE_CLASS2(UGA_BasicAttack_Test, UGateGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGA_BasicAttack_Test_NoRegister) \
	DECLARE_SERIALIZER(UGA_BasicAttack_Test)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGA_BasicAttack_Test(UGA_BasicAttack_Test&&) = delete; \
	UGA_BasicAttack_Test(const UGA_BasicAttack_Test&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_BasicAttack_Test); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_BasicAttack_Test); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_BasicAttack_Test) \
	NO_API virtual ~UGA_BasicAttack_Test();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h_14_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGA_BasicAttack_Test;

// ********** End Class UGA_BasicAttack_Test *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
