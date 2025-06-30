// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/EnhancedMovementSystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnhancedMovementSystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem();
PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EALSGait();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EALSMovementState();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ECustomMovementMode();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnResourceDepleted__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnStartMove__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnStopMove__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EALSMovementState *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSMovementState;
static UEnum* EALSMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EALSMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EALSMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EALSMovementState, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EALSMovementState"));
	}
	return Z_Registration_Info_UEnum_EALSMovementState.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EALSMovementState>()
{
	return EALSMovementState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EALSMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ALS \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xaa\xef\xbf\xbd\xef\xbf\xbd""A\n" },
#endif
		{ "Grounded.DisplayName", "Grounded" },
		{ "Grounded.Name", "EALSMovementState::Grounded" },
		{ "InAir.DisplayName", "InAir" },
		{ "InAir.Name", "EALSMovementState::InAir" },
		{ "Mantling.DisplayName", "Mantling" },
		{ "Mantling.Name", "EALSMovementState::Mantling" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EALSMovementState::None" },
		{ "Ragdoll.DisplayName", "Ragdoll" },
		{ "Ragdoll.Name", "EALSMovementState::Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALS \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xaa\xef\xbf\xbd\xef\xbf\xbd""A" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EALSMovementState::None", (int64)EALSMovementState::None },
		{ "EALSMovementState::Grounded", (int64)EALSMovementState::Grounded },
		{ "EALSMovementState::InAir", (int64)EALSMovementState::InAir },
		{ "EALSMovementState::Mantling", (int64)EALSMovementState::Mantling },
		{ "EALSMovementState::Ragdoll", (int64)EALSMovementState::Ragdoll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EALSMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EALSMovementState",
	"EALSMovementState",
	Z_Construct_UEnum_ProjectGate_EALSMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EALSMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EALSMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EALSMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EALSMovementState()
{
	if (!Z_Registration_Info_UEnum_EALSMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSMovementState.InnerSingleton, Z_Construct_UEnum_ProjectGate_EALSMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EALSMovementState.InnerSingleton;
}
// ********** End Enum EALSMovementState ***********************************************************

// ********** Begin Enum EALSGait ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EALSGait;
static UEnum* EALSGait_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EALSGait.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EALSGait.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EALSGait, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EALSGait"));
	}
	return Z_Registration_Info_UEnum_EALSGait.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EALSGait>()
{
	return EALSGait_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EALSGait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ALS \xef\xbf\xbd""B\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "EALSGait::Running" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "EALSGait::Sprinting" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALS \xef\xbf\xbd""B\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EALSGait::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EALSGait::Walking", (int64)EALSGait::Walking },
		{ "EALSGait::Running", (int64)EALSGait::Running },
		{ "EALSGait::Sprinting", (int64)EALSGait::Sprinting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EALSGait_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EALSGait",
	"EALSGait",
	Z_Construct_UEnum_ProjectGate_EALSGait_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EALSGait_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EALSGait_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EALSGait_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EALSGait()
{
	if (!Z_Registration_Info_UEnum_EALSGait.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EALSGait.InnerSingleton, Z_Construct_UEnum_ProjectGate_EALSGait_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EALSGait.InnerSingleton;
}
// ********** End Enum EALSGait ********************************************************************

// ********** Begin Enum ECustomMovementMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomMovementMode;
static UEnum* ECustomMovementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_ECustomMovementMode, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("ECustomMovementMode"));
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<ECustomMovementMode>()
{
	return ECustomMovementMode_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_ECustomMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xd2\xa6\xef\xbf\xbd\xef\xbf\xbdT\xef\xbf\xbd|\n" },
#endif
		{ "DynamicMove.DisplayName", "Dynamic Movement" },
		{ "DynamicMove.Name", "ECustomMovementMode::DynamicMove" },
		{ "GridMove.DisplayName", "Grid Movement" },
		{ "GridMove.Name", "ECustomMovementMode::GridMove" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "ECustomMovementMode::Idle" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xd2\xa6\xef\xbf\xbd\xef\xbf\xbdT\xef\xbf\xbd|" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomMovementMode::Idle", (int64)ECustomMovementMode::Idle },
		{ "ECustomMovementMode::GridMove", (int64)ECustomMovementMode::GridMove },
		{ "ECustomMovementMode::DynamicMove", (int64)ECustomMovementMode::DynamicMove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_ECustomMovementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"ECustomMovementMode",
	"ECustomMovementMode",
	Z_Construct_UEnum_ProjectGate_ECustomMovementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ECustomMovementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ECustomMovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_ECustomMovementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_ECustomMovementMode()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton, Z_Construct_UEnum_ProjectGate_ECustomMovementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton;
}
// ********** End Enum ECustomMovementMode *********************************************************

// ********** Begin Delegate FOnALSStateChanged ****************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnALSStateChanged_Parms
	{
		EALSMovementState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ALS \xef\xbf\xbd\xef\xbf\xbdX\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALS \xef\xbf\xbd\xef\xbf\xbdX\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnALSStateChanged_Parms, NewState), Z_Construct_UEnum_ProjectGate_EALSMovementState, METADATA_PARAMS(0, nullptr) }; // 2590882309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnALSStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnALSStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnALSStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnALSStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnALSStateChanged, EALSMovementState NewState)
{
	struct _Script_ProjectGate_eventOnALSStateChanged_Parms
	{
		EALSMovementState NewState;
	};
	_Script_ProjectGate_eventOnALSStateChanged_Parms Parms;
	Parms.NewState=NewState;
	OnALSStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnALSStateChanged ******************************************************

// ********** Begin Delegate FOnALSGaitChanged *****************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnALSGaitChanged_Parms
	{
		EALSGait NewGait;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnALSGaitChanged_Parms, NewGait), Z_Construct_UEnum_ProjectGate_EALSGait, METADATA_PARAMS(0, nullptr) }; // 789325205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::NewProp_NewGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::NewProp_NewGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnALSGaitChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnALSGaitChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnALSGaitChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnALSGaitChanged_DelegateWrapper(const FMulticastScriptDelegate& OnALSGaitChanged, EALSGait NewGait)
{
	struct _Script_ProjectGate_eventOnALSGaitChanged_Parms
	{
		EALSGait NewGait;
	};
	_Script_ProjectGate_eventOnALSGaitChanged_Parms Parms;
	Parms.NewGait=NewGait;
	OnALSGaitChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnALSGaitChanged *******************************************************

// ********** Begin Delegate FOnMovementDataUpdated ************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnMovementDataUpdated_Parms
	{
		FVector Velocity;
		float MovementSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnMovementDataUpdated_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnMovementDataUpdated_Parms, MovementSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::NewProp_MovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnMovementDataUpdated__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::_Script_ProjectGate_eventOnMovementDataUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::_Script_ProjectGate_eventOnMovementDataUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMovementDataUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMovementDataUpdated, FVector Velocity, float MovementSpeed)
{
	struct _Script_ProjectGate_eventOnMovementDataUpdated_Parms
	{
		FVector Velocity;
		float MovementSpeed;
	};
	_Script_ProjectGate_eventOnMovementDataUpdated_Parms Parms;
	Parms.Velocity=Velocity;
	Parms.MovementSpeed=MovementSpeed;
	OnMovementDataUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMovementDataUpdated **************************************************

// ********** Begin Delegate FOnMovementModeChanged ************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnMovementModeChanged_Parms
	{
		ECustomMovementMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xec\xa6\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbdU\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xec\xa6\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbdU\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnMovementModeChanged_Parms, NewMode), Z_Construct_UEnum_ProjectGate_ECustomMovementMode, METADATA_PARAMS(0, nullptr) }; // 675425914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnMovementModeChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnMovementModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnMovementModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovementModeChanged, ECustomMovementMode NewMode)
{
	struct _Script_ProjectGate_eventOnMovementModeChanged_Parms
	{
		ECustomMovementMode NewMode;
	};
	_Script_ProjectGate_eventOnMovementModeChanged_Parms Parms;
	Parms.NewMode=NewMode;
	OnMovementModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMovementModeChanged **************************************************

// ********** Begin Delegate FOnResourceChanged ****************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnResourceChanged_Parms
	{
		float CurrentResource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentResource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::NewProp_CurrentResource = { "CurrentResource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnResourceChanged_Parms, CurrentResource), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::NewProp_CurrentResource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnResourceChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnResourceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnResourceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnResourceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnResourceChanged, float CurrentResource)
{
	struct _Script_ProjectGate_eventOnResourceChanged_Parms
	{
		float CurrentResource;
	};
	_Script_ProjectGate_eventOnResourceChanged_Parms Parms;
	Parms.CurrentResource=CurrentResource;
	OnResourceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnResourceChanged ******************************************************

// ********** Begin Delegate FOnResourceDepleted ***************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnResourceDepleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnResourceDepleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnResourceDepleted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnResourceDepleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnResourceDepleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnResourceDepleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnResourceDepleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnResourceDepleted_DelegateWrapper(const FMulticastScriptDelegate& OnResourceDepleted)
{
	OnResourceDepleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnResourceDepleted *****************************************************

// ********** Begin Delegate FOnStartMove **********************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnStartMove__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnStartMove__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnStartMove__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnStartMove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnStartMove__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnStartMove__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnStartMove__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartMove_DelegateWrapper(const FMulticastScriptDelegate& OnStartMove)
{
	OnStartMove.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnStartMove ************************************************************

// ********** Begin Delegate FOnStopMove ***********************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnStopMove__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnStopMove__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnStopMove__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnStopMove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnStopMove__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnStopMove__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnStopMove__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStopMove_DelegateWrapper(const FMulticastScriptDelegate& OnStopMove)
{
	OnStopMove.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnStopMove *************************************************************

// ********** Begin Class UEnhancedMovementSystem Function CalculateMaxRange ***********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics
{
	struct EnhancedMovementSystem_eventCalculateMaxRange_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventCalculateMaxRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "CalculateMaxRange", Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::EnhancedMovementSystem_eventCalculateMaxRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::EnhancedMovementSystem_eventCalculateMaxRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execCalculateMaxRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateMaxRange();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function CalculateMaxRange *************************

// ********** Begin Class UEnhancedMovementSystem Function CanMove *********************************
struct Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics
{
	struct EnhancedMovementSystem_eventCanMove_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==\xef\xbf\xbd""d\xef\xbf\xbd\xdf\xa8\xef\xbf\xbd\xef\xbf\xbd==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==\xef\xbf\xbd""d\xef\xbf\xbd\xdf\xa8\xef\xbf\xbd\xef\xbf\xbd==" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedMovementSystem_eventCanMove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedMovementSystem_eventCanMove_Parms), &Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "CanMove", Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::EnhancedMovementSystem_eventCanMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::EnhancedMovementSystem_eventCanMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_CanMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_CanMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execCanMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMove();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function CanMove ***********************************

// ********** Begin Class UEnhancedMovementSystem Function GetCurrentSpeedBaseOnGait ***************
struct Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics
{
	struct EnhancedMovementSystem_eventGetCurrentSpeedBaseOnGait_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|ALS" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventGetCurrentSpeedBaseOnGait_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "GetCurrentSpeedBaseOnGait", Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::EnhancedMovementSystem_eventGetCurrentSpeedBaseOnGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::EnhancedMovementSystem_eventGetCurrentSpeedBaseOnGait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execGetCurrentSpeedBaseOnGait)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentSpeedBaseOnGait();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function GetCurrentSpeedBaseOnGait *****************

// ********** Begin Class UEnhancedMovementSystem Function GetMovementInput ************************
struct Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics
{
	struct EnhancedMovementSystem_eventGetMovementInput_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|ALS" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventGetMovementInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "GetMovementInput", Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::EnhancedMovementSystem_eventGetMovementInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::EnhancedMovementSystem_eventGetMovementInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execGetMovementInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetMovementInput();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function GetMovementInput **************************

// ********** Begin Class UEnhancedMovementSystem Function GetResourcePercent **********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics
{
	struct EnhancedMovementSystem_eventGetResourcePercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventGetResourcePercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "GetResourcePercent", Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::EnhancedMovementSystem_eventGetResourcePercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::EnhancedMovementSystem_eventGetResourcePercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execGetResourcePercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetResourcePercent();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function GetResourcePercent ************************

// ********** Begin Class UEnhancedMovementSystem Function IsInDynamicMovement *********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics
{
	struct EnhancedMovementSystem_eventIsInDynamicMovement_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedMovementSystem_eventIsInDynamicMovement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedMovementSystem_eventIsInDynamicMovement_Parms), &Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "IsInDynamicMovement", Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::EnhancedMovementSystem_eventIsInDynamicMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::EnhancedMovementSystem_eventIsInDynamicMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execIsInDynamicMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInDynamicMovement();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function IsInDynamicMovement ***********************

// ********** Begin Class UEnhancedMovementSystem Function ProcessMovementInput ********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics
{
	struct EnhancedMovementSystem_eventProcessMovementInput_Parms
	{
		FVector2D InputVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::NewProp_InputVector = { "InputVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventProcessMovementInput_Parms, InputVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputVector_MetaData), NewProp_InputVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::NewProp_InputVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "ProcessMovementInput", Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::EnhancedMovementSystem_eventProcessMovementInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::EnhancedMovementSystem_eventProcessMovementInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execProcessMovementInput)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InputVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessMovementInput(Z_Param_Out_InputVector);
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function ProcessMovementInput **********************

// ********** Begin Class UEnhancedMovementSystem Function ResetResource ***************************
struct Z_Construct_UFunction_UEnhancedMovementSystem_ResetResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_ResetResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "ResetResource", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_ResetResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_ResetResource_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_ResetResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_ResetResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execResetResource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetResource();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function ResetResource *****************************

// ********** Begin Class UEnhancedMovementSystem Function SetALSGait ******************************
struct Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics
{
	struct EnhancedMovementSystem_eventSetALSGait_Parms
	{
		EALSGait NewGait;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|ALS" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventSetALSGait_Parms, NewGait), Z_Construct_UEnum_ProjectGate_EALSGait, METADATA_PARAMS(0, nullptr) }; // 789325205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::NewProp_NewGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::NewProp_NewGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "SetALSGait", Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::EnhancedMovementSystem_eventSetALSGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::EnhancedMovementSystem_eventSetALSGait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execSetALSGait)
{
	P_GET_ENUM(EALSGait,Z_Param_NewGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetALSGait(EALSGait(Z_Param_NewGait));
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function SetALSGait ********************************

// ********** Begin Class UEnhancedMovementSystem Function SetALSMovementState *********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics
{
	struct EnhancedMovementSystem_eventSetALSMovementState_Parms
	{
		EALSMovementState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|ALS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==ALS\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==ALS\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd==" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventSetALSMovementState_Parms, NewState), Z_Construct_UEnum_ProjectGate_EALSMovementState, METADATA_PARAMS(0, nullptr) }; // 2590882309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "SetALSMovementState", Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::EnhancedMovementSystem_eventSetALSMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::EnhancedMovementSystem_eventSetALSMovementState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execSetALSMovementState)
{
	P_GET_ENUM(EALSMovementState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetALSMovementState(EALSMovementState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function SetALSMovementState ***********************

// ********** Begin Class UEnhancedMovementSystem Function ShouldSPrint ****************************
struct Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics
{
	struct EnhancedMovementSystem_eventShouldSPrint_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|ALS" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedMovementSystem_eventShouldSPrint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedMovementSystem_eventShouldSPrint_Parms), &Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "ShouldSPrint", Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::EnhancedMovementSystem_eventShouldSPrint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::EnhancedMovementSystem_eventShouldSPrint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execShouldSPrint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSPrint();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function ShouldSPrint ******************************

// ********** Begin Class UEnhancedMovementSystem Function StartDynamicMovement ********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_StartDynamicMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_StartDynamicMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "StartDynamicMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_StartDynamicMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_StartDynamicMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_StartDynamicMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_StartDynamicMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execStartDynamicMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDynamicMovement();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function StartDynamicMovement **********************

// ********** Begin Class UEnhancedMovementSystem Function StopDynamicMovement *********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_StopDynamicMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_StopDynamicMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "StopDynamicMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_StopDynamicMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_StopDynamicMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_StopDynamicMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_StopDynamicMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execStopDynamicMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopDynamicMovement();
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function StopDynamicMovement ***********************

// ********** Begin Class UEnhancedMovementSystem Function SwitchMovementMode **********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics
{
	struct EnhancedMovementSystem_eventSwitchMovementMode_Parms
	{
		ECustomMovementMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==\xef\xbf\xbd""D\xef\xbf\xbdn\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==\xef\xbf\xbd""D\xef\xbf\xbdn\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd==" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventSwitchMovementMode_Parms, NewMode), Z_Construct_UEnum_ProjectGate_ECustomMovementMode, METADATA_PARAMS(0, nullptr) }; // 675425914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "SwitchMovementMode", Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::EnhancedMovementSystem_eventSwitchMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::EnhancedMovementSystem_eventSwitchMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execSwitchMovementMode)
{
	P_GET_ENUM(ECustomMovementMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchMovementMode(ECustomMovementMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function SwitchMovementMode ************************

// ********** Begin Class UEnhancedMovementSystem Function UpdateMovementDate **********************
struct Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics
{
	struct EnhancedMovementSystem_eventUpdateMovementDate_Parms
	{
		FVector Velocity;
		FVector InputVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|ALS" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventUpdateMovementDate_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::NewProp_InputVector = { "InputVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedMovementSystem_eventUpdateMovementDate_Parms, InputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputVector_MetaData), NewProp_InputVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::NewProp_InputVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnhancedMovementSystem, nullptr, "UpdateMovementDate", Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::EnhancedMovementSystem_eventUpdateMovementDate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::EnhancedMovementSystem_eventUpdateMovementDate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedMovementSystem::execUpdateMovementDate)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InputVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMovementDate(Z_Param_Out_Velocity,Z_Param_Out_InputVector);
	P_NATIVE_END;
}
// ********** End Class UEnhancedMovementSystem Function UpdateMovementDate ************************

// ********** Begin Class UEnhancedMovementSystem **************************************************
void UEnhancedMovementSystem::StaticRegisterNativesUEnhancedMovementSystem()
{
	UClass* Class = UEnhancedMovementSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateMaxRange", &UEnhancedMovementSystem::execCalculateMaxRange },
		{ "CanMove", &UEnhancedMovementSystem::execCanMove },
		{ "GetCurrentSpeedBaseOnGait", &UEnhancedMovementSystem::execGetCurrentSpeedBaseOnGait },
		{ "GetMovementInput", &UEnhancedMovementSystem::execGetMovementInput },
		{ "GetResourcePercent", &UEnhancedMovementSystem::execGetResourcePercent },
		{ "IsInDynamicMovement", &UEnhancedMovementSystem::execIsInDynamicMovement },
		{ "ProcessMovementInput", &UEnhancedMovementSystem::execProcessMovementInput },
		{ "ResetResource", &UEnhancedMovementSystem::execResetResource },
		{ "SetALSGait", &UEnhancedMovementSystem::execSetALSGait },
		{ "SetALSMovementState", &UEnhancedMovementSystem::execSetALSMovementState },
		{ "ShouldSPrint", &UEnhancedMovementSystem::execShouldSPrint },
		{ "StartDynamicMovement", &UEnhancedMovementSystem::execStartDynamicMovement },
		{ "StopDynamicMovement", &UEnhancedMovementSystem::execStopDynamicMovement },
		{ "SwitchMovementMode", &UEnhancedMovementSystem::execSwitchMovementMode },
		{ "UpdateMovementDate", &UEnhancedMovementSystem::execUpdateMovementDate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnhancedMovementSystem;
UClass* UEnhancedMovementSystem::GetPrivateStaticClass()
{
	using TClass = UEnhancedMovementSystem;
	if (!Z_Registration_Info_UClass_UEnhancedMovementSystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnhancedMovementSystem"),
			Z_Registration_Info_UClass_UEnhancedMovementSystem.InnerSingleton,
			StaticRegisterNativesUEnhancedMovementSystem,
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
	return Z_Registration_Info_UClass_UEnhancedMovementSystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister()
{
	return UEnhancedMovementSystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnhancedMovementSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnBasedSystem/EnhancedMovementSystem.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementMode_MetaData[] = {
		{ "Category", "Movement|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xde\xb2z==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xde\xb2z==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ALSMovementState_MetaData[] = {
		{ "Category", "Movement|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==ALS\xef\xbf\xbd\xef\xbf\xbdX==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==ALS\xef\xbf\xbd\xef\xbf\xbdX==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGait_MetaData[] = {
		{ "Category", "Movement|State" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseALSIntergration_MetaData[] = {
		{ "Category", "Movement|State" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeedThreshold_MetaData[] = {
		{ "Category", "Movement|ALS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ALS \xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdH\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALS \xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdH\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeedThreshold_MetaData[] = {
		{ "Category", "Movement|ALS" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedThreshold_MetaData[] = {
		{ "Category", "Movement|ALS" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMovementResource_MetaData[] = {
		{ "Category", "Movement|Resource" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==\xef\xbf\xbd\xea\xb7\xbd\xef\xbf\xbd\xde\xb2z==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==\xef\xbf\xbd\xea\xb7\xbd\xef\xbf\xbd\xde\xb2z==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementResource_MetaData[] = {
		{ "Category", "Movement|Resource" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingResourceRate_MetaData[] = {
		{ "Category", "Movement|Resource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdP\xef\xbf\xbd""B\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xea\xb7\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdP\xef\xbf\xbd""B\xef\xbf\xbd""A\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xea\xb7\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningResourceRate_MetaData[] = {
		{ "Category", "Movement|Resource" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintingResourceRate_MetaData[] = {
		{ "Category", "Movement|Resource" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceRecoverRate_MetaData[] = {
		{ "Category", "Movement|Resource" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMoveSpeed_MetaData[] = {
		{ "Category", "Movement|Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb0\xd1\xbc\xef\xbf\xbd==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb0\xd1\xbc\xef\xbf\xbd==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMoveSpeed_MetaData[] = {
		{ "Category", "Movement|Resource" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastVelocity_MetaData[] = {
		{ "Category", "Movement|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xc6\xbe\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd""ALS\xef\xbf\xbd\xcf\xa5\xef\xbf\xbd)==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xc6\xbe\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd""ALS\xef\xbf\xbd\xcf\xa5\xef\xbf\xbd)==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Movement|Data" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAmount_MetaData[] = {
		{ "Category", "Movement|Data" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMovementInput_MetaData[] = {
		{ "Category", "Movement|Data" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnALSStateChanged_MetaData[] = {
		{ "Category", "Movement|ALS Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==ALS\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==ALS\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnALSGaitChanged_MetaData[] = {
		{ "Category", "Movement|ALS Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementDataUpdated_MetaData[] = {
		{ "Category", "Movement|ALS Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementModeChanged_MetaData[] = {
		{ "Category", "Movement|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==\xef\xbf\xbd\xec\xa6\xb3\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd==\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==\xef\xbf\xbd\xec\xa6\xb3\xef\xbf\xbd\xc6\xa5\xef\xbf\xbd==" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResourceChanged_MetaData[] = {
		{ "Category", "Movement|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResourceDepleted_MetaData[] = {
		{ "Category", "Movement|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartMove_MetaData[] = {
		{ "Category", "Movement|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStopMove_MetaData[] = {
		{ "Category", "Movement|Events" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/EnhancedMovementSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMovementMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ALSMovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ALSMovementState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGait;
	static void NewProp_bUseALSIntergration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseALSIntergration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMovementResource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMovementResource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingResourceRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningResourceRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintingResourceRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResourceRecoverRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridMoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInputAmount;
	static void NewProp_bHasMovementInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMovementInput;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnALSStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnALSGaitChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementDataUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementModeChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResourceChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResourceDepleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartMove;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_CalculateMaxRange, "CalculateMaxRange" }, // 2904488954
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_CanMove, "CanMove" }, // 1776876492
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_GetCurrentSpeedBaseOnGait, "GetCurrentSpeedBaseOnGait" }, // 3902292335
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_GetMovementInput, "GetMovementInput" }, // 2408941419
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_GetResourcePercent, "GetResourcePercent" }, // 246537594
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_IsInDynamicMovement, "IsInDynamicMovement" }, // 1513362433
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_ProcessMovementInput, "ProcessMovementInput" }, // 3336613251
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_ResetResource, "ResetResource" }, // 2636154985
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_SetALSGait, "SetALSGait" }, // 964056283
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_SetALSMovementState, "SetALSMovementState" }, // 1160943045
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_ShouldSPrint, "ShouldSPrint" }, // 1063860492
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_StartDynamicMovement, "StartDynamicMovement" }, // 2178499136
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_StopDynamicMovement, "StopDynamicMovement" }, // 3630249663
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_SwitchMovementMode, "SwitchMovementMode" }, // 2750490238
		{ &Z_Construct_UFunction_UEnhancedMovementSystem_UpdateMovementDate, "UpdateMovementDate" }, // 1233559346
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedMovementSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentMovementMode = { "CurrentMovementMode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, CurrentMovementMode), Z_Construct_UEnum_ProjectGate_ECustomMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementMode_MetaData), NewProp_CurrentMovementMode_MetaData) }; // 675425914
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_ALSMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_ALSMovementState = { "ALSMovementState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, ALSMovementState), Z_Construct_UEnum_ProjectGate_EALSMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ALSMovementState_MetaData), NewProp_ALSMovementState_MetaData) }; // 2590882309
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentGait = { "CurrentGait", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, CurrentGait), Z_Construct_UEnum_ProjectGate_EALSGait, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGait_MetaData), NewProp_CurrentGait_MetaData) }; // 789325205
void Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_bUseALSIntergration_SetBit(void* Obj)
{
	((UEnhancedMovementSystem*)Obj)->bUseALSIntergration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_bUseALSIntergration = { "bUseALSIntergration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnhancedMovementSystem), &Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_bUseALSIntergration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseALSIntergration_MetaData), NewProp_bUseALSIntergration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_WalkSpeedThreshold = { "WalkSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, WalkSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeedThreshold_MetaData), NewProp_WalkSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_RunSpeedThreshold = { "RunSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, RunSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeedThreshold_MetaData), NewProp_RunSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_SprintSpeedThreshold = { "SprintSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, SprintSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedThreshold_MetaData), NewProp_SprintSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_MaxMovementResource = { "MaxMovementResource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, MaxMovementResource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMovementResource_MetaData), NewProp_MaxMovementResource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentMovementResource = { "CurrentMovementResource", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, CurrentMovementResource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementResource_MetaData), NewProp_CurrentMovementResource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_WalkingResourceRate = { "WalkingResourceRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, WalkingResourceRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingResourceRate_MetaData), NewProp_WalkingResourceRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_RunningResourceRate = { "RunningResourceRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, RunningResourceRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningResourceRate_MetaData), NewProp_RunningResourceRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_SprintingResourceRate = { "SprintingResourceRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, SprintingResourceRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintingResourceRate_MetaData), NewProp_SprintingResourceRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_ResourceRecoverRate = { "ResourceRecoverRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, ResourceRecoverRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceRecoverRate_MetaData), NewProp_ResourceRecoverRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_DynamicMoveSpeed = { "DynamicMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, DynamicMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMoveSpeed_MetaData), NewProp_DynamicMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_GridMoveSpeed = { "GridMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, GridMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMoveSpeed_MetaData), NewProp_GridMoveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_LastVelocity = { "LastVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, LastVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastVelocity_MetaData), NewProp_LastVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_MovementInputAmount = { "MovementInputAmount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, MovementInputAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementInputAmount_MetaData), NewProp_MovementInputAmount_MetaData) };
void Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_bHasMovementInput_SetBit(void* Obj)
{
	((UEnhancedMovementSystem*)Obj)->bHasMovementInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_bHasMovementInput = { "bHasMovementInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnhancedMovementSystem), &Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_bHasMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMovementInput_MetaData), NewProp_bHasMovementInput_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnALSStateChanged = { "OnALSStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OnALSStateChanged), Z_Construct_UDelegateFunction_ProjectGate_OnALSStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnALSStateChanged_MetaData), NewProp_OnALSStateChanged_MetaData) }; // 1732439073
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnALSGaitChanged = { "OnALSGaitChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OnALSGaitChanged), Z_Construct_UDelegateFunction_ProjectGate_OnALSGaitChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnALSGaitChanged_MetaData), NewProp_OnALSGaitChanged_MetaData) }; // 1959515539
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnMovementDataUpdated = { "OnMovementDataUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OnMovementDataUpdated), Z_Construct_UDelegateFunction_ProjectGate_OnMovementDataUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovementDataUpdated_MetaData), NewProp_OnMovementDataUpdated_MetaData) }; // 2261117674
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnMovementModeChanged = { "OnMovementModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OnMovementModeChanged), Z_Construct_UDelegateFunction_ProjectGate_OnMovementModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovementModeChanged_MetaData), NewProp_OnMovementModeChanged_MetaData) }; // 3882286077
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnResourceChanged = { "OnResourceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OnResourceChanged), Z_Construct_UDelegateFunction_ProjectGate_OnResourceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResourceChanged_MetaData), NewProp_OnResourceChanged_MetaData) }; // 2486252671
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnResourceDepleted = { "OnResourceDepleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OnResourceDepleted), Z_Construct_UDelegateFunction_ProjectGate_OnResourceDepleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResourceDepleted_MetaData), NewProp_OnResourceDepleted_MetaData) }; // 471144130
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnStartMove = { "OnStartMove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OnStartMove), Z_Construct_UDelegateFunction_ProjectGate_OnStartMove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartMove_MetaData), NewProp_OnStartMove_MetaData) }; // 766765884
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnStopMove = { "OnStopMove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OnStopMove), Z_Construct_UDelegateFunction_ProjectGate_OnStopMove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStopMove_MetaData), NewProp_OnStopMove_MetaData) }; // 827298695
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedMovementSystem, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedMovementSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentMovementMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_ALSMovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_ALSMovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_bUseALSIntergration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_WalkSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_RunSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_SprintSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_MaxMovementResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_CurrentMovementResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_WalkingResourceRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_RunningResourceRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_SprintingResourceRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_ResourceRecoverRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_DynamicMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_GridMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_LastVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_MovementInputAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_bHasMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnALSStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnALSGaitChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnMovementDataUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnMovementModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnResourceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnResourceDepleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnStartMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OnStopMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedMovementSystem_Statics::NewProp_MovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedMovementSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedMovementSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedMovementSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedMovementSystem_Statics::ClassParams = {
	&UEnhancedMovementSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnhancedMovementSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedMovementSystem_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedMovementSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedMovementSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedMovementSystem()
{
	if (!Z_Registration_Info_UClass_UEnhancedMovementSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedMovementSystem.OuterSingleton, Z_Construct_UClass_UEnhancedMovementSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedMovementSystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedMovementSystem);
UEnhancedMovementSystem::~UEnhancedMovementSystem() {}
// ********** End Class UEnhancedMovementSystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EALSMovementState_StaticEnum, TEXT("EALSMovementState"), &Z_Registration_Info_UEnum_EALSMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2590882309U) },
		{ EALSGait_StaticEnum, TEXT("EALSGait"), &Z_Registration_Info_UEnum_EALSGait, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 789325205U) },
		{ ECustomMovementMode_StaticEnum, TEXT("ECustomMovementMode"), &Z_Registration_Info_UEnum_ECustomMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 675425914U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedMovementSystem, UEnhancedMovementSystem::StaticClass, TEXT("UEnhancedMovementSystem"), &Z_Registration_Info_UClass_UEnhancedMovementSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedMovementSystem), 2097349203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h__Script_ProjectGate_1543758778(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_EnhancedMovementSystem_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
