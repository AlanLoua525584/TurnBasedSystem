// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/TurnOrderCalculator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnOrderCalculator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UInitiativeModifier();
PROJECTGATE_API UClass* Z_Construct_UClass_UInitiativeModifier_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderCalculator();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderCalculator_NoRegister();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FInitiativeCalculationResult();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInitiativeCalculationResult **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInitiativeCalculationResult;
class UScriptStruct* FInitiativeCalculationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInitiativeCalculationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInitiativeCalculationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInitiativeCalculationResult, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("InitiativeCalculationResult"));
	}
	return Z_Registration_Info_UScriptStruct_FInitiativeCalculationResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xadp\xef\xbf\xbd\xe2\xb5\xb2\xef\xbf\xbdG\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xadp\xef\xbf\xbd\xe2\xb5\xb2\xef\xbf\xbdG" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalInitiative_MetaData[] = {
		{ "Category", "InitiativeCalculationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseInitiative_MetaData[] = {
		{ "Category", "InitiativeCalculationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBonus_MetaData[] = {
		{ "Category", "InitiativeCalculationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomFactor_MetaData[] = {
		{ "Category", "InitiativeCalculationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusModifier_MetaData[] = {
		{ "Category", "InitiativeCalculationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugInfo_MetaData[] = {
		{ "Category", "InitiativeCalculationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FinalInitiative;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseInitiative;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpeedBonus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomFactor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatusModifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInitiativeCalculationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_FinalInitiative = { "FinalInitiative", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeCalculationResult, FinalInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalInitiative_MetaData), NewProp_FinalInitiative_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_BaseInitiative = { "BaseInitiative", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeCalculationResult, BaseInitiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseInitiative_MetaData), NewProp_BaseInitiative_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_SpeedBonus = { "SpeedBonus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeCalculationResult, SpeedBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedBonus_MetaData), NewProp_SpeedBonus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_RandomFactor = { "RandomFactor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeCalculationResult, RandomFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomFactor_MetaData), NewProp_RandomFactor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_StatusModifier = { "StatusModifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeCalculationResult, StatusModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusModifier_MetaData), NewProp_StatusModifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_DebugInfo = { "DebugInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInitiativeCalculationResult, DebugInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugInfo_MetaData), NewProp_DebugInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_FinalInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_BaseInitiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_SpeedBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_RandomFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_StatusModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewProp_DebugInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"InitiativeCalculationResult",
	Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::PropPointers),
	sizeof(FInitiativeCalculationResult),
	alignof(FInitiativeCalculationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInitiativeCalculationResult()
{
	if (!Z_Registration_Info_UScriptStruct_FInitiativeCalculationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInitiativeCalculationResult.InnerSingleton, Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInitiativeCalculationResult.InnerSingleton;
}
// ********** End ScriptStruct FInitiativeCalculationResult ****************************************

// ********** Begin Class UInitiativeModifier Function CalculateModifier ***************************
struct InitiativeModifier_eventCalculateModifier_Parms
{
	ATurnBasedCharacter* Character;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	InitiativeModifier_eventCalculateModifier_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UInitiativeModifier_CalculateModifier = FName(TEXT("CalculateModifier"));
int32 UInitiativeModifier::CalculateModifier(ATurnBasedCharacter* Character) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInitiativeModifier_CalculateModifier);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InitiativeModifier_eventCalculateModifier_Parms Parms;
		Parms.Character=Character;
		const_cast<UInitiativeModifier*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInitiativeModifier*>(this)->CalculateModifier_Implementation(Character);
	}
}
struct Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitiativeModifier_eventCalculateModifier_Parms, Character), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitiativeModifier_eventCalculateModifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInitiativeModifier, nullptr, "CalculateModifier", Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::PropPointers), sizeof(InitiativeModifier_eventCalculateModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InitiativeModifier_eventCalculateModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitiativeModifier_CalculateModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitiativeModifier_CalculateModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitiativeModifier::execCalculateModifier)
{
	P_GET_OBJECT(ATurnBasedCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CalculateModifier_Implementation(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UInitiativeModifier Function CalculateModifier *****************************

// ********** Begin Class UInitiativeModifier Function GetModifierName *****************************
struct InitiativeModifier_eventGetModifierName_Parms
{
	FString ReturnValue;
};
static FName NAME_UInitiativeModifier_GetModifierName = FName(TEXT("GetModifierName"));
FString UInitiativeModifier::GetModifierName() const
{
	UFunction* Func = FindFunctionChecked(NAME_UInitiativeModifier_GetModifierName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InitiativeModifier_eventGetModifierName_Parms Parms;
		const_cast<UInitiativeModifier*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInitiativeModifier*>(this)->GetModifierName_Implementation();
	}
}
struct Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InitiativeModifier_eventGetModifierName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInitiativeModifier, nullptr, "GetModifierName", Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::PropPointers), sizeof(InitiativeModifier_eventGetModifierName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InitiativeModifier_eventGetModifierName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInitiativeModifier_GetModifierName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInitiativeModifier_GetModifierName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInitiativeModifier::execGetModifierName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetModifierName_Implementation();
	P_NATIVE_END;
}
// ********** End Class UInitiativeModifier Function GetModifierName *******************************

// ********** Begin Class UInitiativeModifier ******************************************************
void UInitiativeModifier::StaticRegisterNativesUInitiativeModifier()
{
	UClass* Class = UInitiativeModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateModifier", &UInitiativeModifier::execCalculateModifier },
		{ "GetModifierName", &UInitiativeModifier::execGetModifierName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInitiativeModifier;
UClass* UInitiativeModifier::GetPrivateStaticClass()
{
	using TClass = UInitiativeModifier;
	if (!Z_Registration_Info_UClass_UInitiativeModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InitiativeModifier"),
			Z_Registration_Info_UClass_UInitiativeModifier.InnerSingleton,
			StaticRegisterNativesUInitiativeModifier,
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
	return Z_Registration_Info_UClass_UInitiativeModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UInitiativeModifier_NoRegister()
{
	return UInitiativeModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInitiativeModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "IncludePath", "TurnBasedSystem/TurnOrderCalculator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInitiativeModifier_CalculateModifier, "CalculateModifier" }, // 7387165
		{ &Z_Construct_UFunction_UInitiativeModifier_GetModifierName, "GetModifierName" }, // 2249571636
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInitiativeModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInitiativeModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInitiativeModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInitiativeModifier_Statics::ClassParams = {
	&UInitiativeModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInitiativeModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UInitiativeModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInitiativeModifier()
{
	if (!Z_Registration_Info_UClass_UInitiativeModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInitiativeModifier.OuterSingleton, Z_Construct_UClass_UInitiativeModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInitiativeModifier.OuterSingleton;
}
UInitiativeModifier::UInitiativeModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInitiativeModifier);
UInitiativeModifier::~UInitiativeModifier() {}
// ********** End Class UInitiativeModifier ********************************************************

// ********** Begin Class UTurnOrderCalculator Function AddModifier ********************************
struct Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics
{
	struct TurnOrderCalculator_eventAddModifier_Parms
	{
		UInitiativeModifier* Modifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdK\xef\xbf\xbd[\xef\xbf\xbd\xdb\xa9w\xef\xbf\xbdq\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdK\xef\xbf\xbd[\xef\xbf\xbd\xdb\xa9w\xef\xbf\xbdq\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderCalculator_eventAddModifier_Parms, Modifier), Z_Construct_UClass_UInitiativeModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderCalculator, nullptr, "AddModifier", Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::TurnOrderCalculator_eventAddModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::TurnOrderCalculator_eventAddModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderCalculator_AddModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderCalculator_AddModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderCalculator::execAddModifier)
{
	P_GET_OBJECT(UInitiativeModifier,Z_Param_Modifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddModifier(Z_Param_Modifier);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderCalculator Function AddModifier **********************************

// ********** Begin Class UTurnOrderCalculator Function CalculateAndSortTurnOrder ******************
struct Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics
{
	struct TurnOrderCalculator_eventCalculateAndSortTurnOrder_Parms
	{
		TArray<AActor*> TurnOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdq\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xc3\xb1\xc6\xa7\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdq\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xc3\xb1\xc6\xa7\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TurnOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::NewProp_TurnOrder_Inner = { "TurnOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::NewProp_TurnOrder = { "TurnOrder", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderCalculator_eventCalculateAndSortTurnOrder_Parms, TurnOrder), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::NewProp_TurnOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::NewProp_TurnOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderCalculator, nullptr, "CalculateAndSortTurnOrder", Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::TurnOrderCalculator_eventCalculateAndSortTurnOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::TurnOrderCalculator_eventCalculateAndSortTurnOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderCalculator::execCalculateAndSortTurnOrder)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_TurnOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateAndSortTurnOrder(Z_Param_Out_TurnOrder);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderCalculator Function CalculateAndSortTurnOrder ********************

// ********** Begin Class UTurnOrderCalculator Function CalculateInitiative ************************
struct Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics
{
	struct TurnOrderCalculator_eventCalculateInitiative_Parms
	{
		ATurnBasedCharacter* Character;
		FInitiativeCalculationResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa8\xef\xbf\xbd\xef\xbf\xbd\xe2\xaa\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdp\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa8\xef\xbf\xbd\xef\xbf\xbd\xe2\xaa\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderCalculator_eventCalculateInitiative_Parms, Character), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderCalculator_eventCalculateInitiative_Parms, ReturnValue), Z_Construct_UScriptStruct_FInitiativeCalculationResult, METADATA_PARAMS(0, nullptr) }; // 4040598802
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderCalculator, nullptr, "CalculateInitiative", Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::TurnOrderCalculator_eventCalculateInitiative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::TurnOrderCalculator_eventCalculateInitiative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderCalculator::execCalculateInitiative)
{
	P_GET_OBJECT(ATurnBasedCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInitiativeCalculationResult*)Z_Param__Result=P_THIS->CalculateInitiative(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderCalculator Function CalculateInitiative **************************

// ********** Begin Class UTurnOrderCalculator Function ClearModifiers *****************************
struct Z_Construct_UFunction_UTurnOrderCalculator_ClearModifiers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdM\xef\xbf\xbd\xc5\xa9\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdM\xef\xbf\xbd\xc5\xa9\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderCalculator_ClearModifiers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderCalculator, nullptr, "ClearModifiers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_ClearModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderCalculator_ClearModifiers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnOrderCalculator_ClearModifiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderCalculator_ClearModifiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderCalculator::execClearModifiers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearModifiers();
	P_NATIVE_END;
}
// ********** End Class UTurnOrderCalculator Function ClearModifiers *******************************

// ********** Begin Class UTurnOrderCalculator Function RemoveModifier *****************************
struct Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics
{
	struct TurnOrderCalculator_eventRemoveModifier_Parms
	{
		UInitiativeModifier* Modifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderCalculator_eventRemoveModifier_Parms, Modifier), Z_Construct_UClass_UInitiativeModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderCalculator, nullptr, "RemoveModifier", Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::TurnOrderCalculator_eventRemoveModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::TurnOrderCalculator_eventRemoveModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderCalculator::execRemoveModifier)
{
	P_GET_OBJECT(UInitiativeModifier,Z_Param_Modifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveModifier(Z_Param_Modifier);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderCalculator Function RemoveModifier *******************************

// ********** Begin Class UTurnOrderCalculator *****************************************************
void UTurnOrderCalculator::StaticRegisterNativesUTurnOrderCalculator()
{
	UClass* Class = UTurnOrderCalculator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddModifier", &UTurnOrderCalculator::execAddModifier },
		{ "CalculateAndSortTurnOrder", &UTurnOrderCalculator::execCalculateAndSortTurnOrder },
		{ "CalculateInitiative", &UTurnOrderCalculator::execCalculateInitiative },
		{ "ClearModifiers", &UTurnOrderCalculator::execClearModifiers },
		{ "RemoveModifier", &UTurnOrderCalculator::execRemoveModifier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnOrderCalculator;
UClass* UTurnOrderCalculator::GetPrivateStaticClass()
{
	using TClass = UTurnOrderCalculator;
	if (!Z_Registration_Info_UClass_UTurnOrderCalculator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnOrderCalculator"),
			Z_Registration_Info_UClass_UTurnOrderCalculator.InnerSingleton,
			StaticRegisterNativesUTurnOrderCalculator,
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
	return Z_Registration_Info_UClass_UTurnOrderCalculator.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnOrderCalculator_NoRegister()
{
	return UTurnOrderCalculator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnOrderCalculator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd""D\xef\xbf\xbdn\xef\xbf\xbdp\xef\xbf\xbd\xe2\xbe\xb9\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "IncludePath", "TurnBasedSystem/TurnOrderCalculator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""D\xef\xbf\xbdn\xef\xbf\xbdp\xef\xbf\xbd\xe2\xbe\xb9\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitiativeModifiers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdU\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/TurnOrderCalculator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdU\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""C\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitiativeModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitiativeModifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnOrderCalculator_AddModifier, "AddModifier" }, // 1318476240
		{ &Z_Construct_UFunction_UTurnOrderCalculator_CalculateAndSortTurnOrder, "CalculateAndSortTurnOrder" }, // 3007517793
		{ &Z_Construct_UFunction_UTurnOrderCalculator_CalculateInitiative, "CalculateInitiative" }, // 2168416199
		{ &Z_Construct_UFunction_UTurnOrderCalculator_ClearModifiers, "ClearModifiers" }, // 4067059107
		{ &Z_Construct_UFunction_UTurnOrderCalculator_RemoveModifier, "RemoveModifier" }, // 2688242494
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnOrderCalculator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderCalculator_Statics::NewProp_InitiativeModifiers_Inner = { "InitiativeModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInitiativeModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnOrderCalculator_Statics::NewProp_InitiativeModifiers = { "InitiativeModifiers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderCalculator, InitiativeModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitiativeModifiers_MetaData), NewProp_InitiativeModifiers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnOrderCalculator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderCalculator_Statics::NewProp_InitiativeModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderCalculator_Statics::NewProp_InitiativeModifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderCalculator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnOrderCalculator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderCalculator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnOrderCalculator_Statics::ClassParams = {
	&UTurnOrderCalculator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnOrderCalculator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderCalculator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderCalculator_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnOrderCalculator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnOrderCalculator()
{
	if (!Z_Registration_Info_UClass_UTurnOrderCalculator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnOrderCalculator.OuterSingleton, Z_Construct_UClass_UTurnOrderCalculator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnOrderCalculator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnOrderCalculator);
UTurnOrderCalculator::~UTurnOrderCalculator() {}
// ********** End Class UTurnOrderCalculator *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h__Script_ProjectGate_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInitiativeCalculationResult::StaticStruct, Z_Construct_UScriptStruct_FInitiativeCalculationResult_Statics::NewStructOps, TEXT("InitiativeCalculationResult"), &Z_Registration_Info_UScriptStruct_FInitiativeCalculationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInitiativeCalculationResult), 4040598802U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInitiativeModifier, UInitiativeModifier::StaticClass, TEXT("UInitiativeModifier"), &Z_Registration_Info_UClass_UInitiativeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInitiativeModifier), 3698864408U) },
		{ Z_Construct_UClass_UTurnOrderCalculator, UTurnOrderCalculator::StaticClass, TEXT("UTurnOrderCalculator"), &Z_Registration_Info_UClass_UTurnOrderCalculator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnOrderCalculator), 485399006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h__Script_ProjectGate_1718087940(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_TurnOrderCalculator_h__Script_ProjectGate_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
