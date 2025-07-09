// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/Combat/ModeManagerComponent.h"

#ifdef PROJECTGATE_ModeManagerComponent_generated_h
#error "ModeManagerComponent.generated.h already included, missing '#pragma once' in ModeManagerComponent.h"
#endif
#define PROJECTGATE_ModeManagerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FBoolOnMovementModeChanged ********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_20_DELEGATE \
PROJECTGATE_API void FBoolOnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& BoolOnMovementModeChanged, bool bIsDynamicMode);


// ********** End Delegate FBoolOnMovementModeChanged **********************************************

// ********** Begin Class UModeManagerComponent ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsInDynamicMode); \
	DECLARE_FUNCTION(execEnterDynamicMode); \
	DECLARE_FUNCTION(execEnterGridMode); \
	DECLARE_FUNCTION(execOnDynamicMode); \
	DECLARE_FUNCTION(execSwitchMovementMode);


PROJECTGATE_API UClass* Z_Construct_UClass_UModeManagerComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModeManagerComponent(); \
	friend struct Z_Construct_UClass_UModeManagerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UModeManagerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UModeManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UModeManagerComponent_NoRegister) \
	DECLARE_SERIALIZER(UModeManagerComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModeManagerComponent(UModeManagerComponent&&) = delete; \
	UModeManagerComponent(const UModeManagerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModeManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModeManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModeManagerComponent) \
	NO_API virtual ~UModeManagerComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_26_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModeManagerComponent;

// ********** End Class UModeManagerComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
