// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedSystem/DataAssets/CharacterPortraitData.h"

#ifdef PROJECTGATE_CharacterPortraitData_generated_h
#error "CharacterPortraitData.generated.h already included, missing '#pragma once' in CharacterPortraitData.h"
#endif
#define PROJECTGATE_CharacterPortraitData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPortraitData *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPortraitData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPortraitData;
// ********** End ScriptStruct FPortraitData *******************************************************

// ********** Begin Class UCharacterPortraitData ***************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterPortraitData_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterPortraitData(); \
	friend struct Z_Construct_UClass_UCharacterPortraitData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterPortraitData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterPortraitData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UCharacterPortraitData_NoRegister) \
	DECLARE_SERIALIZER(UCharacterPortraitData)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterPortraitData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterPortraitData(UCharacterPortraitData&&) = delete; \
	UCharacterPortraitData(const UCharacterPortraitData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterPortraitData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterPortraitData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterPortraitData) \
	NO_API virtual ~UCharacterPortraitData();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h_60_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h_63_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterPortraitData;

// ********** End Class UCharacterPortraitData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
