// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "CombatSystem/CombatStats.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PROJECTGATE_API UClass* Z_Construct_UClass_AFreeCameraPawn_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridPlayerController();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridPlayerController_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCameraControlComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatDisplayWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatModeComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UInputHandlerComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UModeManagerComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UUIManagerComponent_NoRegister();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageResult();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FUIOnMovementModeChanged **********************************************
struct Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventUIOnMovementModeChanged_Parms
	{
		bool bIsInDynamicMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInDynamicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInDynamicMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::NewProp_bIsInDynamicMode_SetBit(void* Obj)
{
	((_Script_ProjectGate_eventUIOnMovementModeChanged_Parms*)Obj)->bIsInDynamicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::NewProp_bIsInDynamicMode = { "bIsInDynamicMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectGate_eventUIOnMovementModeChanged_Parms), &Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::NewProp_bIsInDynamicMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::NewProp_bIsInDynamicMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "UIOnMovementModeChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventUIOnMovementModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventUIOnMovementModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUIOnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& UIOnMovementModeChanged, bool bIsInDynamicMode)
{
	struct _Script_ProjectGate_eventUIOnMovementModeChanged_Parms
	{
		bool bIsInDynamicMode;
	};
	_Script_ProjectGate_eventUIOnMovementModeChanged_Parms Parms;
	Parms.bIsInDynamicMode=bIsInDynamicMode ? true : false;
	UIOnMovementModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUIOnMovementModeChanged ************************************************

// ********** Begin Class AGridPlayerController Function FocusOnActor ******************************
struct Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics
{
	struct GridPlayerController_eventFocusOnActor_Parms
	{
		AActor* TargetActor;
		float Distance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Public interfaces - delegates to components\n" },
#endif
		{ "CPP_Default_Distance", "800.000000" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public interfaces - delegates to components" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventFocusOnActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventFocusOnActor_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "FocusOnActor", Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::GridPlayerController_eventFocusOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::GridPlayerController_eventFocusOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_FocusOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_FocusOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execFocusOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusOnActor(Z_Param_TargetActor,Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function FocusOnActor ********************************

// ********** Begin Class AGridPlayerController Function FocusOnCurrentTurnCharacter ***************
struct Z_Construct_UFunction_AGridPlayerController_FocusOnCurrentTurnCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Legacy functions\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legacy functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_FocusOnCurrentTurnCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "FocusOnCurrentTurnCharacter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_FocusOnCurrentTurnCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_FocusOnCurrentTurnCharacter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridPlayerController_FocusOnCurrentTurnCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_FocusOnCurrentTurnCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execFocusOnCurrentTurnCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusOnCurrentTurnCharacter();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function FocusOnCurrentTurnCharacter *****************

// ********** Begin Class AGridPlayerController Function GetCameraController ***********************
struct Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics
{
	struct GridPlayerController_eventGetCameraController_Parms
	{
		UCameraControlComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component accessors\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component accessors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetCameraController_Parms, ReturnValue), Z_Construct_UClass_UCameraControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetCameraController", Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::GridPlayerController_eventGetCameraController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::GridPlayerController_eventGetCameraController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetCameraController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetCameraController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetCameraController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraControlComponent**)Z_Param__Result=P_THIS->GetCameraController();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetCameraController *************************

// ********** Begin Class AGridPlayerController Function GetCameraLocation *************************
struct Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics
{
	struct GridPlayerController_eventGetCameraLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetCameraLocation", Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::GridPlayerController_eventGetCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::GridPlayerController_eventGetCameraLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetCameraLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetCameraLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetCameraLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetCameraLocation ***************************

// ********** Begin Class AGridPlayerController Function GetCameraPawn *****************************
struct Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics
{
	struct GridPlayerController_eventGetCameraPawn_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetCameraPawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetCameraPawn", Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::GridPlayerController_eventGetCameraPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::GridPlayerController_eventGetCameraPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetCameraPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetCameraPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetCameraPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCameraPawn();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetCameraPawn *******************************

// ********** Begin Class AGridPlayerController Function GetCameraRotation *************************
struct Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics
{
	struct GridPlayerController_eventGetCameraRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetCameraRotation", Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::GridPlayerController_eventGetCameraRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::GridPlayerController_eventGetCameraRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetCameraRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetCameraRotation ***************************

// ********** Begin Class AGridPlayerController Function GetCombatModeManager **********************
struct Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics
{
	struct GridPlayerController_eventGetCombatModeManager_Parms
	{
		UCombatModeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetCombatModeManager_Parms, ReturnValue), Z_Construct_UClass_UCombatModeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetCombatModeManager", Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::GridPlayerController_eventGetCombatModeManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::GridPlayerController_eventGetCombatModeManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetCombatModeManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCombatModeComponent**)Z_Param__Result=P_THIS->GetCombatModeManager();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetCombatModeManager ************************

// ********** Begin Class AGridPlayerController Function GetControlledMovementSystem ***************
struct Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics
{
	struct GridPlayerController_eventGetControlledMovementSystem_Parms
	{
		UEnhancedMovementSystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get currently controlled EnhancedMovementSystem\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get currently controlled EnhancedMovementSystem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetControlledMovementSystem_Parms, ReturnValue), Z_Construct_UClass_UEnhancedMovementSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetControlledMovementSystem", Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::GridPlayerController_eventGetControlledMovementSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::GridPlayerController_eventGetControlledMovementSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetControlledMovementSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedMovementSystem**)Z_Param__Result=P_THIS->GetControlledMovementSystem();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetControlledMovementSystem *****************

// ********** Begin Class AGridPlayerController Function GetGridManager ****************************
struct Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics
{
	struct GridPlayerController_eventGetGridManager_Parms
	{
		AGridManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Managers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter for the GridManager\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the GridManager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetGridManager_Parms, ReturnValue), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetGridManager", Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::GridPlayerController_eventGetGridManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::GridPlayerController_eventGetGridManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetGridManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetGridManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetGridManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGridManager**)Z_Param__Result=P_THIS->GetGridManager();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetGridManager ******************************

// ********** Begin Class AGridPlayerController Function GetInputHandler ***************************
struct Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics
{
	struct GridPlayerController_eventGetInputHandler_Parms
	{
		UInputHandlerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add getter for InputHandler \n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add getter for InputHandler" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetInputHandler_Parms, ReturnValue), Z_Construct_UClass_UInputHandlerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetInputHandler", Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::GridPlayerController_eventGetInputHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::GridPlayerController_eventGetInputHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetInputHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetInputHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetInputHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInputHandlerComponent**)Z_Param__Result=P_THIS->GetInputHandler();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetInputHandler *****************************

// ********** Begin Class AGridPlayerController Function GetModeManager ****************************
struct Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics
{
	struct GridPlayerController_eventGetModeManager_Parms
	{
		UModeManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Managers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter for the ModeManager\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the ModeManager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetModeManager_Parms, ReturnValue), Z_Construct_UClass_UModeManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetModeManager", Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::GridPlayerController_eventGetModeManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::GridPlayerController_eventGetModeManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetModeManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetModeManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetModeManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModeManagerComponent**)Z_Param__Result=P_THIS->GetModeManager();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetModeManager ******************************

// ********** Begin Class AGridPlayerController Function GetUIManager ******************************
struct Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics
{
	struct GridPlayerController_eventGetUIManager_Parms
	{
		UUIManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add getter for UIManager\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add getter for UIManager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventGetUIManager_Parms, ReturnValue), Z_Construct_UClass_UUIManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "GetUIManager", Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::GridPlayerController_eventGetUIManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::GridPlayerController_eventGetUIManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_GetUIManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_GetUIManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execGetUIManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUIManagerComponent**)Z_Param__Result=P_THIS->GetUIManager();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function GetUIManager ********************************

// ********** Begin Class AGridPlayerController Function IsInAttackMode ****************************
struct Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics
{
	struct GridPlayerController_eventIsInAttackMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attack mode functions\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack mode functions" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridPlayerController_eventIsInAttackMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridPlayerController_eventIsInAttackMode_Parms), &Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "IsInAttackMode", Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::GridPlayerController_eventIsInAttackMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::GridPlayerController_eventIsInAttackMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_IsInAttackMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_IsInAttackMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execIsInAttackMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInAttackMode();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function IsInAttackMode ******************************

// ********** Begin Class AGridPlayerController Function IsInDynamicMode ***************************
struct Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics
{
	struct GridPlayerController_eventIsInDynamicMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridPlayerController_eventIsInDynamicMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridPlayerController_eventIsInDynamicMode_Parms), &Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "IsInDynamicMode", Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::GridPlayerController_eventIsInDynamicMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::GridPlayerController_eventIsInDynamicMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execIsInDynamicMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInDynamicMode();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function IsInDynamicMode *****************************

// ********** Begin Class AGridPlayerController Function OnAnyCharacterHealthChanged ***************
struct Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics
{
	struct GridPlayerController_eventOnAnyCharacterHealthChanged_Parms
	{
		AActor* AffectedCharacter;
		int32 CurrentHealth;
		int32 MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health change handling\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health change handling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AffectedCharacter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::NewProp_AffectedCharacter = { "AffectedCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnAnyCharacterHealthChanged_Parms, AffectedCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnAnyCharacterHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnAnyCharacterHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::NewProp_AffectedCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnAnyCharacterHealthChanged", Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::GridPlayerController_eventOnAnyCharacterHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::GridPlayerController_eventOnAnyCharacterHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnAnyCharacterHealthChanged)
{
	P_GET_OBJECT(AActor,Z_Param_AffectedCharacter);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHealth);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyCharacterHealthChanged(Z_Param_AffectedCharacter,Z_Param_CurrentHealth,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnAnyCharacterHealthChanged *****************

// ********** Begin Class AGridPlayerController Function OnAttackModeChanged ***********************
struct Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics
{
	struct GridPlayerController_eventOnAttackModeChanged_Parms
	{
		bool bIsNewInAttackMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsNewInAttackMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNewInAttackMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::NewProp_bIsNewInAttackMode_SetBit(void* Obj)
{
	((GridPlayerController_eventOnAttackModeChanged_Parms*)Obj)->bIsNewInAttackMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::NewProp_bIsNewInAttackMode = { "bIsNewInAttackMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridPlayerController_eventOnAttackModeChanged_Parms), &Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::NewProp_bIsNewInAttackMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::NewProp_bIsNewInAttackMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnAttackModeChanged", Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::GridPlayerController_eventOnAttackModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::GridPlayerController_eventOnAttackModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnAttackModeChanged)
{
	P_GET_UBOOL(Z_Param_bIsNewInAttackMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackModeChanged(Z_Param_bIsNewInAttackMode);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnAttackModeChanged *************************

// ********** Begin Class AGridPlayerController Function OnCameraModeChanged ***********************
struct Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics
{
	struct GridPlayerController_eventOnCameraModeChanged_Parms
	{
		bool bIsDynamicMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component event responses\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component event responses" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsDynamicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::NewProp_bIsDynamicMode_SetBit(void* Obj)
{
	((GridPlayerController_eventOnCameraModeChanged_Parms*)Obj)->bIsDynamicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::NewProp_bIsDynamicMode = { "bIsDynamicMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridPlayerController_eventOnCameraModeChanged_Parms), &Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::NewProp_bIsDynamicMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::NewProp_bIsDynamicMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnCameraModeChanged", Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::GridPlayerController_eventOnCameraModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::GridPlayerController_eventOnCameraModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnCameraModeChanged)
{
	P_GET_UBOOL(Z_Param_bIsDynamicMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraModeChanged(Z_Param_bIsDynamicMode);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnCameraModeChanged *************************

// ********** Begin Class AGridPlayerController Function OnCharacterHealthChanged ******************
struct Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics
{
	struct GridPlayerController_eventOnCharacterHealthChanged_Parms
	{
		int32 CurrentHealth;
		int32 MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnCharacterHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnCharacterHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnCharacterHealthChanged", Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::GridPlayerController_eventOnCharacterHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::GridPlayerController_eventOnCharacterHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnCharacterHealthChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHealth);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCharacterHealthChanged(Z_Param_CurrentHealth,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnCharacterHealthChanged ********************

// ********** Begin Class AGridPlayerController Function OnCombatExecuted **************************
struct Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics
{
	struct GridPlayerController_eventOnCombatExecuted_Parms
	{
		AActor* Attacker;
		AActor* Target;
		FDamageResult DamageResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnCombatExecuted_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnCombatExecuted_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::NewProp_DamageResult = { "DamageResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnCombatExecuted_Parms, DamageResult), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageResult_MetaData), NewProp_DamageResult_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::NewProp_DamageResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnCombatExecuted", Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::GridPlayerController_eventOnCombatExecuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::GridPlayerController_eventOnCombatExecuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnCombatExecuted)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FDamageResult,Z_Param_Out_DamageResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCombatExecuted(Z_Param_Attacker,Z_Param_Target,Z_Param_Out_DamageResult);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnCombatExecuted ****************************

// ********** Begin Class AGridPlayerController Function OnCombatResultReceived ********************
struct Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics
{
	struct GridPlayerController_eventOnCombatResultReceived_Parms
	{
		AActor* Attacker;
		AActor* Target;
		FDamageResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat result response\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat result response" },
#endif
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnCombatResultReceived_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnCombatResultReceived_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnCombatResultReceived_Parms, Result), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnCombatResultReceived", Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::GridPlayerController_eventOnCombatResultReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::GridPlayerController_eventOnCombatResultReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnCombatResultReceived)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FDamageResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCombatResultReceived(Z_Param_Attacker,Z_Param_Target,Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnCombatResultReceived **********************

// ********** Begin Class AGridPlayerController Function OnDynamicMode *****************************
struct Z_Construct_UFunction_AGridPlayerController_OnDynamicMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnDynamicMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnDynamicMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnDynamicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnDynamicMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridPlayerController_OnDynamicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnDynamicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnDynamicMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDynamicMode();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnDynamicMode *******************************

// ********** Begin Class AGridPlayerController Function OnMove ************************************
struct Z_Construct_UFunction_AGridPlayerController_OnMove_Statics
{
	struct GridPlayerController_eventOnMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnMove", Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::GridPlayerController_eventOnMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::GridPlayerController_eventOnMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_OnMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMove(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnMove **************************************

// ********** Begin Class AGridPlayerController Function OnTurnChangedCamera ***********************
struct Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics
{
	struct GridPlayerController_eventOnTurnChangedCamera_Parms
	{
		AActor* NewTurnCharacter;
		bool bIsPlayerControlled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn system interfaces\n// Camera handling for turn changes\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn system interfaces\nCamera handling for turn changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTurnCharacter;
	static void NewProp_bIsPlayerControlled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerControlled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::NewProp_NewTurnCharacter = { "NewTurnCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPlayerController_eventOnTurnChangedCamera_Parms, NewTurnCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::NewProp_bIsPlayerControlled_SetBit(void* Obj)
{
	((GridPlayerController_eventOnTurnChangedCamera_Parms*)Obj)->bIsPlayerControlled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::NewProp_bIsPlayerControlled = { "bIsPlayerControlled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridPlayerController_eventOnTurnChangedCamera_Parms), &Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::NewProp_bIsPlayerControlled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::NewProp_NewTurnCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::NewProp_bIsPlayerControlled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnTurnChangedCamera", Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::GridPlayerController_eventOnTurnChangedCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::GridPlayerController_eventOnTurnChangedCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execOnTurnChangedCamera)
{
	P_GET_OBJECT(AActor,Z_Param_NewTurnCharacter);
	P_GET_UBOOL(Z_Param_bIsPlayerControlled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnChangedCamera(Z_Param_NewTurnCharacter,Z_Param_bIsPlayerControlled);
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function OnTurnChangedCamera *************************

// ********** Begin Class AGridPlayerController Function SwitchMovementMode ************************
struct Z_Construct_UFunction_AGridPlayerController_SwitchMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_SwitchMovementMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "SwitchMovementMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_SwitchMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_SwitchMovementMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridPlayerController_SwitchMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPlayerController_SwitchMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridPlayerController::execSwitchMovementMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMovementMode();
	P_NATIVE_END;
}
// ********** End Class AGridPlayerController Function SwitchMovementMode **************************

// ********** Begin Class AGridPlayerController ****************************************************
void AGridPlayerController::StaticRegisterNativesAGridPlayerController()
{
	UClass* Class = AGridPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FocusOnActor", &AGridPlayerController::execFocusOnActor },
		{ "FocusOnCurrentTurnCharacter", &AGridPlayerController::execFocusOnCurrentTurnCharacter },
		{ "GetCameraController", &AGridPlayerController::execGetCameraController },
		{ "GetCameraLocation", &AGridPlayerController::execGetCameraLocation },
		{ "GetCameraPawn", &AGridPlayerController::execGetCameraPawn },
		{ "GetCameraRotation", &AGridPlayerController::execGetCameraRotation },
		{ "GetCombatModeManager", &AGridPlayerController::execGetCombatModeManager },
		{ "GetControlledMovementSystem", &AGridPlayerController::execGetControlledMovementSystem },
		{ "GetGridManager", &AGridPlayerController::execGetGridManager },
		{ "GetInputHandler", &AGridPlayerController::execGetInputHandler },
		{ "GetModeManager", &AGridPlayerController::execGetModeManager },
		{ "GetUIManager", &AGridPlayerController::execGetUIManager },
		{ "IsInAttackMode", &AGridPlayerController::execIsInAttackMode },
		{ "IsInDynamicMode", &AGridPlayerController::execIsInDynamicMode },
		{ "OnAnyCharacterHealthChanged", &AGridPlayerController::execOnAnyCharacterHealthChanged },
		{ "OnAttackModeChanged", &AGridPlayerController::execOnAttackModeChanged },
		{ "OnCameraModeChanged", &AGridPlayerController::execOnCameraModeChanged },
		{ "OnCharacterHealthChanged", &AGridPlayerController::execOnCharacterHealthChanged },
		{ "OnCombatExecuted", &AGridPlayerController::execOnCombatExecuted },
		{ "OnCombatResultReceived", &AGridPlayerController::execOnCombatResultReceived },
		{ "OnDynamicMode", &AGridPlayerController::execOnDynamicMode },
		{ "OnMove", &AGridPlayerController::execOnMove },
		{ "OnTurnChangedCamera", &AGridPlayerController::execOnTurnChangedCamera },
		{ "SwitchMovementMode", &AGridPlayerController::execSwitchMovementMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGridPlayerController;
UClass* AGridPlayerController::GetPrivateStaticClass()
{
	using TClass = AGridPlayerController;
	if (!Z_Registration_Info_UClass_AGridPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridPlayerController"),
			Z_Registration_Info_UClass_AGridPlayerController.InnerSingleton,
			StaticRegisterNativesAGridPlayerController,
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
	return Z_Registration_Info_UClass_AGridPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridPlayerController_NoRegister()
{
	return AGridPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Grid-based PlayerController with modular component system\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TurnBasedSystem/GridPlayerController.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid-based PlayerController with modular component system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIOnMovementModeChanged_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handle mode change UI effects\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle mode change UI effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Camera|ThirdPerson" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera mouse sensitivity settings\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mouse sensitivity settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideCursorInDynamicMode_MetaData[] = {
		{ "Category", "Camera|ThirdPerson" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-hide cursor in dynamic mode\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-hide cursor in dynamic mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Enhanced Input System =====\n// Input mapping contexts\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Enhanced Input System =====\nInput mapping contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action - Click\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action - Click" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowRangeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action - Show Range\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action - Show Range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action - Camera Rotation\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action - Camera Rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action - Camera Zoom\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action - Camera Zoom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action - Cancel\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action - Cancel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicModeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dynamic movement toggle\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic movement toggle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera control Input Actions (if no existing ones)\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera control Input Actions (if no existing ones)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleFocus_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackModeAction_MetaData[] = {
		{ "Category", "Input|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enter attack state\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enter attack state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInDynamicMode_MetaData[] = {
		{ "Category", "GridPlayerController" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn Order UI\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn Order UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Currently controlled camera Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently controlled camera Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeCameraPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Track FreeCameraPawn\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Track FreeCameraPawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Camera Components =====\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Camera Components =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBaseMoveSpeed_MetaData[] = {
		{ "Category", "Camera|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera settings\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFastMoveSpeed_MetaData[] = {
		{ "Category", "Camera|Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera|Zoom" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZoomLength_MetaData[] = {
		{ "Category", "Camera|Zoom" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoomLength_MetaData[] = {
		{ "Category", "Camera|Zoom" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component System\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component System" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatModeManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandler_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// System references\n// Core components\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System references\nCore components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHighlightedTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Currently highlighted target\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently highlighted target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatDisplayWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat UI\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastHighlightedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UIOnMovementModeChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static void NewProp_bHideCursorInDynamicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCursorInDynamicMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowRangeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateCameraAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomCameraAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicModeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRotateAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraZoomAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleFocus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackModeAction;
	static void NewProp_bIsInDynamicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInDynamicMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TurnOrderWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FreeCameraPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBaseMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFastMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoomLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoomLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatModeManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHandler;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModeManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHighlightedTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatDisplayWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastHighlightedTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridPlayerController_FocusOnActor, "FocusOnActor" }, // 3964836481
		{ &Z_Construct_UFunction_AGridPlayerController_FocusOnCurrentTurnCharacter, "FocusOnCurrentTurnCharacter" }, // 2089134718
		{ &Z_Construct_UFunction_AGridPlayerController_GetCameraController, "GetCameraController" }, // 1970833184
		{ &Z_Construct_UFunction_AGridPlayerController_GetCameraLocation, "GetCameraLocation" }, // 3085982218
		{ &Z_Construct_UFunction_AGridPlayerController_GetCameraPawn, "GetCameraPawn" }, // 4019684649
		{ &Z_Construct_UFunction_AGridPlayerController_GetCameraRotation, "GetCameraRotation" }, // 3126027194
		{ &Z_Construct_UFunction_AGridPlayerController_GetCombatModeManager, "GetCombatModeManager" }, // 2616726164
		{ &Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem, "GetControlledMovementSystem" }, // 2774855010
		{ &Z_Construct_UFunction_AGridPlayerController_GetGridManager, "GetGridManager" }, // 3303664593
		{ &Z_Construct_UFunction_AGridPlayerController_GetInputHandler, "GetInputHandler" }, // 3068489236
		{ &Z_Construct_UFunction_AGridPlayerController_GetModeManager, "GetModeManager" }, // 4055239385
		{ &Z_Construct_UFunction_AGridPlayerController_GetUIManager, "GetUIManager" }, // 3768423063
		{ &Z_Construct_UFunction_AGridPlayerController_IsInAttackMode, "IsInAttackMode" }, // 3264101707
		{ &Z_Construct_UFunction_AGridPlayerController_IsInDynamicMode, "IsInDynamicMode" }, // 2239514696
		{ &Z_Construct_UFunction_AGridPlayerController_OnAnyCharacterHealthChanged, "OnAnyCharacterHealthChanged" }, // 2350781640
		{ &Z_Construct_UFunction_AGridPlayerController_OnAttackModeChanged, "OnAttackModeChanged" }, // 3264667423
		{ &Z_Construct_UFunction_AGridPlayerController_OnCameraModeChanged, "OnCameraModeChanged" }, // 1583813326
		{ &Z_Construct_UFunction_AGridPlayerController_OnCharacterHealthChanged, "OnCharacterHealthChanged" }, // 2852060312
		{ &Z_Construct_UFunction_AGridPlayerController_OnCombatExecuted, "OnCombatExecuted" }, // 4188471243
		{ &Z_Construct_UFunction_AGridPlayerController_OnCombatResultReceived, "OnCombatResultReceived" }, // 1248714209
		{ &Z_Construct_UFunction_AGridPlayerController_OnDynamicMode, "OnDynamicMode" }, // 775977963
		{ &Z_Construct_UFunction_AGridPlayerController_OnMove, "OnMove" }, // 2667192795
		{ &Z_Construct_UFunction_AGridPlayerController_OnTurnChangedCamera, "OnTurnChangedCamera" }, // 3028409276
		{ &Z_Construct_UFunction_AGridPlayerController_SwitchMovementMode, "SwitchMovementMode" }, // 1806344397
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_UIOnMovementModeChanged = { "UIOnMovementModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, UIOnMovementModeChanged), Z_Construct_UDelegateFunction_ProjectGate_UIOnMovementModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIOnMovementModeChanged_MetaData), NewProp_UIOnMovementModeChanged_MetaData) }; // 3626789008
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
void Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bHideCursorInDynamicMode_SetBit(void* Obj)
{
	((AGridPlayerController*)Obj)->bHideCursorInDynamicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bHideCursorInDynamicMode = { "bHideCursorInDynamicMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridPlayerController), &Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bHideCursorInDynamicMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideCursorInDynamicMode_MetaData), NewProp_bHideCursorInDynamicMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_GridInputMappingContext = { "GridInputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, GridInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridInputMappingContext_MetaData), NewProp_GridInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickAction_MetaData), NewProp_ClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ShowRangeAction = { "ShowRangeAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ShowRangeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowRangeAction_MetaData), NewProp_ShowRangeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_RotateCameraAction = { "RotateCameraAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, RotateCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateCameraAction_MetaData), NewProp_RotateCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ZoomCameraAction = { "ZoomCameraAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ZoomCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomCameraAction_MetaData), NewProp_ZoomCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CancelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAction_MetaData), NewProp_CancelAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_DynamicModeAction = { "DynamicModeAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, DynamicModeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicModeAction_MetaData), NewProp_DynamicModeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraMoveAction = { "CameraMoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMoveAction_MetaData), NewProp_CameraMoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraRotateAction = { "CameraRotateAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraRotateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotateAction_MetaData), NewProp_CameraRotateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraZoomAction = { "CameraZoomAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraZoomAction_MetaData), NewProp_CameraZoomAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ToggleFocus = { "ToggleFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ToggleFocus), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleFocus_MetaData), NewProp_ToggleFocus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_AttackModeAction = { "AttackModeAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, AttackModeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackModeAction_MetaData), NewProp_AttackModeAction_MetaData) };
void Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsInDynamicMode_SetBit(void* Obj)
{
	((AGridPlayerController*)Obj)->bIsInDynamicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsInDynamicMode = { "bIsInDynamicMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridPlayerController), &Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsInDynamicMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInDynamicMode_MetaData), NewProp_bIsInDynamicMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_TurnOrderWidget = { "TurnOrderWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, TurnOrderWidget), Z_Construct_UClass_UTurnOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderWidget_MetaData), NewProp_TurnOrderWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_TurnOrderWidgetClass = { "TurnOrderWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, TurnOrderWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTurnOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderWidgetClass_MetaData), NewProp_TurnOrderWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraPawn = { "CameraPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPawn_MetaData), NewProp_CameraPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_FreeCameraPawn = { "FreeCameraPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, FreeCameraPawn), Z_Construct_UClass_AFreeCameraPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeCameraPawn_MetaData), NewProp_FreeCameraPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraBaseMoveSpeed = { "CameraBaseMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraBaseMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBaseMoveSpeed_MetaData), NewProp_CameraBaseMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraFastMoveSpeed = { "CameraFastMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraFastMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFastMoveSpeed_MetaData), NewProp_CameraFastMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MinZoomLength = { "MinZoomLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, MinZoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZoomLength_MetaData), NewProp_MinZoomLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MaxZoomLength = { "MaxZoomLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, MaxZoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZoomLength_MetaData), NewProp_MaxZoomLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraController = { "CameraController", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraController), Z_Construct_UClass_UCameraControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraController_MetaData), NewProp_CameraController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CombatModeManager = { "CombatModeManager", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CombatModeManager), Z_Construct_UClass_UCombatModeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatModeManager_MetaData), NewProp_CombatModeManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_InputHandler = { "InputHandler", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, InputHandler), Z_Construct_UClass_UInputHandlerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandler_MetaData), NewProp_InputHandler_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ModeManager = { "ModeManager", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ModeManager), Z_Construct_UClass_UModeManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeManager_MetaData), NewProp_ModeManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_UIManager = { "UIManager", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, UIManager), Z_Construct_UClass_UUIManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIManager_MetaData), NewProp_UIManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_TurnManager = { "TurnManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, TurnManager), Z_Construct_UClass_ASimpleTurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnManager_MetaData), NewProp_TurnManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CurrentHighlightedTarget = { "CurrentHighlightedTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CurrentHighlightedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHighlightedTarget_MetaData), NewProp_CurrentHighlightedTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CombatDisplayWidget = { "CombatDisplayWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CombatDisplayWidget), Z_Construct_UClass_UCombatDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatDisplayWidget_MetaData), NewProp_CombatDisplayWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_LastHighlightedTarget = { "LastHighlightedTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, LastHighlightedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastHighlightedTarget_MetaData), NewProp_LastHighlightedTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_UIOnMovementModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bHideCursorInDynamicMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_GridInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ShowRangeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_RotateCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ZoomCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CancelAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_DynamicModeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraMoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraRotateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraZoomAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ToggleFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_AttackModeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsInDynamicMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_TurnOrderWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_TurnOrderWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_FreeCameraPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraBaseMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraFastMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MinZoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MaxZoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CombatModeManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_InputHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ModeManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_UIManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_TurnManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CurrentHighlightedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CombatDisplayWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_LastHighlightedTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridPlayerController_Statics::ClassParams = {
	&AGridPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridPlayerController()
{
	if (!Z_Registration_Info_UClass_AGridPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridPlayerController.OuterSingleton, Z_Construct_UClass_AGridPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPlayerController);
AGridPlayerController::~AGridPlayerController() {}
// ********** End Class AGridPlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridPlayerController, AGridPlayerController::StaticClass, TEXT("AGridPlayerController"), &Z_Registration_Info_UClass_AGridPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridPlayerController), 1472491719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h__Script_ProjectGate_4237956034(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
