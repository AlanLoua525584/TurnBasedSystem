// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationComponents/AnimationManagerComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimationManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTGATE_API UClass* Z_Construct_UClass_UAnimationManagerComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UAnimationManagerComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EAnimationType();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationConfig();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationRequest();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAnimationType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimationType;
static UEnum* EAnimationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EAnimationType, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EAnimationType"));
	}
	return Z_Registration_Info_UEnum_EAnimationType.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EAnimationType>()
{
	return EAnimationType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EAnimationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Block.DisplayName", "Block" },
		{ "Block.Name", "EAnimationType::Block" },
		{ "BlueprintType", "true" },
		{ "CastSpell.DisplayName", "Cast Spell" },
		{ "CastSpell.Name", "EAnimationType::CastSpell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8b\x95\xe7\x95\xab\xe9\xa1\x9e\xe5\x9e\x8b\xe6\x9e\x9a\xe8\x88\x89\n" },
#endif
		{ "Death.DisplayName", "Death" },
		{ "Death.Name", "EAnimationType::Death" },
		{ "Dodge.DisplayName", "Dodge" },
		{ "Dodge.Name", "EAnimationType::Dodge" },
		{ "MeleeAttack.DisplayName", "Melee Attack" },
		{ "MeleeAttack.Name", "EAnimationType::MeleeAttack" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAnimationType::None" },
		{ "RangedAttack.DisplayName", "Ranged Attack" },
		{ "RangedAttack.Name", "EAnimationType::RangedAttack" },
		{ "SpecialAbility.DisplayName", "Special Ability" },
		{ "SpecialAbility.Name", "EAnimationType::SpecialAbility" },
		{ "TakeDamage.DisplayName", "Take Damage" },
		{ "TakeDamage.Name", "EAnimationType::TakeDamage" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8b\x95\xe7\x95\xab\xe9\xa1\x9e\xe5\x9e\x8b\xe6\x9e\x9a\xe8\x88\x89" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimationType::None", (int64)EAnimationType::None },
		{ "EAnimationType::MeleeAttack", (int64)EAnimationType::MeleeAttack },
		{ "EAnimationType::RangedAttack", (int64)EAnimationType::RangedAttack },
		{ "EAnimationType::CastSpell", (int64)EAnimationType::CastSpell },
		{ "EAnimationType::TakeDamage", (int64)EAnimationType::TakeDamage },
		{ "EAnimationType::Death", (int64)EAnimationType::Death },
		{ "EAnimationType::Dodge", (int64)EAnimationType::Dodge },
		{ "EAnimationType::Block", (int64)EAnimationType::Block },
		{ "EAnimationType::SpecialAbility", (int64)EAnimationType::SpecialAbility },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EAnimationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EAnimationType",
	"EAnimationType",
	Z_Construct_UEnum_ProjectGate_EAnimationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EAnimationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EAnimationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EAnimationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EAnimationType()
{
	if (!Z_Registration_Info_UEnum_EAnimationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimationType.InnerSingleton, Z_Construct_UEnum_ProjectGate_EAnimationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimationType.InnerSingleton;
}
// ********** End Enum EAnimationType **************************************************************

// ********** Begin ScriptStruct FAnimationConfig **************************************************
static_assert(std::is_polymorphic<FAnimationConfig>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAnimationConfig cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAnimationConfig;
class UScriptStruct* FAnimationConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAnimationConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAnimationConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationConfig, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("AnimationConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAnimationConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAnimationConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8b\x95\xe7\x95\xab\xe9\x85\x8d\xe7\xbd\xae\xe7\xb5\x90\xe6\xa7\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8b\x95\xe7\x95\xab\xe9\x85\x8d\xe7\xbd\xae\xe7\xb5\x90\xe6\xa7\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationType_MetaData[] = {
		{ "Category", "AnimationConfig" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "AnimationConfig" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "AnimationConfig" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[] = {
		{ "Category", "AnimationConfig" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "AnimationConfig" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTriggerTime_MetaData[] = {
		{ "Category", "AnimationConfig" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8b\x95\xe7\x95\xab\xe4\xba\x8b\xe4\xbb\xb6\xe8\xa7\xb8\xe7\x99\xbc\xe6\x99\x82\xe9\x96\x93\xef\xbc\x88""0-1\xe4\xb9\x8b\xe9\x96\x93\xe7\x9a\x84\xe6\xaf\x94\xe4\xbe\x8b\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8b\x95\xe7\x95\xab\xe4\xba\x8b\xe4\xbb\xb6\xe8\xa7\xb8\xe7\x99\xbc\xe6\x99\x82\xe9\x96\x93\xef\xbc\x88""0-1\xe4\xb9\x8b\xe9\x96\x93\xe7\x9a\x84\xe6\xaf\x94\xe4\xbe\x8b\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresFacingTarget_MetaData[] = {
		{ "Category", "AnimationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x9d\xa2\xe5\x90\x91\xe7\x9b\xae\xe6\xa8\x99\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x9d\xa2\xe5\x90\x91\xe7\x9b\xae\xe6\xa8\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTag_MetaData[] = {
		{ "Category", "AnimationConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GAS \xe6\x95\xb4\xe5\x90\x88\xe7\x94\xa8\xe7\x9a\x84\xe6\xa8\x99\xe7\xb1\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAS \xe6\x95\xb4\xe5\x90\x88\xe7\x94\xa8\xe7\x9a\x84\xe6\xa8\x99\xe7\xb1\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTriggerTime;
	static void NewProp_bRequiresFacingTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresFacingTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationConfig, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationType_MetaData), NewProp_AnimationType_MetaData) }; // 2682357592
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationConfig, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationConfig, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationConfig, BlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendInTime_MetaData), NewProp_BlendInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationConfig, BlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOutTime_MetaData), NewProp_BlendOutTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_EventTriggerTime = { "EventTriggerTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationConfig, EventTriggerTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTriggerTime_MetaData), NewProp_EventTriggerTime_MetaData) };
void Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_bRequiresFacingTarget_SetBit(void* Obj)
{
	((FAnimationConfig*)Obj)->bRequiresFacingTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_bRequiresFacingTarget = { "bRequiresFacingTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationConfig), &Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_bRequiresFacingTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresFacingTarget_MetaData), NewProp_bRequiresFacingTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_AnimationTag = { "AnimationTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationConfig, AnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTag_MetaData), NewProp_AnimationTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_BlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_BlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_EventTriggerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_bRequiresFacingTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewProp_AnimationTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AnimationConfig",
	Z_Construct_UScriptStruct_FAnimationConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationConfig_Statics::PropPointers),
	sizeof(FAnimationConfig),
	alignof(FAnimationConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAnimationConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAnimationConfig.InnerSingleton, Z_Construct_UScriptStruct_FAnimationConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAnimationConfig.InnerSingleton;
}
// ********** End ScriptStruct FAnimationConfig ****************************************************

// ********** Begin ScriptStruct FAnimationRequest *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAnimationRequest;
class UScriptStruct* FAnimationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAnimationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAnimationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationRequest, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("AnimationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_FAnimationRequest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAnimationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8b\x95\xe7\x95\xab\xe6\x92\xad\xe6\x94\xbe\xe8\xab\x8b\xe6\xb1\x82\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8b\x95\xe7\x95\xab\xe6\x92\xad\xe6\x94\xbe\xe8\xab\x8b\xe6\xb1\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationRequest, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationType_MetaData), NewProp_AnimationType_MetaData) }; // 2682357592
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationRequest, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationRequest, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"AnimationRequest",
	Z_Construct_UScriptStruct_FAnimationRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRequest_Statics::PropPointers),
	sizeof(FAnimationRequest),
	alignof(FAnimationRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationRequest()
{
	if (!Z_Registration_Info_UScriptStruct_FAnimationRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAnimationRequest.InnerSingleton, Z_Construct_UScriptStruct_FAnimationRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAnimationRequest.InnerSingleton;
}
// ********** End ScriptStruct FAnimationRequest ***************************************************

// ********** Begin Delegate FOnAnimationStarted ***************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAnimationStarted_Parms
	{
		EAnimationType AnimationType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa7\x94\xe8\xa8\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa7\x94\xe8\xa8\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAnimationStarted_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::NewProp_AnimationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAnimationStarted__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimationStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimationStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnimationStarted_DelegateWrapper(const FMulticastScriptDelegate& OnAnimationStarted, EAnimationType AnimationType)
{
	struct _Script_ProjectGate_eventOnAnimationStarted_Parms
	{
		EAnimationType AnimationType;
	};
	_Script_ProjectGate_eventOnAnimationStarted_Parms Parms;
	Parms.AnimationType=AnimationType;
	OnAnimationStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnimationStarted *****************************************************

// ********** Begin Delegate FOnAnimationCompleted *************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAnimationCompleted_Parms
	{
		EAnimationType AnimationType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAnimationCompleted_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::NewProp_AnimationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAnimationCompleted__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimationCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimationCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnimationCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnAnimationCompleted, EAnimationType AnimationType)
{
	struct _Script_ProjectGate_eventOnAnimationCompleted_Parms
	{
		EAnimationType AnimationType;
	};
	_Script_ProjectGate_eventOnAnimationCompleted_Parms Parms;
	Parms.AnimationType=AnimationType;
	OnAnimationCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnimationCompleted ***************************************************

// ********** Begin Delegate FOnAnimationInterrupted ***********************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAnimationInterrupted_Parms
	{
		EAnimationType AnimationType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAnimationInterrupted_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::NewProp_AnimationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAnimationInterrupted__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimationInterrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimationInterrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnimationInterrupted_DelegateWrapper(const FMulticastScriptDelegate& OnAnimationInterrupted, EAnimationType AnimationType)
{
	struct _Script_ProjectGate_eventOnAnimationInterrupted_Parms
	{
		EAnimationType AnimationType;
	};
	_Script_ProjectGate_eventOnAnimationInterrupted_Parms Parms;
	Parms.AnimationType=AnimationType;
	OnAnimationInterrupted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnimationInterrupted *************************************************

// ********** Begin Delegate FOnAnimationEvent *****************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAnimationEvent_Parms
	{
		EAnimationType AnimationType;
		FName EventName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAnimationEvent_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAnimationEvent_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::NewProp_EventName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAnimationEvent__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimationEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimationEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnimationEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAnimationEvent, EAnimationType AnimationType, FName EventName)
{
	struct _Script_ProjectGate_eventOnAnimationEvent_Parms
	{
		EAnimationType AnimationType;
		FName EventName;
	};
	_Script_ProjectGate_eventOnAnimationEvent_Parms Parms;
	Parms.AnimationType=AnimationType;
	Parms.EventName=EventName;
	OnAnimationEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnimationEvent *******************************************************

// ********** Begin Delegate FOnAnimNotifySignature ************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAnimNotifySignature_Parms
	{
		EAnimationType AnimationType;
		FName NotifyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAnimNotifySignature_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnAnimNotifySignature_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::NewProp_NotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAnimNotifySignature__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimNotifySignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::_Script_ProjectGate_eventOnAnimNotifySignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnimNotifySignature_DelegateWrapper(const FMulticastScriptDelegate& OnAnimNotifySignature, EAnimationType AnimationType, FName NotifyName)
{
	struct _Script_ProjectGate_eventOnAnimNotifySignature_Parms
	{
		EAnimationType AnimationType;
		FName NotifyName;
	};
	_Script_ProjectGate_eventOnAnimNotifySignature_Parms Parms;
	Parms.AnimationType=AnimationType;
	Parms.NotifyName=NotifyName;
	OnAnimNotifySignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnimNotifySignature **************************************************

// ********** Begin Class UAnimationManagerComponent Function GetCurrentAnimationType **************
struct Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics
{
	struct AnimationManagerComponent_eventGetCurrentAnimationType_Parms
	{
		EAnimationType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8d\xb2\xe5\x8f\x96\xe7\x95\xb6\xe5\x89\x8d\xe5\x8b\x95\xe7\x95\xab\xe9\xa1\x9e\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8d\xb2\xe5\x8f\x96\xe7\x95\xb6\xe5\x89\x8d\xe5\x8b\x95\xe7\x95\xab\xe9\xa1\x9e\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventGetCurrentAnimationType_Parms, ReturnValue), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "GetCurrentAnimationType", Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::AnimationManagerComponent_eventGetCurrentAnimationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::AnimationManagerComponent_eventGetCurrentAnimationType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execGetCurrentAnimationType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAnimationType*)Z_Param__Result=P_THIS->GetCurrentAnimationType();
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function GetCurrentAnimationType ****************

// ********** Begin Class UAnimationManagerComponent Function HandleAnimationNotify ****************
struct Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics
{
	struct AnimationManagerComponent_eventHandleAnimationNotify_Parms
	{
		FName NotifyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xb1 AnimNotify \xe8\xaa\xbf\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb1 AnimNotify \xe8\xaa\xbf\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventHandleAnimationNotify_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::NewProp_NotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "HandleAnimationNotify", Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::AnimationManagerComponent_eventHandleAnimationNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::AnimationManagerComponent_eventHandleAnimationNotify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execHandleAnimationNotify)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAnimationNotify(Z_Param_NotifyName);
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function HandleAnimationNotify ******************

// ********** Begin Class UAnimationManagerComponent Function HasAnimation *************************
struct Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics
{
	struct AnimationManagerComponent_eventHasAnimation_Parms
	{
		EAnimationType AnimationType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xaa\xa2\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe5\x8b\x95\xe7\x95\xab\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaa\xa2\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe5\x8b\x95\xe7\x95\xab\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventHasAnimation_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
void Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationManagerComponent_eventHasAnimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationManagerComponent_eventHasAnimation_Parms), &Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "HasAnimation", Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::AnimationManagerComponent_eventHasAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::AnimationManagerComponent_eventHasAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execHasAnimation)
{
	P_GET_ENUM(EAnimationType,Z_Param_AnimationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnimation(EAnimationType(Z_Param_AnimationType));
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function HasAnimation ***************************

// ********** Begin Class UAnimationManagerComponent Function InitializeAnimationSystem ************
struct Z_Construct_UFunction_UAnimationManagerComponent_InitializeAnimationSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96 ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_InitializeAnimationSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "InitializeAnimationSystem", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_InitializeAnimationSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_InitializeAnimationSystem_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_InitializeAnimationSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_InitializeAnimationSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execInitializeAnimationSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAnimationSystem();
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function InitializeAnimationSystem **************

// ********** Begin Class UAnimationManagerComponent Function IsPlayingAnimation *******************
struct Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics
{
	struct AnimationManagerComponent_eventIsPlayingAnimation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xaa\xa2\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe6\x92\xad\xe6\x94\xbe\xe5\x8b\x95\xe7\x95\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaa\xa2\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe6\x92\xad\xe6\x94\xbe\xe5\x8b\x95\xe7\x95\xab" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationManagerComponent_eventIsPlayingAnimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationManagerComponent_eventIsPlayingAnimation_Parms), &Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "IsPlayingAnimation", Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::AnimationManagerComponent_eventIsPlayingAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::AnimationManagerComponent_eventIsPlayingAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execIsPlayingAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayingAnimation();
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function IsPlayingAnimation *********************

// ********** Begin Class UAnimationManagerComponent Function PlayAnimation ************************
struct Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics
{
	struct AnimationManagerComponent_eventPlayAnimation_Parms
	{
		EAnimationType AnimationType;
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x92\xad\xe6\x94\xbe\xe5\x8b\x95\xe7\x95\xab\n" },
#endif
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x92\xad\xe6\x94\xbe\xe5\x8b\x95\xe7\x95\xab" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventPlayAnimation_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventPlayAnimation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationManagerComponent_eventPlayAnimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationManagerComponent_eventPlayAnimation_Parms), &Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "PlayAnimation", Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::AnimationManagerComponent_eventPlayAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::AnimationManagerComponent_eventPlayAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execPlayAnimation)
{
	P_GET_ENUM(EAnimationType,Z_Param_AnimationType);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlayAnimation(EAnimationType(Z_Param_AnimationType),Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function PlayAnimation **************************

// ********** Begin Class UAnimationManagerComponent Function PlayAnimationByTag *******************
struct Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics
{
	struct AnimationManagerComponent_eventPlayAnimationByTag_Parms
	{
		FGameplayTag AnimationTag;
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Animation|GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x80\x9a\xe9\x81\x8e GameplayTag \xe6\x92\xad\xe6\x94\xbe\xe5\x8b\x95\xe7\x95\xab\n" },
#endif
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe9\x81\x8e GameplayTag \xe6\x92\xad\xe6\x94\xbe\xe5\x8b\x95\xe7\x95\xab" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::NewProp_AnimationTag = { "AnimationTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventPlayAnimationByTag_Parms, AnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventPlayAnimationByTag_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationManagerComponent_eventPlayAnimationByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationManagerComponent_eventPlayAnimationByTag_Parms), &Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::NewProp_AnimationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "PlayAnimationByTag", Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::AnimationManagerComponent_eventPlayAnimationByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::AnimationManagerComponent_eventPlayAnimationByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execPlayAnimationByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AnimationTag);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlayAnimationByTag(Z_Param_AnimationTag,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function PlayAnimationByTag *********************

// ********** Begin Class UAnimationManagerComponent Function RegisterGASAnimation *****************
struct Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics
{
	struct AnimationManagerComponent_eventRegisterGASAnimation_Parms
	{
		FGameplayTag Tag;
		EAnimationType AnimationType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa8\xbb\xe5\x86\x8a GAS \xe5\x8b\x95\xe7\x95\xab\xe6\x98\xa0\xe5\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa8\xbb\xe5\x86\x8a GAS \xe5\x8b\x95\xe7\x95\xab\xe6\x98\xa0\xe5\xb0\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventRegisterGASAnimation_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventRegisterGASAnimation_Parms, AnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::NewProp_AnimationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "RegisterGASAnimation", Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::AnimationManagerComponent_eventRegisterGASAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::AnimationManagerComponent_eventRegisterGASAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execRegisterGASAnimation)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_ENUM(EAnimationType,Z_Param_AnimationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterGASAnimation(Z_Param_Tag,EAnimationType(Z_Param_AnimationType));
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function RegisterGASAnimation *******************

// ********** Begin Class UAnimationManagerComponent Function StopCurrentAnimation *****************
struct Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics
{
	struct AnimationManagerComponent_eventStopCurrentAnimation_Parms
	{
		float BlendOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x81\x9c\xe6\xad\xa2\xe7\x95\xb6\xe5\x89\x8d\xe5\x8b\x95\xe7\x95\xab\n" },
#endif
		{ "CPP_Default_BlendOutTime", "0.250000" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe7\x95\xb6\xe5\x89\x8d\xe5\x8b\x95\xe7\x95\xab" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationManagerComponent_eventStopCurrentAnimation_Parms, BlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::NewProp_BlendOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationManagerComponent, nullptr, "StopCurrentAnimation", Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::AnimationManagerComponent_eventStopCurrentAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::AnimationManagerComponent_eventStopCurrentAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationManagerComponent::execStopCurrentAnimation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCurrentAnimation(Z_Param_BlendOutTime);
	P_NATIVE_END;
}
// ********** End Class UAnimationManagerComponent Function StopCurrentAnimation *******************

// ********** Begin Class UAnimationManagerComponent ***********************************************
void UAnimationManagerComponent::StaticRegisterNativesUAnimationManagerComponent()
{
	UClass* Class = UAnimationManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentAnimationType", &UAnimationManagerComponent::execGetCurrentAnimationType },
		{ "HandleAnimationNotify", &UAnimationManagerComponent::execHandleAnimationNotify },
		{ "HasAnimation", &UAnimationManagerComponent::execHasAnimation },
		{ "InitializeAnimationSystem", &UAnimationManagerComponent::execInitializeAnimationSystem },
		{ "IsPlayingAnimation", &UAnimationManagerComponent::execIsPlayingAnimation },
		{ "PlayAnimation", &UAnimationManagerComponent::execPlayAnimation },
		{ "PlayAnimationByTag", &UAnimationManagerComponent::execPlayAnimationByTag },
		{ "RegisterGASAnimation", &UAnimationManagerComponent::execRegisterGASAnimation },
		{ "StopCurrentAnimation", &UAnimationManagerComponent::execStopCurrentAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimationManagerComponent;
UClass* UAnimationManagerComponent::GetPrivateStaticClass()
{
	using TClass = UAnimationManagerComponent;
	if (!Z_Registration_Info_UClass_UAnimationManagerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimationManagerComponent"),
			Z_Registration_Info_UClass_UAnimationManagerComponent.InnerSingleton,
			StaticRegisterNativesUAnimationManagerComponent,
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
	return Z_Registration_Info_UClass_UAnimationManagerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimationManagerComponent_NoRegister()
{
	return UAnimationManagerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimationManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AnimationComponents/AnimationManagerComponent.h" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationConfigTable_MetaData[] = {
		{ "Category", "Animation|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8b\x95\xe7\x95\xab\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8b\x95\xe7\x95\xab\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationConfigs_MetaData[] = {
		{ "Category", "Animation|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x96\xae\xe7\x8d\xa8\xe7\x9a\x84\xe5\x8b\x95\xe7\x95\xab\xe9\x85\x8d\xe7\xbd\xae\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe4\xbd\xbf\xe7\x94\xa8""DataTable\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x96\xae\xe7\x8d\xa8\xe7\x9a\x84\xe5\x8b\x95\xe7\x95\xab\xe9\x85\x8d\xe7\xbd\xae\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe4\xbd\xbf\xe7\x94\xa8""DataTable\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimationStarted_MetaData[] = {
		{ "Category", "Animation|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe4\xba\x8b\xe4\xbb\xb6 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe4\xba\x8b\xe4\xbb\xb6 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimationCompleted_MetaData[] = {
		{ "Category", "Animation|Events" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimationInterrupted_MetaData[] = {
		{ "Category", "Animation|Events" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimationEvent_MetaData[] = {
		{ "Category", "Animation|Events" },
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAnimationType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x95\xb6\xe5\x89\x8d\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe5\x8b\x95\xe7\x95\xab\xe9\xa1\x9e\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationComponents/AnimationManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\xb6\xe5\x89\x8d\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe5\x8b\x95\xe7\x95\xab\xe9\xa1\x9e\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationConfigTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationConfigs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationConfigs_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationConfigs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AnimationConfigs;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimationStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimationCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimationInterrupted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimationEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimNotify;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAnimationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationManagerComponent_GetCurrentAnimationType, "GetCurrentAnimationType" }, // 1587489943
		{ &Z_Construct_UFunction_UAnimationManagerComponent_HandleAnimationNotify, "HandleAnimationNotify" }, // 132761358
		{ &Z_Construct_UFunction_UAnimationManagerComponent_HasAnimation, "HasAnimation" }, // 1377053149
		{ &Z_Construct_UFunction_UAnimationManagerComponent_InitializeAnimationSystem, "InitializeAnimationSystem" }, // 1964648553
		{ &Z_Construct_UFunction_UAnimationManagerComponent_IsPlayingAnimation, "IsPlayingAnimation" }, // 3630651854
		{ &Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimation, "PlayAnimation" }, // 2450523540
		{ &Z_Construct_UFunction_UAnimationManagerComponent_PlayAnimationByTag, "PlayAnimationByTag" }, // 2375254421
		{ &Z_Construct_UFunction_UAnimationManagerComponent_RegisterGASAnimation, "RegisterGASAnimation" }, // 3891108240
		{ &Z_Construct_UFunction_UAnimationManagerComponent_StopCurrentAnimation, "StopCurrentAnimation" }, // 427325032
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigTable = { "AnimationConfigTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationManagerComponent, AnimationConfigTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationConfigTable_MetaData), NewProp_AnimationConfigTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigs_ValueProp = { "AnimationConfigs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnimationConfig, METADATA_PARAMS(0, nullptr) }; // 1006757491
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigs_Key_KeyProp = { "AnimationConfigs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(0, nullptr) }; // 2682357592
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigs = { "AnimationConfigs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationManagerComponent, AnimationConfigs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationConfigs_MetaData), NewProp_AnimationConfigs_MetaData) }; // 2682357592 1006757491
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimationStarted = { "OnAnimationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationManagerComponent, OnAnimationStarted), Z_Construct_UDelegateFunction_ProjectGate_OnAnimationStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnimationStarted_MetaData), NewProp_OnAnimationStarted_MetaData) }; // 1557304511
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimationCompleted = { "OnAnimationCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationManagerComponent, OnAnimationCompleted), Z_Construct_UDelegateFunction_ProjectGate_OnAnimationCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnimationCompleted_MetaData), NewProp_OnAnimationCompleted_MetaData) }; // 633771810
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimationInterrupted = { "OnAnimationInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationManagerComponent, OnAnimationInterrupted), Z_Construct_UDelegateFunction_ProjectGate_OnAnimationInterrupted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnimationInterrupted_MetaData), NewProp_OnAnimationInterrupted_MetaData) }; // 1902878230
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimationEvent = { "OnAnimationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationManagerComponent, OnAnimationEvent), Z_Construct_UDelegateFunction_ProjectGate_OnAnimationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnimationEvent_MetaData), NewProp_OnAnimationEvent_MetaData) }; // 340741978
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimNotify = { "OnAnimNotify", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationManagerComponent, OnAnimNotify), Z_Construct_UDelegateFunction_ProjectGate_OnAnimNotifySignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnimNotify_MetaData), NewProp_OnAnimNotify_MetaData) }; // 2688541069
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_CurrentAnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_CurrentAnimationType = { "CurrentAnimationType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationManagerComponent, CurrentAnimationType), Z_Construct_UEnum_ProjectGate_EAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAnimationType_MetaData), NewProp_CurrentAnimationType_MetaData) }; // 2682357592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigs_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_AnimationConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimationStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimationCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimationInterrupted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimationEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_OnAnimNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_CurrentAnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationManagerComponent_Statics::NewProp_CurrentAnimationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationManagerComponent_Statics::ClassParams = {
	&UAnimationManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationManagerComponent()
{
	if (!Z_Registration_Info_UClass_UAnimationManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationManagerComponent.OuterSingleton, Z_Construct_UClass_UAnimationManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationManagerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationManagerComponent);
UAnimationManagerComponent::~UAnimationManagerComponent() {}
// ********** End Class UAnimationManagerComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimationType_StaticEnum, TEXT("EAnimationType"), &Z_Registration_Info_UEnum_EAnimationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2682357592U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationConfig::StaticStruct, Z_Construct_UScriptStruct_FAnimationConfig_Statics::NewStructOps, TEXT("AnimationConfig"), &Z_Registration_Info_UScriptStruct_FAnimationConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationConfig), 1006757491U) },
		{ FAnimationRequest::StaticStruct, Z_Construct_UScriptStruct_FAnimationRequest_Statics::NewStructOps, TEXT("AnimationRequest"), &Z_Registration_Info_UScriptStruct_FAnimationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationRequest), 1142317627U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationManagerComponent, UAnimationManagerComponent::StaticClass, TEXT("UAnimationManagerComponent"), &Z_Registration_Info_UClass_UAnimationManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationManagerComponent), 989232623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h__Script_ProjectGate_1181285850(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h__Script_ProjectGate_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimationComponents_AnimationManagerComponent_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
