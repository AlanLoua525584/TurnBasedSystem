// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HighlightSystem/HighlightManager.h"

#ifdef PROJECTGATE_HighlightManager_generated_h
#error "HighlightManager.generated.h already included, missing '#pragma once' in HighlightManager.h"
#endif
#define PROJECTGATE_HighlightManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UDataTable;
enum class EHighlightType : uint8;
struct FHighlightConfig;

// ********** Begin Delegate FOnHighlightChanged ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_10_DELEGATE \
PROJECTGATE_API void FOnHighlightChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHighlightChanged, AActor* Actor, EHighlightType Type);


// ********** End Delegate FOnHighlightChanged *****************************************************

// ********** Begin Class UHighlightManager ********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHighlightConfig); \
	DECLARE_FUNCTION(execLoadHighlightConfigs); \
	DECLARE_FUNCTION(execGetActorsWithHighlight); \
	DECLARE_FUNCTION(execGetActorHighlights); \
	DECLARE_FUNCTION(execHasHighlight); \
	DECLARE_FUNCTION(execClearAllHighlights); \
	DECLARE_FUNCTION(execClearAllHighlightsOfType); \
	DECLARE_FUNCTION(execRemoveAllHighlights); \
	DECLARE_FUNCTION(execRemoveHighlight); \
	DECLARE_FUNCTION(execSetHighlight);


PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightManager_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHighlightManager(); \
	friend struct Z_Construct_UClass_UHighlightManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UHighlightManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UHighlightManager_NoRegister) \
	DECLARE_SERIALIZER(UHighlightManager)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHighlightManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHighlightManager(UHighlightManager&&) = delete; \
	UHighlightManager(const UHighlightManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHighlightManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHighlightManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHighlightManager) \
	NO_API virtual ~UHighlightManager();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_13_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHighlightManager;

// ********** End Class UHighlightManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
