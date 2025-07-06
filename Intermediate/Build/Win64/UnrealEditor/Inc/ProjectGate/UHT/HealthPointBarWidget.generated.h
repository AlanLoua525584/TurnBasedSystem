// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatSystem/HealthPointBarWidget.h"

#ifdef PROJECTGATE_HealthPointBarWidget_generated_h
#error "HealthPointBarWidget.generated.h already included, missing '#pragma once' in HealthPointBarWidget.h"
#endif
#define PROJECTGATE_HealthPointBarWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FLinearColor;

// ********** Begin Class UHealthBarWidget *********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHealthBarColor); \
	DECLARE_FUNCTION(execUpdateHealth);


PROJECTGATE_API UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthBarWidget(); \
	friend struct Z_Construct_UClass_UHealthBarWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealthBarWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UHealthBarWidget_NoRegister) \
	DECLARE_SERIALIZER(UHealthBarWidget)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBarWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealthBarWidget(UHealthBarWidget&&) = delete; \
	UHealthBarWidget(const UHealthBarWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBarWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBarWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBarWidget) \
	NO_API virtual ~UHealthBarWidget();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h_12_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealthBarWidget;

// ********** End Class UHealthBarWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_HealthPointBarWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
