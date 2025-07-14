// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/DefaultInitiativeModifiers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDefaultInitiativeModifiers() {}

// ********** Begin Cross Module References ********************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UInitiativeModifier();
PROJECTGATE_API UClass* Z_Construct_UClass_URandomInitiativeModifier();
PROJECTGATE_API UClass* Z_Construct_UClass_URandomInitiativeModifier_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_USpeedInitiativeModifier();
PROJECTGATE_API UClass* Z_Construct_UClass_USpeedInitiativeModifier_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UStatusInitiativeModifier();
PROJECTGATE_API UClass* Z_Construct_UClass_UStatusInitiativeModifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpeedInitiativeModifier *************************************************
void USpeedInitiativeModifier::StaticRegisterNativesUSpeedInitiativeModifier()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpeedInitiativeModifier;
UClass* USpeedInitiativeModifier::GetPrivateStaticClass()
{
	using TClass = USpeedInitiativeModifier;
	if (!Z_Registration_Info_UClass_USpeedInitiativeModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpeedInitiativeModifier"),
			Z_Registration_Info_UClass_USpeedInitiativeModifier.InnerSingleton,
			StaticRegisterNativesUSpeedInitiativeModifier,
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
	return Z_Registration_Info_UClass_USpeedInitiativeModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_USpeedInitiativeModifier_NoRegister()
{
	return USpeedInitiativeModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpeedInitiativeModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */// \xef\xbf\xbdt\xef\xbf\xbd\xd7\xad\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "IncludePath", "TurnBasedSystem/DefaultInitiativeModifiers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DefaultInitiativeModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// \xef\xbf\xbdt\xef\xbf\xbd\xd7\xad\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DefaultInitiativeModifiers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeedInitiativeModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpeedInitiativeModifier_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeedInitiativeModifier, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeedInitiativeModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedInitiativeModifier_Statics::NewProp_SpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeedInitiativeModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpeedInitiativeModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInitiativeModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeedInitiativeModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeedInitiativeModifier_Statics::ClassParams = {
	&USpeedInitiativeModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpeedInitiativeModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpeedInitiativeModifier_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeedInitiativeModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeedInitiativeModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpeedInitiativeModifier()
{
	if (!Z_Registration_Info_UClass_USpeedInitiativeModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeedInitiativeModifier.OuterSingleton, Z_Construct_UClass_USpeedInitiativeModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeedInitiativeModifier.OuterSingleton;
}
USpeedInitiativeModifier::USpeedInitiativeModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpeedInitiativeModifier);
USpeedInitiativeModifier::~USpeedInitiativeModifier() {}
// ********** End Class USpeedInitiativeModifier ***************************************************

// ********** Begin Class UStatusInitiativeModifier ************************************************
void UStatusInitiativeModifier::StaticRegisterNativesUStatusInitiativeModifier()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatusInitiativeModifier;
UClass* UStatusInitiativeModifier::GetPrivateStaticClass()
{
	using TClass = UStatusInitiativeModifier;
	if (!Z_Registration_Info_UClass_UStatusInitiativeModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatusInitiativeModifier"),
			Z_Registration_Info_UClass_UStatusInitiativeModifier.InnerSingleton,
			StaticRegisterNativesUStatusInitiativeModifier,
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
	return Z_Registration_Info_UClass_UStatusInitiativeModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatusInitiativeModifier_NoRegister()
{
	return UStatusInitiativeModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatusInitiativeModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xc4\xaaG\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "IncludePath", "TurnBasedSystem/DefaultInitiativeModifiers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DefaultInitiativeModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xc4\xaaG\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowedPenalty_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DefaultInitiativeModifiers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasteBonus_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DefaultInitiativeModifiers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlowedPenalty;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HasteBonus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusInitiativeModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatusInitiativeModifier_Statics::NewProp_SlowedPenalty = { "SlowedPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusInitiativeModifier, SlowedPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowedPenalty_MetaData), NewProp_SlowedPenalty_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatusInitiativeModifier_Statics::NewProp_HasteBonus = { "HasteBonus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusInitiativeModifier, HasteBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasteBonus_MetaData), NewProp_HasteBonus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusInitiativeModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusInitiativeModifier_Statics::NewProp_SlowedPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusInitiativeModifier_Statics::NewProp_HasteBonus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusInitiativeModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatusInitiativeModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInitiativeModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusInitiativeModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusInitiativeModifier_Statics::ClassParams = {
	&UStatusInitiativeModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatusInitiativeModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatusInitiativeModifier_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusInitiativeModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusInitiativeModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatusInitiativeModifier()
{
	if (!Z_Registration_Info_UClass_UStatusInitiativeModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusInitiativeModifier.OuterSingleton, Z_Construct_UClass_UStatusInitiativeModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusInitiativeModifier.OuterSingleton;
}
UStatusInitiativeModifier::UStatusInitiativeModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusInitiativeModifier);
UStatusInitiativeModifier::~UStatusInitiativeModifier() {}
// ********** End Class UStatusInitiativeModifier **************************************************

// ********** Begin Class URandomInitiativeModifier ************************************************
void URandomInitiativeModifier::StaticRegisterNativesURandomInitiativeModifier()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URandomInitiativeModifier;
UClass* URandomInitiativeModifier::GetPrivateStaticClass()
{
	using TClass = URandomInitiativeModifier;
	if (!Z_Registration_Info_UClass_URandomInitiativeModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RandomInitiativeModifier"),
			Z_Registration_Info_UClass_URandomInitiativeModifier.InnerSingleton,
			StaticRegisterNativesURandomInitiativeModifier,
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
	return Z_Registration_Info_UClass_URandomInitiativeModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_URandomInitiativeModifier_NoRegister()
{
	return URandomInitiativeModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URandomInitiativeModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdH\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "IncludePath", "TurnBasedSystem/DefaultInitiativeModifiers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DefaultInitiativeModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdH\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRandom_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DefaultInitiativeModifiers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRandom_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/DefaultInitiativeModifiers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinRandom;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRandom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomInitiativeModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URandomInitiativeModifier_Statics::NewProp_MinRandom = { "MinRandom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URandomInitiativeModifier, MinRandom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRandom_MetaData), NewProp_MinRandom_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URandomInitiativeModifier_Statics::NewProp_MaxRandom = { "MaxRandom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URandomInitiativeModifier, MaxRandom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRandom_MetaData), NewProp_MaxRandom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URandomInitiativeModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomInitiativeModifier_Statics::NewProp_MinRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomInitiativeModifier_Statics::NewProp_MaxRandom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URandomInitiativeModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URandomInitiativeModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInitiativeModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URandomInitiativeModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URandomInitiativeModifier_Statics::ClassParams = {
	&URandomInitiativeModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URandomInitiativeModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URandomInitiativeModifier_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URandomInitiativeModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_URandomInitiativeModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URandomInitiativeModifier()
{
	if (!Z_Registration_Info_UClass_URandomInitiativeModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URandomInitiativeModifier.OuterSingleton, Z_Construct_UClass_URandomInitiativeModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URandomInitiativeModifier.OuterSingleton;
}
URandomInitiativeModifier::URandomInitiativeModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URandomInitiativeModifier);
URandomInitiativeModifier::~URandomInitiativeModifier() {}
// ********** End Class URandomInitiativeModifier **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DefaultInitiativeModifiers_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeedInitiativeModifier, USpeedInitiativeModifier::StaticClass, TEXT("USpeedInitiativeModifier"), &Z_Registration_Info_UClass_USpeedInitiativeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeedInitiativeModifier), 3758179503U) },
		{ Z_Construct_UClass_UStatusInitiativeModifier, UStatusInitiativeModifier::StaticClass, TEXT("UStatusInitiativeModifier"), &Z_Registration_Info_UClass_UStatusInitiativeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusInitiativeModifier), 3924240725U) },
		{ Z_Construct_UClass_URandomInitiativeModifier, URandomInitiativeModifier::StaticClass, TEXT("URandomInitiativeModifier"), &Z_Registration_Info_UClass_URandomInitiativeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URandomInitiativeModifier), 2265568332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DefaultInitiativeModifiers_h__Script_ProjectGate_3963802943(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DefaultInitiativeModifiers_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_DefaultInitiativeModifiers_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
