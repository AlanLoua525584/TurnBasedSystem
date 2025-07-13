// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/TurnSystemComponent.h"

#ifdef PROJECTGATE_TurnSystemComponent_generated_h
#error "TurnSystemComponent.generated.h already included, missing '#pragma once' in TurnSystemComponent.h"
#endif
#define PROJECTGATE_TurnSystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
enum class ETurnState : uint8;

// ********** Begin ScriptStruct FActionCosts ******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionCosts_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FActionCosts;
// ********** End ScriptStruct FActionCosts ********************************************************

// ********** Begin Delegate FOnActionPointsChanged ************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_42_DELEGATE \
PROJECTGATE_API void FOnActionPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActionPointsChanged, int32 NewActionPoints);


// ********** End Delegate FOnActionPointsChanged **************************************************

// ********** Begin Delegate FOnActionPerformed ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_43_DELEGATE \
PROJECTGATE_API void FOnActionPerformed_DelegateWrapper(const FMulticastScriptDelegate& OnActionPerformed, const FString& ActionName, int32 Cost);


// ********** End Delegate FOnActionPerformed ******************************************************

// ********** Begin Delegate FOnTurnStateChanged ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_44_DELEGATE \
PROJECTGATE_API void FOnTurnStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnStateChanged, ETurnState NewState);


// ********** End Delegate FOnTurnStateChanged *****************************************************

// ********** Begin Delegate FOnTurnStarted ********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_45_DELEGATE \
PROJECTGATE_API void FOnTurnStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTurnStarted);


// ********** End Delegate FOnTurnStarted **********************************************************

// ********** Begin Delegate FOnTurnEnded **********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_46_DELEGATE \
PROJECTGATE_API void FOnTurnEnded_DelegateWrapper(const FMulticastScriptDelegate& OnTurnEnded);


// ********** End Delegate FOnTurnEnded ************************************************************

// ********** Begin Delegate FOnInitiativeChanged **************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_47_DELEGATE \
PROJECTGATE_API void FOnInitiativeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInitiativeChanged, int32 NewInitiative);


// ********** End Delegate FOnInitiativeChanged ****************************************************

// ********** Begin Class UTurnSystemComponent *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCombatAnimationCompleted); \
	DECLARE_FUNCTION(execOnCombatAnimationHit); \
	DECLARE_FUNCTION(execIsHasted); \
	DECLARE_FUNCTION(execIsSlowed); \
	DECLARE_FUNCTION(execSetHasted); \
	DECLARE_FUNCTION(execSetSlowed); \
	DECLARE_FUNCTION(execCanEndTurn); \
	DECLARE_FUNCTION(execGetCurrentInitiative); \
	DECLARE_FUNCTION(execGetTurnState); \
	DECLARE_FUNCTION(execGetActionPointPercentage); \
	DECLARE_FUNCTION(execGetMaxActionPoints); \
	DECLARE_FUNCTION(execGetCurrentActionPoints); \
	DECLARE_FUNCTION(execIsMyTurn); \
	DECLARE_FUNCTION(execModifyInitiative); \
	DECLARE_FUNCTION(execCalculateInitiative); \
	DECLARE_FUNCTION(execTryPerformAction); \
	DECLARE_FUNCTION(execCanPerformAction); \
	DECLARE_FUNCTION(execAddActionPoints); \
	DECLARE_FUNCTION(execConsumeActionPoints); \
	DECLARE_FUNCTION(execResetActionPoints); \
	DECLARE_FUNCTION(execEndTurnEarly); \
	DECLARE_FUNCTION(execOnTurnEnd); \
	DECLARE_FUNCTION(execOnTurnStart);


PROJECTGATE_API UClass* Z_Construct_UClass_UTurnSystemComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnSystemComponent(); \
	friend struct Z_Construct_UClass_UTurnSystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UTurnSystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UTurnSystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UTurnSystemComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnSystemComponent(UTurnSystemComponent&&) = delete; \
	UTurnSystemComponent(const UTurnSystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTurnSystemComponent) \
	NO_API virtual ~UTurnSystemComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_52_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_55_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnSystemComponent;

// ********** End Class UTurnSystemComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_TurnSystemComponent_h

// ********** Begin Enum ETurnState ****************************************************************
#define FOREACH_ENUM_ETURNSTATE(op) \
	op(ETurnState::Waiting) \
	op(ETurnState::Active) \
	op(ETurnState::Executing) \
	op(ETurnState::Ending) 

enum class ETurnState : uint8;
template<> struct TIsUEnumClass<ETurnState> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<ETurnState>();
// ********** End Enum ETurnState ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
