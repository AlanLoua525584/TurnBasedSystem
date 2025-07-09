// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/Camera/CameraControlComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCameraControlComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_AFreeCameraPawn_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCameraControlComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UCameraControlComponent_NoRegister();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCameraModeChanged **************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnCameraModeChanged_Parms
	{
		bool bIsDynamicMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDynamicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::NewProp_bIsDynamicMode_SetBit(void* Obj)
{
	((_Script_ProjectGate_eventOnCameraModeChanged_Parms*)Obj)->bIsDynamicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::NewProp_bIsDynamicMode = { "bIsDynamicMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectGate_eventOnCameraModeChanged_Parms), &Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::NewProp_bIsDynamicMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::NewProp_bIsDynamicMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnCameraModeChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnCameraModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnCameraModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCameraModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraModeChanged, bool bIsDynamicMode)
{
	struct _Script_ProjectGate_eventOnCameraModeChanged_Parms
	{
		bool bIsDynamicMode;
	};
	_Script_ProjectGate_eventOnCameraModeChanged_Parms Parms;
	Parms.bIsDynamicMode=bIsDynamicMode ? true : false;
	OnCameraModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCameraModeChanged ****************************************************

// ********** Begin Class UCameraControlComponent Function FocusOnActor ****************************
struct Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics
{
	struct CameraControlComponent_eventFocusOnActor_Parms
	{
		AActor* TargetActor;
		float Distance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "CPP_Default_Distance", "800.000000" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControlComponent_eventFocusOnActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControlComponent_eventFocusOnActor_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "FocusOnActor", Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::CameraControlComponent_eventFocusOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::CameraControlComponent_eventFocusOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraControlComponent_FocusOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_FocusOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execFocusOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusOnActor(Z_Param_TargetActor,Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function FocusOnActor ******************************

// ********** Begin Class UCameraControlComponent Function GetCameraLocation ***********************
struct Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics
{
	struct CameraControlComponent_eventGetCameraLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControlComponent_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "GetCameraLocation", Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::CameraControlComponent_eventGetCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::CameraControlComponent_eventGetCameraLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execGetCameraLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function GetCameraLocation *************************

// ********** Begin Class UCameraControlComponent Function GetCameraRotation ***********************
struct Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics
{
	struct CameraControlComponent_eventGetCameraRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControlComponent_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "GetCameraRotation", Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::CameraControlComponent_eventGetCameraRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::CameraControlComponent_eventGetCameraRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execGetCameraRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function GetCameraRotation *************************

// ********** Begin Class UCameraControlComponent Function InitializeCameraSystem ******************
struct Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics
{
	struct CameraControlComponent_eventInitializeCameraSystem_Parms
	{
		APlayerController* InOwnerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::NewProp_InOwnerController = { "InOwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControlComponent_eventInitializeCameraSystem_Parms, InOwnerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::NewProp_InOwnerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "InitializeCameraSystem", Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::CameraControlComponent_eventInitializeCameraSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::CameraControlComponent_eventInitializeCameraSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execInitializeCameraSystem)
{
	P_GET_OBJECT(APlayerController,Z_Param_InOwnerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCameraSystem(Z_Param_InOwnerController);
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function InitializeCameraSystem ********************

// ********** Begin Class UCameraControlComponent Function IsInDynamicMode *************************
struct Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics
{
	struct CameraControlComponent_eventIsInDynamicMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CameraControlComponent_eventIsInDynamicMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraControlComponent_eventIsInDynamicMode_Parms), &Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "IsInDynamicMode", Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::CameraControlComponent_eventIsInDynamicMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::CameraControlComponent_eventIsInDynamicMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execIsInDynamicMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInDynamicMode();
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function IsInDynamicMode ***************************

// ********** Begin Class UCameraControlComponent Function OnTurnChangedCamera *********************
struct Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics
{
	struct CameraControlComponent_eventOnTurnChangedCamera_Parms
	{
		AActor* NewTurnCharacter;
		bool bIsPlayerControlled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTurnCharacter;
	static void NewProp_bIsPlayerControlled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerControlled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::NewProp_NewTurnCharacter = { "NewTurnCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraControlComponent_eventOnTurnChangedCamera_Parms, NewTurnCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::NewProp_bIsPlayerControlled_SetBit(void* Obj)
{
	((CameraControlComponent_eventOnTurnChangedCamera_Parms*)Obj)->bIsPlayerControlled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::NewProp_bIsPlayerControlled = { "bIsPlayerControlled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraControlComponent_eventOnTurnChangedCamera_Parms), &Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::NewProp_bIsPlayerControlled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::NewProp_NewTurnCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::NewProp_bIsPlayerControlled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "OnTurnChangedCamera", Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::CameraControlComponent_eventOnTurnChangedCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::CameraControlComponent_eventOnTurnChangedCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execOnTurnChangedCamera)
{
	P_GET_OBJECT(AActor,Z_Param_NewTurnCharacter);
	P_GET_UBOOL(Z_Param_bIsPlayerControlled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnChangedCamera(Z_Param_NewTurnCharacter,Z_Param_bIsPlayerControlled);
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function OnTurnChangedCamera ***********************

// ********** Begin Class UCameraControlComponent Function SwitchToDynamicMode *********************
struct Z_Construct_UFunction_UCameraControlComponent_SwitchToDynamicMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_SwitchToDynamicMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "SwitchToDynamicMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_SwitchToDynamicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_SwitchToDynamicMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCameraControlComponent_SwitchToDynamicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_SwitchToDynamicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execSwitchToDynamicMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToDynamicMode();
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function SwitchToDynamicMode ***********************

// ********** Begin Class UCameraControlComponent Function SwitchToFreeCamera **********************
struct Z_Construct_UFunction_UCameraControlComponent_SwitchToFreeCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_SwitchToFreeCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "SwitchToFreeCamera", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_SwitchToFreeCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_SwitchToFreeCamera_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCameraControlComponent_SwitchToFreeCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_SwitchToFreeCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execSwitchToFreeCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToFreeCamera();
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function SwitchToFreeCamera ************************

// ********** Begin Class UCameraControlComponent Function ToggleCameraMode ************************
struct Z_Construct_UFunction_UCameraControlComponent_ToggleCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraControlComponent_ToggleCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCameraControlComponent, nullptr, "ToggleCameraMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraControlComponent_ToggleCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraControlComponent_ToggleCameraMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCameraControlComponent_ToggleCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraControlComponent_ToggleCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraControlComponent::execToggleCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCameraMode();
	P_NATIVE_END;
}
// ********** End Class UCameraControlComponent Function ToggleCameraMode **************************

// ********** Begin Class UCameraControlComponent **************************************************
void UCameraControlComponent::StaticRegisterNativesUCameraControlComponent()
{
	UClass* Class = UCameraControlComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FocusOnActor", &UCameraControlComponent::execFocusOnActor },
		{ "GetCameraLocation", &UCameraControlComponent::execGetCameraLocation },
		{ "GetCameraRotation", &UCameraControlComponent::execGetCameraRotation },
		{ "InitializeCameraSystem", &UCameraControlComponent::execInitializeCameraSystem },
		{ "IsInDynamicMode", &UCameraControlComponent::execIsInDynamicMode },
		{ "OnTurnChangedCamera", &UCameraControlComponent::execOnTurnChangedCamera },
		{ "SwitchToDynamicMode", &UCameraControlComponent::execSwitchToDynamicMode },
		{ "SwitchToFreeCamera", &UCameraControlComponent::execSwitchToFreeCamera },
		{ "ToggleCameraMode", &UCameraControlComponent::execToggleCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCameraControlComponent;
UClass* UCameraControlComponent::GetPrivateStaticClass()
{
	using TClass = UCameraControlComponent;
	if (!Z_Registration_Info_UClass_UCameraControlComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CameraControlComponent"),
			Z_Registration_Info_UClass_UCameraControlComponent.InnerSingleton,
			StaticRegisterNativesUCameraControlComponent,
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
	return Z_Registration_Info_UClass_UCameraControlComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCameraControlComponent_NoRegister()
{
	return UCameraControlComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCameraControlComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraModeChanged_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInDynamicMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeCameraPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZoomLength_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoomLength_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Camera/CameraControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraModeChanged;
	static void NewProp_bIsInDynamicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInDynamicMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FreeCameraPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoomLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoomLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraControlComponent_FocusOnActor, "FocusOnActor" }, // 2018290957
		{ &Z_Construct_UFunction_UCameraControlComponent_GetCameraLocation, "GetCameraLocation" }, // 820488954
		{ &Z_Construct_UFunction_UCameraControlComponent_GetCameraRotation, "GetCameraRotation" }, // 3098216271
		{ &Z_Construct_UFunction_UCameraControlComponent_InitializeCameraSystem, "InitializeCameraSystem" }, // 2227931867
		{ &Z_Construct_UFunction_UCameraControlComponent_IsInDynamicMode, "IsInDynamicMode" }, // 2470481332
		{ &Z_Construct_UFunction_UCameraControlComponent_OnTurnChangedCamera, "OnTurnChangedCamera" }, // 1980991917
		{ &Z_Construct_UFunction_UCameraControlComponent_SwitchToDynamicMode, "SwitchToDynamicMode" }, // 1386563262
		{ &Z_Construct_UFunction_UCameraControlComponent_SwitchToFreeCamera, "SwitchToFreeCamera" }, // 1037333683
		{ &Z_Construct_UFunction_UCameraControlComponent_ToggleCameraMode, "ToggleCameraMode" }, // 46124495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraControlComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_OnCameraModeChanged = { "OnCameraModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraControlComponent, OnCameraModeChanged), Z_Construct_UDelegateFunction_ProjectGate_OnCameraModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCameraModeChanged_MetaData), NewProp_OnCameraModeChanged_MetaData) }; // 4142237007
void Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_bIsInDynamicMode_SetBit(void* Obj)
{
	((UCameraControlComponent*)Obj)->bIsInDynamicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_bIsInDynamicMode = { "bIsInDynamicMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraControlComponent), &Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_bIsInDynamicMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInDynamicMode_MetaData), NewProp_bIsInDynamicMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_FreeCameraPawn = { "FreeCameraPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraControlComponent, FreeCameraPawn), Z_Construct_UClass_AFreeCameraPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeCameraPawn_MetaData), NewProp_FreeCameraPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraControlComponent, OwnerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraControlComponent, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraControlComponent, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_MinZoomLength = { "MinZoomLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraControlComponent, MinZoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZoomLength_MetaData), NewProp_MinZoomLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_MaxZoomLength = { "MaxZoomLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraControlComponent, MaxZoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZoomLength_MetaData), NewProp_MaxZoomLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraControlComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_OnCameraModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_bIsInDynamicMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_FreeCameraPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_MinZoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraControlComponent_Statics::NewProp_MaxZoomLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraControlComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraControlComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraControlComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraControlComponent_Statics::ClassParams = {
	&UCameraControlComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCameraControlComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraControlComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraControlComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraControlComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraControlComponent()
{
	if (!Z_Registration_Info_UClass_UCameraControlComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraControlComponent.OuterSingleton, Z_Construct_UClass_UCameraControlComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraControlComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraControlComponent);
UCameraControlComponent::~UCameraControlComponent() {}
// ********** End Class UCameraControlComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraControlComponent, UCameraControlComponent::StaticClass, TEXT("UCameraControlComponent"), &Z_Registration_Info_UClass_UCameraControlComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraControlComponent), 2881144778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h__Script_ProjectGate_2231519861(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Camera_CameraControlComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
