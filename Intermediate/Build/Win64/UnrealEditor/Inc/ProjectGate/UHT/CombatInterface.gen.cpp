// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/CombatInterface.h"
#include "CombatSystem/CombatStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatInterface();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageResult();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCombatInterface Function CanAttack **********************************
struct CombatInterface_eventCanAttack_Parms
{
	AActor* Target;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatInterface_eventCanAttack_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatInterface::CanAttack(AActor* Target) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanAttack instead.");
	CombatInterface_eventCanAttack_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatInterface_CanAttack = FName(TEXT("CanAttack"));
bool ICombatInterface::Execute_CanAttack(const UObject* O, AActor* Target)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventCanAttack_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_CanAttack);
	if (Func)
	{
		Parms.Target=Target;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanAttack_Implementation(Target);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatInterface_CanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventCanAttack_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatInterface_eventCanAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatInterface_eventCanAttack_Parms), &Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "CanAttack", Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::PropPointers), sizeof(CombatInterface_eventCanAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatInterface_eventCanAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_CanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_CanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execCanAttack)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAttack_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Interface UCombatInterface Function CanAttack ************************************

// ********** Begin Interface UCombatInterface Function CanBeAttacked ******************************
struct CombatInterface_eventCanBeAttacked_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatInterface_eventCanBeAttacked_Parms()
		: ReturnValue(false)
	{
	}
};
bool ICombatInterface::CanBeAttacked() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBeAttacked instead.");
	CombatInterface_eventCanBeAttacked_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatInterface_CanBeAttacked = FName(TEXT("CanBeAttacked"));
bool ICombatInterface::Execute_CanBeAttacked(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventCanBeAttacked_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_CanBeAttacked);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanBeAttacked_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xd6\xa4\xdf\xbe\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""f ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xd6\xa4\xdf\xbe\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""f ===" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatInterface_eventCanBeAttacked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatInterface_eventCanBeAttacked_Parms), &Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "CanBeAttacked", Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::PropPointers), sizeof(CombatInterface_eventCanBeAttacked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatInterface_eventCanBeAttacked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_CanBeAttacked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_CanBeAttacked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execCanBeAttacked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeAttacked_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UCombatInterface Function CanBeAttacked ********************************

// ********** Begin Interface UCombatInterface Function GetAttackSourceLocation ********************
struct CombatInterface_eventGetAttackSourceLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	CombatInterface_eventGetAttackSourceLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector ICombatInterface::GetAttackSourceLocation() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttackSourceLocation instead.");
	CombatInterface_eventGetAttackSourceLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatInterface_GetAttackSourceLocation = FName(TEXT("GetAttackSourceLocation"));
FVector ICombatInterface::Execute_GetAttackSourceLocation(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventGetAttackSourceLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetAttackSourceLocation);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAttackSourceLocation_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbdi\xef\xbf\xbd\xef\xb1\xb5\xef\xbf\xbd""f ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbdi\xef\xbf\xbd\xef\xb1\xb5\xef\xbf\xbd""f ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetAttackSourceLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetAttackSourceLocation", Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::PropPointers), sizeof(CombatInterface_eventGetAttackSourceLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatInterface_eventGetAttackSourceLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execGetAttackSourceLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAttackSourceLocation_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UCombatInterface Function GetAttackSourceLocation **********************

// ********** Begin Interface UCombatInterface Function GetCombatComponent *************************
struct CombatInterface_eventGetCombatComponent_Parms
{
	UCombatComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatInterface_eventGetCombatComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UCombatComponent* ICombatInterface::GetCombatComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatComponent instead.");
	CombatInterface_eventGetCombatComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatInterface_GetCombatComponent = FName(TEXT("GetCombatComponent"));
UCombatComponent* ICombatInterface::Execute_GetCombatComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventGetCombatComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetCombatComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCombatComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetCombatComponent_Parms, ReturnValue), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetCombatComponent", Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::PropPointers), sizeof(CombatInterface_eventGetCombatComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatInterface_eventGetCombatComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_GetCombatComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetCombatComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execGetCombatComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCombatComponent**)Z_Param__Result=P_THIS->GetCombatComponent_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UCombatInterface Function GetCombatComponent ***************************

