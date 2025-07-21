// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HighlightSystem/HighlightTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHighlightTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EHighlightPriority();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EHighlightType();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FHighlightConfig();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FHighlightState();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EHighlightType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHighlightType;
static UEnum* EHighlightType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHighlightType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHighlightType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EHighlightType, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EHighlightType"));
	}
	return Z_Registration_Info_UEnum_EHighlightType.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EHighlightType>()
{
	return EHighlightType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EHighlightType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ally.Comment", "// \xe5\xb7\xb2\xe9\x81\xb8\xe4\xb8\xad\n" },
		{ "Ally.Name", "EHighlightType::Ally" },
		{ "Ally.ToolTip", "\xe5\xb7\xb2\xe9\x81\xb8\xe4\xb8\xad" },
		{ "AttackTarget.Comment", "// \xe7\x95\xb6\xe5\x89\x8d\xe5\x9b\x9e\xe5\x90\x88\n" },
		{ "AttackTarget.Name", "EHighlightType::AttackTarget" },
		{ "AttackTarget.ToolTip", "\xe7\x95\xb6\xe5\x89\x8d\xe5\x9b\x9e\xe5\x90\x88" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\xe6\x9e\x9a\xe8\x88\x89\n" },
#endif
		{ "CurrentTurn.Name", "EHighlightType::CurrentTurn" },
		{ "Custom.Comment", "// \xe5\x8f\xaf\xe4\xba\x92\xe5\x8b\x95\xe7\x89\xa9\xe4\xbb\xb6\n" },
		{ "Custom.Name", "EHighlightType::Custom" },
		{ "Custom.ToolTip", "\xe5\x8f\xaf\xe4\xba\x92\xe5\x8b\x95\xe7\x89\xa9\xe4\xbb\xb6" },
		{ "Enemy.Comment", "// \xe5\x8f\x8b\xe6\x96\xb9\xe5\x96\xae\xe4\xbd\x8d\n" },
		{ "Enemy.Name", "EHighlightType::Enemy" },
		{ "Enemy.ToolTip", "\xe5\x8f\x8b\xe6\x96\xb9\xe5\x96\xae\xe4\xbd\x8d" },
		{ "Hover.Comment", "// \xe5\x8f\xaf\xe6\x94\xbb\xe6\x93\x8a\xe7\x9b\xae\xe6\xa8\x99\n" },
		{ "Hover.Name", "EHighlightType::Hover" },
		{ "Hover.ToolTip", "\xe5\x8f\xaf\xe6\x94\xbb\xe6\x93\x8a\xe7\x9b\xae\xe6\xa8\x99" },
		{ "Interactable.Comment", "// \xe6\x95\xb5\xe6\x96\xb9\xe5\x96\xae\xe4\xbd\x8d\n" },
		{ "Interactable.Name", "EHighlightType::Interactable" },
		{ "Interactable.ToolTip", "\xe6\x95\xb5\xe6\x96\xb9\xe5\x96\xae\xe4\xbd\x8d" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
		{ "None.Name", "EHighlightType::None" },
		{ "Selected.Comment", "// \xe6\xbb\x91\xe9\xbc\xa0\xe6\x87\xb8\xe5\x81\x9c\n" },
		{ "Selected.Name", "EHighlightType::Selected" },
		{ "Selected.ToolTip", "\xe6\xbb\x91\xe9\xbc\xa0\xe6\x87\xb8\xe5\x81\x9c" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe9\xa1\x9e\xe5\x9e\x8b\xe6\x9e\x9a\xe8\x88\x89" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHighlightType::None", (int64)EHighlightType::None },
		{ "EHighlightType::CurrentTurn", (int64)EHighlightType::CurrentTurn },
		{ "EHighlightType::AttackTarget", (int64)EHighlightType::AttackTarget },
		{ "EHighlightType::Hover", (int64)EHighlightType::Hover },
		{ "EHighlightType::Selected", (int64)EHighlightType::Selected },
		{ "EHighlightType::Ally", (int64)EHighlightType::Ally },
		{ "EHighlightType::Enemy", (int64)EHighlightType::Enemy },
		{ "EHighlightType::Interactable", (int64)EHighlightType::Interactable },
		{ "EHighlightType::Custom", (int64)EHighlightType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EHighlightType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EHighlightType",
	"EHighlightType",
	Z_Construct_UEnum_ProjectGate_EHighlightType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EHighlightType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EHighlightType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EHighlightType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EHighlightType()
{
	if (!Z_Registration_Info_UEnum_EHighlightType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHighlightType.InnerSingleton, Z_Construct_UEnum_ProjectGate_EHighlightType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHighlightType.InnerSingleton;
}
// ********** End Enum EHighlightType **************************************************************

// ********** Begin Enum EHighlightPriority ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHighlightPriority;
static UEnum* EHighlightPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHighlightPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHighlightPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EHighlightPriority, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EHighlightPriority"));
	}
	return Z_Registration_Info_UEnum_EHighlightPriority.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EHighlightPriority>()
{
	return EHighlightPriority_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EHighlightPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe5\x84\xaa\xe5\x85\x88\xe7\xb4\x9a\n" },
#endif
		{ "High.Name", "EHighlightPriority::High" },
		{ "Low.Name", "EHighlightPriority::Low" },
		{ "Medium.Name", "EHighlightPriority::Medium" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
		{ "Override.Name", "EHighlightPriority::Override" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe5\x84\xaa\xe5\x85\x88\xe7\xb4\x9a" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHighlightPriority::Low", (int64)EHighlightPriority::Low },
		{ "EHighlightPriority::Medium", (int64)EHighlightPriority::Medium },
		{ "EHighlightPriority::High", (int64)EHighlightPriority::High },
		{ "EHighlightPriority::Override", (int64)EHighlightPriority::Override },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EHighlightPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EHighlightPriority",
	"EHighlightPriority",
	Z_Construct_UEnum_ProjectGate_EHighlightPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EHighlightPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EHighlightPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EHighlightPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EHighlightPriority()
{
	if (!Z_Registration_Info_UEnum_EHighlightPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHighlightPriority.InnerSingleton, Z_Construct_UEnum_ProjectGate_EHighlightPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHighlightPriority.InnerSingleton;
}
// ********** End Enum EHighlightPriority **********************************************************

// ********** Begin ScriptStruct FHighlightConfig **************************************************
static_assert(std::is_polymorphic<FHighlightConfig>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FHighlightConfig cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHighlightConfig;
class UScriptStruct* FHighlightConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHighlightConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHighlightConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHighlightConfig, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("HighlightConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FHighlightConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHighlightConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe9\x85\x8d\xe7\xbd\xae\xe6\x95\xb8\xe6\x93\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe9\x85\x8d\xe7\xbd\xae\xe6\x95\xb8\xe6\x93\x9a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "HighlightConfig" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StencilValue_MetaData[] = {
		{ "Category", "HighlightConfig" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "HighlightConfig" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "HighlightConfig" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPulsing_MetaData[] = {
		{ "Category", "HighlightConfig" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PulseSpeed_MetaData[] = {
		{ "Category", "HighlightConfig" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStacking_MetaData[] = {
		{ "Category", "HighlightConfig" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StencilValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static void NewProp_bPulsing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPulsing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PulseSpeed;
	static void NewProp_bAllowStacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStacking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHighlightConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHighlightConfig, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2403232974
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_StencilValue = { "StencilValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHighlightConfig, StencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StencilValue_MetaData), NewProp_StencilValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHighlightConfig, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHighlightConfig, Priority), Z_Construct_UEnum_ProjectGate_EHighlightPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 1948333190
void Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_bPulsing_SetBit(void* Obj)
{
	((FHighlightConfig*)Obj)->bPulsing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_bPulsing = { "bPulsing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHighlightConfig), &Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_bPulsing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPulsing_MetaData), NewProp_bPulsing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_PulseSpeed = { "PulseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHighlightConfig, PulseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PulseSpeed_MetaData), NewProp_PulseSpeed_MetaData) };
void Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_bAllowStacking_SetBit(void* Obj)
{
	((FHighlightConfig*)Obj)->bAllowStacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_bAllowStacking = { "bAllowStacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHighlightConfig), &Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_bAllowStacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStacking_MetaData), NewProp_bAllowStacking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHighlightConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_StencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_bPulsing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_PulseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewProp_bAllowStacking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighlightConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHighlightConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"HighlightConfig",
	Z_Construct_UScriptStruct_FHighlightConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighlightConfig_Statics::PropPointers),
	sizeof(FHighlightConfig),
	alignof(FHighlightConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighlightConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHighlightConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHighlightConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FHighlightConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHighlightConfig.InnerSingleton, Z_Construct_UScriptStruct_FHighlightConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHighlightConfig.InnerSingleton;
}
// ********** End ScriptStruct FHighlightConfig ****************************************************

// ********** Begin ScriptStruct FHighlightState ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHighlightState;
class UScriptStruct* FHighlightState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHighlightState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHighlightState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHighlightState, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("HighlightState"));
	}
	return Z_Registration_Info_UScriptStruct_FHighlightState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHighlightState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe7\x8b\x80\xe6\x85\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe7\x8b\x80\xe6\x85\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "HighlightState" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "HighlightState" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "HighlightState" },
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemporary_MetaData[] = {
		{ "Category", "HighlightState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -1 \xe8\xa1\xa8\xe7\xa4\xba\xe6\xb0\xb8\xe4\xb9\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/HighlightTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1 \xe8\xa1\xa8\xe7\xa4\xba\xe6\xb0\xb8\xe4\xb9\x85" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bIsTemporary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemporary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHighlightState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHighlightState, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2403232974
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHighlightState, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHighlightState, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_bIsTemporary_SetBit(void* Obj)
{
	((FHighlightState*)Obj)->bIsTemporary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_bIsTemporary = { "bIsTemporary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHighlightState), &Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_bIsTemporary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemporary_MetaData), NewProp_bIsTemporary_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHighlightState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHighlightState_Statics::NewProp_bIsTemporary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighlightState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHighlightState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"HighlightState",
	Z_Construct_UScriptStruct_FHighlightState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighlightState_Statics::PropPointers),
	sizeof(FHighlightState),
	alignof(FHighlightState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHighlightState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHighlightState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHighlightState()
{
	if (!Z_Registration_Info_UScriptStruct_FHighlightState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHighlightState.InnerSingleton, Z_Construct_UScriptStruct_FHighlightState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHighlightState.InnerSingleton;
}
// ********** End ScriptStruct FHighlightState *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHighlightType_StaticEnum, TEXT("EHighlightType"), &Z_Registration_Info_UEnum_EHighlightType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2403232974U) },
		{ EHighlightPriority_StaticEnum, TEXT("EHighlightPriority"), &Z_Registration_Info_UEnum_EHighlightPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1948333190U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHighlightConfig::StaticStruct, Z_Construct_UScriptStruct_FHighlightConfig_Statics::NewStructOps, TEXT("HighlightConfig"), &Z_Registration_Info_UScriptStruct_FHighlightConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHighlightConfig), 1572855345U) },
		{ FHighlightState::StaticStruct, Z_Construct_UScriptStruct_FHighlightState_Statics::NewStructOps, TEXT("HighlightState"), &Z_Registration_Info_UScriptStruct_FHighlightState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHighlightState), 3623484660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h__Script_ProjectGate_198817646(TEXT("/Script/ProjectGate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h__Script_ProjectGate_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_HighlightTypes_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
