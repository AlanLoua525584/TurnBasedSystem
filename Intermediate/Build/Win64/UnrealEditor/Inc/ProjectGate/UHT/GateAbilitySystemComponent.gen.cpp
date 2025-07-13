// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/GateAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGateAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAbilitySystemComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGateAbilitySystemComponent **********************************************
void UGateAbilitySystemComponent::StaticRegisterNativesUGateAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGateAbilitySystemComponent;
UClass* UGateAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UGateAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UGateAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GateAbilitySystemComponent"),
			Z_Registration_Info_UClass_UGateAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUGateAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UGateAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGateAbilitySystemComponent_NoRegister()
{
	return UGateAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGateAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/GateAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GateAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGateAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGateAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGateAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGateAbilitySystemComponent_Statics::ClassParams = {
	&UGateAbilitySystemComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGateAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGateAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGateAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UGateAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGateAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGateAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGateAbilitySystemComponent.OuterSingleton;
}
UGateAbilitySystemComponent::UGateAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGateAbilitySystemComponent);
UGateAbilitySystemComponent::~UGateAbilitySystemComponent() {}
// ********** End Class UGateAbilitySystemComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGateAbilitySystemComponent, UGateAbilitySystemComponent::StaticClass, TEXT("UGateAbilitySystemComponent"), &Z_Registration_Info_UClass_UGateAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGateAbilitySystemComponent), 3082363353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h__Script_ProjectGate_2748654552(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_AbilitySystem_GateAbilitySystemComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
