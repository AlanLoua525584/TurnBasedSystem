// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/Movement/MovementStateManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementStateManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UEnhancedMovementSystem_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridMovementComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UMovementStateManager();
PROJECTGATE_API UClass* Z_Construct_UClass_UMovementStateManager_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EMovementSystemType();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMovementSystemType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementSystemType;
static UEnum* EMovementSystemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementSystemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementSystemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EMovementSystemType, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EMovementSystemType"));
	}
	return Z_Registration_Info_UEnum_EMovementSystemType.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EMovementSystemType>()
{
	return EMovementSystemType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EMovementSystemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AIMovement.Name", "EMovementSystemType::AIMovement" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "DynamicMovement.Name", "EMovementSystemType::DynamicMovement" },
		{ "GridMovement.Name", "EMovementSystemType::GridMovement" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
		{ "None.Name", "EMovementSystemType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementSystemType::None", (int64)EMovementSystemType::None },
		{ "EMovementSystemType::GridMovement", (int64)EMovementSystemType::GridMovement },
		{ "EMovementSystemType::DynamicMovement", (int64)EMovementSystemType::DynamicMovement },
		{ "EMovementSystemType::AIMovement", (int64)EMovementSystemType::AIMovement },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EMovementSystemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EMovementSystemType",
	"EMovementSystemType",
	Z_Construct_UEnum_ProjectGate_EMovementSystemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EMovementSystemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EMovementSystemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EMovementSystemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EMovementSystemType()
{
	if (!Z_Registration_Info_UEnum_EMovementSystemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementSystemType.InnerSingleton, Z_Construct_UEnum_ProjectGate_EMovementSystemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementSystemType.InnerSingleton;
}
// ********** End Enum EMovementSystemType *********************************************************

// ********** Begin Delegate FNewOnMovementStateChanged ********************************************
struct Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventNewOnMovementStateChanged_Parms
	{
		EMovementSystemType SystemType;
		bool bIsActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xaa\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xdc\xa7\xef\xbf\xbd""e\xef\xbf\xbdU\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xaa\xef\xbf\xbd\xef\xbf\xbd""A\xef\xbf\xbd\xdc\xa7\xef\xbf\xbd""e\xef\xbf\xbdU" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SystemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemType;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::NewProp_SystemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::NewProp_SystemType = { "SystemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventNewOnMovementStateChanged_Parms, SystemType), Z_Construct_UEnum_ProjectGate_EMovementSystemType, METADATA_PARAMS(0, nullptr) }; // 2423051009
void Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((_Script_ProjectGate_eventNewOnMovementStateChanged_Parms*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectGate_eventNewOnMovementStateChanged_Parms), &Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::NewProp_SystemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::NewProp_SystemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "NewOnMovementStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventNewOnMovementStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::_Script_ProjectGate_eventNewOnMovementStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNewOnMovementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& NewOnMovementStateChanged, EMovementSystemType SystemType, bool bIsActive)
{
	struct _Script_ProjectGate_eventNewOnMovementStateChanged_Parms
	{
		EMovementSystemType SystemType;
		bool bIsActive;
	};
	_Script_ProjectGate_eventNewOnMovementStateChanged_Parms Parms;
	Parms.SystemType=SystemType;
	Parms.bIsActive=bIsActive ? true : false;
	NewOnMovementStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FNewOnMovementStateChanged **********************************************

// ********** Begin Class UMovementStateManager Function ActivateMovementSystem ********************
struct Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics
{
	struct MovementStateManager_eventActivateMovementSystem_Parms
	{
		EMovementSystemType SystemType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd""E\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xce\xa1]\xef\xbf\xbd|\xef\xbf\xbd\xdb\xb0\xca\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdL\xef\xbf\xbdt\xef\xbf\xbd\xce\xa1^\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""E\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xce\xa1]\xef\xbf\xbd|\xef\xbf\xbd\xdb\xb0\xca\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdL\xef\xbf\xbdt\xef\xbf\xbd\xce\xa1^" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SystemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::NewProp_SystemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::NewProp_SystemType = { "SystemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementStateManager_eventActivateMovementSystem_Parms, SystemType), Z_Construct_UEnum_ProjectGate_EMovementSystemType, METADATA_PARAMS(0, nullptr) }; // 2423051009
void Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementStateManager_eventActivateMovementSystem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementStateManager_eventActivateMovementSystem_Parms), &Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::NewProp_SystemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::NewProp_SystemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementStateManager, nullptr, "ActivateMovementSystem", Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::MovementStateManager_eventActivateMovementSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::MovementStateManager_eventActivateMovementSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementStateManager::execActivateMovementSystem)
{
	P_GET_ENUM(EMovementSystemType,Z_Param_SystemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActivateMovementSystem(EMovementSystemType(Z_Param_SystemType));
	P_NATIVE_END;
}
// ********** End Class UMovementStateManager Function ActivateMovementSystem **********************

// ********** Begin Class UMovementStateManager Function GetActiveMovementSystem *******************
struct Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics
{
	struct MovementStateManager_eventGetActiveMovementSystem_Parms
	{
		EMovementSystemType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd""d\xef\xbf\xbd\xdf\xb7\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""d\xef\xbf\xbd\xdf\xb7\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementStateManager_eventGetActiveMovementSystem_Parms, ReturnValue), Z_Construct_UEnum_ProjectGate_EMovementSystemType, METADATA_PARAMS(0, nullptr) }; // 2423051009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementStateManager, nullptr, "GetActiveMovementSystem", Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::MovementStateManager_eventGetActiveMovementSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::MovementStateManager_eventGetActiveMovementSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementStateManager::execGetActiveMovementSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMovementSystemType*)Z_Param__Result=P_THIS->GetActiveMovementSystem();
	P_NATIVE_END;
}
// ********** End Class UMovementStateManager Function GetActiveMovementSystem *********************

