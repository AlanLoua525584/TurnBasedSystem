// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/CombatDisplayWidget.h"
#include "CombatSystem/CombatStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatDisplayWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatDisplayWidget();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatDisplayWidget_NoRegister();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageResult();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatDisplayWidget Function HideDamagePreview **************************
struct Z_Construct_UFunction_UCombatDisplayWidget_HideDamagePreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Display" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDisplayWidget_HideDamagePreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDisplayWidget, nullptr, "HideDamagePreview", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_HideDamagePreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDisplayWidget_HideDamagePreview_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatDisplayWidget_HideDamagePreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDisplayWidget_HideDamagePreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatDisplayWidget::execHideDamagePreview)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideDamagePreview();
	P_NATIVE_END;
}
// ********** End Class UCombatDisplayWidget Function HideDamagePreview ****************************

// ********** Begin Class UCombatDisplayWidget Function HideTargetInfo *****************************
struct Z_Construct_UFunction_UCombatDisplayWidget_HideTargetInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Display" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDisplayWidget_HideTargetInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDisplayWidget, nullptr, "HideTargetInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_HideTargetInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDisplayWidget_HideTargetInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatDisplayWidget_HideTargetInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDisplayWidget_HideTargetInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatDisplayWidget::execHideTargetInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideTargetInfo();
	P_NATIVE_END;
}
// ********** End Class UCombatDisplayWidget Function HideTargetInfo *******************************

