// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationComponents/AnimationManagerComponent.h"

#ifdef PROJECTGATE_AnimationManagerComponent_generated_h
#error "AnimationManagerComponent.generated.h already included, missing '#pragma once' in AnimationManagerComponent.h"
#endif
#define PROJECTGATE_AnimationManagerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
enum class EAnimationType : uint8;
struct FGameplayTag;

// ********** Begin ScriptStruct FAnimationConfig **************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationConfig_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FAnimationConfig;
// ********** End ScriptStruct FAnimationConfig ****************************************************

// ********** Begin ScriptStruct FAnimationRequest *************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationRequest_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FAnimationRequest;
// ********** End ScriptStruct FAnimationRequest ***************************************************

// ********** Begin Delegate FOnAnimationStarted ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_87_DELEGATE \
PROJECTGATE_API void FOnAnimationStarted_DelegateWrapper(const FMulticastScriptDelegate& OnAnimationStarted, EAnimationType AnimationType);


// ********** End Delegate FOnAnimationStarted *****************************************************

// ********** Begin Delegate FOnAnimationCompleted *************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_88_DELEGATE \
PROJECTGATE_API void FOnAnimationCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnAnimationCompleted, EAnimationType AnimationType);


// ********** End Delegate FOnAnimationCompleted ***************************************************

// ********** Begin Delegate FOnAnimationInterrupted ***********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_89_DELEGATE \
PROJECTGATE_API void FOnAnimationInterrupted_DelegateWrapper(const FMulticastScriptDelegate& OnAnimationInterrupted, EAnimationType AnimationType);


// ********** End Delegate FOnAnimationInterrupted *************************************************

// ********** Begin Delegate FOnAnimationEvent *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_90_DELEGATE \
PROJECTGATE_API void FOnAnimationEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAnimationEvent, EAnimationType AnimationType, FName EventName);


// ********** End Delegate FOnAnimationEvent *******************************************************

// ********** Begin Delegate FOnAnimNotifySignature ************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_91_DELEGATE \
PROJECTGATE_API void FOnAnimNotifySignature_DelegateWrapper(const FMulticastScriptDelegate& OnAnimNotifySignature, EAnimationType AnimationType, FName NotifyName);


// ********** End Delegate FOnAnimNotifySignature **************************************************

// ********** Begin Class UAnimationManagerComponent ***********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleAnimationNotify); \
	DECLARE_FUNCTION(execRegisterGASAnimation); \
	DECLARE_FUNCTION(execPlayAnimationByTag); \
	DECLARE_FUNCTION(execGetCurrentAnimationType); \
	DECLARE_FUNCTION(execIsPlayingAnimation); \
	DECLARE_FUNCTION(execStopCurrentAnimation); \
	DECLARE_FUNCTION(execPlayAnimation); \
	DECLARE_FUNCTION(execHasAnimation); \
	DECLARE_FUNCTION(execInitializeAnimationSystem);


PROJECTGATE_API UClass* Z_Construct_UClass_UAnimationManagerComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationManagerComponent(); \
	friend struct Z_Construct_UClass_UAnimationManagerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UAnimationManagerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UAnimationManagerComponent_NoRegister) \
	DECLARE_SERIALIZER(UAnimationManagerComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_97_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationManagerComponent(UAnimationManagerComponent&&) = delete; \
	UAnimationManagerComponent(const UAnimationManagerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationManagerComponent) \
	NO_API virtual ~UAnimationManagerComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_94_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_97_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationManagerComponent;

// ********** End Class UAnimationManagerComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h

// ********** Begin Enum EAnimationType ************************************************************
#define FOREACH_ENUM_EANIMATIONTYPE(op) \
	op(EAnimationType::None) \
	op(EAnimationType::MeleeAttack) \
	op(EAnimationType::RangedAttack) \
	op(EAnimationType::CastSpell) \
	op(EAnimationType::TakeDamage) \
	op(EAnimationType::Death) \
	op(EAnimationType::Dodge) \
	op(EAnimationType::Block) \
	op(EAnimationType::SpecialAbility) 

enum class EAnimationType : uint8;
template<> struct TIsUEnumClass<EAnimationType> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EAnimationType>();
// ********** End Enum EAnimationType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
