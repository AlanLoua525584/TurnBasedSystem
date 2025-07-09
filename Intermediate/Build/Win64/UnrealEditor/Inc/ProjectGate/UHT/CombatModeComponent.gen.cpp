// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/Combat/CombatModeComponent.h"
#include "CombatSystem/CombatStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatModeComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatDisplayWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatModeComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatModeComponent_NoRegister();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageResult();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAttackModeChanged **************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnAttackModeChanged_Parms
	{
		bool bIsInAttackMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInAttackMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAttackMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::NewProp_bIsInAttackMode_SetBit(void* Obj)
{
	((_Script_ProjectGate_eventOnAttackModeChanged_Parms*)Obj)->bIsInAttackMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::NewProp_bIsInAttackMode = { "bIsInAttackMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectGate_eventOnAttackModeChanged_Parms), &Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::NewProp_bIsInAttackMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::NewProp_bIsInAttackMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnAttackModeChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnAttackModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnAttackModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttackModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttackModeChanged, bool bIsInAttackMode)
{
	struct _Script_ProjectGate_eventOnAttackModeChanged_Parms
	{
		bool bIsInAttackMode;
	};
	_Script_ProjectGate_eventOnAttackModeChanged_Parms Parms;
	Parms.bIsInAttackMode=bIsInAttackMode ? true : false;
	OnAttackModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttackModeChanged ****************************************************

// ********** Begin Class UCombatModeComponent Function EnterAttackMode ****************************
struct Z_Construct_UFunction_UCombatModeComponent_EnterAttackMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatModeComponent_EnterAttackMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatModeComponent, nullptr, "EnterAttackMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_EnterAttackMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatModeComponent_EnterAttackMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatModeComponent_EnterAttackMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatModeComponent_EnterAttackMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatModeComponent::execEnterAttackMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterAttackMode();
	P_NATIVE_END;
}
// ********** End Class UCombatModeComponent Function EnterAttackMode ******************************

// ********** Begin Class UCombatModeComponent Function ExitAttackMode *****************************
struct Z_Construct_UFunction_UCombatModeComponent_ExitAttackMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatModeComponent_ExitAttackMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatModeComponent, nullptr, "ExitAttackMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_ExitAttackMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatModeComponent_ExitAttackMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatModeComponent_ExitAttackMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatModeComponent_ExitAttackMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatModeComponent::execExitAttackMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExitAttackMode();
	P_NATIVE_END;
}
// ********** End Class UCombatModeComponent Function ExitAttackMode *******************************

// ********** Begin Class UCombatModeComponent Function IsInAttackMode *****************************
struct Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics
{
	struct CombatModeComponent_eventIsInAttackMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatModeComponent_eventIsInAttackMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatModeComponent_eventIsInAttackMode_Parms), &Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatModeComponent, nullptr, "IsInAttackMode", Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::CombatModeComponent_eventIsInAttackMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::CombatModeComponent_eventIsInAttackMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatModeComponent::execIsInAttackMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInAttackMode();
	P_NATIVE_END;
}
// ********** End Class UCombatModeComponent Function IsInAttackMode *******************************

// ********** Begin Class UCombatModeComponent Function OnCombatResultReceived *********************
struct Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics
{
	struct CombatModeComponent_eventOnCombatResultReceived_Parms
	{
		AActor* Attacker;
		AActor* Target;
		FDamageResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatModeComponent_eventOnCombatResultReceived_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatModeComponent_eventOnCombatResultReceived_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatModeComponent_eventOnCombatResultReceived_Parms, Result), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatModeComponent, nullptr, "OnCombatResultReceived", Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::CombatModeComponent_eventOnCombatResultReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::CombatModeComponent_eventOnCombatResultReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatModeComponent::execOnCombatResultReceived)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FDamageResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCombatResultReceived(Z_Param_Attacker,Z_Param_Target,Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UCombatModeComponent Function OnCombatResultReceived ***********************

// ********** Begin Class UCombatModeComponent Function ToggleAttackMode ***************************
struct Z_Construct_UFunction_UCombatModeComponent_ToggleAttackMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatModeComponent_ToggleAttackMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatModeComponent, nullptr, "ToggleAttackMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatModeComponent_ToggleAttackMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatModeComponent_ToggleAttackMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatModeComponent_ToggleAttackMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatModeComponent_ToggleAttackMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatModeComponent::execToggleAttackMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleAttackMode();
	P_NATIVE_END;
}
// ********** End Class UCombatModeComponent Function ToggleAttackMode *****************************

// ********** Begin Class UCombatModeComponent *****************************************************
void UCombatModeComponent::StaticRegisterNativesUCombatModeComponent()
{
	UClass* Class = UCombatModeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnterAttackMode", &UCombatModeComponent::execEnterAttackMode },
		{ "ExitAttackMode", &UCombatModeComponent::execExitAttackMode },
		{ "IsInAttackMode", &UCombatModeComponent::execIsInAttackMode },
		{ "OnCombatResultReceived", &UCombatModeComponent::execOnCombatResultReceived },
		{ "ToggleAttackMode", &UCombatModeComponent::execToggleAttackMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatModeComponent;
UClass* UCombatModeComponent::GetPrivateStaticClass()
{
	using TClass = UCombatModeComponent;
	if (!Z_Registration_Info_UClass_UCombatModeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatModeComponent"),
			Z_Registration_Info_UClass_UCombatModeComponent.InnerSingleton,
			StaticRegisterNativesUCombatModeComponent,
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
	return Z_Registration_Info_UClass_UCombatModeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatModeComponent_NoRegister()
{
	return UCombatModeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatModeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackModeChanged_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastHighlightedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatDisplayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Combat/CombatModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackModeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastHighlightedTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatDisplayWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatModeComponent_EnterAttackMode, "EnterAttackMode" }, // 1055800772
		{ &Z_Construct_UFunction_UCombatModeComponent_ExitAttackMode, "ExitAttackMode" }, // 3437634460
		{ &Z_Construct_UFunction_UCombatModeComponent_IsInAttackMode, "IsInAttackMode" }, // 2889967111
		{ &Z_Construct_UFunction_UCombatModeComponent_OnCombatResultReceived, "OnCombatResultReceived" }, // 1650525284
		{ &Z_Construct_UFunction_UCombatModeComponent_ToggleAttackMode, "ToggleAttackMode" }, // 265512055
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatModeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatModeComponent_Statics::NewProp_OnAttackModeChanged = { "OnAttackModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatModeComponent, OnAttackModeChanged), Z_Construct_UDelegateFunction_ProjectGate_OnAttackModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackModeChanged_MetaData), NewProp_OnAttackModeChanged_MetaData) }; // 2049153682
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatModeComponent_Statics::NewProp_LastHighlightedTarget = { "LastHighlightedTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatModeComponent, LastHighlightedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastHighlightedTarget_MetaData), NewProp_LastHighlightedTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatModeComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatModeComponent, OwnerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatModeComponent_Statics::NewProp_CombatDisplayWidget = { "CombatDisplayWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatModeComponent, CombatDisplayWidget), Z_Construct_UClass_UCombatDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatDisplayWidget_MetaData), NewProp_CombatDisplayWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatModeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatModeComponent_Statics::NewProp_OnAttackModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatModeComponent_Statics::NewProp_LastHighlightedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatModeComponent_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatModeComponent_Statics::NewProp_CombatDisplayWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatModeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatModeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatModeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatModeComponent_Statics::ClassParams = {
	&UCombatModeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatModeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatModeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatModeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatModeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatModeComponent()
{
	if (!Z_Registration_Info_UClass_UCombatModeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatModeComponent.OuterSingleton, Z_Construct_UClass_UCombatModeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatModeComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatModeComponent);
UCombatModeComponent::~UCombatModeComponent() {}
// ********** End Class UCombatModeComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatModeComponent, UCombatModeComponent::StaticClass, TEXT("UCombatModeComponent"), &Z_Registration_Info_UClass_UCombatModeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatModeComponent), 2262184537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h__Script_ProjectGate_3729842521(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Combat_CombatModeComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
