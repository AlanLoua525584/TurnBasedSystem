// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/GateAbilitySystemComponent.h"

#ifdef PROJECTGATE_GateAbilitySystemComponent_generated_h
#error "GateAbilitySystemComponent.generated.h already included, missing '#pragma once' in GateAbilitySystemComponent.h"
#endif
#define PROJECTGATE_GateAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGateAbilitySystemComponent **********************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGateAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UGateAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGateAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UGateAbilitySystemComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGateAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGateAbilitySystemComponent(UGateAbilitySystemComponent&&) = delete; \
	UGateAbilitySystemComponent(const UGateAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGateAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGateAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGateAbilitySystemComponent) \
	NO_API virtual ~UGateAbilitySystemComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h_13_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGateAbilitySystemComponent;

// ********** End Class UGateAbilitySystemComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
