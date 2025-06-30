// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/GridVisualComponent.h"

#ifdef PROJECTGATE_GridVisualComponent_generated_h
#error "GridVisualComponent.generated.h already included, missing '#pragma once' in GridVisualComponent.h"
#endif
#define PROJECTGATE_GridVisualComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGridVisualSettings ***********************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridVisualSettings_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FGridVisualSettings;
// ********** End ScriptStruct FGridVisualSettings *************************************************

// ********** Begin Class UGridVisualComponent *****************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridVisualComponent(); \
	friend struct Z_Construct_UClass_UGridVisualComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGridVisualComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGridVisualComponent_NoRegister) \
	DECLARE_SERIALIZER(UGridVisualComponent)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGridVisualComponent(UGridVisualComponent&&) = delete; \
	UGridVisualComponent(const UGridVisualComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridVisualComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridVisualComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridVisualComponent) \
	NO_API virtual ~UGridVisualComponent();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h_34_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGridVisualComponent;

// ********** End Class UGridVisualComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h

// ********** Begin Enum EGridVisualType ***********************************************************
#define FOREACH_ENUM_EGRIDVISUALTYPE(op) \
	op(EGridVisualType::MovementRange) \
	op(EGridVisualType::AttackRange) \
	op(EGridVisualType::Path) \
	op(EGridVisualType::Hover) \
	op(EGridVisualType::Selected) \
	op(EGridVisualType::Danger) 

enum class EGridVisualType : uint8;
template<> struct TIsUEnumClass<EGridVisualType> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EGridVisualType>();
// ********** End Enum EGridVisualType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
