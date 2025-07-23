// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/AbilityTargetingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAbilityTargetingComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UAbilityTargetingComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UAbilityTargetingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAbilityTargetingComponent ***********************************************
void UAbilityTargetingComponent::StaticRegisterNativesUAbilityTargetingComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAbilityTargetingComponent;
UClass* UAbilityTargetingComponent::GetPrivateStaticClass()
{
	using TClass = UAbilityTargetingComponent;
	if (!Z_Registration_Info_UClass_UAbilityTargetingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AbilityTargetingComponent"),
			Z_Registration_Info_UClass_UAbilityTargetingComponent.InnerSingleton,
			StaticRegisterNativesUAbilityTargetingComponent,
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
	return Z_Registration_Info_UClass_UAbilityTargetingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAbilityTargetingComponent_NoRegister()
{
	return UAbilityTargetingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAbilityTargetingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameplayAbilitySystem/AbilityTargetingComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AbilityTargetingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTargetingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityTargetingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTargetingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTargetingComponent_Statics::ClassParams = {
	&UAbilityTargetingComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTargetingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTargetingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTargetingComponent()
{
	if (!Z_Registration_Info_UClass_UAbilityTargetingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTargetingComponent.OuterSingleton, Z_Construct_UClass_UAbilityTargetingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTargetingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTargetingComponent);
UAbilityTargetingComponent::~UAbilityTargetingComponent() {}
// ********** End Class UAbilityTargetingComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_AbilityTargetingComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTargetingComponent, UAbilityTargetingComponent::StaticClass, TEXT("UAbilityTargetingComponent"), &Z_Registration_Info_UClass_UAbilityTargetingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTargetingComponent), 594948362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_AbilityTargetingComponent_h__Script_ProjectGate_1797904071(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_AbilityTargetingComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_AbilityTargetingComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