// ********** Begin Interface UCombatInterface Function OnDamageReceived ***************************
struct CombatInterface_eventOnDamageReceived_Parms
{
	FDamageResult DamageResult;
};
void ICombatInterface::OnDamageReceived(FDamageResult const& DamageResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDamageReceived instead.");
}
static FName NAME_UCombatInterface_OnDamageReceived = FName(TEXT("OnDamageReceived"));
void ICombatInterface::Execute_OnDamageReceived(UObject* O, FDamageResult const& DamageResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventOnDamageReceived_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_OnDamageReceived);
	if (Func)
	{
		Parms.DamageResult=DamageResult;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		I->OnDamageReceived_Implementation(DamageResult);
	}
}
struct Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::NewProp_DamageResult = { "DamageResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventOnDamageReceived_Parms, DamageResult), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageResult_MetaData), NewProp_DamageResult_MetaData) }; // 2440303719
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::NewProp_DamageResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "OnDamageReceived", Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::PropPointers), sizeof(CombatInterface_eventOnDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatInterface_eventOnDamageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_OnDamageReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_OnDamageReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execOnDamageReceived)
{
	P_GET_STRUCT_REF(FDamageResult,Z_Param_Out_DamageResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamageReceived_Implementation(Z_Param_Out_DamageResult);
	P_NATIVE_END;
}
// ********** End Interface UCombatInterface Function OnDamageReceived *****************************

// ********** Begin Interface UCombatInterface Function OnDeath ************************************
struct CombatInterface_eventOnDeath_Parms
{
	AActor* Killer;
};
void ICombatInterface::OnDeath(AActor* Killer)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeath instead.");
}
static FName NAME_UCombatInterface_OnDeath = FName(TEXT("OnDeath"));
void ICombatInterface::Execute_OnDeath(UObject* O, AActor* Killer)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
	CombatInterface_eventOnDeath_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatInterface_OnDeath);
	if (Func)
	{
		Parms.Killer=Killer;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
	{
		I->OnDeath_Implementation(Killer);
	}
}
struct Z_Construct_UFunction_UCombatInterface_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventOnDeath_Parms, Killer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::NewProp_Killer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "OnDeath", Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::PropPointers), sizeof(CombatInterface_eventOnDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatInterface_eventOnDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatInterface_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatInterface::execOnDeath)
{
	P_GET_OBJECT(AActor,Z_Param_Killer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath_Implementation(Z_Param_Killer);
	P_NATIVE_END;
}
// ********** End Interface UCombatInterface Function OnDeath **************************************

// ********** Begin Interface UCombatInterface *****************************************************
void UCombatInterface::StaticRegisterNativesUCombatInterface()
{
	UClass* Class = UCombatInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAttack", &ICombatInterface::execCanAttack },
		{ "CanBeAttacked", &ICombatInterface::execCanBeAttacked },
		{ "GetAttackSourceLocation", &ICombatInterface::execGetAttackSourceLocation },
		{ "GetCombatComponent", &ICombatInterface::execGetCombatComponent },
		{ "OnDamageReceived", &ICombatInterface::execOnDamageReceived },
		{ "OnDeath", &ICombatInterface::execOnDeath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatInterface;
UClass* UCombatInterface::GetPrivateStaticClass()
{
	using TClass = UCombatInterface;
	if (!Z_Registration_Info_UClass_UCombatInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatInterface"),
			Z_Registration_Info_UClass_UCombatInterface.InnerSingleton,
			StaticRegisterNativesUCombatInterface,
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
	return Z_Registration_Info_UClass_UCombatInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
{
	return UCombatInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_CanAttack, "CanAttack" }, // 1036695494
		{ &Z_Construct_UFunction_UCombatInterface_CanBeAttacked, "CanBeAttacked" }, // 2545476030
		{ &Z_Construct_UFunction_UCombatInterface_GetAttackSourceLocation, "GetAttackSourceLocation" }, // 3520281109
		{ &Z_Construct_UFunction_UCombatInterface_GetCombatComponent, "GetCombatComponent" }, // 2204952735
		{ &Z_Construct_UFunction_UCombatInterface_OnDamageReceived, "OnDamageReceived" }, // 2912318794
		{ &Z_Construct_UFunction_UCombatInterface_OnDeath, "OnDeath" }, // 989517516
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
	&UCombatInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatInterface()
{
	if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
}
UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
// ********** End Interface UCombatInterface *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 743786838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h__Script_ProjectGate_4286454765(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatInterface_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
