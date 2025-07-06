// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatSystem/CombatDisplayWidget.h"

#ifdef PROJECTGATE_CombatDisplayWidget_generated_h
#error "CombatDisplayWidget.generated.h already included, missing '#pragma once' in CombatDisplayWidget.h"
#endif
#define PROJECTGATE_CombatDisplayWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FDamageResult;

// ********** Begin Class UCombatDisplayWidget *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowCombatResult); \
	DECLARE_FUNCTION(execHideTargetInfo); \
	DECLARE_FUNCTION(execShowTargetInfo); \
	DECLARE_FUNCTION(execSetAttackModeActive); \
	DECLARE_FUNCTION(execHideDamagePreview); \
	DECLARE_FUNCTION(execShowDamagePreview);


PROJECTGATE_API UClass* Z_Construct_UClass_UCombatDisplayWidget_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatDisplayWidget(); \
	friend struct Z_Construct_UClass_UCombatDisplayWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UCombatDisplayWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatDisplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UCombatDisplayWidget_NoRegister) \
	DECLARE_SERIALIZER(UCombatDisplayWidget)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatDisplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatDisplayWidget(UCombatDisplayWidget&&) = delete; \
	UCombatDisplayWidget(const UCombatDisplayWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatDisplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatDisplayWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatDisplayWidget) \
	NO_API virtual ~UCombatDisplayWidget();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h_13_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatDisplayWidget;

// ********** End Class UCombatDisplayWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
