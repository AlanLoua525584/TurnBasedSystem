// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"

#ifdef PROJECTGATE_TurnOrderEntryWidget_generated_h
#error "TurnOrderEntryWidget.generated.h already included, missing '#pragma once' in TurnOrderEntryWidget.h"
#endif
#define PROJECTGATE_TurnOrderEntryWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ATurnBasedCharacter;

// ********** Begin Class UTurnOrderEntryWidget ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssociatedCharacter); \
	DECLARE_FUNCTION(execSetHighlighted); \
	DECLARE_FUNCTION(execSetCharacterData);


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_CALLBACK_WRAPPERS
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnOrderEntryWidget(); \
	friend struct Z_Construct_UClass_UTurnOrderEntryWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnOrderEntryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister) \
	DECLARE_SERIALIZER(UTurnOrderEntryWidget)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnOrderEntryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnOrderEntryWidget(UTurnOrderEntryWidget&&) = delete; \
	UTurnOrderEntryWidget(const UTurnOrderEntryWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnOrderEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnOrderEntryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnOrderEntryWidget) \
	NO_API virtual ~UTurnOrderEntryWidget();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_12_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_CALLBACK_WRAPPERS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnOrderEntryWidget;

// ********** End Class UTurnOrderEntryWidget ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
