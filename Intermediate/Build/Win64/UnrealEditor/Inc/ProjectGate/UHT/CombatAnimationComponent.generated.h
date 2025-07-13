// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationComponents/CombatAnimationComponent.h"

#ifdef PROJECTGATE_CombatAnimationComponent_generated_h
#error "CombatAnimationComponent.generated.h already included, missing '#pragma once' in CombatAnimationComponent.h"
#endif
#define PROJECTGATE_CombatAnimationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UAnimationManagerComponent;
class UCombatComponent;
enum class EAnimationType : uint8;
enum class ECombatAttackType : uint8;
struct FDamageResult;
struct FGameplayTag;

// ********** Begin ScriptStruct FCombatAnimationSequence ******************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FCombatAnimationSequence;
// ********** End ScriptStruct FCombatAnimationSequence ********************************************

// ********** Begin Delegate FOnCombatAnimationHit *************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_39_DELEGATE \
PROJECTGATE_API void FOnCombatAnimationHit_DelegateWrapper(const FMulticastScriptDelegate& OnCombatAnimationHit, AActor* Attacker, AActor* Target);


// ********** End Delegate FOnCombatAnimationHit ***************************************************

// ********** Begin Delegate FOnCombatAnimationCompleted *******************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_40_DELEGATE \
PROJECTGATE_API void FOnCombatAnimationCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCombatAnimationCompleted, AActor* Attacker, AActor* Target, bool bSuccess);


// ********** End Delegate FOnCombatAnimationCompleted *********************************************

// ********** Begin Class UCombatAnimationComponent ************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAttackHit); \
	DECLARE_FUNCTION(execOnSequenceAnimationCompleted); \
	DECLARE_FUNCTION(execPlayCastingAnimation); \
	DECLARE_FUNCTION(execPlayAbilityAnimation); \
	DECLARE_FUNCTION(execPlayDeathAnimation); \
	DECLARE_FUNCTION(execPlayDodgeAnimation); \
	DECLARE_FUNCTION(execPlayBlockAnimation); \
	DECLARE_FUNCTION(execPlayHitReaction); \
	DECLARE_FUNCTION(execExecuteCombatSequence); \
	DECLARE_FUNCTION(execInitializeCombatAnimation);


PROJECTGATE_API UClass* Z_Construct_UClass_UCombatAnimationComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatAnimationComponent(); \
	friend struct Z_Construct_UClass_UCombatAnimationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UCombatAnimationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UCombatAnimationComponent_NoRegister) \
	DECLARE_SERIALIZER(UCombatAnimationComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatAnimationComponent(UCombatAnimationComponent&&) = delete; \
	UCombatAnimationComponent(const UCombatAnimationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatAnimationComponent) \
	NO_API virtual ~UCombatAnimationComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_43_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_46_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatAnimationComponent;

// ********** End Class UCombatAnimationComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
