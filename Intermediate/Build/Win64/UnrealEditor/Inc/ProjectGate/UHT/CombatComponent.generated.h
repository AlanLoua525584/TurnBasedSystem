// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatSystem/CombatComponent.h"

#ifdef PROJECTGATE_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define PROJECTGATE_CombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AGridManager;
enum class ECombatAttackType : uint8;
struct FAttackConfig;
struct FDamageResult;

// ********** Begin Delegate FOnDamageReceived *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_17_DELEGATE \
PROJECTGATE_API void FOnDamageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnDamageReceived, FDamageResult const& DamageResult);


// ********** End Delegate FOnDamageReceived *******************************************************

// ********** Begin Delegate FOnHealthChanged ******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_18_DELEGATE \
PROJECTGATE_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, AActor* Character, int32 CurrentHealth, int32 MaxHealth);


// ********** End Delegate FOnHealthChanged ********************************************************

// ********** Begin Delegate FOnDeath **************************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_19_DELEGATE \
PROJECTGATE_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, AActor* Killer);


// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnAttackExecuted *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_20_DELEGATE \
PROJECTGATE_API void FOnAttackExecuted_DelegateWrapper(const FMulticastScriptDelegate& OnAttackExecuted, AActor* Attacker, AActor* Target);


// ********** End Delegate FOnAttackExecuted *******************************************************

// ********** Begin Delegate FOnAttackExecutedWithResult *******************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_29_DELEGATE \
PROJECTGATE_API void FOnAttackExecutedWithResult_DelegateWrapper(const FMulticastScriptDelegate& OnAttackExecutedWithResult, AActor* Attacker, AActor* Target, FDamageResult const& DamageResult);


// ********** End Delegate FOnAttackExecutedWithResult *********************************************

// ********** Begin Class UCombatComponent *********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttackType); \
	DECLARE_FUNCTION(execGetAttackConfig); \
	DECLARE_FUNCTION(execGetAttackPower); \
	DECLARE_FUNCTION(execGetAttackRange); \
	DECLARE_FUNCTION(execGetAttackCost); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execIsShowingAttackRange); \
	DECLARE_FUNCTION(execHideAttackRange); \
	DECLARE_FUNCTION(execShowAttackRange); \
	DECLARE_FUNCTION(execGetAttackableTargets); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execCalculateDamage); \
	DECLARE_FUNCTION(execExecuteAttack); \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execInitializeCombat);


PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UCombatComponent_NoRegister) \
	DECLARE_SERIALIZER(UCombatComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatComponent(UCombatComponent&&) = delete; \
	UCombatComponent(const UCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_32_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatComponent;

// ********** End Class UCombatComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