// ********** Begin Class UCombatDisplayWidget Function SetAttackModeActive ************************
struct Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics
{
	struct CombatDisplayWidget_eventSetAttackModeActive_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((CombatDisplayWidget_eventSetAttackModeActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDisplayWidget_eventSetAttackModeActive_Parms), &Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDisplayWidget, nullptr, "SetAttackModeActive", Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::CombatDisplayWidget_eventSetAttackModeActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::CombatDisplayWidget_eventSetAttackModeActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatDisplayWidget::execSetAttackModeActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttackModeActive(Z_Param_bActive);
	P_NATIVE_END;
}
// ********** End Class UCombatDisplayWidget Function SetAttackModeActive **************************

// ********** Begin Class UCombatDisplayWidget Function ShowCombatResult ***************************
struct Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics
{
	struct CombatDisplayWidget_eventShowCombatResult_Parms
	{
		FDamageResult DamageResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::NewProp_DamageResult = { "DamageResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDisplayWidget_eventShowCombatResult_Parms, DamageResult), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageResult_MetaData), NewProp_DamageResult_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::NewProp_DamageResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDisplayWidget, nullptr, "ShowCombatResult", Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::CombatDisplayWidget_eventShowCombatResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::CombatDisplayWidget_eventShowCombatResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatDisplayWidget::execShowCombatResult)
{
	P_GET_STRUCT_REF(FDamageResult,Z_Param_Out_DamageResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCombatResult(Z_Param_Out_DamageResult);
	P_NATIVE_END;
}
// ********** End Class UCombatDisplayWidget Function ShowCombatResult *****************************

// ********** Begin Class UCombatDisplayWidget Function ShowDamagePreview **************************
struct Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics
{
	struct CombatDisplayWidget_eventShowDamagePreview_Parms
	{
		int32 PreviewDamage;
		bool bIsCritical;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\\\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewDamage;
	static void NewProp_bIsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCritical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::NewProp_PreviewDamage = { "PreviewDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDisplayWidget_eventShowDamagePreview_Parms, PreviewDamage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::NewProp_bIsCritical_SetBit(void* Obj)
{
	((CombatDisplayWidget_eventShowDamagePreview_Parms*)Obj)->bIsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::NewProp_bIsCritical = { "bIsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDisplayWidget_eventShowDamagePreview_Parms), &Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::NewProp_bIsCritical_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::NewProp_PreviewDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::NewProp_bIsCritical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDisplayWidget, nullptr, "ShowDamagePreview", Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::CombatDisplayWidget_eventShowDamagePreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::CombatDisplayWidget_eventShowDamagePreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatDisplayWidget::execShowDamagePreview)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviewDamage);
	P_GET_UBOOL(Z_Param_bIsCritical);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDamagePreview(Z_Param_PreviewDamage,Z_Param_bIsCritical);
	P_NATIVE_END;
}
// ********** End Class UCombatDisplayWidget Function ShowDamagePreview ****************************

// ********** Begin Class UCombatDisplayWidget Function ShowTargetInfo *****************************
struct Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics
{
	struct CombatDisplayWidget_eventShowTargetInfo_Parms
	{
		AActor* Target;
		bool bCanAttack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xef\xbf\xbd\xd8\xbc\xd0\xb8\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xef\xbf\xbd\xd8\xbc\xd0\xb8\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bCanAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDisplayWidget_eventShowTargetInfo_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::NewProp_bCanAttack_SetBit(void* Obj)
{
	((CombatDisplayWidget_eventShowTargetInfo_Parms*)Obj)->bCanAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::NewProp_bCanAttack = { "bCanAttack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatDisplayWidget_eventShowTargetInfo_Parms), &Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::NewProp_bCanAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatDisplayWidget, nullptr, "ShowTargetInfo", Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::CombatDisplayWidget_eventShowTargetInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::CombatDisplayWidget_eventShowTargetInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatDisplayWidget::execShowTargetInfo)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bCanAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowTargetInfo(Z_Param_Target,Z_Param_bCanAttack);
	P_NATIVE_END;
}
// ********** End Class UCombatDisplayWidget Function ShowTargetInfo *******************************

// ********** Begin Class UCombatDisplayWidget *****************************************************
void UCombatDisplayWidget::StaticRegisterNativesUCombatDisplayWidget()
{
	UClass* Class = UCombatDisplayWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideDamagePreview", &UCombatDisplayWidget::execHideDamagePreview },
		{ "HideTargetInfo", &UCombatDisplayWidget::execHideTargetInfo },
		{ "SetAttackModeActive", &UCombatDisplayWidget::execSetAttackModeActive },
		{ "ShowCombatResult", &UCombatDisplayWidget::execShowCombatResult },
		{ "ShowDamagePreview", &UCombatDisplayWidget::execShowDamagePreview },
		{ "ShowTargetInfo", &UCombatDisplayWidget::execShowTargetInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatDisplayWidget;
UClass* UCombatDisplayWidget::GetPrivateStaticClass()
{
	using TClass = UCombatDisplayWidget;
	if (!Z_Registration_Info_UClass_UCombatDisplayWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatDisplayWidget"),
			Z_Registration_Info_UClass_UCombatDisplayWidget.InnerSingleton,
			StaticRegisterNativesUCombatDisplayWidget,
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
	return Z_Registration_Info_UClass_UCombatDisplayWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatDisplayWidget_NoRegister()
{
	return UCombatDisplayWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatDisplayWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CombatSystem/CombatDisplayWidget.h" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackModeText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xbe\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xbe\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackModeIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePreviewPanel_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xae`\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdO\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xae`\xef\xbf\xbdw\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdO" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDamageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCriticalText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInfoPanel_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd8\xbc\xd0\xb8\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdO\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xbc\xd0\xb8\xef\xbf\xbdT\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdO" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStatusIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatLogBox_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdx\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSystem/CombatDisplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdx" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackModeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackModeIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagePreviewPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewDamageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewCriticalText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetInfoPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetHealthText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetHealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetStatusIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatLogBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatDisplayWidget_HideDamagePreview, "HideDamagePreview" }, // 2834788979
		{ &Z_Construct_UFunction_UCombatDisplayWidget_HideTargetInfo, "HideTargetInfo" }, // 3572474567
		{ &Z_Construct_UFunction_UCombatDisplayWidget_SetAttackModeActive, "SetAttackModeActive" }, // 3485078772
		{ &Z_Construct_UFunction_UCombatDisplayWidget_ShowCombatResult, "ShowCombatResult" }, // 3822314299
		{ &Z_Construct_UFunction_UCombatDisplayWidget_ShowDamagePreview, "ShowDamagePreview" }, // 3901810016
		{ &Z_Construct_UFunction_UCombatDisplayWidget_ShowTargetInfo, "ShowTargetInfo" }, // 303535326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatDisplayWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_AttackModeText = { "AttackModeText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, AttackModeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackModeText_MetaData), NewProp_AttackModeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_AttackModeIcon = { "AttackModeIcon", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, AttackModeIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackModeIcon_MetaData), NewProp_AttackModeIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_DamagePreviewPanel = { "DamagePreviewPanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, DamagePreviewPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePreviewPanel_MetaData), NewProp_DamagePreviewPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_PreviewDamageText = { "PreviewDamageText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, PreviewDamageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewDamageText_MetaData), NewProp_PreviewDamageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_PreviewCriticalText = { "PreviewCriticalText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, PreviewCriticalText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewCriticalText_MetaData), NewProp_PreviewCriticalText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetInfoPanel = { "TargetInfoPanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, TargetInfoPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInfoPanel_MetaData), NewProp_TargetInfoPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetNameText = { "TargetNameText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, TargetNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNameText_MetaData), NewProp_TargetNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetHealthText = { "TargetHealthText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, TargetHealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHealthText_MetaData), NewProp_TargetHealthText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetHealthBar = { "TargetHealthBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, TargetHealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHealthBar_MetaData), NewProp_TargetHealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetStatusIcon = { "TargetStatusIcon", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, TargetStatusIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStatusIcon_MetaData), NewProp_TargetStatusIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_CombatLogBox = { "CombatLogBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatDisplayWidget, CombatLogBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatLogBox_MetaData), NewProp_CombatLogBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatDisplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_AttackModeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_AttackModeIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_DamagePreviewPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_PreviewDamageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_PreviewCriticalText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetInfoPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetHealthText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetHealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_TargetStatusIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatDisplayWidget_Statics::NewProp_CombatLogBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDisplayWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatDisplayWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDisplayWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatDisplayWidget_Statics::ClassParams = {
	&UCombatDisplayWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatDisplayWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDisplayWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatDisplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatDisplayWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatDisplayWidget()
{
	if (!Z_Registration_Info_UClass_UCombatDisplayWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatDisplayWidget.OuterSingleton, Z_Construct_UClass_UCombatDisplayWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatDisplayWidget.OuterSingleton;
}
UCombatDisplayWidget::UCombatDisplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatDisplayWidget);
UCombatDisplayWidget::~UCombatDisplayWidget() {}
// ********** End Class UCombatDisplayWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatDisplayWidget, UCombatDisplayWidget::StaticClass, TEXT("UCombatDisplayWidget"), &Z_Registration_Info_UClass_UCombatDisplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatDisplayWidget), 2107940819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h__Script_ProjectGate_3729021912(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_CombatSystem_CombatDisplayWidget_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