// ********** Begin Class UMovementStateManager Function HaltAllMovement ***************************
struct Z_Construct_UFunction_UMovementStateManager_HaltAllMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementStateManager_HaltAllMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementStateManager, nullptr, "HaltAllMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_HaltAllMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementStateManager_HaltAllMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMovementStateManager_HaltAllMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementStateManager_HaltAllMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementStateManager::execHaltAllMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HaltAllMovement();
	P_NATIVE_END;
}
// ********** End Class UMovementStateManager Function HaltAllMovement *****************************

// ********** Begin Class UMovementStateManager Function HaltMovementSystem ************************
struct Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics
{
	struct MovementStateManager_eventHaltMovementSystem_Parms
	{
		EMovementSystemType SystemType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdS\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa8t\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SystemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::NewProp_SystemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::NewProp_SystemType = { "SystemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementStateManager_eventHaltMovementSystem_Parms, SystemType), Z_Construct_UEnum_ProjectGate_EMovementSystemType, METADATA_PARAMS(0, nullptr) }; // 2423051009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::NewProp_SystemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::NewProp_SystemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementStateManager, nullptr, "HaltMovementSystem", Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::MovementStateManager_eventHaltMovementSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::MovementStateManager_eventHaltMovementSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementStateManager::execHaltMovementSystem)
{
	P_GET_ENUM(EMovementSystemType,Z_Param_SystemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HaltMovementSystem(EMovementSystemType(Z_Param_SystemType));
	P_NATIVE_END;
}
// ********** End Class UMovementStateManager Function HaltMovementSystem **************************

// ********** Begin Class UMovementStateManager Function IsMovementSystemActive ********************
struct Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics
{
	struct MovementStateManager_eventIsMovementSystemActive_Parms
	{
		EMovementSystemType SystemType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xac""d\xef\xbf\xbdS\xef\xbf\xbdw\xef\xbf\xbdt\xef\xbf\xbd\xce\xacO\xef\xbf\xbd_\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xac""d\xef\xbf\xbdS\xef\xbf\xbdw\xef\xbf\xbdt\xef\xbf\xbd\xce\xacO\xef\xbf\xbd_\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SystemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::NewProp_SystemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::NewProp_SystemType = { "SystemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementStateManager_eventIsMovementSystemActive_Parms, SystemType), Z_Construct_UEnum_ProjectGate_EMovementSystemType, METADATA_PARAMS(0, nullptr) }; // 2423051009
void Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementStateManager_eventIsMovementSystemActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementStateManager_eventIsMovementSystemActive_Parms), &Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::NewProp_SystemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::NewProp_SystemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementStateManager, nullptr, "IsMovementSystemActive", Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::MovementStateManager_eventIsMovementSystemActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::MovementStateManager_eventIsMovementSystemActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementStateManager::execIsMovementSystemActive)
{
	P_GET_ENUM(EMovementSystemType,Z_Param_SystemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMovementSystemActive(EMovementSystemType(Z_Param_SystemType));
	P_NATIVE_END;
}
// ********** End Class UMovementStateManager Function IsMovementSystemActive **********************

// ********** Begin Class UMovementStateManager Function SynchronizeMovementStates *****************
struct Z_Construct_UFunction_UMovementStateManager_SynchronizeMovementStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdP\xef\xbf\xbd""B\xef\xbf\xbd\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb2\xd5\xa5\xf3\xaa\xac\xba""A\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdP\xef\xbf\xbd""B\xef\xbf\xbd\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb2\xd5\xa5\xf3\xaa\xac\xba""A" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementStateManager_SynchronizeMovementStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementStateManager, nullptr, "SynchronizeMovementStates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementStateManager_SynchronizeMovementStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementStateManager_SynchronizeMovementStates_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMovementStateManager_SynchronizeMovementStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementStateManager_SynchronizeMovementStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementStateManager::execSynchronizeMovementStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SynchronizeMovementStates();
	P_NATIVE_END;
}
// ********** End Class UMovementStateManager Function SynchronizeMovementStates *******************

// ********** Begin Class UMovementStateManager ****************************************************
void UMovementStateManager::StaticRegisterNativesUMovementStateManager()
{
	UClass* Class = UMovementStateManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateMovementSystem", &UMovementStateManager::execActivateMovementSystem },
		{ "GetActiveMovementSystem", &UMovementStateManager::execGetActiveMovementSystem },
		{ "HaltAllMovement", &UMovementStateManager::execHaltAllMovement },
		{ "HaltMovementSystem", &UMovementStateManager::execHaltMovementSystem },
		{ "IsMovementSystemActive", &UMovementStateManager::execIsMovementSystemActive },
		{ "SynchronizeMovementStates", &UMovementStateManager::execSynchronizeMovementStates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMovementStateManager;
UClass* UMovementStateManager::GetPrivateStaticClass()
{
	using TClass = UMovementStateManager;
	if (!Z_Registration_Info_UClass_UMovementStateManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovementStateManager"),
			Z_Registration_Info_UClass_UMovementStateManager.InnerSingleton,
			StaticRegisterNativesUMovementStateManager,
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
	return Z_Registration_Info_UClass_UMovementStateManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovementStateManager_NoRegister()
{
	return UMovementStateManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovementStateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnBasedSystem/Components/Movement/MovementStateManager.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOnMovementStateChanged_MetaData[] = {
		{ "Category", "Movement State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xc6\xa5\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xc6\xa5\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMovement_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdw\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\xde\xa5\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdw\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\xde\xa5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementStateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewOnMovementStateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovementStateManager_ActivateMovementSystem, "ActivateMovementSystem" }, // 4202813111
		{ &Z_Construct_UFunction_UMovementStateManager_GetActiveMovementSystem, "GetActiveMovementSystem" }, // 4034041380
		{ &Z_Construct_UFunction_UMovementStateManager_HaltAllMovement, "HaltAllMovement" }, // 3976125072
		{ &Z_Construct_UFunction_UMovementStateManager_HaltMovementSystem, "HaltMovementSystem" }, // 956416326
		{ &Z_Construct_UFunction_UMovementStateManager_IsMovementSystemActive, "IsMovementSystemActive" }, // 2030092015
		{ &Z_Construct_UFunction_UMovementStateManager_SynchronizeMovementStates, "SynchronizeMovementStates" }, // 3099000264
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementStateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovementStateManager_Statics::NewProp_NewOnMovementStateChanged = { "NewOnMovementStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementStateManager, NewOnMovementStateChanged), Z_Construct_UDelegateFunction_ProjectGate_NewOnMovementStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOnMovementStateChanged_MetaData), NewProp_NewOnMovementStateChanged_MetaData) }; // 77670327
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementStateManager_Statics::NewProp_GridMovement = { "GridMovement", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementStateManager, GridMovement), Z_Construct_UClass_UGridMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMovement_MetaData), NewProp_GridMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementStateManager_Statics::NewProp_DynamicMovement = { "DynamicMovement", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementStateManager, DynamicMovement), Z_Construct_UClass_UEnhancedMovementSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMovement_MetaData), NewProp_DynamicMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementStateManager_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementStateManager, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovement_MetaData), NewProp_CharacterMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovementStateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementStateManager_Statics::NewProp_NewOnMovementStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementStateManager_Statics::NewProp_GridMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementStateManager_Statics::NewProp_DynamicMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementStateManager_Statics::NewProp_CharacterMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementStateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovementStateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementStateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementStateManager_Statics::ClassParams = {
	&UMovementStateManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovementStateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovementStateManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementStateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementStateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementStateManager()
{
	if (!Z_Registration_Info_UClass_UMovementStateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementStateManager.OuterSingleton, Z_Construct_UClass_UMovementStateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementStateManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementStateManager);
UMovementStateManager::~UMovementStateManager() {}
// ********** End Class UMovementStateManager ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementSystemType_StaticEnum, TEXT("EMovementSystemType"), &Z_Registration_Info_UEnum_EMovementSystemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2423051009U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementStateManager, UMovementStateManager::StaticClass, TEXT("UMovementStateManager"), &Z_Registration_Info_UClass_UMovementStateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementStateManager), 1524462207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h__Script_ProjectGate_315652428(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementStateManager_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
