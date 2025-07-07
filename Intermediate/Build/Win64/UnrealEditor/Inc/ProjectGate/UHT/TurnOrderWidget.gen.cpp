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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTurnOrderWidget Function HighlightCurrentCharacter **********************
struct Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics
{
	struct TurnOrderWidget_eventHighlightCurrentCharacter_Parms
	{
		AActor* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventHighlightCurrentCharacter_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "HighlightCurrentCharacter", Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::TurnOrderWidget_eventHighlightCurrentCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::TurnOrderWidget_eventHighlightCurrentCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execHighlightCurrentCharacter)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HighlightCurrentCharacter(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderWidget Function HighlightCurrentCharacter ************************

// ********** Begin Class UTurnOrderWidget Function UpdateTurnOrder ********************************
struct Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics
{
	struct TurnOrderWidget_eventUpdateTurnOrder_Parms
	{
		TArray<AActor*> OrderedCharacters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbds\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderedCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderedCharacters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_OrderedCharacters_Inner = { "OrderedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_OrderedCharacters = { "OrderedCharacters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventUpdateTurnOrder_Parms, OrderedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedCharacters_MetaData), NewProp_OrderedCharacters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_OrderedCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_OrderedCharacters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "UpdateTurnOrder", Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::TurnOrderWidget_eventUpdateTurnOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::TurnOrderWidget_eventUpdateTurnOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execUpdateTurnOrder)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OrderedCharacters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTurnOrder(Z_Param_Out_OrderedCharacters);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderWidget Function UpdateTurnOrder **********************************

// ********** Begin Class UTurnOrderWidget *********************************************************
void UTurnOrderWidget::StaticRegisterNativesUTurnOrderWidget()
{
	UClass* Class = UTurnOrderWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HighlightCurrentCharacter", &UTurnOrderWidget::execHighlightCurrentCharacter },
		{ "UpdateTurnOrder", &UTurnOrderWidget::execUpdateTurnOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderContainer_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdj\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdj\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderEntryClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Entry Widget \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdO\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry Widget \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdO" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdw\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd Entries\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdw\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd Entries" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetPool_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdu\xef\xbf\xbd\xc6\xa5\xce\xa1^\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdu\xef\xbf\xbd\xc6\xa5\xce\xa1^" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderContainer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TurnOrderEntryClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntryWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnOrderWidget_HighlightCurrentCharacter, "HighlightCurrentCharacter" }, // 4243827381
		{ &Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder, "UpdateTurnOrder" }, // 3327323315
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnOrderWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderContainer = { "TurnOrderContainer", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnOrderContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderContainer_MetaData), NewProp_TurnOrderContainer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderEntryClass = { "TurnOrderEntryClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnOrderEntryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderEntryClass_MetaData), NewProp_TurnOrderEntryClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EntryWidgets_Inner = { "EntryWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EntryWidgets = { "EntryWidgets", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, EntryWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidgets_MetaData), NewProp_EntryWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_WidgetPool_Inner = { "WidgetPool", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_WidgetPool = { "WidgetPool", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, WidgetPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetPool_MetaData), NewProp_WidgetPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderEntryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EntryWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EntryWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_WidgetPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_WidgetPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UTurnOrderWidget, UTurnOrderWidget::StaticClass, TEXT("UTurnOrderWidget"), &Z_Registration_Info_UClass_UTurnOrderWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnOrderWidget), 2943426973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_524684384(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderWidget_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
