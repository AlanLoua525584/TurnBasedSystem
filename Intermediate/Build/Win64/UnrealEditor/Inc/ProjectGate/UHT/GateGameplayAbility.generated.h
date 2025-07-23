// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/GateGameplayAbility.h"

#ifdef PROJECTGATE_GateGameplayAbility_generated_h
#error "GateGameplayAbility.generated.h already included, missing '#pragma once' in GateGameplayAbility.h"
#endif
#define PROJECTGATE_GateGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UCombatComponent;
class UGridMovementComponent;
class UTurnSystemComponent;

// ********** Begin Class UGateGameplayAbility *****************************************************
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateDamageWithCurrentSystem); \
	DECLARE_FUNCTION(execGetOwnerTurnComponent); \
	DECLARE_FUNCTION(execGetOwnerCombatComponent); \
	DECLARE_FUNCTION(execGetOwnerGridMovement); \
	DECLARE_FUNCTION(execPlayAbilityMontage); \
	DECLARE_FUNCTION(execConsumeAPAndResources); \
	DECLARE_FUNCTION(execGetValidTargets); \
	DECLARE_FUNCTION(execIsFriendlyTarget); \
	DECLARE_FUNCTION(execIsValidTarget); \
	DECLARE_FUNCTION(execCheckLineOfSight); \
	DECLARE_FUNCTION(execIsTargetInRange);


PROJECTGATE_API UClass* Z_Construct_UClass_UGateGameplayAbility_NoRegister();

#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGateGameplayAbility(); \
	friend struct Z_Construct_UClass_UGateGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTGATE_API UClass* Z_Construct_UClass_UGateGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UGateGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectGate"), Z_Construct_UClass_UGateGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UGateGameplayAbility)


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGateGameplayAbility(UGateGameplayAbility&&) = delete; \
	UGateGameplayAbility(const UGateGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGateGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGateGameplayAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGateGameplayAbility) \
	NO_API virtual ~UGateGameplayAbility();


#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h_25_PROLOG
#define FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGateGameplayAbility;

// ********** End Class UGateGameplayAbility *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h

// ********** Begin Enum EAbilityTargetType ********************************************************
#define FOREACH_ENUM_EABILITYTARGETTYPE(op) \
	op(EAbilityTargetType::None) \
	op(EAbilityTargetType::Self) \
	op(EAbilityTargetType::SingleEnemy) \
	op(EAbilityTargetType::SingleAlly) \
	op(EAbilityTargetType::AllEnemies) \
	op(EAbilityTargetType::AllAllies) \
	op(EAbilityTargetType::AreaOfEffect) 

enum class EAbilityTargetType : uint8;
template<> struct TIsUEnumClass<EAbilityTargetType> { enum { Value = true }; };
template<> PROJECTGATE_API UEnum* StaticEnum<EAbilityTargetType>();
// ********** End Enum EAbilityTargetType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
