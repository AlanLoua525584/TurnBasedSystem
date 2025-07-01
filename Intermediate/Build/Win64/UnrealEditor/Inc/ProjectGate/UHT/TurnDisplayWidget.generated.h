// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/UI/TurnDisplayWidget.h"

#ifdef PROJECTGATE_TurnDisplayWidget_generated_h
#error "TurnDisplayWidget.generated.h already included, missing '#pragma once' in TurnDisplayWidget.h"
#endif
#define PROJECTGATE_TurnDisplayWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ETurnPhase : uint8;

// ********** Begin Class UTurnDisplayWidget *******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleEndTurnClicked); \
	DECLARE_FUNCTION(execHandleNextPhaseClicked); \
	DECLARE_FUNCTION(execUpdateStamina); \
	DECLARE_FUNCTION(execUpdateActionPoints); \
	DECLARE_FUNCTION(execUpdateCameraMode); \
	DECLARE_FUNCTION(execUpdateTurnOrder); \
	DECLARE_FUNCTION(execUpdatePhase); \
	DECLARE_FUNCTION(execUpdateCurrentCharacter); \
	DECLARE_FUNCTION(execUpdateTurnCount);


PROJECTGATE_API UClass* Z_Construct_UClass_UTurnDisplayWidget_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnDisplayWidget(); \
	friend struct Z_Construct_UClass_UTurnDisplayWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UTurnDisplayWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnDisplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UTurnDisplayWidget_NoRegister) \
	DECLARE_SERIALIZER(UTurnDisplayWidget)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnDisplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnDisplayWidget(UTurnDisplayWidget&&) = delete; \
	UTurnDisplayWidget(const UTurnDisplayWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnDisplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnDisplayWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnDisplayWidget) \
	NO_API virtual ~UTurnDisplayWidget();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h_16_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnDisplayWidget;

// ********** End Class UTurnDisplayWidget *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnDisplayWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
