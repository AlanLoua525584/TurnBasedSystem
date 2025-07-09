// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/Input/InputHandlerComponent.h"

#ifdef PROJECTGATE_InputHandlerComponent_generated_h
#error "InputHandlerComponent.generated.h already included, missing '#pragma once' in InputHandlerComponent.h"
#endif
#define PROJECTGATE_InputHandlerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputHandlerComponent ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGridPositionUnderCursor);


PROJECTGATE_API UClass* Z_Construct_UClass_UInputHandlerComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputHandlerComponent(); \
	friend struct Z_Construct_UClass_UInputHandlerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UInputHandlerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UInputHandlerComponent_NoRegister) \
	DECLARE_SERIALIZER(UInputHandlerComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputHandlerComponent(UInputHandlerComponent&&) = delete; \
	UInputHandlerComponent(const UInputHandlerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputHandlerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputHandlerComponent) \
	NO_API virtual ~UInputHandlerComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h_24_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputHandlerComponent;

// ********** End Class UInputHandlerComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
