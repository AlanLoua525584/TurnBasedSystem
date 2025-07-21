// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HighlightSystem/HighlightTypes.h"

#ifdef PROJECTGATE_HighlightTypes_generated_h
#error "HighlightTypes.generated.h already included, missing '#pragma once' in HighlightTypes.h"
#endif
#define PROJECTGATE_HighlightTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHighlightConfig **************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHighlightConfig_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FHighlightConfig;
// ********** End ScriptStruct FHighlightConfig ****************************************************

// ********** Begin ScriptStruct FHighlightState ***************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHighlightState_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHighlightState;
// ********** End ScriptStruct FHighlightState *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h

// ********** Begin Enum EHighlightType ************************************************************
#define FOREACH_ENUM_EHIGHLIGHTTYPE(op) \
	op(EHighlightType::None) \
	op(EHighlightType::CurrentTurn) \
	op(EHighlightType::AttackTarget) \
	op(EHighlightType::Hover) \
	op(EHighlightType::Selected) \
	op(EHighlightType::Ally) \
	op(EHighlightType::Enemy) \
	op(EHighlightType::Interactable) \
	op(EHighlightType::Custom) 

enum class EHighlightType : uint8;
template<> struct TIsUEnumClass<EHighlightType> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EHighlightType>();
// ********** End Enum EHighlightType **************************************************************

// ********** Begin Enum EHighlightPriority ********************************************************
#define FOREACH_ENUM_EHIGHLIGHTPRIORITY(op) \
	op(EHighlightPriority::Low) \
	op(EHighlightPriority::Medium) \
	op(EHighlightPriority::High) \
	op(EHighlightPriority::Override) 

enum class EHighlightPriority : uint8;
template<> struct TIsUEnumClass<EHighlightPriority> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EHighlightPriority>();
// ********** End Enum EHighlightPriority **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
