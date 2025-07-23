// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/UI/UIManagerComponent.h"

#ifdef PROJECTGATE_UIManagerComponent_generated_h
#error "UIManagerComponent.generated.h already included, missing '#pragma once' in UIManagerComponent.h"
#endif
#define PROJECTGATE_UIManagerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UCombatDisplayWidget;
class UTurnOrderWidget;
enum class ETurnPhase : uint8;
struct FDamageResult;

// ********** Begin Class UUIManagerComponent ******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTurnOrderChanged); \
	DECLARE_FUNCTION(execOnPhaseChanged); \
	DECLARE_FUNCTION(execOnTurnChanged); \
	DECLARE_FUNCTION(execDestroyAllUI); \
	DECLARE_FUNCTION(execHideCombatUI); \
	DECLARE_FUNCTION(execSetAttackModeActive); \
	DECLARE_FUNCTION(execShowCombatResult); \
	DECLARE_FUNCTION(execHideDamagePreview); \
	DECLARE_FUNCTION(execShowDamagePreview); \
	DECLARE_FUNCTION(execUpdateTurnOrderUI); \
	DECLARE_FUNCTION(execUpdateCombatUI); \
	DECLARE_FUNCTION(execGetTurnOrderWidget); \
	DECLARE_FUNCTION(execGetCombatDisplayWidget); \
	DECLARE_FUNCTION(execCreateAllUI);


PROJECTGATE_API UClass* Z_Construct_UClass_UUIManagerComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIManagerComponent(); \
	friend struct Z_Construct_UClass_UUIManagerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UUIManagerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UUIManagerComponent_NoRegister) \
	DECLARE_SERIALIZER(UUIManagerComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIManagerComponent(UUIManagerComponent&&) = delete; \
	UUIManagerComponent(const UUIManagerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIManagerComponent) \
	NO_API virtual ~UUIManagerComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h_18_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIManagerComponent;

// ********** End Class UUIManagerComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
