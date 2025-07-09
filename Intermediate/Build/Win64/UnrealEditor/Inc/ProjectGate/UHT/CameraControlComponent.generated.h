// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/Camera/CameraControlComponent.h"

#ifdef PROJECTGATE_CameraControlComponent_generated_h
#error "CameraControlComponent.generated.h already included, missing '#pragma once' in CameraControlComponent.h"
#endif
#define PROJECTGATE_CameraControlComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APlayerController;

// ********** Begin Delegate FOnCameraModeChanged **************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_16_DELEGATE \
PROJECTGATE_API void FOnCameraModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraModeChanged, bool bIsDynamicMode);


// ********** End Delegate FOnCameraModeChanged ****************************************************

// ********** Begin Class UCameraControlComponent **************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execIsInDynamicMode); \
	DECLARE_FUNCTION(execOnTurnChangedCamera); \
	DECLARE_FUNCTION(execFocusOnActor); \
	DECLARE_FUNCTION(execToggleCameraMode); \
	DECLARE_FUNCTION(execSwitchToDynamicMode); \
	DECLARE_FUNCTION(execSwitchToFreeCamera); \
	DECLARE_FUNCTION(execInitializeCameraSystem);


PROJECTGATE_API UClass* Z_Construct_UClass_UCameraControlComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraControlComponent(); \
	friend struct Z_Construct_UClass_UCameraControlComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UCameraControlComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraControlComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UCameraControlComponent_NoRegister) \
	DECLARE_SERIALIZER(UCameraControlComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraControlComponent(UCameraControlComponent&&) = delete; \
	UCameraControlComponent(const UCameraControlComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraControlComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraControlComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraControlComponent) \
	NO_API virtual ~UCameraControlComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_18_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraControlComponent;

// ********** End Class UCameraControlComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
