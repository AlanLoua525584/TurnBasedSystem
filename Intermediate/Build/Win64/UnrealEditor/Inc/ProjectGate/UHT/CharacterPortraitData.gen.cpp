// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/DataAssets/CharacterPortraitData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterPortraitData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterPortraitData();
PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterPortraitData_NoRegister();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FPortraitData();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPortraitData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPortraitData;
class UScriptStruct* FPortraitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPortraitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPortraitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortraitData, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("PortraitData"));
	}
	return Z_Registration_Info_UScriptStruct_FPortraitData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPortraitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullPortrait_MetaData[] = {
		{ "Category", "Portrait|Main" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIPortrait_MetaData[] = {
		{ "Category", "Portrait|UI" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BattleIcon_MetaData[] = {
		{ "Category", "Portrait|Battle" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguePortrait_MetaData[] = {
		{ "Category", "Portrait|Dialogue" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
		{ "Category", "Portrait|Style" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameStyle_MetaData[] = {
		{ "Category", "Portrait|Style" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FullPortrait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIPortrait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BattleIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialoguePortrait;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortraitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_FullPortrait = { "FullPortrait", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortraitData, FullPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullPortrait_MetaData), NewProp_FullPortrait_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_UIPortrait = { "UIPortrait", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortraitData, UIPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIPortrait_MetaData), NewProp_UIPortrait_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_BattleIcon = { "BattleIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortraitData, BattleIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BattleIcon_MetaData), NewProp_BattleIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_DialoguePortrait = { "DialoguePortrait", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortraitData, DialoguePortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguePortrait_MetaData), NewProp_DialoguePortrait_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortraitData, BorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_FrameStyle = { "FrameStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortraitData, FrameStyle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameStyle_MetaData), NewProp_FrameStyle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortraitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_FullPortrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_UIPortrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_BattleIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_DialoguePortrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_BorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortraitData_Statics::NewProp_FrameStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortraitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortraitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"PortraitData",
	Z_Construct_UScriptStruct_FPortraitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortraitData_Statics::PropPointers),
	sizeof(FPortraitData),
	alignof(FPortraitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortraitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPortraitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPortraitData()
{
	if (!Z_Registration_Info_UScriptStruct_FPortraitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPortraitData.InnerSingleton, Z_Construct_UScriptStruct_FPortraitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPortraitData.InnerSingleton;
}
// ********** End ScriptStruct FPortraitData *******************************************************

// ********** Begin Class UCharacterPortraitData ***************************************************
void UCharacterPortraitData::StaticRegisterNativesUCharacterPortraitData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterPortraitData;
UClass* UCharacterPortraitData::GetPrivateStaticClass()
{
	using TClass = UCharacterPortraitData;
	if (!Z_Registration_Info_UClass_UCharacterPortraitData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterPortraitData"),
			Z_Registration_Info_UClass_UCharacterPortraitData.InnerSingleton,
			StaticRegisterNativesUCharacterPortraitData,
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
	return Z_Registration_Info_UClass_UCharacterPortraitData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterPortraitData_NoRegister()
{
	return UCharacterPortraitData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterPortraitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitTexture_MetaData[] = {
		{ "Category", "Portrait" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DataAssets/CharacterPortraitData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortraitTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterPortraitData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterPortraitData_Statics::NewProp_PortraitTexture = { "PortraitTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterPortraitData, PortraitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitTexture_MetaData), NewProp_PortraitTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterPortraitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPortraitData_Statics::NewProp_PortraitTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPortraitData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterPortraitData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPortraitData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterPortraitData_Statics::ClassParams = {
	&UCharacterPortraitData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterPortraitData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPortraitData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPortraitData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterPortraitData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterPortraitData()
{
	if (!Z_Registration_Info_UClass_UCharacterPortraitData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterPortraitData.OuterSingleton, Z_Construct_UClass_UCharacterPortraitData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterPortraitData.OuterSingleton;
}
UCharacterPortraitData::UCharacterPortraitData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterPortraitData);
UCharacterPortraitData::~UCharacterPortraitData() {}
// ********** End Class UCharacterPortraitData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h__Script_ProjectGate_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPortraitData::StaticStruct, Z_Construct_UScriptStruct_FPortraitData_Statics::NewStructOps, TEXT("PortraitData"), &Z_Registration_Info_UScriptStruct_FPortraitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortraitData), 1433789745U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterPortraitData, UCharacterPortraitData::StaticClass, TEXT("UCharacterPortraitData"), &Z_Registration_Info_UClass_UCharacterPortraitData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterPortraitData), 2473778881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h__Script_ProjectGate_1305553713(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DataAssets_CharacterPortraitData_h__Script_ProjectGate_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
