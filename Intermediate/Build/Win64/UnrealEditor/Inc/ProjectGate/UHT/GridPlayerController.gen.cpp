// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/GridPlayerController.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridPlayerController();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridPlayerController_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

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
		{ "Comment", "// \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd}\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_Distance", "800.000000" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd}\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
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
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
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
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xaa\xba EnhancedMovementSystem\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xaa\xba EnhancedMovementSystem" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnDynamicMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnDynamicMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnDynamicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnDynamicMode_Statics::Function_MetaDataParams)},  };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridPlayerController, nullptr, "OnMove", Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::GridPlayerController_eventOnMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridPlayerController_OnMove_Statics::Function_MetaDataParams)},  };
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

// ********** Begin Class AGridPlayerController ****************************************************
void AGridPlayerController::StaticRegisterNativesAGridPlayerController()
{
	UClass* Class = AGridPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FocusOnActor", &AGridPlayerController::execFocusOnActor },
		{ "FocusOnCurrentTurnCharacter", &AGridPlayerController::execFocusOnCurrentTurnCharacter },
		{ "GetCameraLocation", &AGridPlayerController::execGetCameraLocation },
		{ "GetCameraPawn", &AGridPlayerController::execGetCameraPawn },
		{ "GetCameraRotation", &AGridPlayerController::execGetCameraRotation },
		{ "GetControlledMovementSystem", &AGridPlayerController::execGetControlledMovementSystem },
		{ "OnDynamicMode", &AGridPlayerController::execOnDynamicMode },
		{ "OnMove", &AGridPlayerController::execOnMove },
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
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TurnBasedSystem/GridPlayerController.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInDynamicMode_MetaData[] = {
		{ "Category", "GridPlayerController" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xaa\xba\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xaa\xba\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbdM\xef\xbf\xbdg\xef\xbf\xbdW\xef\xbf\xbdU\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbdM\xef\xbf\xbdg\xef\xbf\xbdW\xef\xbf\xbdU\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbdI\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbdI\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowRangeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbd\xef\xbf\xbd\xdc\xbd""d\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbd\xef\xbf\xbd\xdc\xbd""d\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdJ\xef\xbf\xbd\xca\xa7@ - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicModeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xca\xba""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xca\xba""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Input Actions\xef\xbf\xbd]\xef\xbf\xbdp\xef\xbf\xbdG\xef\xbf\xbd\xd9\xa8S\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xa1^\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Input Actions\xef\xbf\xbd]\xef\xbf\xbdp\xef\xbf\xbdG\xef\xbf\xbd\xd9\xa8S\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xa1^" },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Focus\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Focus" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===\xef\xbf\xbd\xd6\xa4\xdf\xb2\xd5\xa5\xef\xbf\xbd===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===\xef\xbf\xbd\xd6\xa4\xdf\xb2\xd5\xa5\xef\xbf\xbd===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd =====\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd =====" },
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
		{ "Comment", "// \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdm\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdm" },
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
#endif // WITH_METADATA
	static void NewProp_bIsInDynamicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInDynamicMode;
	static void NewProp_bIsFocusMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPawn;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBaseMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFastMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoomLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoomLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridPlayerController_FocusOnActor, "FocusOnActor" }, // 3412487265
		{ &Z_Construct_UFunction_AGridPlayerController_FocusOnCurrentTurnCharacter, "FocusOnCurrentTurnCharacter" }, // 507097401
		{ &Z_Construct_UFunction_AGridPlayerController_GetCameraLocation, "GetCameraLocation" }, // 3085982218
		{ &Z_Construct_UFunction_AGridPlayerController_GetCameraPawn, "GetCameraPawn" }, // 4019684649
		{ &Z_Construct_UFunction_AGridPlayerController_GetCameraRotation, "GetCameraRotation" }, // 3126027194
		{ &Z_Construct_UFunction_AGridPlayerController_GetControlledMovementSystem, "GetControlledMovementSystem" }, // 2742677246
		{ &Z_Construct_UFunction_AGridPlayerController_OnDynamicMode, "OnDynamicMode" }, // 1998669579
		{ &Z_Construct_UFunction_AGridPlayerController_OnMove, "OnMove" }, // 1141482932
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsInDynamicMode_SetBit(void* Obj)
{
	((AGridPlayerController*)Obj)->bIsInDynamicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsInDynamicMode = { "bIsInDynamicMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridPlayerController), &Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsInDynamicMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInDynamicMode_MetaData), NewProp_bIsInDynamicMode_MetaData) };
void Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsFocusMode_SetBit(void* Obj)
{
	((AGridPlayerController*)Obj)->bIsFocusMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsFocusMode = { "bIsFocusMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridPlayerController), &Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsFocusMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFocusMode_MetaData), NewProp_bIsFocusMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraPawn = { "CameraPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPawn_MetaData), NewProp_CameraPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_GridInputMappingContext = { "GridInputMappingContext", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, GridInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridInputMappingContext_MetaData), NewProp_GridInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickAction_MetaData), NewProp_ClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ShowRangeAction = { "ShowRangeAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ShowRangeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowRangeAction_MetaData), NewProp_ShowRangeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_RotateCameraAction = { "RotateCameraAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, RotateCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateCameraAction_MetaData), NewProp_RotateCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ZoomCameraAction = { "ZoomCameraAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ZoomCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomCameraAction_MetaData), NewProp_ZoomCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CancelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAction_MetaData), NewProp_CancelAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_DynamicModeAction = { "DynamicModeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, DynamicModeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicModeAction_MetaData), NewProp_DynamicModeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraMoveAction = { "CameraMoveAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMoveAction_MetaData), NewProp_CameraMoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraRotateAction = { "CameraRotateAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraRotateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotateAction_MetaData), NewProp_CameraRotateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraZoomAction = { "CameraZoomAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraZoomAction_MetaData), NewProp_CameraZoomAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ToggleFocus = { "ToggleFocus", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ToggleFocus), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleFocus_MetaData), NewProp_ToggleFocus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_TurnManager = { "TurnManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, TurnManager), Z_Construct_UClass_ASimpleTurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnManager_MetaData), NewProp_TurnManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraBaseMoveSpeed = { "CameraBaseMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraBaseMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBaseMoveSpeed_MetaData), NewProp_CameraBaseMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraFastMoveSpeed = { "CameraFastMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, CameraFastMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFastMoveSpeed_MetaData), NewProp_CameraFastMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MinZoomLength = { "MinZoomLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, MinZoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZoomLength_MetaData), NewProp_MinZoomLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MaxZoomLength = { "MaxZoomLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridPlayerController, MaxZoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZoomLength_MetaData), NewProp_MaxZoomLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsInDynamicMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_bIsFocusMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraPawn,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_TurnManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraBaseMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_CameraFastMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MinZoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPlayerController_Statics::NewProp_MaxZoomLength,
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
		{ Z_Construct_UClass_AGridPlayerController, AGridPlayerController::StaticClass, TEXT("AGridPlayerController"), &Z_Registration_Info_UClass_AGridPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridPlayerController), 4066729130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h__Script_ProjectGate_2209558436(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPlayerController_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
