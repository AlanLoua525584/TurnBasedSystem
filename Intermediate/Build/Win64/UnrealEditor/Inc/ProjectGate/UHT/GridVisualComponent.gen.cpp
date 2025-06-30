// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/GridVisualComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridVisualComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EGridVisualType();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FGridVisualSettings();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGridVisualType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridVisualType;
static UEnum* EGridVisualType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridVisualType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridVisualType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EGridVisualType, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EGridVisualType"));
	}
	return Z_Registration_Info_UEnum_EGridVisualType.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EGridVisualType>()
{
	return EGridVisualType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EGridVisualType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttackRange.Name", "EGridVisualType::AttackRange" },
		{ "BlueprintType", "true" },
		{ "Danger.Name", "EGridVisualType::Danger" },
		{ "Hover.Name", "EGridVisualType::Hover" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridVisualComponent.h" },
		{ "MovementRange.Name", "EGridVisualType::MovementRange" },
		{ "Path.Name", "EGridVisualType::Path" },
		{ "Selected.Name", "EGridVisualType::Selected" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridVisualType::MovementRange", (int64)EGridVisualType::MovementRange },
		{ "EGridVisualType::AttackRange", (int64)EGridVisualType::AttackRange },
		{ "EGridVisualType::Path", (int64)EGridVisualType::Path },
		{ "EGridVisualType::Hover", (int64)EGridVisualType::Hover },
		{ "EGridVisualType::Selected", (int64)EGridVisualType::Selected },
		{ "EGridVisualType::Danger", (int64)EGridVisualType::Danger },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EGridVisualType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EGridVisualType",
	"EGridVisualType",
	Z_Construct_UEnum_ProjectGate_EGridVisualType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EGridVisualType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EGridVisualType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EGridVisualType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EGridVisualType()
{
	if (!Z_Registration_Info_UEnum_EGridVisualType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridVisualType.InnerSingleton, Z_Construct_UEnum_ProjectGate_EGridVisualType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridVisualType.InnerSingleton;
}
// ********** End Enum EGridVisualType *************************************************************

// ********** Begin ScriptStruct FGridVisualSettings ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGridVisualSettings;
class UScriptStruct* FGridVisualSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGridVisualSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGridVisualSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridVisualSettings, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("GridVisualSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGridVisualSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGridVisualSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "GridVisualSettings" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[] = {
		{ "Category", "GridVisualSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default green with alpha\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridVisualComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default green with alpha" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridVisualSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridVisualSettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridVisualSettings, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridVisualSettings_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridVisualSettings, HeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightOffset_MetaData), NewProp_HeightOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridVisualSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridVisualSettings_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridVisualSettings_Statics::NewProp_HeightOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridVisualSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridVisualSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"GridVisualSettings",
	Z_Construct_UScriptStruct_FGridVisualSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridVisualSettings_Statics::PropPointers),
	sizeof(FGridVisualSettings),
	alignof(FGridVisualSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridVisualSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridVisualSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridVisualSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGridVisualSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGridVisualSettings.InnerSingleton, Z_Construct_UScriptStruct_FGridVisualSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGridVisualSettings.InnerSingleton;
}
// ********** End ScriptStruct FGridVisualSettings *************************************************

// ********** Begin Class UGridVisualComponent *****************************************************
void UGridVisualComponent::StaticRegisterNativesUGridVisualComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGridVisualComponent;
UClass* UGridVisualComponent::GetPrivateStaticClass()
{
	using TClass = UGridVisualComponent;
	if (!Z_Registration_Info_UClass_UGridVisualComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridVisualComponent"),
			Z_Registration_Info_UClass_UGridVisualComponent.InnerSingleton,
			StaticRegisterNativesUGridVisualComponent,
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
	return Z_Registration_Info_UClass_UGridVisualComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGridVisualComponent_NoRegister()
{
	return UGridVisualComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGridVisualComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnBasedSystem/GridVisualComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridVisualComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridVisualComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridVisualComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridVisualComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridVisualComponent_Statics::ClassParams = {
	&UGridVisualComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridVisualComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridVisualComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridVisualComponent()
{
	if (!Z_Registration_Info_UClass_UGridVisualComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridVisualComponent.OuterSingleton, Z_Construct_UClass_UGridVisualComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridVisualComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridVisualComponent);
UGridVisualComponent::~UGridVisualComponent() {}
// ********** End Class UGridVisualComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridVisualType_StaticEnum, TEXT("EGridVisualType"), &Z_Registration_Info_UEnum_EGridVisualType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 206645807U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridVisualSettings::StaticStruct, Z_Construct_UScriptStruct_FGridVisualSettings_Statics::NewStructOps, TEXT("GridVisualSettings"), &Z_Registration_Info_UScriptStruct_FGridVisualSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridVisualSettings), 432893312U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridVisualComponent, UGridVisualComponent::StaticClass, TEXT("UGridVisualComponent"), &Z_Registration_Info_UClass_UGridVisualComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridVisualComponent), 937538726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h__Script_ProjectGate_3715129852(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h__Script_ProjectGate_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridVisualComponent_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
