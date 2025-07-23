// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/Movement/MovementValidatorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementValidatorComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridPathfindingComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UMovementRule();
PROJECTGATE_API UClass* Z_Construct_UClass_UMovementRule_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UMovementValidatorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UMovementValidatorComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnSystemComponent_NoRegister();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementValidationResult();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMovementValidationResult *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementValidationResult;
class UScriptStruct* FMovementValidationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementValidationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementValidationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementValidationResult, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("MovementValidationResult"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementValidationResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementValidationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbdG\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbdG" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "MovementValidationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "Category", "MovementValidationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAP_MetaData[] = {
		{ "Category", "MovementValidationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "MovementValidationResult" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredAP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementValidationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FMovementValidationResult*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovementValidationResult), &Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementValidationResult, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_RequiredAP = { "RequiredAP", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementValidationResult, RequiredAP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredAP_MetaData), NewProp_RequiredAP_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementValidationResult, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementValidationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_RequiredAP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementValidationResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementValidationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	&NewStructOps,
	"MovementValidationResult",
	Z_Construct_UScriptStruct_FMovementValidationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementValidationResult_Statics::PropPointers),
	sizeof(FMovementValidationResult),
	alignof(FMovementValidationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementValidationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementValidationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementValidationResult()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementValidationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementValidationResult.InnerSingleton, Z_Construct_UScriptStruct_FMovementValidationResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementValidationResult.InnerSingleton;
}
// ********** End ScriptStruct FMovementValidationResult *******************************************

// ********** Begin Interface UMovementRule ********************************************************
void UMovementRule::StaticRegisterNativesUMovementRule()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMovementRule;
UClass* UMovementRule::GetPrivateStaticClass()
{
	using TClass = UMovementRule;
	if (!Z_Registration_Info_UClass_UMovementRule.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovementRule"),
			Z_Registration_Info_UClass_UMovementRule.InnerSingleton,
			StaticRegisterNativesUMovementRule,
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
	return Z_Registration_Info_UClass_UMovementRule.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovementRule_NoRegister()
{
	return UMovementRule::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovementRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovementRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovementRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementRule_Statics::ClassParams = {
	&UMovementRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementRule()
{
	if (!Z_Registration_Info_UClass_UMovementRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementRule.OuterSingleton, Z_Construct_UClass_UMovementRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementRule.OuterSingleton;
}
UMovementRule::UMovementRule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementRule);
// ********** End Interface UMovementRule **********************************************************

// ********** Begin Class UMovementValidatorComponent Function AddValidationRule *******************
struct Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics
{
	struct MovementValidatorComponent_eventAddValidationRule_Parms
	{
		TScriptInterface<IMovementRule> Rule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdK\xef\xbf\xbd[\xef\xbf\xbd\xdb\xa9w\xef\xbf\xbdq\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb3W\xef\xbf\xbdh\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdK\xef\xbf\xbd[\xef\xbf\xbd\xdb\xa9w\xef\xbf\xbdq\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb3W\xef\xbf\xbdh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Rule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementValidatorComponent_eventAddValidationRule_Parms, Rule), Z_Construct_UClass_UMovementRule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::NewProp_Rule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementValidatorComponent, nullptr, "AddValidationRule", Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::MovementValidatorComponent_eventAddValidationRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::MovementValidatorComponent_eventAddValidationRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementValidatorComponent::execAddValidationRule)
{
	P_GET_TINTERFACE(IMovementRule,Z_Param_Rule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddValidationRule(Z_Param_Rule);
	P_NATIVE_END;
}
// ********** End Class UMovementValidatorComponent Function AddValidationRule *********************

// ********** Begin Class UMovementValidatorComponent Function ValidateGridCell ********************
struct Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics
{
	struct MovementValidatorComponent_eventValidateGridCell_Parms
	{
		FIntPoint GridPos;
		FString OutReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xae\xef\xbf\xbdl\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xae\xef\xbf\xbdl\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbdi\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::NewProp_GridPos = { "GridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementValidatorComponent_eventValidateGridCell_Parms, GridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::NewProp_OutReason = { "OutReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementValidatorComponent_eventValidateGridCell_Parms, OutReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementValidatorComponent_eventValidateGridCell_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementValidatorComponent_eventValidateGridCell_Parms), &Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::NewProp_GridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::NewProp_OutReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementValidatorComponent, nullptr, "ValidateGridCell", Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::MovementValidatorComponent_eventValidateGridCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::MovementValidatorComponent_eventValidateGridCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementValidatorComponent::execValidateGridCell)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridPos);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateGridCell(Z_Param_GridPos,Z_Param_Out_OutReason);
	P_NATIVE_END;
}
// ********** End Class UMovementValidatorComponent Function ValidateGridCell **********************

// ********** Begin Class UMovementValidatorComponent Function ValidateMovement ********************
struct Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics
{
	struct MovementValidatorComponent_eventValidateMovement_Parms
	{
		FIntPoint FromPos;
		FIntPoint ToPos;
		FMovementValidationResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xbd\xd0\xa8""D\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb2\xef\xbf\xbd\xef\xbf\xbd\xca\xbd\xd0\xa8""D" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::NewProp_FromPos = { "FromPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementValidatorComponent_eventValidateMovement_Parms, FromPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::NewProp_ToPos = { "ToPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementValidatorComponent_eventValidateMovement_Parms, ToPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementValidatorComponent_eventValidateMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovementValidationResult, METADATA_PARAMS(0, nullptr) }; // 3390497289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::NewProp_FromPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::NewProp_ToPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementValidatorComponent, nullptr, "ValidateMovement", Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::MovementValidatorComponent_eventValidateMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::MovementValidatorComponent_eventValidateMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementValidatorComponent::execValidateMovement)
{
	P_GET_STRUCT(FIntPoint,Z_Param_FromPos);
	P_GET_STRUCT(FIntPoint,Z_Param_ToPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovementValidationResult*)Z_Param__Result=P_THIS->ValidateMovement(Z_Param_FromPos,Z_Param_ToPos);
	P_NATIVE_END;
}
// ********** End Class UMovementValidatorComponent Function ValidateMovement **********************

// ********** Begin Class UMovementValidatorComponent **********************************************
void UMovementValidatorComponent::StaticRegisterNativesUMovementValidatorComponent()
{
	UClass* Class = UMovementValidatorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddValidationRule", &UMovementValidatorComponent::execAddValidationRule },
		{ "ValidateGridCell", &UMovementValidatorComponent::execValidateGridCell },
		{ "ValidateMovement", &UMovementValidatorComponent::execValidateMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMovementValidatorComponent;
UClass* UMovementValidatorComponent::GetPrivateStaticClass()
{
	using TClass = UMovementValidatorComponent;
	if (!Z_Registration_Info_UClass_UMovementValidatorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovementValidatorComponent"),
			Z_Registration_Info_UClass_UMovementValidatorComponent.InnerSingleton,
			StaticRegisterNativesUMovementValidatorComponent,
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
	return Z_Registration_Info_UClass_UMovementValidatorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovementValidatorComponent_NoRegister()
{
	return UMovementValidatorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovementValidatorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckActionPoints_MetaData[] = {
		{ "Category", "Validation Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xcb\xac""dAP\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xcb\xac""dAP" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckTurn_MetaData[] = {
		{ "Category", "Validation Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xcb\xac""d\xef\xbf\xbd^\xef\xbf\xbdX\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xcb\xac""d\xef\xbf\xbd^\xef\xbf\xbdX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckPath_MetaData[] = {
		{ "Category", "Validation Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xcb\xac""d\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd|\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xcb\xac""d\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd|" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDiagonalMovement_MetaData[] = {
		{ "Category", "Validation Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xa8\xa4\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdO\xef\xbf\xbd_\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xa8\xa4\xef\xbf\xbdu\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdw\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\xde\xa5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdw\xef\xbf\xbds\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa5\xef\xbf\xbd\xde\xa5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xdb\xa9w\xef\xbf\xbdq\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb3W\xef\xbf\xbdh\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Movement/MovementValidatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdb\xa9w\xef\xbf\xbdq\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb3W\xef\xbf\xbdh" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bCheckActionPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckActionPoints;
	static void NewProp_bCheckTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckTurn;
	static void NewProp_bCheckPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckPath;
	static void NewProp_bAllowDiagonalMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDiagonalMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathfindingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnSystemComponent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ValidationRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovementValidatorComponent_AddValidationRule, "AddValidationRule" }, // 235114017
		{ &Z_Construct_UFunction_UMovementValidatorComponent_ValidateGridCell, "ValidateGridCell" }, // 3934414401
		{ &Z_Construct_UFunction_UMovementValidatorComponent_ValidateMovement, "ValidateMovement" }, // 1261344810
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementValidatorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckActionPoints_SetBit(void* Obj)
{
	((UMovementValidatorComponent*)Obj)->bCheckActionPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckActionPoints = { "bCheckActionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovementValidatorComponent), &Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckActionPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckActionPoints_MetaData), NewProp_bCheckActionPoints_MetaData) };
void Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckTurn_SetBit(void* Obj)
{
	((UMovementValidatorComponent*)Obj)->bCheckTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckTurn = { "bCheckTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovementValidatorComponent), &Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckTurn_MetaData), NewProp_bCheckTurn_MetaData) };
void Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckPath_SetBit(void* Obj)
{
	((UMovementValidatorComponent*)Obj)->bCheckPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckPath = { "bCheckPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovementValidatorComponent), &Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckPath_MetaData), NewProp_bCheckPath_MetaData) };
void Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bAllowDiagonalMovement_SetBit(void* Obj)
{
	((UMovementValidatorComponent*)Obj)->bAllowDiagonalMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bAllowDiagonalMovement = { "bAllowDiagonalMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovementValidatorComponent), &Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bAllowDiagonalMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDiagonalMovement_MetaData), NewProp_bAllowDiagonalMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementValidatorComponent, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_PathfindingComponent = { "PathfindingComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementValidatorComponent, PathfindingComponent), Z_Construct_UClass_UGridPathfindingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfindingComponent_MetaData), NewProp_PathfindingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_TurnSystemComponent = { "TurnSystemComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementValidatorComponent, TurnSystemComponent), Z_Construct_UClass_UTurnSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSystemComponent_MetaData), NewProp_TurnSystemComponent_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_ValidationRules_Inner = { "ValidationRules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovementRule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_ValidationRules = { "ValidationRules", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementValidatorComponent, ValidationRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRules_MetaData), NewProp_ValidationRules_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovementValidatorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bCheckPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_bAllowDiagonalMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_PathfindingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_TurnSystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_ValidationRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementValidatorComponent_Statics::NewProp_ValidationRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementValidatorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovementValidatorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementValidatorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementValidatorComponent_Statics::ClassParams = {
	&UMovementValidatorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovementValidatorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovementValidatorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementValidatorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementValidatorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementValidatorComponent()
{
	if (!Z_Registration_Info_UClass_UMovementValidatorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementValidatorComponent.OuterSingleton, Z_Construct_UClass_UMovementValidatorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementValidatorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementValidatorComponent);
UMovementValidatorComponent::~UMovementValidatorComponent() {}
// ********** End Class UMovementValidatorComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h__Script_ProjectGate_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovementValidationResult::StaticStruct, Z_Construct_UScriptStruct_FMovementValidationResult_Statics::NewStructOps, TEXT("MovementValidationResult"), &Z_Registration_Info_UScriptStruct_FMovementValidationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementValidationResult), 3390497289U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementRule, UMovementRule::StaticClass, TEXT("UMovementRule"), &Z_Registration_Info_UClass_UMovementRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementRule), 2344530140U) },
		{ Z_Construct_UClass_UMovementValidatorComponent, UMovementValidatorComponent::StaticClass, TEXT("UMovementValidatorComponent"), &Z_Registration_Info_UClass_UMovementValidatorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementValidatorComponent), 3972298746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h__Script_ProjectGate_3907248761(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h__Script_ProjectGate_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h__Script_ProjectGate_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Movement_MovementValidatorComponent_h__Script_ProjectGate_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
