// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/GASSystemInterface.h"

#ifdef PROJECTGATE_GASSystemInterface_generated_h
#error "GASSystemInterface.generated.h already included, missing '#pragma once' in GASSystemInterface.h"
#endif
#define PROJECTGATE_GASSystemInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UGASSystemInterface **************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UGASSystemInterface_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTGATE_API UGASSystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGASSystemInterface(UGASSystemInterface&&) = delete; \
	UGASSystemInterface(const UGASSystemInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTGATE_API, UGASSystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASSystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASSystemInterface) \
	virtual ~UGASSystemInterface() = default;


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGASSystemInterface(); \
	friend struct Z_Construct_UClass_UGASSystemInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGASSystemInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UGASSystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGASSystemInterface_NoRegister) \
	DECLARE_SERIALIZER(UGASSystemInterface)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGASSystemInterface() {} \
public: \
	typedef UGASSystemInterface UClassType; \
	typedef IGASSystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_11_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGASSystemInterface;

// ********** End Interface UGASSystemInterface ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GASSystemInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
