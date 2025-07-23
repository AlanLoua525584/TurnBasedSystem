// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventHandlers/EventHandlerBase.h"

#ifdef PROJECTGATE_EventHandlerBase_generated_h
#error "EventHandlerBase.generated.h already included, missing '#pragma once' in EventHandlerBase.h"
#endif
#define PROJECTGATE_EventHandlerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEventHandlerBase ********************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UEventHandlerBase_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventHandlerBase(); \
	friend struct Z_Construct_UClass_UEventHandlerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UEventHandlerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UEventHandlerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UEventHandlerBase_NoRegister) \
	DECLARE_SERIALIZER(UEventHandlerBase)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventHandlerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEventHandlerBase(UEventHandlerBase&&) = delete; \
	UEventHandlerBase(const UEventHandlerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventHandlerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventHandlerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventHandlerBase)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h_13_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEventHandlerBase;

// ********** End Class UEventHandlerBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
