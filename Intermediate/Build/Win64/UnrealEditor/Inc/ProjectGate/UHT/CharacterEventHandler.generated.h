// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EventHandlers/CharacterEventHandler.h"

#ifdef PROJECTGATE_CharacterEventHandler_generated_h
#error "CharacterEventHandler.generated.h already included, missing '#pragma once' in CharacterEventHandler.h"
#endif
#define PROJECTGATE_CharacterEventHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class UCharacterEventHandler ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleHealthChanged); \
	DECLARE_FUNCTION(execHandleAPChanged);


PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterEventHandler_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterEventHandler(); \
	friend struct Z_Construct_UClass_UCharacterEventHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterEventHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterEventHandler, UEventHandlerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UCharacterEventHandler_NoRegister) \
	DECLARE_SERIALIZER(UCharacterEventHandler)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterEventHandler(UCharacterEventHandler&&) = delete; \
	UCharacterEventHandler(const UCharacterEventHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterEventHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterEventHandler) \
	NO_API virtual ~UCharacterEventHandler();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h_19_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterEventHandler;

// ********** End Class UCharacterEventHandler *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
