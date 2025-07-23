// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/GASBridgeComponent.h"

#ifdef PROJECTGATE_GASBridgeComponent_generated_h
#error "GASBridgeComponent.generated.h already included, missing '#pragma once' in GASBridgeComponent.h"
#endif
#define PROJECTGATE_GASBridgeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGASBridgeComponent ******************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UGASBridgeComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASBridgeComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASBridgeComponent(); \
	friend struct Z_Construct_UClass_UGASBridgeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGASBridgeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGASBridgeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGASBridgeComponent_NoRegister) \
	DECLARE_SERIALIZER(UGASBridgeComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASBridgeComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGASBridgeComponent(UGASBridgeComponent&&) = delete; \
	UGASBridgeComponent(const UGASBridgeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASBridgeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASBridgeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGASBridgeComponent) \
	NO_API virtual ~UGASBridgeComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASBridgeComponent_h_10_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASBridgeComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASBridgeComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASBridgeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGASBridgeComponent;

// ********** End Class UGASBridgeComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASBridgeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
