// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/GridPlayerController.h"

#ifdef PROJECTGATE_GridPlayerController_generated_h
#error "GridPlayerController.generated.h already included, missing '#pragma once' in GridPlayerController.h"
#endif
#define PROJECTGATE_GridPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UEnhancedMovementSystem;
struct FInputActionValue;

// ********** Begin Delegate FUIOnMovementModeChanged **********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_21_DELEGATE \
PROJECTGATE_API void FUIOnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& UIOnMovementModeChanged, bool bIsDynamicMode);


// ********** End Delegate FUIOnMovementModeChanged ************************************************

// ********** Begin Class AGridPlayerController ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetControlledMovementSystem); \
	DECLARE_FUNCTION(execOnMove); \
	DECLARE_FUNCTION(execSwitchMovementMode); \
	DECLARE_FUNCTION(execOnDynamicMode); \
	DECLARE_FUNCTION(execGetCameraPawn); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execFocusOnCurrentTurnCharacter); \
	DECLARE_FUNCTION(execFocusOnActor);


PROJECTGATE_API UClass* Z_Construct_UClass_AGridPlayerController_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridPlayerController(); \
	friend struct Z_Construct_UClass_AGridPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_AGridPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_AGridPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AGridPlayerController)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridPlayerController(AGridPlayerController&&) = delete; \
	AGridPlayerController(const AGridPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridPlayerController) \
	NO_API virtual ~AGridPlayerController();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_26_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_29_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridPlayerController;

// ********** End Class AGridPlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
