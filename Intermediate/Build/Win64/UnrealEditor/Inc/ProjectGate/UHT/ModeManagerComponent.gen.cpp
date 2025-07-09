// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/Combat/ModeManagerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModeManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UCameraControlComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UModeManagerComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UModeManagerComponent_NoRegister();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FBoolOnMovementModeChanged ********************************************
struct Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventBoolOnMovementModeChanged_Parms
	{
		bool bIsDynamicMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for mode change notifications \n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for mode change notifications" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsDynamicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::NewProp_bIsDynamicMode_SetBit(void* Obj)
{
	((_Script_ProjectGate_eventBoolOnMovementModeChanged_Parms*)Obj)->bIsDynamicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::NewProp_bIsDynamicMode = { "bIsDynamicMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectGate_eventBoolOnMovementModeChanged_Parms), &Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::NewProp_bIsDynamicMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::NewProp_bIsDynamicMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "BoolOnMovementModeChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventBoolOnMovementModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventBoolOnMovementModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBoolOnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& BoolOnMovementModeChanged, bool bIsDynamicMode)
{
	struct _Script_ProjectGate_eventBoolOnMovementModeChanged_Parms
	{
		bool bIsDynamicMode;
	};
	_Script_ProjectGate_eventBoolOnMovementModeChanged_Parms Parms;
	Parms.bIsDynamicMode=bIsDynamicMode ? true : false;
	BoolOnMovementModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FBoolOnMovementModeChanged **********************************************

// ********** Begin Class UModeManagerComponent Function EnterDynamicMode **************************
struct Z_Construct_UFunction_UModeManagerComponent_EnterDynamicMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enter dynamic mode (third-person camera + WASD movement)\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enter dynamic mode (third-person camera + WASD movement)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModeManagerComponent_EnterDynamicMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModeManagerComponent, nullptr, "EnterDynamicMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModeManagerComponent_EnterDynamicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModeManagerComponent_EnterDynamicMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UModeManagerComponent_EnterDynamicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModeManagerComponent_EnterDynamicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModeManagerComponent::execEnterDynamicMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterDynamicMode();
	P_NATIVE_END;
}
// ********** End Class UModeManagerComponent Function EnterDynamicMode ****************************

// ********** Begin Class UModeManagerComponent Function EnterGridMode *****************************
struct Z_Construct_UFunction_UModeManagerComponent_EnterGridMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enter grid mode (free camera + click movement)\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enter grid mode (free camera + click movement)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModeManagerComponent_EnterGridMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModeManagerComponent, nullptr, "EnterGridMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModeManagerComponent_EnterGridMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModeManagerComponent_EnterGridMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UModeManagerComponent_EnterGridMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModeManagerComponent_EnterGridMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModeManagerComponent::execEnterGridMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterGridMode();
	P_NATIVE_END;
}
// ********** End Class UModeManagerComponent Function EnterGridMode *******************************

// ********** Begin Class UModeManagerComponent Function IsInDynamicMode ***************************
struct Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics
{
	struct ModeManagerComponent_eventIsInDynamicMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if currently in dynamic mode\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if currently in dynamic mode" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModeManagerComponent_eventIsInDynamicMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModeManagerComponent_eventIsInDynamicMode_Parms), &Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModeManagerComponent, nullptr, "IsInDynamicMode", Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::ModeManagerComponent_eventIsInDynamicMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::ModeManagerComponent_eventIsInDynamicMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModeManagerComponent::execIsInDynamicMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInDynamicMode();
	P_NATIVE_END;
}
// ********** End Class UModeManagerComponent Function IsInDynamicMode *****************************

// ********** Begin Class UModeManagerComponent Function OnDynamicMode *****************************
struct Z_Construct_UFunction_UModeManagerComponent_OnDynamicMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Toggle dynamic movement mode\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle dynamic movement mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModeManagerComponent_OnDynamicMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModeManagerComponent, nullptr, "OnDynamicMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModeManagerComponent_OnDynamicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModeManagerComponent_OnDynamicMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UModeManagerComponent_OnDynamicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModeManagerComponent_OnDynamicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModeManagerComponent::execOnDynamicMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDynamicMode();
	P_NATIVE_END;
}
// ********** End Class UModeManagerComponent Function OnDynamicMode *******************************

