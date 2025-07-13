// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationComponents/CombatAnimationComponent.h"
#include "CombatSystem/CombatStats.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatAnimationComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTGATE_API UClass* Z_Construct_UClass_UAnimationManagerComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatAnimationComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatAnimationComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EAnimationType();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ECombatAttackType();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCombatAnimationSequence();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageResult();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCombatAnimationSequence ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombatAnimationSequence;
class UScriptStruct* FCombatAnimationSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatAnimationSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombatAnimationSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatAnimationSequence, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("CombatAnimationSequence"));
	}
	return Z_Registration_Info_UScriptStruct_FCombatAnimationSequence.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xc7\xa6""C\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xc7\xa6""C" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreAttackAnimation_MetaData[] = {
		{ "Category", "CombatAnimationSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbdn\xef\xbf\xbd\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbdn\xef\xbf\xbd\xca\xb5""e" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimation_MetaData[] = {
		{ "Category", "CombatAnimationSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd""D\xef\xbf\xbdn\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""D\xef\xbf\xbdn\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostAttackAnimation_MetaData[] = {
		{ "Category", "CombatAnimationSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdn\xef\xbf\xbd\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdn\xef\xbf\xbd\xca\xb5""e" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMoveToTarget_MetaData[] = {
		{ "Category", "CombatAnimationSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xdd\xadn\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8\xef\xbf\xbd\xd8\xbc\xd0\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xdd\xadn\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8\xef\xbf\xbd\xd8\xbc\xd0\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "CombatAnimationSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdZ\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdZ\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreAttackAnimation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreAttackAnimation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackAnimation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackAnimation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostAttackAnimation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PostAttackAnimation;
	static void NewProp_bRequiresMoveToTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMoveToTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatAnimationSequence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_PreAttackAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_PreAttackAnimation = { "PreAttackAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatAnimationSequence, PreAttackAnimation), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreAttackAnimation_MetaData), NewProp_PreAttackAnimation_MetaData) }; // 2682357592
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_AttackAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_AttackAnimation = { "AttackAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatAnimationSequence, AttackAnimation), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimation_MetaData), NewProp_AttackAnimation_MetaData) }; // 2682357592
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_PostAttackAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_PostAttackAnimation = { "PostAttackAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatAnimationSequence, PostAttackAnimation), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostAttackAnimation_MetaData), NewProp_PostAttackAnimation_MetaData) }; // 2682357592
void Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_bRequiresMoveToTarget_SetBit(void* Obj)
{
	((FCombatAnimationSequence*)Obj)->bRequiresMoveToTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_bRequiresMoveToTarget = { "bRequiresMoveToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCombatAnimationSequence), &Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_bRequiresMoveToTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMoveToTarget_MetaData), NewProp_bRequiresMoveToTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatAnimationSequence, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_PreAttackAnimation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_PreAttackAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_AttackAnimation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_AttackAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_PostAttackAnimation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_PostAttackAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_bRequiresMoveToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewProp_AttackRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"CombatAnimationSequence",
	Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::PropPointers),
	sizeof(FCombatAnimationSequence),
	alignof(FCombatAnimationSequence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatAnimationSequence()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatAnimationSequence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombatAnimationSequence.InnerSingleton, Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCombatAnimationSequence.InnerSingleton;
}
// ********** End ScriptStruct FCombatAnimationSequence ********************************************

// ********** Begin Delegate FOnCombatAnimationHit *************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnCombatAnimationHit_Parms
	{
		AActor* Attacker;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd""e\xef\xbf\xbdU\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""e\xef\xbf\xbdU" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnCombatAnimationHit_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnCombatAnimationHit_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnCombatAnimationHit__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::_Script_ProjectGate_eventOnCombatAnimationHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::_Script_ProjectGate_eventOnCombatAnimationHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCombatAnimationHit_DelegateWrapper(const FMulticastScriptDelegate& OnCombatAnimationHit, AActor* Attacker, AActor* Target)
{
	struct _Script_ProjectGate_eventOnCombatAnimationHit_Parms
	{
		AActor* Attacker;
		AActor* Target;
	};
	_Script_ProjectGate_eventOnCombatAnimationHit_Parms Parms;
	Parms.Attacker=Attacker;
	Parms.Target=Target;
	OnCombatAnimationHit.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCombatAnimationHit ***************************************************

// ********** Begin Delegate FOnCombatAnimationCompleted *******************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnCombatAnimationCompleted_Parms
	{
		AActor* Attacker;
		AActor* Target;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnCombatAnimationCompleted_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnCombatAnimationCompleted_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_ProjectGate_eventOnCombatAnimationCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectGate_eventOnCombatAnimationCompleted_Parms), &Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnCombatAnimationCompleted__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::_Script_ProjectGate_eventOnCombatAnimationCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::_Script_ProjectGate_eventOnCombatAnimationCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCombatAnimationCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCombatAnimationCompleted, AActor* Attacker, AActor* Target, bool bSuccess)
{
	struct _Script_ProjectGate_eventOnCombatAnimationCompleted_Parms
	{
		AActor* Attacker;
		AActor* Target;
		bool bSuccess;
	};
	_Script_ProjectGate_eventOnCombatAnimationCompleted_Parms Parms;
	Parms.Attacker=Attacker;
	Parms.Target=Target;
	Parms.bSuccess=bSuccess ? true : false;
	OnCombatAnimationCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCombatAnimationCompleted *********************************************

// ********** Begin Class UCombatAnimationComponent Function ExecuteCombatSequence *****************
struct Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics
{
	struct CombatAnimationComponent_eventExecuteCombatSequence_Parms
	{
		AActor* Target;
		ECombatAttackType AttackType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xa7\xb9\xef\xbf\xbd\xe3\xaa\xba\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xc7\xa6""C\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xa7\xb9\xef\xbf\xbd\xe3\xaa\xba\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xc7\xa6""C" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventExecuteCombatSequence_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventExecuteCombatSequence_Parms, AttackType), Z_Construct_UEnum_ProjectGate_ECombatAttackType, METADATA_PARAMS(0, nullptr) }; // 1601793885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::NewProp_AttackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::NewProp_AttackType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "ExecuteCombatSequence", Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::CombatAnimationComponent_eventExecuteCombatSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::CombatAnimationComponent_eventExecuteCombatSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execExecuteCombatSequence)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_ENUM(ECombatAttackType,Z_Param_AttackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteCombatSequence(Z_Param_Target,ECombatAttackType(Z_Param_AttackType));
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function ExecuteCombatSequence *******************

// ********** Begin Class UCombatAnimationComponent Function InitializeCombatAnimation *************
struct Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics
{
	struct CombatAnimationComponent_eventInitializeCombatAnimation_Parms
	{
		UAnimationManagerComponent* AnimManager;
		UCombatComponent* CombatComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimManager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::NewProp_AnimManager = { "AnimManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventInitializeCombatAnimation_Parms, AnimManager), Z_Construct_UClass_UAnimationManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimManager_MetaData), NewProp_AnimManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::NewProp_CombatComp = { "CombatComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventInitializeCombatAnimation_Parms, CombatComp), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComp_MetaData), NewProp_CombatComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::NewProp_AnimManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::NewProp_CombatComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "InitializeCombatAnimation", Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::CombatAnimationComponent_eventInitializeCombatAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::CombatAnimationComponent_eventInitializeCombatAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execInitializeCombatAnimation)
{
	P_GET_OBJECT(UAnimationManagerComponent,Z_Param_AnimManager);
	P_GET_OBJECT(UCombatComponent,Z_Param_CombatComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCombatAnimation(Z_Param_AnimManager,Z_Param_CombatComp);
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function InitializeCombatAnimation ***************

// ********** Begin Class UCombatAnimationComponent Function OnAttackHit ***************************
struct Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics
{
	struct CombatAnimationComponent_eventOnAttackHit_Parms
	{
		EAnimationType AnimationType;
		FName NotifyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventOnAttackHit_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventOnAttackHit_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::NewProp_NotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "OnAttackHit", Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::CombatAnimationComponent_eventOnAttackHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::CombatAnimationComponent_eventOnAttackHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execOnAttackHit)
{
	P_GET_ENUM(EAnimationType,Z_Param_AnimationType);
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackHit(EAnimationType(Z_Param_AnimationType),Z_Param_NotifyName);
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function OnAttackHit *****************************

// ********** Begin Class UCombatAnimationComponent Function OnSequenceAnimationCompleted **********
struct Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics
{
	struct CombatAnimationComponent_eventOnSequenceAnimationCompleted_Parms
	{
		EAnimationType AnimationType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventOnSequenceAnimationCompleted_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::NewProp_AnimationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "OnSequenceAnimationCompleted", Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::CombatAnimationComponent_eventOnSequenceAnimationCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::CombatAnimationComponent_eventOnSequenceAnimationCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execOnSequenceAnimationCompleted)
{
	P_GET_ENUM(EAnimationType,Z_Param_AnimationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSequenceAnimationCompleted(EAnimationType(Z_Param_AnimationType));
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function OnSequenceAnimationCompleted ************

// ********** Begin Class UCombatAnimationComponent Function PlayAbilityAnimation ******************
struct Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics
{
	struct CombatAnimationComponent_eventPlayAbilityAnimation_Parms
	{
		FGameplayTag AbilityTag;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation|GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdO\xef\xbf\xbd\xca\xb5""e\n" },
#endif
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdO\xef\xbf\xbd\xca\xb5""e" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventPlayAbilityAnimation_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventPlayAbilityAnimation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "PlayAbilityAnimation", Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::CombatAnimationComponent_eventPlayAbilityAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::CombatAnimationComponent_eventPlayAbilityAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execPlayAbilityAnimation)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAbilityAnimation(Z_Param_AbilityTag,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function PlayAbilityAnimation ********************

// ********** Begin Class UCombatAnimationComponent Function PlayBlockAnimation ********************
struct Z_Construct_UFunction_UCombatAnimationComponent_PlayBlockAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb0\xca\xb5""e" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_PlayBlockAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "PlayBlockAnimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayBlockAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_PlayBlockAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_PlayBlockAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_PlayBlockAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execPlayBlockAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayBlockAnimation();
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function PlayBlockAnimation **********************

// ********** Begin Class UCombatAnimationComponent Function PlayCastingAnimation ******************
struct Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics
{
	struct CombatAnimationComponent_eventPlayCastingAnimation_Parms
	{
		float CastTime;
		FGameplayTag SpellTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation|GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdI\xef\xbf\xbdk\xef\xbf\xbd\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdI\xef\xbf\xbdk\xef\xbf\xbd\xca\xb5""e" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CastTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpellTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventPlayCastingAnimation_Parms, CastTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::NewProp_SpellTag = { "SpellTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventPlayCastingAnimation_Parms, SpellTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::NewProp_CastTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::NewProp_SpellTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "PlayCastingAnimation", Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::CombatAnimationComponent_eventPlayCastingAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::CombatAnimationComponent_eventPlayCastingAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execPlayCastingAnimation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CastTime);
	P_GET_STRUCT(FGameplayTag,Z_Param_SpellTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayCastingAnimation(Z_Param_CastTime,Z_Param_SpellTag);
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function PlayCastingAnimation ********************

// ********** Begin Class UCombatAnimationComponent Function PlayDeathAnimation ********************
struct Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics
{
	struct CombatAnimationComponent_eventPlayDeathAnimation_Parms
	{
		AActor* Killer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf1\xa6\xba\xa4`\xef\xbf\xbd\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf1\xa6\xba\xa4`\xef\xbf\xbd\xca\xb5""e" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventPlayDeathAnimation_Parms, Killer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::NewProp_Killer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "PlayDeathAnimation", Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::CombatAnimationComponent_eventPlayDeathAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::CombatAnimationComponent_eventPlayDeathAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execPlayDeathAnimation)
{
	P_GET_OBJECT(AActor,Z_Param_Killer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayDeathAnimation(Z_Param_Killer);
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function PlayDeathAnimation **********************

// ********** Begin Class UCombatAnimationComponent Function PlayDodgeAnimation ********************
struct Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics
{
	struct CombatAnimationComponent_eventPlayDodgeAnimation_Parms
	{
		FVector DodgeDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd{\xef\xbf\xbd\xd7\xb0\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd{\xef\xbf\xbd\xd7\xb0\xca\xb5""e" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DodgeDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::NewProp_DodgeDirection = { "DodgeDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventPlayDodgeAnimation_Parms, DodgeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::NewProp_DodgeDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "PlayDodgeAnimation", Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::CombatAnimationComponent_eventPlayDodgeAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::CombatAnimationComponent_eventPlayDodgeAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execPlayDodgeAnimation)
{
	P_GET_STRUCT(FVector,Z_Param_DodgeDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayDodgeAnimation(Z_Param_DodgeDirection);
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function PlayDodgeAnimation **********************

// ********** Begin Class UCombatAnimationComponent Function PlayHitReaction ***********************
struct Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics
{
	struct CombatAnimationComponent_eventPlayHitReaction_Parms
	{
		FDamageResult DamageResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::NewProp_DamageResult = { "DamageResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAnimationComponent_eventPlayHitReaction_Parms, DamageResult), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageResult_MetaData), NewProp_DamageResult_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::NewProp_DamageResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAnimationComponent, nullptr, "PlayHitReaction", Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::CombatAnimationComponent_eventPlayHitReaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::CombatAnimationComponent_eventPlayHitReaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAnimationComponent::execPlayHitReaction)
{
	P_GET_STRUCT_REF(FDamageResult,Z_Param_Out_DamageResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayHitReaction(Z_Param_Out_DamageResult);
	P_NATIVE_END;
}
// ********** End Class UCombatAnimationComponent Function PlayHitReaction *************************

// ********** Begin Class UCombatAnimationComponent ************************************************
void UCombatAnimationComponent::StaticRegisterNativesUCombatAnimationComponent()
{
	UClass* Class = UCombatAnimationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteCombatSequence", &UCombatAnimationComponent::execExecuteCombatSequence },
		{ "InitializeCombatAnimation", &UCombatAnimationComponent::execInitializeCombatAnimation },
		{ "OnAttackHit", &UCombatAnimationComponent::execOnAttackHit },
		{ "OnSequenceAnimationCompleted", &UCombatAnimationComponent::execOnSequenceAnimationCompleted },
		{ "PlayAbilityAnimation", &UCombatAnimationComponent::execPlayAbilityAnimation },
		{ "PlayBlockAnimation", &UCombatAnimationComponent::execPlayBlockAnimation },
		{ "PlayCastingAnimation", &UCombatAnimationComponent::execPlayCastingAnimation },
		{ "PlayDeathAnimation", &UCombatAnimationComponent::execPlayDeathAnimation },
		{ "PlayDodgeAnimation", &UCombatAnimationComponent::execPlayDodgeAnimation },
		{ "PlayHitReaction", &UCombatAnimationComponent::execPlayHitReaction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatAnimationComponent;
UClass* UCombatAnimationComponent::GetPrivateStaticClass()
{
	using TClass = UCombatAnimationComponent;
	if (!Z_Registration_Info_UClass_UCombatAnimationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatAnimationComponent"),
			Z_Registration_Info_UClass_UCombatAnimationComponent.InnerSingleton,
			StaticRegisterNativesUCombatAnimationComponent,
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
	return Z_Registration_Info_UClass_UCombatAnimationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatAnimationComponent_NoRegister()
{
	return UCombatAnimationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AnimationComponents/CombatAnimationComponent.h" },
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSequences_MetaData[] = {
		{ "Category", "Combat Animation|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xc7\xa6""C\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5""e\xef\xbf\xbd\xc7\xa6""C" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboAnimations_MetaData[] = {
		{ "Category", "Combat Animation|Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboWindowTime_MetaData[] = {
		{ "Category", "Combat Animation|Combo" },
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatAnimationHit_MetaData[] = {
		{ "Category", "Combat Animation|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xc6\xa5\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xc6\xa5\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatAnimationCompleted_MetaData[] = {
		{ "Category", "Combat Animation|Events" },
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\xde\xa5\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\xde\xa5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xc7\xa6""C\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xc7\xa6""C\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttackType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/CombatAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackSequences_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackSequences_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackSequences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttackSequences;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComboAnimations_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComboAnimations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboAnimations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboWindowTime;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatAnimationHit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatAnimationCompleted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAttackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAttackType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAnimationComponent_ExecuteCombatSequence, "ExecuteCombatSequence" }, // 975412954
		{ &Z_Construct_UFunction_UCombatAnimationComponent_InitializeCombatAnimation, "InitializeCombatAnimation" }, // 4025848716
		{ &Z_Construct_UFunction_UCombatAnimationComponent_OnAttackHit, "OnAttackHit" }, // 1561278232
		{ &Z_Construct_UFunction_UCombatAnimationComponent_OnSequenceAnimationCompleted, "OnSequenceAnimationCompleted" }, // 1775646283
		{ &Z_Construct_UFunction_UCombatAnimationComponent_PlayAbilityAnimation, "PlayAbilityAnimation" }, // 1613826059
		{ &Z_Construct_UFunction_UCombatAnimationComponent_PlayBlockAnimation, "PlayBlockAnimation" }, // 4272781675
		{ &Z_Construct_UFunction_UCombatAnimationComponent_PlayCastingAnimation, "PlayCastingAnimation" }, // 2916247857
		{ &Z_Construct_UFunction_UCombatAnimationComponent_PlayDeathAnimation, "PlayDeathAnimation" }, // 2481951852
		{ &Z_Construct_UFunction_UCombatAnimationComponent_PlayDodgeAnimation, "PlayDodgeAnimation" }, // 117760385
		{ &Z_Construct_UFunction_UCombatAnimationComponent_PlayHitReaction, "PlayHitReaction" }, // 2328202994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AttackSequences_ValueProp = { "AttackSequences", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCombatAnimationSequence, METADATA_PARAMS(0, nullptr) }; // 2964396673
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AttackSequences_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AttackSequences_Key_KeyProp = { "AttackSequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectGate_ECombatAttackType, METADATA_PARAMS(0, nullptr) }; // 1601793885
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AttackSequences = { "AttackSequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, AttackSequences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSequences_MetaData), NewProp_AttackSequences_MetaData) }; // 1601793885 2964396673
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_ComboAnimations_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_ComboAnimations_Inner = { "ComboAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_ComboAnimations = { "ComboAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, ComboAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboAnimations_MetaData), NewProp_ComboAnimations_MetaData) }; // 2682357592
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_ComboWindowTime = { "ComboWindowTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, ComboWindowTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboWindowTime_MetaData), NewProp_ComboWindowTime_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_OnCombatAnimationHit = { "OnCombatAnimationHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, OnCombatAnimationHit), Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatAnimationHit_MetaData), NewProp_OnCombatAnimationHit_MetaData) }; // 3935486436
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_OnCombatAnimationCompleted = { "OnCombatAnimationCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, OnCombatAnimationCompleted), Z_Construct_UDelegateFunction_ProjectGate_OnCombatAnimationCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatAnimationCompleted_MetaData), NewProp_OnCombatAnimationCompleted_MetaData) }; // 4132782584
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AnimationManager = { "AnimationManager", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, AnimationManager), Z_Construct_UClass_UAnimationManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationManager_MetaData), NewProp_AnimationManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_CurrentAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_CurrentAttackType = { "CurrentAttackType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAnimationComponent, CurrentAttackType), Z_Construct_UEnum_ProjectGate_ECombatAttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAttackType_MetaData), NewProp_CurrentAttackType_MetaData) }; // 1601793885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AttackSequences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AttackSequences_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AttackSequences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AttackSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_ComboAnimations_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_ComboAnimations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_ComboAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_ComboWindowTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_OnCombatAnimationHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_OnCombatAnimationCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_AnimationManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_CurrentAttackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAnimationComponent_Statics::NewProp_CurrentAttackType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAnimationComponent_Statics::ClassParams = {
	&UCombatAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAnimationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UCombatAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAnimationComponent.OuterSingleton, Z_Construct_UClass_UCombatAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAnimationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAnimationComponent);
UCombatAnimationComponent::~UCombatAnimationComponent() {}
// ********** End Class UCombatAnimationComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h__Script_ProjectGate_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatAnimationSequence::StaticStruct, Z_Construct_UScriptStruct_FCombatAnimationSequence_Statics::NewStructOps, TEXT("CombatAnimationSequence"), &Z_Registration_Info_UScriptStruct_FCombatAnimationSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatAnimationSequence), 2964396673U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAnimationComponent, UCombatAnimationComponent::StaticClass, TEXT("UCombatAnimationComponent"), &Z_Registration_Info_UClass_UCombatAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAnimationComponent), 1208757144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h__Script_ProjectGate_2022844506(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_CombatAnimationComponent_h__Script_ProjectGate_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
