// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/GASManagerComponent.h"

#ifdef PROJECTGATE_GASManagerComponent_generated_h
#error "GASManagerComponent.generated.h already included, missing '#pragma once' in GASManagerComponent.h"
#endif
#define PROJECTGATE_GASManagerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UGameplayEffect;
class UGateAbilitySystemComponent;
class UGateAttributeSet;
class UGateGameplayAbility;
struct FGameplayTag;

// ********** Begin Delegate FOnAbilityCommitted ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_15_DELEGATE \
PROJECTGATE_API void FOnAbilityCommitted_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCommitted, FGameplayTag AbilityTag, int32 APCost, int32 CooldownTurns);


// ********** End Delegate FOnAbilityCommitted *****************************************************

// ********** Begin Delegate FOnAttributeChanged ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_16_DELEGATE \
PROJECTGATE_API void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, FGameplayTag AttributeTag, float NewValue);


// ********** End Delegate FOnAttributeChanged *****************************************************

// ********** Begin Class UGASManagerComponent *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAbilityByTag); \
	DECLARE_FUNCTION(execGetAttributeSet); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent); \
	DECLARE_FUNCTION(execOnTurnEnd); \
	DECLARE_FUNCTION(execOnTurnStart); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithTag); \
	DECLARE_FUNCTION(execApplyGameplayEffectToSelf); \
	DECLARE_FUNCTION(execSetAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetAbilityAPCost); \
	DECLARE_FUNCTION(execGetAbilityCooldownTurns); \
	DECLARE_FUNCTION(execGetActivatableAbilityTags); \
	DECLARE_FUNCTION(execCanActivateAbility); \
	DECLARE_FUNCTION(execTryActivateAbilityByClass); \
	DECLARE_FUNCTION(execTryActivateAbilityByTag); \
	DECLARE_FUNCTION(execGrantAbilities); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execInitializeGASSystem);


PROJECTGATE_API UClass* Z_Construct_UClass_UGASManagerComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASManagerComponent(); \
	friend struct Z_Construct_UClass_UGASManagerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGASManagerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGASManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGASManagerComponent_NoRegister) \
	DECLARE_SERIALIZER(UGASManagerComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGASManagerComponent(UGASManagerComponent&&) = delete; \
	UGASManagerComponent(const UGASManagerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGASManagerComponent) \
	NO_API virtual ~UGASManagerComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_19_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGASManagerComponent;

// ********** End Class UGASManagerComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASManagerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
