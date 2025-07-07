// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/UI/TurnOrderWidget.h"

#ifdef PROJECTGATE_TurnOrderWidget_generated_h
#error "TurnOrderWidget.generated.h already included, missing '#pragma once' in TurnOrderWidget.h"
#endif
#define PROJECTGATE_TurnOrderWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class UTurnOrderWidget *********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHighlightCurrentCharacter); \
	DECLARE_FUNCTION(execUpdateTurnOrder);


PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnOrderWidget(); \
	friend struct Z_Construct_UClass_UTurnOrderWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnOrderWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UTurnOrderWidget_NoRegister) \
	DECLARE_SERIALIZER(UTurnOrderWidget)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnOrderWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnOrderWidget(UTurnOrderWidget&&) = delete; \
	UTurnOrderWidget(const UTurnOrderWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnOrderWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnOrderWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnOrderWidget) \
	NO_API virtual ~UTurnOrderWidget();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h_12_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnOrderWidget;

// ********** End Class UTurnOrderWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
