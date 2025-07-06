// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatSystem/CombatStats.h"

#ifdef PROJECTGATE_CombatStats_generated_h
#error "CombatStats.generated.h already included, missing '#pragma once' in CombatStats.h"
#endif
#define PROJECTGATE_CombatStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTurnOrderData ****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTurnOrderData_Statics; \
	PROJECTGATE_API static class UScriptStruct* StaticStruct();


struct FTurnOrderData;
// ********** End ScriptStruct FTurnOrderData ******************************************************

// ********** Begin ScriptStruct FCombatStats ******************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatStats_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCombatStats;
// ********** End ScriptStruct FCombatStats ********************************************************

// ********** Begin ScriptStruct FAttackConfig *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttackConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAttackConfig;
// ********** End ScriptStruct FAttackConfig *******************************************************

// ********** Begin ScriptStruct FDamageResult *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDamageResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDamageResult;
// ********** End ScriptStruct FDamageResult *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatStats_h

// ********** Begin Enum ECombatAttackType *********************************************************
#define FOREACH_ENUM_ECOMBATATTACKTYPE(op) \
	op(ECombatAttackType::Melee) \
	op(ECombatAttackType::Ranged) \
	op(ECombatAttackType::Magic) \
	op(ECombatAttackType::Area) 

enum class ECombatAttackType : uint8;
template<> struct TIsUEnumClass<ECombatAttackType> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<ECombatAttackType>();
// ********** End Enum ECombatAttackType ***********************************************************

// ********** Begin Enum EDamageType ***************************************************************
#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(EDamageType::Physical) \
	op(EDamageType::Magical) \
	op(EDamageType::TrueDamage) \
	op(EDamageType::Elemental) 

enum class EDamageType : uint8;
template<> struct TIsUEnumClass<EDamageType> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EDamageType>();
// ********** End Enum EDamageType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
