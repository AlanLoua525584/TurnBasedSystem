// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectGatePlayerController.h"

#ifdef PROJECTGATE_ProjectGatePlayerController_generated_h
#error "ProjectGatePlayerController.generated.h already included, missing '#pragma once' in ProjectGatePlayerController.h"
#endif
#define PROJECTGATE_ProjectGatePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectGatePlayerController *********************************************
PROJECTGATE_API UClass* Z_Construct_UClass_AProjectGatePlayerController_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGatePlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectGatePlayerController(); \
	friend struct Z_Construct_UClass_AProjectGatePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_AProjectGatePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectGatePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_AProjectGatePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AProjectGatePlayerController)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGatePlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectGatePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectGatePlayerController(AProjectGatePlayerController&&) = delete; \
	AProjectGatePlayerController(const AProjectGatePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectGatePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectGatePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectGatePlayerController) \
	NO_API virtual ~AProjectGatePlayerController();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGatePlayerController_h_15_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGatePlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGatePlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGatePlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectGatePlayerController;

// ********** End Class AProjectGatePlayerController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGatePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
