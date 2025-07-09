// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/Combat/CombatModeComponent.h"

#ifdef PROJECTGATE_CombatModeComponent_generated_h
#error "CombatModeComponent.generated.h already included, missing '#pragma once' in CombatModeComponent.h"
#endif
#define PROJECTGATE_CombatModeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FDamageResult;

// ********** Begin Delegate FOnAttackModeChanged **************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_16_DELEGATE \
PROJECTGATE_API void FOnAttackModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttackModeChanged, bool bIsInAttackMode);


// ********** End Delegate FOnAttackModeChanged ****************************************************

// ********** Begin Class UCombatModeComponent *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCombatResultReceived); \
	DECLARE_FUNCTION(execIsInAttackMode); \
	DECLARE_FUNCTION(execToggleAttackMode); \
	DECLARE_FUNCTION(execExitAttackMode); \
	DECLARE_FUNCTION(execEnterAttackMode);


PROJECTGATE_API UClass* Z_Construct_UClass_UCombatModeComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatModeComponent(); \
	friend struct Z_Construct_UClass_UCombatModeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UCombatModeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UCombatModeComponent_NoRegister) \
	DECLARE_SERIALIZER(UCombatModeComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatModeComponent(UCombatModeComponent&&) = delete; \
	UCombatModeComponent(const UCombatModeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatModeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatModeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatModeComponent) \
	NO_API virtual ~UCombatModeComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_18_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatModeComponent;

// ********** End Class UCombatModeComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