// ********** Begin Class UModeManagerComponent Function SwitchMovementMode ************************
struct Z_Construct_UFunction_UModeManagerComponent_SwitchMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Switch between grid and dynamic movement modes\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch between grid and dynamic movement modes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModeManagerComponent_SwitchMovementMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModeManagerComponent, nullptr, "SwitchMovementMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModeManagerComponent_SwitchMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModeManagerComponent_SwitchMovementMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UModeManagerComponent_SwitchMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModeManagerComponent_SwitchMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModeManagerComponent::execSwitchMovementMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMovementMode();
	P_NATIVE_END;
}
// ********** End Class UModeManagerComponent Function SwitchMovementMode **************************

// ********** Begin Class UModeManagerComponent ****************************************************
void UModeManagerComponent::StaticRegisterNativesUModeManagerComponent()
{
	UClass* Class = UModeManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnterDynamicMode", &UModeManagerComponent::execEnterDynamicMode },
		{ "EnterGridMode", &UModeManagerComponent::execEnterGridMode },
		{ "IsInDynamicMode", &UModeManagerComponent::execIsInDynamicMode },
		{ "OnDynamicMode", &UModeManagerComponent::execOnDynamicMode },
		{ "SwitchMovementMode", &UModeManagerComponent::execSwitchMovementMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModeManagerComponent;
UClass* UModeManagerComponent::GetPrivateStaticClass()
{
	using TClass = UModeManagerComponent;
	if (!Z_Registration_Info_UClass_UModeManagerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModeManagerComponent"),
			Z_Registration_Info_UClass_UModeManagerComponent.InnerSingleton,
			StaticRegisterNativesUModeManagerComponent,
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
	return Z_Registration_Info_UClass_UModeManagerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UModeManagerComponent_NoRegister()
{
	return UModeManagerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UModeManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*Mode Manager Component - Manages game mode states and transitions\n*/" },
#endif
		{ "IncludePath", "TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*Mode Manager Component - Manages game mode states and transitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementModeChanged_MetaData[] = {
		{ "Category", "Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when movement mode changes\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when movement mode changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === References \n// Owner controller reference\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== References\nOwner controller reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCameraController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached references for performance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/ModeManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached references for performance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementModeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCameraController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModeManagerComponent_EnterDynamicMode, "EnterDynamicMode" }, // 2244819440
		{ &Z_Construct_UFunction_UModeManagerComponent_EnterGridMode, "EnterGridMode" }, // 2824802024
		{ &Z_Construct_UFunction_UModeManagerComponent_IsInDynamicMode, "IsInDynamicMode" }, // 2444799858
		{ &Z_Construct_UFunction_UModeManagerComponent_OnDynamicMode, "OnDynamicMode" }, // 140693175
		{ &Z_Construct_UFunction_UModeManagerComponent_SwitchMovementMode, "SwitchMovementMode" }, // 1237421258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModeManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModeManagerComponent_Statics::NewProp_OnMovementModeChanged = { "OnMovementModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModeManagerComponent, OnMovementModeChanged), Z_Construct_UDelegateFunction_ProjectGate_BoolOnMovementModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovementModeChanged_MetaData), NewProp_OnMovementModeChanged_MetaData) }; // 3979582112
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModeManagerComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModeManagerComponent, OwnerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModeManagerComponent_Statics::NewProp_CachedCameraController = { "CachedCameraController", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModeManagerComponent, CachedCameraController), Z_Construct_UClass_UCameraControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCameraController_MetaData), NewProp_CachedCameraController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModeManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModeManagerComponent_Statics::NewProp_OnMovementModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModeManagerComponent_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModeManagerComponent_Statics::NewProp_CachedCameraController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModeManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModeManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModeManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModeManagerComponent_Statics::ClassParams = {
	&UModeManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModeManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModeManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModeManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModeManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModeManagerComponent()
{
	if (!Z_Registration_Info_UClass_UModeManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModeManagerComponent.OuterSingleton, Z_Construct_UClass_UModeManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModeManagerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModeManagerComponent);
UModeManagerComponent::~UModeManagerComponent() {}
// ********** End Class UModeManagerComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModeManagerComponent, UModeManagerComponent::StaticClass, TEXT("UModeManagerComponent"), &Z_Registration_Info_UClass_UModeManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModeManagerComponent), 3584211862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h__Script_ProjectGate_2934829558(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_ModeManagerComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
