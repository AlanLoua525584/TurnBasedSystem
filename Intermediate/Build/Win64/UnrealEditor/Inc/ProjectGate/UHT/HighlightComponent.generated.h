// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HighlightSystem/HighlightComponent.h"

#ifdef PROJECTGATE_HighlightComponent_generated_h
#error "HighlightComponent.generated.h already included, missing '#pragma once' in HighlightComponent.h"
#endif
#define PROJECTGATE_HighlightComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
enum class EHighlightType : uint8;
struct FKey;

// ********** Begin Delegate FOnHighlightStateChanged **********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_11_DELEGATE \
PROJECTGATE_API void FOnHighlightStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHighlightStateChanged, EHighlightType Type, bool bIsHighlighted);


// ********** End Delegate FOnHighlightStateChanged ************************************************

// ********** Begin Class UHighlightComponent ******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorDeselected); \
	DECLARE_FUNCTION(execOnActorSelected); \
	DECLARE_FUNCTION(execOnActorClicked); \
	DECLARE_FUNCTION(execOnMouseEnd); \
	DECLARE_FUNCTION(execOnMouseBegin); \
	DECLARE_FUNCTION(execRefreshHighlightComponents); \
	DECLARE_FUNCTION(execHasAnyHighlight); \
	DECLARE_FUNCTION(execGetActiveHighlights); \
	DECLARE_FUNCTION(execIsHighlighted); \
	DECLARE_FUNCTION(execToggleHighlight); \
	DECLARE_FUNCTION(execClearAllHighlights); \
	DECLARE_FUNCTION(execUnhighlightActor); \
	DECLARE_FUNCTION(execHighlightActor);


PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHighlightComponent(); \
	friend struct Z_Construct_UClass_UHighlightComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHighlightComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UHighlightComponent_NoRegister) \
	DECLARE_SERIALIZER(UHighlightComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHighlightComponent(UHighlightComponent&&) = delete; \
	UHighlightComponent(const UHighlightComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHighlightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHighlightComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHighlightComponent) \
	NO_API virtual ~UHighlightComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_19_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHighlightComponent;

// ********** End Class UHighlightComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
