// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/GateGameplayAbility.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGateGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateGameplayAbility();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateGameplayAbility_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridMovementComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnSystemComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EAbilityTargetType();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAbilityTargetType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityTargetType;
static UEnum* EAbilityTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EAbilityTargetType, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EAbilityTargetType"));
	}
	return Z_Registration_Info_UEnum_EAbilityTargetType.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EAbilityTargetType>()
{
	return EAbilityTargetType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EAbilityTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllAllies.Name", "EAbilityTargetType::AllAllies" },
		{ "AllEnemies.Name", "EAbilityTargetType::AllEnemies" },
		{ "AreaOfEffect.Name", "EAbilityTargetType::AreaOfEffect" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
		{ "None.Name", "EAbilityTargetType::None" },
		{ "Self.Name", "EAbilityTargetType::Self" },
		{ "SingleAlly.Name", "EAbilityTargetType::SingleAlly" },
		{ "SingleEnemy.Name", "EAbilityTargetType::SingleEnemy" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityTargetType::None", (int64)EAbilityTargetType::None },
		{ "EAbilityTargetType::Self", (int64)EAbilityTargetType::Self },
		{ "EAbilityTargetType::SingleEnemy", (int64)EAbilityTargetType::SingleEnemy },
		{ "EAbilityTargetType::SingleAlly", (int64)EAbilityTargetType::SingleAlly },
		{ "EAbilityTargetType::AllEnemies", (int64)EAbilityTargetType::AllEnemies },
		{ "EAbilityTargetType::AllAllies", (int64)EAbilityTargetType::AllAllies },
		{ "EAbilityTargetType::AreaOfEffect", (int64)EAbilityTargetType::AreaOfEffect },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EAbilityTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EAbilityTargetType",
	"EAbilityTargetType",
	Z_Construct_UEnum_ProjectGate_EAbilityTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EAbilityTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EAbilityTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EAbilityTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EAbilityTargetType()
{
	if (!Z_Registration_Info_UEnum_EAbilityTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityTargetType.InnerSingleton, Z_Construct_UEnum_ProjectGate_EAbilityTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityTargetType.InnerSingleton;
}
// ********** End Enum EAbilityTargetType **********************************************************

// ********** Begin Class UGateGameplayAbility Function CalculateDamageWithCurrentSystem ***********
struct Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics
{
	struct GateGameplayAbility_eventCalculateDamageWithCurrentSystem_Parms
	{
		float BaseDamage;
		AActor* Target;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd]\xef\xbf\xbd\xef\xbf\xbdX\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xce\xa1^\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd]\xef\xbf\xbd\xef\xbf\xbdX\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xce\xa1^" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventCalculateDamageWithCurrentSystem_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventCalculateDamageWithCurrentSystem_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventCalculateDamageWithCurrentSystem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "CalculateDamageWithCurrentSystem", Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::GateGameplayAbility_eventCalculateDamageWithCurrentSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::GateGameplayAbility_eventCalculateDamageWithCurrentSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execCalculateDamageWithCurrentSystem)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateDamageWithCurrentSystem(Z_Param_BaseDamage,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function CalculateDamageWithCurrentSystem *************

// ********** Begin Class UGateGameplayAbility Function CheckLineOfSight ***************************
struct Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics
{
	struct GateGameplayAbility_eventCheckLineOfSight_Parms
	{
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventCheckLineOfSight_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GateGameplayAbility_eventCheckLineOfSight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GateGameplayAbility_eventCheckLineOfSight_Parms), &Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "CheckLineOfSight", Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::GateGameplayAbility_eventCheckLineOfSight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::GateGameplayAbility_eventCheckLineOfSight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execCheckLineOfSight)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckLineOfSight(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function CheckLineOfSight *****************************

// ********** Begin Class UGateGameplayAbility Function ConsumeAPAndResources **********************
struct Z_Construct_UFunction_UGateGameplayAbility_ConsumeAPAndResources_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_ConsumeAPAndResources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "ConsumeAPAndResources", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_ConsumeAPAndResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_ConsumeAPAndResources_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGateGameplayAbility_ConsumeAPAndResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_ConsumeAPAndResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execConsumeAPAndResources)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeAPAndResources();
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function ConsumeAPAndResources ************************

// ********** Begin Class UGateGameplayAbility Function GetOwnerCombatComponent ********************
struct Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics
{
	struct GateGameplayAbility_eventGetOwnerCombatComponent_Parms
	{
		UCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventGetOwnerCombatComponent_Parms, ReturnValue), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "GetOwnerCombatComponent", Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::GateGameplayAbility_eventGetOwnerCombatComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::GateGameplayAbility_eventGetOwnerCombatComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execGetOwnerCombatComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCombatComponent**)Z_Param__Result=P_THIS->GetOwnerCombatComponent();
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function GetOwnerCombatComponent **********************

// ********** Begin Class UGateGameplayAbility Function GetOwnerGridMovement ***********************
struct Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics
{
	struct GateGameplayAbility_eventGetOwnerGridMovement_Parms
	{
		UGridMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xdd\xa7\xef\xbf\xbds \xef\xbf\xbdP\xef\xbf\xbd\xec\xa6\xb3\xef\xbf\xbd\xef\xbf\xbdGridManager\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd?\n    UFUNCTION(BlueprintPure, Category = \"Ability\")\n    class AGridManager* GetGridManager() const;\n    */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xa7\xef\xbf\xbds \xef\xbf\xbdP\xef\xbf\xbd\xec\xa6\xb3\xef\xbf\xbd\xef\xbf\xbdGridManager\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd?\n    UFUNCTION(BlueprintPure, Category = \"Ability\")\n    class AGridManager* GetGridManager() const;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventGetOwnerGridMovement_Parms, ReturnValue), Z_Construct_UClass_UGridMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "GetOwnerGridMovement", Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::GateGameplayAbility_eventGetOwnerGridMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::GateGameplayAbility_eventGetOwnerGridMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execGetOwnerGridMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGridMovementComponent**)Z_Param__Result=P_THIS->GetOwnerGridMovement();
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function GetOwnerGridMovement *************************

// ********** Begin Class UGateGameplayAbility Function GetOwnerTurnComponent **********************
struct Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics
{
	struct GateGameplayAbility_eventGetOwnerTurnComponent_Parms
	{
		UTurnSystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventGetOwnerTurnComponent_Parms, ReturnValue), Z_Construct_UClass_UTurnSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "GetOwnerTurnComponent", Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::GateGameplayAbility_eventGetOwnerTurnComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::GateGameplayAbility_eventGetOwnerTurnComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execGetOwnerTurnComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTurnSystemComponent**)Z_Param__Result=P_THIS->GetOwnerTurnComponent();
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function GetOwnerTurnComponent ************************

// ********** Begin Class UGateGameplayAbility Function GetValidTargets ****************************
struct Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics
{
	struct GateGameplayAbility_eventGetValidTargets_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventGetValidTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "GetValidTargets", Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::GateGameplayAbility_eventGetValidTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::GateGameplayAbility_eventGetValidTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execGetValidTargets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetValidTargets();
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function GetValidTargets ******************************

// ********** Begin Class UGateGameplayAbility Function IsFriendlyTarget ***************************
struct Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics
{
	struct GateGameplayAbility_eventIsFriendlyTarget_Parms
	{
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventIsFriendlyTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GateGameplayAbility_eventIsFriendlyTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GateGameplayAbility_eventIsFriendlyTarget_Parms), &Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "IsFriendlyTarget", Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::GateGameplayAbility_eventIsFriendlyTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::GateGameplayAbility_eventIsFriendlyTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execIsFriendlyTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFriendlyTarget(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function IsFriendlyTarget *****************************

// ********** Begin Class UGateGameplayAbility Function IsTargetInRange ****************************
struct Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics
{
	struct GateGameplayAbility_eventIsTargetInRange_Parms
	{
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdU\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdU\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventIsTargetInRange_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GateGameplayAbility_eventIsTargetInRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GateGameplayAbility_eventIsTargetInRange_Parms), &Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "IsTargetInRange", Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::GateGameplayAbility_eventIsTargetInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::GateGameplayAbility_eventIsTargetInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execIsTargetInRange)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTargetInRange(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function IsTargetInRange ******************************

// ********** Begin Class UGateGameplayAbility Function IsValidTarget ******************************
struct Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics
{
	struct GateGameplayAbility_eventIsValidTarget_Parms
	{
		AActor* PotentialTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PotentialTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::NewProp_PotentialTarget = { "PotentialTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GateGameplayAbility_eventIsValidTarget_Parms, PotentialTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GateGameplayAbility_eventIsValidTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GateGameplayAbility_eventIsValidTarget_Parms), &Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::NewProp_PotentialTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "IsValidTarget", Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::GateGameplayAbility_eventIsValidTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::GateGameplayAbility_eventIsValidTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execIsValidTarget)
{
	P_GET_OBJECT(AActor,Z_Param_PotentialTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidTarget(Z_Param_PotentialTarget);
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function IsValidTarget ********************************

// ********** Begin Class UGateGameplayAbility Function PlayAbilityMontage *************************
struct Z_Construct_UFunction_UGateGameplayAbility_PlayAbilityMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateGameplayAbility_PlayAbilityMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGateGameplayAbility, nullptr, "PlayAbilityMontage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGateGameplayAbility_PlayAbilityMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGateGameplayAbility_PlayAbilityMontage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGateGameplayAbility_PlayAbilityMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGateGameplayAbility_PlayAbilityMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGateGameplayAbility::execPlayAbilityMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAbilityMontage();
	P_NATIVE_END;
}
// ********** End Class UGateGameplayAbility Function PlayAbilityMontage ***************************

// ********** Begin Class UGateGameplayAbility *****************************************************
void UGateGameplayAbility::StaticRegisterNativesUGateGameplayAbility()
{
	UClass* Class = UGateGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateDamageWithCurrentSystem", &UGateGameplayAbility::execCalculateDamageWithCurrentSystem },
		{ "CheckLineOfSight", &UGateGameplayAbility::execCheckLineOfSight },
		{ "ConsumeAPAndResources", &UGateGameplayAbility::execConsumeAPAndResources },
		{ "GetOwnerCombatComponent", &UGateGameplayAbility::execGetOwnerCombatComponent },
		{ "GetOwnerGridMovement", &UGateGameplayAbility::execGetOwnerGridMovement },
		{ "GetOwnerTurnComponent", &UGateGameplayAbility::execGetOwnerTurnComponent },
		{ "GetValidTargets", &UGateGameplayAbility::execGetValidTargets },
		{ "IsFriendlyTarget", &UGateGameplayAbility::execIsFriendlyTarget },
		{ "IsTargetInRange", &UGateGameplayAbility::execIsTargetInRange },
		{ "IsValidTarget", &UGateGameplayAbility::execIsValidTarget },
		{ "PlayAbilityMontage", &UGateGameplayAbility::execPlayAbilityMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGateGameplayAbility;
UClass* UGateGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UGateGameplayAbility;
	if (!Z_Registration_Info_UClass_UGateGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GateGameplayAbility"),
			Z_Registration_Info_UClass_UGateGameplayAbility.InnerSingleton,
			StaticRegisterNativesUGateGameplayAbility,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGateGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UGateGameplayAbility_NoRegister()
{
	return UGateGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGateGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GateGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APCost_MetaData[] = {
		{ "Category", "Ability|TurnBased" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdw ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdw ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTurns_MetaData[] = {
		{ "Category", "Ability|TurnBased" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeInGrids_MetaData[] = {
		{ "Category", "Ability|TurnBased" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresLineOfSight_MetaData[] = {
		{ "Category", "Ability|TurnBased" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "Ability|Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xd8\xbc\xd0\xb3]\xef\xbf\xbdw ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xd8\xbc\xd0\xb3]\xef\xbf\xbdw ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaRadius_MetaData[] = {
		{ "Category", "Ability|Targeting" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityAnimation_MetaData[] = {
		{ "Category", "Ability|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xef\xbf\xbdX ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xef\xbf\xbdX ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTag_MetaData[] = {
		{ "Category", "Ability|Animation" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastEffect_MetaData[] = {
		{ "Category", "Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbdS\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "Ability|Effects" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastSound_MetaData[] = {
		{ "Category", "Ability|Effects" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\xef\xbf\xbdx\xef\xbf\xbds\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\xef\xbf\xbdx\xef\xbf\xbds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_APCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CooldownTurns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeInGrids;
	static void NewProp_bRequiresLineOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresLineOfSight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AreaRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGateGameplayAbility_CalculateDamageWithCurrentSystem, "CalculateDamageWithCurrentSystem" }, // 178611123
		{ &Z_Construct_UFunction_UGateGameplayAbility_CheckLineOfSight, "CheckLineOfSight" }, // 2148962803
		{ &Z_Construct_UFunction_UGateGameplayAbility_ConsumeAPAndResources, "ConsumeAPAndResources" }, // 3547796474
		{ &Z_Construct_UFunction_UGateGameplayAbility_GetOwnerCombatComponent, "GetOwnerCombatComponent" }, // 3283084147
		{ &Z_Construct_UFunction_UGateGameplayAbility_GetOwnerGridMovement, "GetOwnerGridMovement" }, // 3411077143
		{ &Z_Construct_UFunction_UGateGameplayAbility_GetOwnerTurnComponent, "GetOwnerTurnComponent" }, // 4125857484
		{ &Z_Construct_UFunction_UGateGameplayAbility_GetValidTargets, "GetValidTargets" }, // 2891818609
		{ &Z_Construct_UFunction_UGateGameplayAbility_IsFriendlyTarget, "IsFriendlyTarget" }, // 3217903048
		{ &Z_Construct_UFunction_UGateGameplayAbility_IsTargetInRange, "IsTargetInRange" }, // 3976743235
		{ &Z_Construct_UFunction_UGateGameplayAbility_IsValidTarget, "IsValidTarget" }, // 3442043054
		{ &Z_Construct_UFunction_UGateGameplayAbility_PlayAbilityMontage, "PlayAbilityMontage" }, // 3861237530
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGateGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_APCost = { "APCost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, APCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APCost_MetaData), NewProp_APCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_CooldownTurns = { "CooldownTurns", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, CooldownTurns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTurns_MetaData), NewProp_CooldownTurns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_RangeInGrids = { "RangeInGrids", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, RangeInGrids), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeInGrids_MetaData), NewProp_RangeInGrids_MetaData) };
void Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_bRequiresLineOfSight_SetBit(void* Obj)
{
	((UGateGameplayAbility*)Obj)->bRequiresLineOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_bRequiresLineOfSight = { "bRequiresLineOfSight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGateGameplayAbility), &Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_bRequiresLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresLineOfSight_MetaData), NewProp_bRequiresLineOfSight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, TargetType), Z_Construct_UEnum_ProjectGate_EAbilityTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) }; // 3059408495
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_AreaRadius = { "AreaRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, AreaRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaRadius_MetaData), NewProp_AreaRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_AbilityAnimation = { "AbilityAnimation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, AbilityAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityAnimation_MetaData), NewProp_AbilityAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_AnimationTag = { "AnimationTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, AnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTag_MetaData), NewProp_AnimationTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_CastEffect = { "CastEffect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, CastEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastEffect_MetaData), NewProp_CastEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, ImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactEffect_MetaData), NewProp_ImpactEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_CastSound = { "CastSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, CastSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastSound_MetaData), NewProp_CastSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_CachedTarget = { "CachedTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGateGameplayAbility, CachedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTarget_MetaData), NewProp_CachedTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGateGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_APCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_CooldownTurns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_RangeInGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_bRequiresLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_TargetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_AreaRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_AbilityAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_AnimationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_CastEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_ImpactEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_CastSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateGameplayAbility_Statics::NewProp_CachedTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGateGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGateGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGateGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGateGameplayAbility_Statics::ClassParams = {
	&UGateGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGateGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGateGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGateGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGateGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGateGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UGateGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGateGameplayAbility.OuterSingleton, Z_Construct_UClass_UGateGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGateGameplayAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGateGameplayAbility);
UGateGameplayAbility::~UGateGameplayAbility() {}
// ********** End Class UGateGameplayAbility *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAbilityTargetType_StaticEnum, TEXT("EAbilityTargetType"), &Z_Registration_Info_UEnum_EAbilityTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3059408495U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGateGameplayAbility, UGateGameplayAbility::StaticClass, TEXT("UGateGameplayAbility"), &Z_Registration_Info_UClass_UGateGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGateGameplayAbility), 639062425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h__Script_ProjectGate_3549849264(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GateGameplayAbility_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
