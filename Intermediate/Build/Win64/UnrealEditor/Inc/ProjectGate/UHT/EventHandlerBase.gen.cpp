// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventHandlers/EventHandlerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEventHandlerBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROJECTGATE_API UClass* Z_Construct_UClass_UEventHandlerBase();
PROJECTGATE_API UClass* Z_Construct_UClass_UEventHandlerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEventHandlerBase ********************************************************
void UEventHandlerBase::StaticRegisterNativesUEventHandlerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEventHandlerBase;
UClass* UEventHandlerBase::GetPrivateStaticClass()
{
	using TClass = UEventHandlerBase;
	if (!Z_Registration_Info_UClass_UEventHandlerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EventHandlerBase"),
			Z_Registration_Info_UClass_UEventHandlerBase.InnerSingleton,
			StaticRegisterNativesUEventHandlerBase,
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
	return Z_Registration_Info_UClass_UEventHandlerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UEventHandlerBase_NoRegister()
{
	return UEventHandlerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEventHandlerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe9\x80\x9a\xe7\x94\xa8\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe5\x9f\xba\xe9\xa1\x9e - \xe8\xa7\xa3\xe6\xb1\xba\xe5\x8b\x95\xe6\x85\x8b\xe5\xa7\x94\xe8\xa8\x97\xe4\xb8\x8d\xe6\x94\xaf\xe6\x8f\xb4 Lambda \xe7\x9a\x84\xe5\x95\x8f\xe9\xa1\x8c\n * \xe9\x80\x99\xe6\x98\xaf\xe4\xb8\x80\xe5\x80\x8b\xe5\x8f\xaf\xe9\x87\x8d\xe7\x94\xa8\xe7\x9a\x84\xe6\xa8\xa1\xe5\xbc\x8f\xef\xbc\x8c\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x94\xa8\xe6\x96\xbc\xe4\xbb\xbb\xe4\xbd\x95\xe9\x9c\x80\xe8\xa6\x81 Lambda \xe7\x9a\x84\xe5\x8b\x95\xe6\x85\x8b\xe5\xa7\x94\xe8\xa8\x97\xe5\xa0\xb4\xe6\x99\xaf\n */" },
#endif
		{ "IncludePath", "EventHandlers/EventHandlerBase.h" },
		{ "ModuleRelativePath", "Public/EventHandlers/EventHandlerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe7\x94\xa8\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe5\x9f\xba\xe9\xa1\x9e - \xe8\xa7\xa3\xe6\xb1\xba\xe5\x8b\x95\xe6\x85\x8b\xe5\xa7\x94\xe8\xa8\x97\xe4\xb8\x8d\xe6\x94\xaf\xe6\x8f\xb4 Lambda \xe7\x9a\x84\xe5\x95\x8f\xe9\xa1\x8c\n\xe9\x80\x99\xe6\x98\xaf\xe4\xb8\x80\xe5\x80\x8b\xe5\x8f\xaf\xe9\x87\x8d\xe7\x94\xa8\xe7\x9a\x84\xe6\xa8\xa1\xe5\xbc\x8f\xef\xbc\x8c\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x94\xa8\xe6\x96\xbc\xe4\xbb\xbb\xe4\xbd\x95\xe9\x9c\x80\xe8\xa6\x81 Lambda \xe7\x9a\x84\xe5\x8b\x95\xe6\x85\x8b\xe5\xa7\x94\xe8\xa8\x97\xe5\xa0\xb4\xe6\x99\xaf" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventHandlerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEventHandlerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEventHandlerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEventHandlerBase_Statics::ClassParams = {
	&UEventHandlerBase::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEventHandlerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UEventHandlerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEventHandlerBase()
{
	if (!Z_Registration_Info_UClass_UEventHandlerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEventHandlerBase.OuterSingleton, Z_Construct_UClass_UEventHandlerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEventHandlerBase.OuterSingleton;
}
UEventHandlerBase::UEventHandlerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEventHandlerBase);
// ********** End Class UEventHandlerBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEventHandlerBase, UEventHandlerBase::StaticClass, TEXT("UEventHandlerBase"), &Z_Registration_Info_UClass_UEventHandlerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEventHandlerBase), 149195109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h__Script_ProjectGate_3044864900(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_EventHandlerBase_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
