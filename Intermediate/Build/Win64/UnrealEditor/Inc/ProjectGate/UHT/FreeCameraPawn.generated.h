// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FreeCameraPawn.h"

#ifdef PROJECTGATE_FreeCameraPawn_generated_h
#error "FreeCameraPawn.generated.h already included, missing '#pragma once' in FreeCameraPawn.h"
#endif
#define PROJECTGATE_FreeCameraPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class AFreeCameraPawn **********************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMovementBounds); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execClearFollowTarget); \
	DECLARE_FUNCTION(execSetFollowTarget); \
	DECLARE_FUNCTION(execFocusOnActor);


PROJECTGATE_API UClass* Z_Construct_UClass_AFreeCameraPawn_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFreeCameraPawn(); \
	friend struct Z_Construct_UClass_AFreeCameraPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_AFreeCameraPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(AFreeCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_AFreeCameraPawn_NoRegister) \
	DECLARE_SERIALIZER(AFreeCameraPawn)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFreeCameraPawn(AFreeCameraPawn&&) = delete; \
	AFreeCameraPawn(const AFreeCameraPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFreeCameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFreeCameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFreeCameraPawn) \
	NO_API virtual ~AFreeCameraPawn();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h_9_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFreeCameraPawn;

// ********** End Class AFreeCameraPawn ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
