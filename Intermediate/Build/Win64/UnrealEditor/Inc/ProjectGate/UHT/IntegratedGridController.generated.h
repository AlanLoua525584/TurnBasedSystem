// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/IntegratedGridController.h"

#ifdef PROJECTGATE_IntegratedGridController_generated_h
#error "IntegratedGridController.generated.h already included, missing '#pragma once' in IntegratedGridController.h"
#endif
#define PROJECTGATE_IntegratedGridController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntegratedGridController ************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_AIntegratedGridController_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntegratedGridController(); \
	friend struct Z_Construct_UClass_AIntegratedGridController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_AIntegratedGridController_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntegratedGridController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_AIntegratedGridController_NoRegister) \
	DECLARE_SERIALIZER(AIntegratedGridController)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntegratedGridController(AIntegratedGridController&&) = delete; \
	AIntegratedGridController(const AIntegratedGridController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntegratedGridController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntegratedGridController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIntegratedGridController) \
	NO_API virtual ~AIntegratedGridController();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h_23_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntegratedGridController;

// ********** End Class AIntegratedGridController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h

// ********** Begin Enum EControlMode **************************************************************
#define FOREACH_ENUM_ECONTROLMODE(op) \
	op(EControlMode::CameraControl) \
	op(EControlMode::GridInteraction) \
	op(EControlMode::CombatMode) 

enum class EControlMode : uint8;
template<> struct TIsUEnumClass<EControlMode> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EControlMode>();
// ********** End Enum EControlMode ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
