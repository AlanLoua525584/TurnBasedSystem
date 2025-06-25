// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeCameraPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFreeCameraPawn() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AFreeCameraPawn();
PROJECTGATE_API UClass* Z_Construct_UClass_AFreeCameraPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFreeCameraPawn Function ClearFollowTarget *******************************
struct Z_Construct_UFunction_AFreeCameraPawn_ClearFollowTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFreeCameraPawn_ClearFollowTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFreeCameraPawn, nullptr, "ClearFollowTarget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_ClearFollowTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFreeCameraPawn_ClearFollowTarget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFreeCameraPawn_ClearFollowTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFreeCameraPawn_ClearFollowTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFreeCameraPawn::execClearFollowTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearFollowTarget();
	P_NATIVE_END;
}
// ********** End Class AFreeCameraPawn Function ClearFollowTarget *********************************

// ********** Begin Class AFreeCameraPawn Function FocusOnActor ************************************
struct Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics
{
	struct FreeCameraPawn_eventFocusOnActor_Parms
	{
		AActor* TargetActor;
		float Distance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd6\xb3t\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_Distance", "500.000000" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb3t\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FreeCameraPawn_eventFocusOnActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FreeCameraPawn_eventFocusOnActor_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFreeCameraPawn, nullptr, "FocusOnActor", Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::FreeCameraPawn_eventFocusOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::FreeCameraPawn_eventFocusOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFreeCameraPawn::execFocusOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusOnActor(Z_Param_TargetActor,Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class AFreeCameraPawn Function FocusOnActor **************************************

// ********** Begin Class AFreeCameraPawn Function GetCameraLocation *******************************
struct Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics
{
	struct FreeCameraPawn_eventGetCameraLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdm\xef\xbf\xbdM\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdm\xef\xbf\xbdM\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FreeCameraPawn_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFreeCameraPawn, nullptr, "GetCameraLocation", Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::FreeCameraPawn_eventGetCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::FreeCameraPawn_eventGetCameraLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFreeCameraPawn::execGetCameraLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
	P_NATIVE_END;
}
// ********** End Class AFreeCameraPawn Function GetCameraLocation *********************************

// ********** Begin Class AFreeCameraPawn Function GetCameraRotation *******************************
struct Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics
{
	struct FreeCameraPawn_eventGetCameraRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FreeCameraPawn_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFreeCameraPawn, nullptr, "GetCameraRotation", Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::FreeCameraPawn_eventGetCameraRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::FreeCameraPawn_eventGetCameraRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFreeCameraPawn::execGetCameraRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
	P_NATIVE_END;
}
// ********** End Class AFreeCameraPawn Function GetCameraRotation *********************************

// ********** Begin Class AFreeCameraPawn Function SetFollowTarget *********************************
struct Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics
{
	struct FreeCameraPawn_eventSetFollowTarget_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd""E\xef\xbf\xbdJ\xef\xbf\xbd\xc3\xb8\xef\xbf\xbd\xef\xbf\xbdH\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""E\xef\xbf\xbdJ\xef\xbf\xbd\xc3\xb8\xef\xbf\xbd\xef\xbf\xbdH\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FreeCameraPawn_eventSetFollowTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFreeCameraPawn, nullptr, "SetFollowTarget", Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::FreeCameraPawn_eventSetFollowTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::FreeCameraPawn_eventSetFollowTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFreeCameraPawn::execSetFollowTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFollowTarget(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class AFreeCameraPawn Function SetFollowTarget ***********************************

// ********** Begin Class AFreeCameraPawn Function SetMovementBounds *******************************
struct Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics
{
	struct FreeCameraPawn_eventSetMovementBounds_Parms
	{
		FVector MinBounds;
		FVector MaxBounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd]\xef\xbf\xbdm\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd]\xef\xbf\xbdm\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FreeCameraPawn_eventSetMovementBounds_Parms, MinBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FreeCameraPawn_eventSetMovementBounds_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::NewProp_MinBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::NewProp_MaxBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFreeCameraPawn, nullptr, "SetMovementBounds", Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::FreeCameraPawn_eventSetMovementBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::FreeCameraPawn_eventSetMovementBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFreeCameraPawn::execSetMovementBounds)
{
	P_GET_STRUCT(FVector,Z_Param_MinBounds);
	P_GET_STRUCT(FVector,Z_Param_MaxBounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementBounds(Z_Param_MinBounds,Z_Param_MaxBounds);
	P_NATIVE_END;
}
// ********** End Class AFreeCameraPawn Function SetMovementBounds *********************************

// ********** Begin Class AFreeCameraPawn **********************************************************
void AFreeCameraPawn::StaticRegisterNativesAFreeCameraPawn()
{
	UClass* Class = AFreeCameraPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearFollowTarget", &AFreeCameraPawn::execClearFollowTarget },
		{ "FocusOnActor", &AFreeCameraPawn::execFocusOnActor },
		{ "GetCameraLocation", &AFreeCameraPawn::execGetCameraLocation },
		{ "GetCameraRotation", &AFreeCameraPawn::execGetCameraRotation },
		{ "SetFollowTarget", &AFreeCameraPawn::execSetFollowTarget },
		{ "SetMovementBounds", &AFreeCameraPawn::execSetMovementBounds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFreeCameraPawn;
UClass* AFreeCameraPawn::GetPrivateStaticClass()
{
	using TClass = AFreeCameraPawn;
	if (!Z_Registration_Info_UClass_AFreeCameraPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FreeCameraPawn"),
			Z_Registration_Info_UClass_AFreeCameraPawn.InnerSingleton,
			StaticRegisterNativesAFreeCameraPawn,
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
	return Z_Registration_Info_UClass_AFreeCameraPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AFreeCameraPawn_NoRegister()
{
	return AFreeCameraPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFreeCameraPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FreeCameraPawn.h" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbdu\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbdu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMoveSpeed_MetaData[] = {
		{ "Category", "Camera|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb3t\xef\xbf\xbd\xd7\xb3]\xef\xbf\xbdw\n" },
#endif
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb3t\xef\xbf\xbd\xd7\xb3]\xef\xbf\xbdw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastMoveSpeed_MetaData[] = {
		{ "Category", "Camera|Movement" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera|MOvement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xd7\xb3]\xef\xbf\xbdw\n" },
#endif
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xd7\xb3]\xef\xbf\xbdw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera|MOvement" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera|Zoom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdw\n" },
#endif
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdY\xef\xbf\xbd\xef\xbf\xbd]\xef\xbf\xbdw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZoomLength_MetaData[] = {
		{ "Category", "Camera|Zoom" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoomLength_MetaData[] = {
		{ "Category", "Camera|Zoom" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEdgeScrolling_MetaData[] = {
		{ "Category", "Camera|EdgeScrolling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdu\xef\xbf\xbd\xca\xb3]\xef\xbf\xbdw\n" },
#endif
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdu\xef\xbf\xbd\xca\xb3]\xef\xbf\xbdw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollBorder_MetaData[] = {
		{ "Category", "Camera|EdgeScrolling" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollSpeed_MetaData[] = {
		{ "Category", "Camera|EdgeScrolling" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSmoothness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Movement" },
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdH\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/FreeCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdH\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FastMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoomLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoomLength;
	static void NewProp_bEnableEdgeScrolling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEdgeScrolling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollBorder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSmoothness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFreeCameraPawn_ClearFollowTarget, "ClearFollowTarget" }, // 1764253832
		{ &Z_Construct_UFunction_AFreeCameraPawn_FocusOnActor, "FocusOnActor" }, // 3567285066
		{ &Z_Construct_UFunction_AFreeCameraPawn_GetCameraLocation, "GetCameraLocation" }, // 3640047338
		{ &Z_Construct_UFunction_AFreeCameraPawn_GetCameraRotation, "GetCameraRotation" }, // 1940160607
		{ &Z_Construct_UFunction_AFreeCameraPawn_SetFollowTarget, "SetFollowTarget" }, // 3542305666
		{ &Z_Construct_UFunction_AFreeCameraPawn_SetMovementBounds, "SetMovementBounds" }, // 927349163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFreeCameraPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_BaseMoveSpeed = { "BaseMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, BaseMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMoveSpeed_MetaData), NewProp_BaseMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_FastMoveSpeed = { "FastMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, FastMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastMoveSpeed_MetaData), NewProp_FastMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData), NewProp_BaseLookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_MinZoomLength = { "MinZoomLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, MinZoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZoomLength_MetaData), NewProp_MinZoomLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_MaxZoomLength = { "MaxZoomLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, MaxZoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZoomLength_MetaData), NewProp_MaxZoomLength_MetaData) };
void Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_bEnableEdgeScrolling_SetBit(void* Obj)
{
	((AFreeCameraPawn*)Obj)->bEnableEdgeScrolling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_bEnableEdgeScrolling = { "bEnableEdgeScrolling", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFreeCameraPawn), &Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_bEnableEdgeScrolling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableEdgeScrolling_MetaData), NewProp_bEnableEdgeScrolling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_EdgeScrollBorder = { "EdgeScrollBorder", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, EdgeScrollBorder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScrollBorder_MetaData), NewProp_EdgeScrollBorder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_EdgeScrollSpeed = { "EdgeScrollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, EdgeScrollSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScrollSpeed_MetaData), NewProp_EdgeScrollSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_MovementSmoothness = { "MovementSmoothness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, MovementSmoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSmoothness_MetaData), NewProp_MovementSmoothness_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_FollowTarget = { "FollowTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreeCameraPawn, FollowTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowTarget_MetaData), NewProp_FollowTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFreeCameraPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_BaseMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_FastMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_BaseLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_MinZoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_MaxZoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_bEnableEdgeScrolling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_EdgeScrollBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_EdgeScrollSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_MovementSmoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCameraPawn_Statics::NewProp_FollowTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCameraPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFreeCameraPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCameraPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFreeCameraPawn_Statics::ClassParams = {
	&AFreeCameraPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFreeCameraPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCameraPawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFreeCameraPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFreeCameraPawn()
{
	if (!Z_Registration_Info_UClass_AFreeCameraPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFreeCameraPawn.OuterSingleton, Z_Construct_UClass_AFreeCameraPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFreeCameraPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFreeCameraPawn);
AFreeCameraPawn::~AFreeCameraPawn() {}
// ********** End Class AFreeCameraPawn ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFreeCameraPawn, AFreeCameraPawn::StaticClass, TEXT("AFreeCameraPawn"), &Z_Registration_Info_UClass_AFreeCameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFreeCameraPawn), 714858064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h__Script_ProjectGate_4217829335(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_FreeCameraPawn_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
