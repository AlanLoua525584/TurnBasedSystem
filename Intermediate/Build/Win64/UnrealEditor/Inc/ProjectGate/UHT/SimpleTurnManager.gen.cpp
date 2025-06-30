// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/SimpleTurnManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSimpleTurnManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager();
PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ETurnPhase();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETurnPhase ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurnPhase;
static UEnum* ETurnPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETurnPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETurnPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_ETurnPhase, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("ETurnPhase"));
	}
	return Z_Registration_Info_UEnum_ETurnPhase.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<ETurnPhase>()
{
	return ETurnPhase_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_ETurnPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ThreePhasesInTurn*/" },
#endif
		{ "MainPhase.DisplayName", "MainPhase" },
		{ "MainPhase.Name", "ETurnPhase::MainPhase" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ThreePhasesInTurn" },
#endif
		{ "TurnEnd.DisplayName", "Turn End" },
		{ "TurnEnd.Name", "ETurnPhase::TurnEnd" },
		{ "TurnStart.DisplayName", "Turn Start" },
		{ "TurnStart.Name", "ETurnPhase::TurnStart" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETurnPhase::TurnStart", (int64)ETurnPhase::TurnStart },
		{ "ETurnPhase::MainPhase", (int64)ETurnPhase::MainPhase },
		{ "ETurnPhase::TurnEnd", (int64)ETurnPhase::TurnEnd },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_ETurnPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"ETurnPhase",
	"ETurnPhase",
	Z_Construct_UEnum_ProjectGate_ETurnPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ETurnPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_ETurnPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_ETurnPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_ETurnPhase()
{
	if (!Z_Registration_Info_UEnum_ETurnPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurnPhase.InnerSingleton, Z_Construct_UEnum_ProjectGate_ETurnPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETurnPhase.InnerSingleton;
}
// ********** End Enum ETurnPhase ******************************************************************

// ********** Begin Delegate FOnTurnChanged ********************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnTurnChanged_Parms
	{
		AActor* CurrentCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnTurnChanged_Parms, CurrentCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::NewProp_CurrentCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnTurnChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnTurnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnTurnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTurnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnChanged, AActor* CurrentCharacter)
{
	struct _Script_ProjectGate_eventOnTurnChanged_Parms
	{
		AActor* CurrentCharacter;
	};
	_Script_ProjectGate_eventOnTurnChanged_Parms Parms;
	Parms.CurrentCharacter=CurrentCharacter;
	OnTurnChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTurnChanged **********************************************************

// ********** Begin Delegate FOnPhaseChanged *******************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnPhaseChanged_Parms
	{
		AActor* CurrentCharacter;
		ETurnPhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnPhaseChanged_Parms, CurrentCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnPhaseChanged_Parms, NewPhase), Z_Construct_UEnum_ProjectGate_ETurnPhase, METADATA_PARAMS(0, nullptr) }; // 1421385386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::NewProp_CurrentCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnPhaseChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnPhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnPhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseChanged, AActor* CurrentCharacter, ETurnPhase NewPhase)
{
	struct _Script_ProjectGate_eventOnPhaseChanged_Parms
	{
		AActor* CurrentCharacter;
		ETurnPhase NewPhase;
	};
	_Script_ProjectGate_eventOnPhaseChanged_Parms Parms;
	Parms.CurrentCharacter=CurrentCharacter;
	Parms.NewPhase=NewPhase;
	OnPhaseChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPhaseChanged *********************************************************

// ********** Begin Class ASimpleTurnManager Function AddCharacter *********************************
struct Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics
{
	struct SimpleTurnManager_eventAddCharacter_Parms
	{
		AActor* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventAddCharacter_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "AddCharacter", Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::SimpleTurnManager_eventAddCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::SimpleTurnManager_eventAddCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_AddCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_AddCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execAddCharacter)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCharacter(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function AddCharacter ***********************************

// ********** Begin Class ASimpleTurnManager Function GetCurrentCharacterIndex *********************
struct Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics
{
	struct SimpleTurnManager_eventGetCurrentCharacterIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventGetCurrentCharacterIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "GetCurrentCharacterIndex", Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::SimpleTurnManager_eventGetCurrentCharacterIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::SimpleTurnManager_eventGetCurrentCharacterIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execGetCurrentCharacterIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentCharacterIndex();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function GetCurrentCharacterIndex ***********************

// ********** Begin Class ASimpleTurnManager Function GetCurrentPhase ******************************
struct Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics
{
	struct SimpleTurnManager_eventGetCurrentPhase_Parms
	{
		ETurnPhase ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*GetCurrentPhase*/" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentPhase" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventGetCurrentPhase_Parms, ReturnValue), Z_Construct_UEnum_ProjectGate_ETurnPhase, METADATA_PARAMS(0, nullptr) }; // 1421385386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "GetCurrentPhase", Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::SimpleTurnManager_eventGetCurrentPhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::SimpleTurnManager_eventGetCurrentPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execGetCurrentPhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETurnPhase*)Z_Param__Result=P_THIS->GetCurrentPhase();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function GetCurrentPhase ********************************

// ********** Begin Class ASimpleTurnManager Function GetCurrentTurnCharacter **********************
struct Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics
{
	struct SimpleTurnManager_eventGetCurrentTurnCharacter_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventGetCurrentTurnCharacter_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "GetCurrentTurnCharacter", Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::SimpleTurnManager_eventGetCurrentTurnCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::SimpleTurnManager_eventGetCurrentTurnCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execGetCurrentTurnCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCurrentTurnCharacter();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function GetCurrentTurnCharacter ************************

// ********** Begin Class ASimpleTurnManager Function GetTurnCount *********************************
struct Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics
{
	struct SimpleTurnManager_eventGetTurnCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*GetTurnCont*/" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetTurnCont" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventGetTurnCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "GetTurnCount", Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::SimpleTurnManager_eventGetTurnCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::SimpleTurnManager_eventGetTurnCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execGetTurnCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTurnCount();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function GetTurnCount ***********************************

// ********** Begin Class ASimpleTurnManager Function GetTurnOrder *********************************
struct Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics
{
	struct SimpleTurnManager_eventGetTurnOrder_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventGetTurnOrder_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "GetTurnOrder", Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::SimpleTurnManager_eventGetTurnOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::SimpleTurnManager_eventGetTurnOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execGetTurnOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetTurnOrder();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function GetTurnOrder ***********************************

// ********** Begin Class ASimpleTurnManager Function NextPhase ************************************
struct Z_Construct_UFunction_ASimpleTurnManager_NextPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*EnterNextPhase*/" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EnterNextPhase" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_NextPhase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "NextPhase", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_NextPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_NextPhase_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASimpleTurnManager_NextPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_NextPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execNextPhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextPhase();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function NextPhase **************************************

// ********** Begin Class ASimpleTurnManager Function NextTurn *************************************
struct Z_Construct_UFunction_ASimpleTurnManager_NextTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_NextTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "NextTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_NextTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_NextTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASimpleTurnManager_NextTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_NextTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execNextTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextTurn();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function NextTurn ***************************************

// ********** Begin Class ASimpleTurnManager Function PossessCurrentTurnCharacter ******************
struct Z_Construct_UFunction_ASimpleTurnManager_PossessCurrentTurnCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd PlayerController Possess \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd PlayerController Possess \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd^\xef\xbf\xbdX\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_PossessCurrentTurnCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "PossessCurrentTurnCharacter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_PossessCurrentTurnCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_PossessCurrentTurnCharacter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASimpleTurnManager_PossessCurrentTurnCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_PossessCurrentTurnCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execPossessCurrentTurnCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PossessCurrentTurnCharacter();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function PossessCurrentTurnCharacter ********************

// ********** Begin Class ASimpleTurnManager Function StartBattle **********************************
struct Z_Construct_UFunction_ASimpleTurnManager_StartBattle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_StartBattle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "StartBattle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_StartBattle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_StartBattle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASimpleTurnManager_StartBattle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_StartBattle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execStartBattle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBattle();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function StartBattle ************************************

// ********** Begin Class ASimpleTurnManager *******************************************************
void ASimpleTurnManager::StaticRegisterNativesASimpleTurnManager()
{
	UClass* Class = ASimpleTurnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCharacter", &ASimpleTurnManager::execAddCharacter },
		{ "GetCurrentCharacterIndex", &ASimpleTurnManager::execGetCurrentCharacterIndex },
		{ "GetCurrentPhase", &ASimpleTurnManager::execGetCurrentPhase },
		{ "GetCurrentTurnCharacter", &ASimpleTurnManager::execGetCurrentTurnCharacter },
		{ "GetTurnCount", &ASimpleTurnManager::execGetTurnCount },
		{ "GetTurnOrder", &ASimpleTurnManager::execGetTurnOrder },
		{ "NextPhase", &ASimpleTurnManager::execNextPhase },
		{ "NextTurn", &ASimpleTurnManager::execNextTurn },
		{ "PossessCurrentTurnCharacter", &ASimpleTurnManager::execPossessCurrentTurnCharacter },
		{ "StartBattle", &ASimpleTurnManager::execStartBattle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASimpleTurnManager;
UClass* ASimpleTurnManager::GetPrivateStaticClass()
{
	using TClass = ASimpleTurnManager;
	if (!Z_Registration_Info_UClass_ASimpleTurnManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SimpleTurnManager"),
			Z_Registration_Info_UClass_ASimpleTurnManager.InnerSingleton,
			StaticRegisterNativesASimpleTurnManager,
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
	return Z_Registration_Info_UClass_ASimpleTurnManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister()
{
	return ASimpleTurnManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASimpleTurnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TurnBasedSystem/SimpleTurnManager.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnChanged_MetaData[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPhaseChanged_MetaData[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*StoreAllCharacter*/" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StoreAllCharacter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhaseChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TurnOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimpleTurnManager_AddCharacter, "AddCharacter" }, // 907563401
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex, "GetCurrentCharacterIndex" }, // 958147449
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase, "GetCurrentPhase" }, // 830492570
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter, "GetCurrentTurnCharacter" }, // 1965766587
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount, "GetTurnCount" }, // 1215446228
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder, "GetTurnOrder" }, // 2779018252
		{ &Z_Construct_UFunction_ASimpleTurnManager_NextPhase, "NextPhase" }, // 3175668522
		{ &Z_Construct_UFunction_ASimpleTurnManager_NextTurn, "NextTurn" }, // 4041743731
		{ &Z_Construct_UFunction_ASimpleTurnManager_PossessCurrentTurnCharacter, "PossessCurrentTurnCharacter" }, // 3713163859
		{ &Z_Construct_UFunction_ASimpleTurnManager_StartBattle, "StartBattle" }, // 3802053970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleTurnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnTurnChanged = { "OnTurnChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, OnTurnChanged), Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnChanged_MetaData), NewProp_OnTurnChanged_MetaData) }; // 900040657
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnPhaseChanged = { "OnPhaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, OnPhaseChanged), Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPhaseChanged_MetaData), NewProp_OnPhaseChanged_MetaData) }; // 1595082495
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrder_Inner = { "TurnOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrder = { "TurnOrder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, TurnOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrder_MetaData), NewProp_TurnOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimpleTurnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnTurnChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnPhaseChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleTurnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASimpleTurnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleTurnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimpleTurnManager_Statics::ClassParams = {
	&ASimpleTurnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASimpleTurnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleTurnManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleTurnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimpleTurnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimpleTurnManager()
{
	if (!Z_Registration_Info_UClass_ASimpleTurnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimpleTurnManager.OuterSingleton, Z_Construct_UClass_ASimpleTurnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimpleTurnManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleTurnManager);
ASimpleTurnManager::~ASimpleTurnManager() {}
// ********** End Class ASimpleTurnManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETurnPhase_StaticEnum, TEXT("ETurnPhase"), &Z_Registration_Info_UEnum_ETurnPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1421385386U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimpleTurnManager, ASimpleTurnManager::StaticClass, TEXT("ASimpleTurnManager"), &Z_Registration_Info_UClass_ASimpleTurnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimpleTurnManager), 1508254522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_1677566926(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
