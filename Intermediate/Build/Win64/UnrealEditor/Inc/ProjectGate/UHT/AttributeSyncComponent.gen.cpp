// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/AttributeSyncComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttributeSyncComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UAttributeSyncComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UAttributeSyncComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttributeSyncComponent **************************************************
void UAttributeSyncComponent::StaticRegisterNativesUAttributeSyncComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAttributeSyncComponent;
UClass* UAttributeSyncComponent::GetPrivateStaticClass()
{
	using TClass = UAttributeSyncComponent;
	if (!Z_Registration_Info_UClass_UAttributeSyncComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AttributeSyncComponent"),
			Z_Registration_Info_UClass_UAttributeSyncComponent.InnerSingleton,
			StaticRegisterNativesUAttributeSyncComponent,
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
	return Z_Registration_Info_UClass_UAttributeSyncComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttributeSyncComponent_NoRegister()
{
	return UAttributeSyncComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttributeSyncComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameplayAbilitySystem/AttributeSyncComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/AttributeSyncComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeSyncComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAttributeSyncComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSyncComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeSyncComponent_Statics::ClassParams = {
	&UAttributeSyncComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSyncComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeSyncComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeSyncComponent()
{
	if (!Z_Registration_Info_UClass_UAttributeSyncComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeSyncComponent.OuterSingleton, Z_Construct_UClass_UAttributeSyncComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeSyncComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeSyncComponent);
UAttributeSyncComponent::~UAttributeSyncComponent() {}
// ********** End Class UAttributeSyncComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_AttributeSyncComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeSyncComponent, UAttributeSyncComponent::StaticClass, TEXT("UAttributeSyncComponent"), &Z_Registration_Info_UClass_UAttributeSyncComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeSyncComponent), 2441940050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_AttributeSyncComponent_h__Script_ProjectGate_1857983771(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_AttributeSyncComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_AttributeSyncComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
