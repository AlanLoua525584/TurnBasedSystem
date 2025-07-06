// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/UI/TurnOrderWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnOrderWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTurnOrderWidget *********************************************************
void UTurnOrderWidget::StaticRegisterNativesUTurnOrderWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnOrderWidget;
UClass* UTurnOrderWidget::GetPrivateStaticClass()
{
	using TClass = UTurnOrderWidget;
	if (!Z_Registration_Info_UClass_UTurnOrderWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnOrderWidget"),
			Z_Registration_Info_UClass_UTurnOrderWidget.InnerSingleton,
			StaticRegisterNativesUTurnOrderWidget,
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
	return Z_Registration_Info_UClass_UTurnOrderWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister()
{
	return UTurnOrderWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnOrderWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TurnBasedSystem/UI/TurnOrderWidget.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnOrderWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTurnOrderWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnOrderWidget_Statics::ClassParams = {
	&UTurnOrderWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnOrderWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnOrderWidget()
{
	if (!Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton, Z_Construct_UClass_UTurnOrderWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton;
}
UTurnOrderWidget::UTurnOrderWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnOrderWidget);
UTurnOrderWidget::~UTurnOrderWidget() {}
// ********** End Class UTurnOrderWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnOrderWidget, UTurnOrderWidget::StaticClass, TEXT("UTurnOrderWidget"), &Z_Registration_Info_UClass_UTurnOrderWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnOrderWidget), 3577577088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_4246223361(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
