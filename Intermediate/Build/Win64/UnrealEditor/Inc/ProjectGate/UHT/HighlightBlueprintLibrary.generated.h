// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HighlightSystem/HighlightBlueprintLibrary.h"

#ifdef PROJECTGATE_HighlightBlueprintLibrary_generated_h
#error "HighlightBlueprintLibrary.generated.h already included, missing '#pragma once' in HighlightBlueprintLibrary.h"
#endif
#define PROJECTGATE_HighlightBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;
enum class EHighlightType : uint8;
struct FHighlightConfig;

// ********** Begin Class UHighlightBlueprintLibrary ***********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchHighlight); \
	DECLARE_FUNCTION(execFlashHighlight); \
	DECLARE_FUNCTION(execIsHighlightSystemAvailable); \
	DECLARE_FUNCTION(execGetHighlightConfig); \
	DECLARE_FUNCTION(execHasAnyHighlight); \
	DECLARE_FUNCTION(execGetActorsWithHighlight); \
	DECLARE_FUNCTION(execGetActorHighlights); \
	DECLARE_FUNCTION(execIsActorHighlighted); \
	DECLARE_FUNCTION(execClearAllHighlightsInWorld); \
	DECLARE_FUNCTION(execClearAllHighlightsOfType); \
	DECLARE_FUNCTION(execHighlightActors); \
	DECLARE_FUNCTION(execToggleHighlight); \
	DECLARE_FUNCTION(execClearActorHighlights); \
	DECLARE_FUNCTION(execUnhighlightActor); \
	DECLARE_FUNCTION(execHighlightActor);


PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightBlueprintLibrary_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHighlightBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UHighlightBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHighlightBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UHighlightBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHighlightBlueprintLibrary)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHighlightBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHighlightBlueprintLibrary(UHighlightBlueprintLibrary&&) = delete; \
	UHighlightBlueprintLibrary(const UHighlightBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHighlightBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHighlightBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHighlightBlueprintLibrary) \
	NO_API virtual ~UHighlightBlueprintLibrary();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h_14_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHighlightBlueprintLibrary;

// ********** End Class UHighlightBlueprintLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
