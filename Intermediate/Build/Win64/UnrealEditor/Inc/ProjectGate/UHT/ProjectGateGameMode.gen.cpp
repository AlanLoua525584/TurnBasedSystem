// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectGateGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectGateGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTGATE_API UClass* Z_Construct_UClass_AProjectGateGameMode();
PROJECTGATE_API UClass* Z_Construct_UClass_AProjectGateGameMode_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnDisplayWidget_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ETurnPhase();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectGateGameMode Function OnPhaseChanged *****************************
struct Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics
{
	struct ProjectGateGameMode_eventOnPhaseChanged_Parms
	{
		AActor* CurrentCharacter;
		ETurnPhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectGateGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectGateGameMode_eventOnPhaseChanged_Parms, CurrentCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectGateGameMode_eventOnPhaseChanged_Parms, NewPhase), Z_Construct_UEnum_ProjectGate_ETurnPhase, METADATA_PARAMS(0, nullptr) }; // 1421385386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::NewProp_CurrentCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectGateGameMode, nullptr, "OnPhaseChanged", Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::ProjectGateGameMode_eventOnPhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::ProjectGateGameMode_eventOnPhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectGateGameMode::execOnPhaseChanged)
{
	P_GET_OBJECT(AActor,Z_Param_CurrentCharacter);
	P_GET_ENUM(ETurnPhase,Z_Param_NewPhase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPhaseChanged(Z_Param_CurrentCharacter,ETurnPhase(Z_Param_NewPhase));
	P_NATIVE_END;
}
// ********** End Class AProjectGateGameMode Function OnPhaseChanged *******************************

// ********** Begin Class AProjectGateGameMode Function OnTurnChanged ******************************
struct Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics
{
	struct ProjectGateGameMode_eventOnTurnChanged_Parms
	{
		AActor* CurrentCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectGateGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectGateGameMode_eventOnTurnChanged_Parms, CurrentCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::NewProp_CurrentCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectGateGameMode, nullptr, "OnTurnChanged", Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::ProjectGateGameMode_eventOnTurnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::ProjectGateGameMode_eventOnTurnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectGateGameMode::execOnTurnChanged)
{
	P_GET_OBJECT(AActor,Z_Param_CurrentCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnChanged(Z_Param_CurrentCharacter);
	P_NATIVE_END;
}
// ********** End Class AProjectGateGameMode Function OnTurnChanged ********************************

// ********** Begin Class AProjectGateGameMode *****************************************************
void AProjectGateGameMode::StaticRegisterNativesAProjectGateGameMode()
{
	UClass* Class = AProjectGateGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPhaseChanged", &AProjectGateGameMode::execOnPhaseChanged },
		{ "OnTurnChanged", &AProjectGateGameMode::execOnTurnChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectGateGameMode;
UClass* AProjectGateGameMode::GetPrivateStaticClass()
{
	using TClass = AProjectGateGameMode;
	if (!Z_Registration_Info_UClass_AProjectGateGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectGateGameMode"),
			Z_Registration_Info_UClass_AProjectGateGameMode.InnerSingleton,
			StaticRegisterNativesAProjectGateGameMode,
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
	return Z_Registration_Info_UClass_AProjectGateGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectGateGameMode_NoRegister()
{
	return AProjectGateGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectGateGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectGateGameMode.h" },
		{ "ModuleRelativePath", "Public/ProjectGateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xde\xb2z\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ProjectGateGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xde\xb2z\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnDisplayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectGateGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnDisplayWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ProjectGateGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnDisplayWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TurnDisplayWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectGateGameMode_OnPhaseChanged, "OnPhaseChanged" }, // 3792010443
		{ &Z_Construct_UFunction_AProjectGateGameMode_OnTurnChanged, "OnTurnChanged" }, // 1761269530
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectGateGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectGateGameMode_Statics::NewProp_TurnManager = { "TurnManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectGateGameMode, TurnManager), Z_Construct_UClass_ASimpleTurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnManager_MetaData), NewProp_TurnManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectGateGameMode_Statics::NewProp_TurnDisplayWidget = { "TurnDisplayWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectGateGameMode, TurnDisplayWidget), Z_Construct_UClass_UTurnDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnDisplayWidget_MetaData), NewProp_TurnDisplayWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectGateGameMode_Statics::NewProp_TurnDisplayWidgetClass = { "TurnDisplayWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectGateGameMode, TurnDisplayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTurnDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnDisplayWidgetClass_MetaData), NewProp_TurnDisplayWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectGateGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectGateGameMode_Statics::NewProp_TurnManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectGateGameMode_Statics::NewProp_TurnDisplayWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectGateGameMode_Statics::NewProp_TurnDisplayWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectGateGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectGateGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectGateGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectGateGameMode_Statics::ClassParams = {
	&AProjectGateGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectGateGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectGateGameMode_Statics::PropPointers),
	0,
	0x009003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectGateGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectGateGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectGateGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectGateGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectGateGameMode.OuterSingleton, Z_Construct_UClass_AProjectGateGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectGateGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectGateGameMode);
AProjectGateGameMode::~AProjectGateGameMode() {}
// ********** End Class AProjectGateGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectGateGameMode, AProjectGateGameMode::StaticClass, TEXT("AProjectGateGameMode"), &Z_Registration_Info_UClass_AProjectGateGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectGateGameMode), 2825511280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h__Script_ProjectGate_1803452121(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_ProjectGateGameMode_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
