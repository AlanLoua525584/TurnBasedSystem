// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatSystem/CombatInterface.h"

#ifdef PROJECTGATE_CombatInterface_generated_h
#error "CombatInterface.generated.h already included, missing '#pragma once' in CombatInterface.h"
#endif
#define PROJECTGATE_CombatInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UCombatComponent;
struct FDamageResult;

// ********** Begin Interface UCombatInterface *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execGetAttackSourceLocation); \
	DECLARE_FUNCTION(execGetCombatComponent); \
	DECLARE_FUNCTION(execOnDamageReceived); \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execCanBeAttacked);


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_CALLBACK_WRAPPERS
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTGATE_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatInterface(UCombatInterface&&) = delete; \
	UCombatInterface(const UCombatInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTGATE_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface) \
	virtual ~UCombatInterface() = default;


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatInterface(); \
	friend struct Z_Construct_UClass_UCombatInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UCombatInterface_NoRegister) \
	DECLARE_SERIALIZER(UCombatInterface)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	static bool Execute_CanAttack(const UObject* O, AActor* Target); \
	static bool Execute_CanBeAttacked(const UObject* O); \
	static FVector Execute_GetAttackSourceLocation(const UObject* O); \
	static UCombatComponent* Execute_GetCombatComponent(const UObject* O); \
	static void Execute_OnDamageReceived(UObject* O, FDamageResult const& DamageResult); \
	static void Execute_OnDeath(UObject* O, AActor* Killer); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_8_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_CALLBACK_WRAPPERS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatInterface;

// ********** End Interface UCombatInterface *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
