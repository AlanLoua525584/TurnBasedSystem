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
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderCalculator_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderConfig_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ETurnPhase();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature();
PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature();
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

// ********** Begin Delegate FOnBattleEnded ********************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnBattleEnded_Parms
	{
		bool bPlayerWon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x88\xb0\xe9\xac\xa5\xe7\xb5\x90\xe6\x9d\x9f\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\xb0\xe9\xac\xa5\xe7\xb5\x90\xe6\x9d\x9f\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPlayerWon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerWon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::NewProp_bPlayerWon_SetBit(void* Obj)
{
	((_Script_ProjectGate_eventOnBattleEnded_Parms*)Obj)->bPlayerWon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::NewProp_bPlayerWon = { "bPlayerWon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectGate_eventOnBattleEnded_Parms), &Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::NewProp_bPlayerWon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::NewProp_bPlayerWon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnBattleEnded__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::_Script_ProjectGate_eventOnBattleEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::_Script_ProjectGate_eventOnBattleEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBattleEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBattleEnded, bool bPlayerWon)
{
	struct _Script_ProjectGate_eventOnBattleEnded_Parms
	{
		bool bPlayerWon;
	};
	_Script_ProjectGate_eventOnBattleEnded_Parms Parms;
	Parms.bPlayerWon=bPlayerWon ? true : false;
	OnBattleEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBattleEnded **********************************************************

// ********** Begin Delegate FOnTurnOrderChanged ***************************************************
struct Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics
{
	struct _Script_ProjectGate_eventOnTurnOrderChanged_Parms
	{
		TArray<AActor*> NewOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::NewProp_NewOrder_Inner = { "NewOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::NewProp_NewOrder = { "NewOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectGate_eventOnTurnOrderChanged_Parms, NewOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOrder_MetaData), NewProp_NewOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::NewProp_NewOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::NewProp_NewOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectGate, nullptr, "OnTurnOrderChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnTurnOrderChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::_Script_ProjectGate_eventOnTurnOrderChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTurnOrderChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnOrderChanged, TArray<AActor*> const& NewOrder)
{
	struct _Script_ProjectGate_eventOnTurnOrderChanged_Parms
	{
		TArray<AActor*> NewOrder;
	};
	_Script_ProjectGate_eventOnTurnOrderChanged_Parms Parms;
	Parms.NewOrder=NewOrder;
	OnTurnOrderChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTurnOrderChanged *****************************************************

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

// ********** Begin Class ASimpleTurnManager Function ApplyTurnOrderConfig *************************
struct Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics
{
	struct SimpleTurnManager_eventApplyTurnOrderConfig_Parms
	{
		UTurnOrderConfig* Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventApplyTurnOrderConfig_Parms, Config), Z_Construct_UClass_UTurnOrderConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "ApplyTurnOrderConfig", Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::SimpleTurnManager_eventApplyTurnOrderConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::SimpleTurnManager_eventApplyTurnOrderConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execApplyTurnOrderConfig)
{
	P_GET_OBJECT(UTurnOrderConfig,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyTurnOrderConfig(Z_Param_Config);
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function ApplyTurnOrderConfig ***************************

// ********** Begin Class ASimpleTurnManager Function CheckBattleEnd *******************************
struct Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics
{
	struct SimpleTurnManager_eventCheckBattleEnd_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xaa\xa2\xe6\x9f\xa5\xe6\x88\xb0\xe9\xac\xa5\xe6\x98\xaf\xe5\x90\xa6\xe7\xb5\x90\xe6\x9d\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaa\xa2\xe6\x9f\xa5\xe6\x88\xb0\xe9\xac\xa5\xe6\x98\xaf\xe5\x90\xa6\xe7\xb5\x90\xe6\x9d\x9f" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleTurnManager_eventCheckBattleEnd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleTurnManager_eventCheckBattleEnd_Parms), &Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "CheckBattleEnd", Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::SimpleTurnManager_eventCheckBattleEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::SimpleTurnManager_eventCheckBattleEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execCheckBattleEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckBattleEnd();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function CheckBattleEnd *********************************

// ********** Begin Class ASimpleTurnManager Function DelayCharacterTurn ***************************
struct Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics
{
	struct SimpleTurnManager_eventDelayCharacterTurn_Parms
	{
		AActor* Character;
		int32 DelayTurns;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbb\xb6\xe9\x81\xb2\xe6\x9f\x90\xe5\x80\x8b\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe8\xa1\x8c\xe5\x8b\x95\n" },
#endif
		{ "CPP_Default_DelayTurns", "1" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xb6\xe9\x81\xb2\xe6\x9f\x90\xe5\x80\x8b\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe8\xa1\x8c\xe5\x8b\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DelayTurns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventDelayCharacterTurn_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::NewProp_DelayTurns = { "DelayTurns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventDelayCharacterTurn_Parms, DelayTurns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::NewProp_DelayTurns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "DelayCharacterTurn", Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::SimpleTurnManager_eventDelayCharacterTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::SimpleTurnManager_eventDelayCharacterTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execDelayCharacterTurn)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_GET_PROPERTY(FIntProperty,Z_Param_DelayTurns);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DelayCharacterTurn(Z_Param_Character,Z_Param_DelayTurns);
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function DelayCharacterTurn *****************************

// ********** Begin Class ASimpleTurnManager Function GetAliveCharacterCount ***********************
struct Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics
{
	struct SimpleTurnManager_eventGetAliveCharacterCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8d\xb2\xe5\x8f\x96\xe5\xad\x98\xe6\xb4\xbb\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb8\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8d\xb2\xe5\x8f\x96\xe5\xad\x98\xe6\xb4\xbb\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb8\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventGetAliveCharacterCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "GetAliveCharacterCount", Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::SimpleTurnManager_eventGetAliveCharacterCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::SimpleTurnManager_eventGetAliveCharacterCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execGetAliveCharacterCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAliveCharacterCount();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function GetAliveCharacterCount *************************

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

// ********** Begin Class ASimpleTurnManager Function GetSortedTurnOrder ***************************
struct Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics
{
	struct SimpleTurnManager_eventGetSortedTurnOrder_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8d\xb2\xe5\x8f\x96\xe6\x8e\x92\xe5\xba\x8f\xe5\xbe\x8c\xe7\x9a\x84\xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8d\xb2\xe5\x8f\x96\xe6\x8e\x92\xe5\xba\x8f\xe5\xbe\x8c\xe7\x9a\x84\xe5\x9b\x9e\xe5\x90\x88\xe9\xa0\x86\xe5\xba\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventGetSortedTurnOrder_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "GetSortedTurnOrder", Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::SimpleTurnManager_eventGetSortedTurnOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::SimpleTurnManager_eventGetSortedTurnOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execGetSortedTurnOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSortedTurnOrder();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function GetSortedTurnOrder *****************************

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

// ********** Begin Class ASimpleTurnManager Function GetTurnOrderCalculator ***********************
struct Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics
{
	struct SimpleTurnManager_eventGetTurnOrderCalculator_Parms
	{
		UTurnOrderCalculator* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe6\x96\xb0\xe5\xa2\x9e\xe6\x96\xb9\xe6\xb3\x95 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe6\x96\xb0\xe5\xa2\x9e\xe6\x96\xb9\xe6\xb3\x95 ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventGetTurnOrderCalculator_Parms, ReturnValue), Z_Construct_UClass_UTurnOrderCalculator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "GetTurnOrderCalculator", Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::SimpleTurnManager_eventGetTurnOrderCalculator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::SimpleTurnManager_eventGetTurnOrderCalculator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execGetTurnOrderCalculator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTurnOrderCalculator**)Z_Param__Result=P_THIS->GetTurnOrderCalculator();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function GetTurnOrderCalculator *************************

// ********** Begin Class ASimpleTurnManager Function InsertImmediateAction ************************
struct Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics
{
	struct SimpleTurnManager_eventInsertImmediateAction_Parms
	{
		AActor* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8f\x92\xe5\x85\xa5\xe7\xb7\x8a\xe6\x80\xa5\xe8\xa1\x8c\xe5\x8b\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x92\xe5\x85\xa5\xe7\xb7\x8a\xe6\x80\xa5\xe8\xa1\x8c\xe5\x8b\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventInsertImmediateAction_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "InsertImmediateAction", Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::SimpleTurnManager_eventInsertImmediateAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::SimpleTurnManager_eventInsertImmediateAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execInsertImmediateAction)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InsertImmediateAction(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function InsertImmediateAction **************************

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
		{ "Comment", "// \xe8\xae\x93 PlayerController Possess \xe7\x95\xb6\xe5\x89\x8d\xe5\x9b\x9e\xe5\x90\x88\xe8\xa7\x92\xe8\x89\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\x93 PlayerController Possess \xe7\x95\xb6\xe5\x89\x8d\xe5\x9b\x9e\xe5\x90\x88\xe8\xa7\x92\xe8\x89\xb2" },
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

// ********** Begin Class ASimpleTurnManager Function RecalculateTurnOrder *************************
struct Z_Construct_UFunction_ASimpleTurnManager_RecalculateTurnOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9b\x9e\xe5\x90\x88\xe6\x8e\x92\xe5\xba\x8f\xe6\x96\xb9\xe6\xb3\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\x9e\xe5\x90\x88\xe6\x8e\x92\xe5\xba\x8f\xe6\x96\xb9\xe6\xb3\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_RecalculateTurnOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "RecalculateTurnOrder", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_RecalculateTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_RecalculateTurnOrder_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASimpleTurnManager_RecalculateTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_RecalculateTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execRecalculateTurnOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalculateTurnOrder();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function RecalculateTurnOrder ***************************

// ********** Begin Class ASimpleTurnManager Function RemoveCharacter ******************************
struct Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics
{
	struct SimpleTurnManager_eventRemoveCharacter_Parms
	{
		AActor* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4\xe5\x9b\x9e\xe5\x90\x88\xe8\xa7\x92\xe8\x89\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe5\x9b\x9e\xe5\x90\x88\xe8\xa7\x92\xe8\x89\xb2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventRemoveCharacter_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "RemoveCharacter", Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::SimpleTurnManager_eventRemoveCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::SimpleTurnManager_eventRemoveCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execRemoveCharacter)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCharacter(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function RemoveCharacter ********************************

// ********** Begin Class ASimpleTurnManager Function SetCurrentCharacterIndex *********************
struct Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics
{
	struct SimpleTurnManager_eventSetCurrentCharacterIndex_Parms
	{
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa8\xad\xe7\xbd\xae\xe7\x95\xb6\xe5\x89\x8d\xe7\xb4\xa2\xe5\xbc\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa8\xad\xe7\xbd\xae\xe7\x95\xb6\xe5\x89\x8d\xe7\xb4\xa2\xe5\xbc\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleTurnManager_eventSetCurrentCharacterIndex_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "SetCurrentCharacterIndex", Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::SimpleTurnManager_eventSetCurrentCharacterIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::SimpleTurnManager_eventSetCurrentCharacterIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execSetCurrentCharacterIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentCharacterIndex(Z_Param_NewIndex);
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function SetCurrentCharacterIndex ***********************

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

// ********** Begin Class ASimpleTurnManager Function UpdateTurnOrderUI ****************************
struct Z_Construct_UFunction_ASimpleTurnManager_UpdateTurnOrderUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleTurnManager_UpdateTurnOrderUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleTurnManager, nullptr, "UpdateTurnOrderUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleTurnManager_UpdateTurnOrderUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleTurnManager_UpdateTurnOrderUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASimpleTurnManager_UpdateTurnOrderUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleTurnManager_UpdateTurnOrderUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleTurnManager::execUpdateTurnOrderUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTurnOrderUI();
	P_NATIVE_END;
}
// ********** End Class ASimpleTurnManager Function UpdateTurnOrderUI ******************************

// ********** Begin Class ASimpleTurnManager *******************************************************
void ASimpleTurnManager::StaticRegisterNativesASimpleTurnManager()
{
	UClass* Class = ASimpleTurnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCharacter", &ASimpleTurnManager::execAddCharacter },
		{ "ApplyTurnOrderConfig", &ASimpleTurnManager::execApplyTurnOrderConfig },
		{ "CheckBattleEnd", &ASimpleTurnManager::execCheckBattleEnd },
		{ "DelayCharacterTurn", &ASimpleTurnManager::execDelayCharacterTurn },
		{ "GetAliveCharacterCount", &ASimpleTurnManager::execGetAliveCharacterCount },
		{ "GetCurrentCharacterIndex", &ASimpleTurnManager::execGetCurrentCharacterIndex },
		{ "GetCurrentPhase", &ASimpleTurnManager::execGetCurrentPhase },
		{ "GetCurrentTurnCharacter", &ASimpleTurnManager::execGetCurrentTurnCharacter },
		{ "GetSortedTurnOrder", &ASimpleTurnManager::execGetSortedTurnOrder },
		{ "GetTurnCount", &ASimpleTurnManager::execGetTurnCount },
		{ "GetTurnOrder", &ASimpleTurnManager::execGetTurnOrder },
		{ "GetTurnOrderCalculator", &ASimpleTurnManager::execGetTurnOrderCalculator },
		{ "InsertImmediateAction", &ASimpleTurnManager::execInsertImmediateAction },
		{ "NextPhase", &ASimpleTurnManager::execNextPhase },
		{ "NextTurn", &ASimpleTurnManager::execNextTurn },
		{ "PossessCurrentTurnCharacter", &ASimpleTurnManager::execPossessCurrentTurnCharacter },
		{ "RecalculateTurnOrder", &ASimpleTurnManager::execRecalculateTurnOrder },
		{ "RemoveCharacter", &ASimpleTurnManager::execRemoveCharacter },
		{ "SetCurrentCharacterIndex", &ASimpleTurnManager::execSetCurrentCharacterIndex },
		{ "StartBattle", &ASimpleTurnManager::execStartBattle },
		{ "UpdateTurnOrderUI", &ASimpleTurnManager::execUpdateTurnOrderUI },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderConfig_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe9\x85\x8d\xe7\xbd\xae\xe8\xb3\x87\xe7\x94\xa2 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe9\x85\x8d\xe7\xbd\xae\xe8\xb3\x87\xe7\x94\xa2 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnChanged_MetaData[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe8\xa8\x97 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe8\xa8\x97 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPhaseChanged_MetaData[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBattleEnded_MetaData[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnOrderChanged_MetaData[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*StoreAllCharacter*/// === \xe6\xa0\xb8\xe5\xbf\x83\xe6\x88\x90\xe5\x93\xa1 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StoreAllCharacter// === \xe6\xa0\xb8\xe5\xbf\x83\xe6\x88\x90\xe5\x93\xa1 ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderCalculator_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe6\x96\xb0\xe5\xa2\x9e\xef\xbc\x9a\xe8\xa8\x88\xe7\xae\x97\xe5\x99\xa8\xe7\xb5\x84\xe4\xbb\xb6 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/SimpleTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe6\x96\xb0\xe5\xa2\x9e\xef\xbc\x9a\xe8\xa8\x88\xe7\xae\x97\xe5\x99\xa8\xe7\xb5\x84\xe4\xbb\xb6 ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderConfig;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhaseChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBattleEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnOrderChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TurnOrder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderCalculator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimpleTurnManager_AddCharacter, "AddCharacter" }, // 907563401
		{ &Z_Construct_UFunction_ASimpleTurnManager_ApplyTurnOrderConfig, "ApplyTurnOrderConfig" }, // 2103237877
		{ &Z_Construct_UFunction_ASimpleTurnManager_CheckBattleEnd, "CheckBattleEnd" }, // 3037137634
		{ &Z_Construct_UFunction_ASimpleTurnManager_DelayCharacterTurn, "DelayCharacterTurn" }, // 3437267340
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetAliveCharacterCount, "GetAliveCharacterCount" }, // 217606232
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetCurrentCharacterIndex, "GetCurrentCharacterIndex" }, // 958147449
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetCurrentPhase, "GetCurrentPhase" }, // 830492570
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetCurrentTurnCharacter, "GetCurrentTurnCharacter" }, // 1965766587
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetSortedTurnOrder, "GetSortedTurnOrder" }, // 2477998455
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetTurnCount, "GetTurnCount" }, // 1215446228
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrder, "GetTurnOrder" }, // 2779018252
		{ &Z_Construct_UFunction_ASimpleTurnManager_GetTurnOrderCalculator, "GetTurnOrderCalculator" }, // 1478313842
		{ &Z_Construct_UFunction_ASimpleTurnManager_InsertImmediateAction, "InsertImmediateAction" }, // 628918381
		{ &Z_Construct_UFunction_ASimpleTurnManager_NextPhase, "NextPhase" }, // 3175668522
		{ &Z_Construct_UFunction_ASimpleTurnManager_NextTurn, "NextTurn" }, // 4041743731
		{ &Z_Construct_UFunction_ASimpleTurnManager_PossessCurrentTurnCharacter, "PossessCurrentTurnCharacter" }, // 2786147153
		{ &Z_Construct_UFunction_ASimpleTurnManager_RecalculateTurnOrder, "RecalculateTurnOrder" }, // 932226560
		{ &Z_Construct_UFunction_ASimpleTurnManager_RemoveCharacter, "RemoveCharacter" }, // 1061723252
		{ &Z_Construct_UFunction_ASimpleTurnManager_SetCurrentCharacterIndex, "SetCurrentCharacterIndex" }, // 3716443718
		{ &Z_Construct_UFunction_ASimpleTurnManager_StartBattle, "StartBattle" }, // 3802053970
		{ &Z_Construct_UFunction_ASimpleTurnManager_UpdateTurnOrderUI, "UpdateTurnOrderUI" }, // 602009519
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleTurnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrderConfig = { "TurnOrderConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, TurnOrderConfig), Z_Construct_UClass_UTurnOrderConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderConfig_MetaData), NewProp_TurnOrderConfig_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnTurnChanged = { "OnTurnChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, OnTurnChanged), Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnChanged_MetaData), NewProp_OnTurnChanged_MetaData) }; // 900040657
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnPhaseChanged = { "OnPhaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, OnPhaseChanged), Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPhaseChanged_MetaData), NewProp_OnPhaseChanged_MetaData) }; // 1595082495
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnBattleEnded = { "OnBattleEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, OnBattleEnded), Z_Construct_UDelegateFunction_ProjectGate_OnBattleEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBattleEnded_MetaData), NewProp_OnBattleEnded_MetaData) }; // 3240132687
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnTurnOrderChanged = { "OnTurnOrderChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, OnTurnOrderChanged), Z_Construct_UDelegateFunction_ProjectGate_OnTurnOrderChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnOrderChanged_MetaData), NewProp_OnTurnOrderChanged_MetaData) }; // 1561723673
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrder_Inner = { "TurnOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrder = { "TurnOrder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, TurnOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrder_MetaData), NewProp_TurnOrder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrderCalculator = { "TurnOrderCalculator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleTurnManager, TurnOrderCalculator), Z_Construct_UClass_UTurnOrderCalculator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderCalculator_MetaData), NewProp_TurnOrderCalculator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimpleTurnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrderConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnTurnChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnPhaseChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnBattleEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_OnTurnOrderChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleTurnManager_Statics::NewProp_TurnOrderCalculator,
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
		{ Z_Construct_UClass_ASimpleTurnManager, ASimpleTurnManager::StaticClass, TEXT("ASimpleTurnManager"), &Z_Registration_Info_UClass_ASimpleTurnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimpleTurnManager), 2464584627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_3795423199(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_SimpleTurnManager_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
