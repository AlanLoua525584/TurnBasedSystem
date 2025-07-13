// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify/AttackHitNotify.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttackHitNotify() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
PROJECTGATE_API UClass* Z_Construct_UClass_UAttackHitNotify();
PROJECTGATE_API UClass* Z_Construct_UClass_UAttackHitNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttackHitNotify *********************************************************
void UAttackHitNotify::StaticRegisterNativesUAttackHitNotify()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackHitNotify;
UClass* UAttackHitNotify::GetPrivateStaticClass()
{
	using TClass = UAttackHitNotify;
	if (!Z_Registration_Info_UClass_UAttackHitNotify.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AttackHitNotify"),
			Z_Registration_Info_UClass_UAttackHitNotify.InnerSingleton,
			StaticRegisterNativesUAttackHitNotify,
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
	return Z_Registration_Info_UClass_UAttackHitNotify.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackHitNotify_NoRegister()
{
	return UAttackHitNotify::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackHitNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AttackHitNotify.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AttackHitNotify.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackHitNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAttackHitNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackHitNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackHitNotify_Statics::ClassParams = {
	&UAttackHitNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackHitNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackHitNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttackHitNotify()
{
	if (!Z_Registration_Info_UClass_UAttackHitNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackHitNotify.OuterSingleton, Z_Construct_UClass_UAttackHitNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackHitNotify.OuterSingleton;
}
UAttackHitNotify::UAttackHitNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackHitNotify);
UAttackHitNotify::~UAttackHitNotify() {}
// ********** End Class UAttackHitNotify ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackHitNotify, UAttackHitNotify::StaticClass, TEXT("UAttackHitNotify"), &Z_Registration_Info_UClass_UAttackHitNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackHitNotify), 1806622600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h__Script_ProjectGate_4101540320(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AnimNotify_AttackHitNotify_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
