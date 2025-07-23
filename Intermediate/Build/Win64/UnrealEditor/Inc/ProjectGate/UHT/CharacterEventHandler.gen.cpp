// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventHandlers/CharacterEventHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterEventHandler() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterEventHandler();
PROJECTGATE_API UClass* Z_Construct_UClass_UCharacterEventHandler_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UEventHandlerBase();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnSystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterEventHandler Function HandleAPChanged **************************
struct Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics
{
	struct CharacterEventHandler_eventHandleAPChanged_Parms
	{
		int32 NewAP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe5\x87\xbd\xe6\x95\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/EventHandlers/CharacterEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe5\x87\xbd\xe6\x95\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::NewProp_NewAP = { "NewAP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterEventHandler_eventHandleAPChanged_Parms, NewAP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::NewProp_NewAP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterEventHandler, nullptr, "HandleAPChanged", Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::CharacterEventHandler_eventHandleAPChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::CharacterEventHandler_eventHandleAPChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterEventHandler::execHandleAPChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAPChanged(Z_Param_NewAP);
	P_NATIVE_END;
}
// ********** End Class UCharacterEventHandler Function HandleAPChanged ****************************

// ********** Begin Class UCharacterEventHandler Function HandleHealthChanged **********************
struct Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics
{
	struct CharacterEventHandler_eventHandleHealthChanged_Parms
	{
		AActor* Character;
		int32 CurrentHealth;
		int32 MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventHandlers/CharacterEventHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterEventHandler_eventHandleHealthChanged_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterEventHandler_eventHandleHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterEventHandler_eventHandleHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterEventHandler, nullptr, "HandleHealthChanged", Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::CharacterEventHandler_eventHandleHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::CharacterEventHandler_eventHandleHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterEventHandler::execHandleHealthChanged)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHealth);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHealthChanged(Z_Param_Character,Z_Param_CurrentHealth,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// ********** End Class UCharacterEventHandler Function HandleHealthChanged ************************

// ********** Begin Class UCharacterEventHandler ***************************************************
void UCharacterEventHandler::StaticRegisterNativesUCharacterEventHandler()
{
	UClass* Class = UCharacterEventHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleAPChanged", &UCharacterEventHandler::execHandleAPChanged },
		{ "HandleHealthChanged", &UCharacterEventHandler::execHandleHealthChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterEventHandler;
UClass* UCharacterEventHandler::GetPrivateStaticClass()
{
	using TClass = UCharacterEventHandler;
	if (!Z_Registration_Info_UClass_UCharacterEventHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterEventHandler"),
			Z_Registration_Info_UClass_UCharacterEventHandler.InnerSingleton,
			StaticRegisterNativesUCharacterEventHandler,
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
	return Z_Registration_Info_UClass_UCharacterEventHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterEventHandler_NoRegister()
{
	return UCharacterEventHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterEventHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n ** \xe8\xa7\x92\xe8\x89\xb2\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe5\x99\xa8 - \xe5\xb0\x88\xe9\x96\x80\xe8\x99\x95\xe7\x90\x86\xe5\x96\xae\xe5\x80\x8b\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe4\xba\x8b\xe4\xbb\xb6\n * \xe6\xaf\x8f\xe5\x80\x8b\xe8\xa7\x92\xe8\x89\xb2\xe4\xb8\x80\xe5\x80\x8b\xe5\xaf\xa6\xe4\xbe\x8b\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d\xe4\xba\x86\xe7\xb4\xa2\xe5\xbc\x95\xe6\x98\xa0\xe5\xb0\x84\xe7\x9a\x84\xe8\xa4\x87\xe9\x9b\x9c\xe6\x80\xa7\n */" },
#endif
		{ "IncludePath", "EventHandlers/CharacterEventHandler.h" },
		{ "ModuleRelativePath", "Public/EventHandlers/CharacterEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe8\xa7\x92\xe8\x89\xb2\xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe5\x99\xa8 - \xe5\xb0\x88\xe9\x96\x80\xe8\x99\x95\xe7\x90\x86\xe5\x96\xae\xe5\x80\x8b\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe4\xba\x8b\xe4\xbb\xb6\n\xe6\xaf\x8f\xe5\x80\x8b\xe8\xa7\x92\xe8\x89\xb2\xe4\xb8\x80\xe5\x80\x8b\xe5\xaf\xa6\xe4\xbe\x8b\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d\xe4\xba\x86\xe7\xb4\xa2\xe5\xbc\x95\xe6\x98\xa0\xe5\xb0\x84\xe7\x9a\x84\xe8\xa4\x87\xe9\x9b\x9c\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventHandlers/CharacterEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventHandlers/CharacterEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTurnSystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventHandlers/CharacterEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCombatComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EventHandlers/CharacterEventHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTurnSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCombatComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterEventHandler_HandleAPChanged, "HandleAPChanged" }, // 2795209358
		{ &Z_Construct_UFunction_UCharacterEventHandler_HandleHealthChanged, "HandleHealthChanged" }, // 1954577186
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterEventHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterEventHandler_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterEventHandler, OwnerWidget), Z_Construct_UClass_UTurnOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterEventHandler_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterEventHandler, TargetCharacter), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCharacter_MetaData), NewProp_TargetCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterEventHandler_Statics::NewProp_CachedTurnSystem = { "CachedTurnSystem", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterEventHandler, CachedTurnSystem), Z_Construct_UClass_UTurnSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTurnSystem_MetaData), NewProp_CachedTurnSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterEventHandler_Statics::NewProp_CachedCombatComponent = { "CachedCombatComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterEventHandler, CachedCombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCombatComponent_MetaData), NewProp_CachedCombatComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterEventHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEventHandler_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEventHandler_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEventHandler_Statics::NewProp_CachedTurnSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEventHandler_Statics::NewProp_CachedCombatComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEventHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterEventHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEventHandlerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEventHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterEventHandler_Statics::ClassParams = {
	&UCharacterEventHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterEventHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEventHandler_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEventHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterEventHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterEventHandler()
{
	if (!Z_Registration_Info_UClass_UCharacterEventHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterEventHandler.OuterSingleton, Z_Construct_UClass_UCharacterEventHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterEventHandler.OuterSingleton;
}
UCharacterEventHandler::UCharacterEventHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterEventHandler);
UCharacterEventHandler::~UCharacterEventHandler() {}
// ********** End Class UCharacterEventHandler *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterEventHandler, UCharacterEventHandler::StaticClass, TEXT("UCharacterEventHandler"), &Z_Registration_Info_UClass_UCharacterEventHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterEventHandler), 3961771479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h__Script_ProjectGate_3603840004(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_EventHandlers_CharacterEventHandler_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
