// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/Components/Movement/MovementValidatorComponent.h"

#ifdef PROJECTGATE_MovementValidatorComponent_generated_h
#error "MovementValidatorComponent.generated.h already included, missing '#pragma once' in MovementValidatorComponent.h"
#endif
#define PROJECTGATE_MovementValidatorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IMovementRule;
struct FMovementValidationResult;

// ********** Begin ScriptStruct FMovementValidationResult *****************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementValidationResult_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FMovementValidationResult;
// ********** End ScriptStruct FMovementValidationResult *******************************************

// ********** Begin Interface UMovementRule ********************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UMovementRule_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTGATE_API UMovementRule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementRule(UMovementRule&&) = delete; \
	UMovementRule(const UMovementRule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTGATE_API, UMovementRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementRule); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementRule) \
	virtual ~UMovementRule() = default;


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_33_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovementRule(); \
	friend struct Z_Construct_UClass_UMovementRule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UMovementRule_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementRule, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UMovementRule_NoRegister) \
	DECLARE_SERIALIZER(UMovementRule)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_33_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_33_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovementRule() {} \
public: \
	typedef UMovementRule UClassType; \
	typedef IMovementRule ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_30_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementRule;

// ********** End Interface UMovementRule **********************************************************

// ********** Begin Class UMovementValidatorComponent **********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddValidationRule); \
	DECLARE_FUNCTION(execValidateGridCell); \
	DECLARE_FUNCTION(execValidateMovement);


PROJECTGATE_API UClass* Z_Construct_UClass_UMovementValidatorComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementValidatorComponent(); \
	friend struct Z_Construct_UClass_UMovementValidatorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UMovementValidatorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementValidatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UMovementValidatorComponent_NoRegister) \
	DECLARE_SERIALIZER(UMovementValidatorComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementValidatorComponent(UMovementValidatorComponent&&) = delete; \
	UMovementValidatorComponent(const UMovementValidatorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementValidatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementValidatorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovementValidatorComponent) \
	NO_API virtual ~UMovementValidatorComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_44_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementValidatorComponent;

// ********** End Class UMovementValidatorComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
