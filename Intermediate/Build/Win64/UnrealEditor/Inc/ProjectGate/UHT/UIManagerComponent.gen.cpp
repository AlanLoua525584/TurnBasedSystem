// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/UI/UIManagerComponent.h"
#include "CombatSystem/CombatStats.h"
#include "Widgets/Layout/Anchors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUIManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UCombatDisplayWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UUIManagerComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UUIManagerComponent_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_ETurnPhase();
PROJECTGATE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageResult();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUIManagerComponent Function CreateAllUI *********************************
struct Z_Construct_UFunction_UUIManagerComponent_CreateAllUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create all UI elements\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create all UI elements" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_CreateAllUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "CreateAllUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_CreateAllUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_CreateAllUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIManagerComponent_CreateAllUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_CreateAllUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execCreateAllUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAllUI();
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function CreateAllUI ***********************************

// ********** Begin Class UUIManagerComponent Function DestroyAllUI ********************************
struct Z_Construct_UFunction_UUIManagerComponent_DestroyAllUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Destroy all UI widgets\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy all UI widgets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_DestroyAllUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "DestroyAllUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_DestroyAllUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_DestroyAllUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIManagerComponent_DestroyAllUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_DestroyAllUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execDestroyAllUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyAllUI();
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function DestroyAllUI **********************************

// ********** Begin Class UUIManagerComponent Function GetCombatDisplayWidget **********************
struct Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics
{
	struct UIManagerComponent_eventGetCombatDisplayWidget_Parms
	{
		UCombatDisplayWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI Asscess\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Asscess" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventGetCombatDisplayWidget_Parms, ReturnValue), Z_Construct_UClass_UCombatDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "GetCombatDisplayWidget", Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::UIManagerComponent_eventGetCombatDisplayWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::UIManagerComponent_eventGetCombatDisplayWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execGetCombatDisplayWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCombatDisplayWidget**)Z_Param__Result=P_THIS->GetCombatDisplayWidget();
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function GetCombatDisplayWidget ************************

// ********** Begin Class UUIManagerComponent Function GetTurnOrderWidget **************************
struct Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics
{
	struct UIManagerComponent_eventGetTurnOrderWidget_Parms
	{
		UTurnOrderWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get turn order widget\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get turn order widget" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventGetTurnOrderWidget_Parms, ReturnValue), Z_Construct_UClass_UTurnOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "GetTurnOrderWidget", Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::UIManagerComponent_eventGetTurnOrderWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::UIManagerComponent_eventGetTurnOrderWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execGetTurnOrderWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTurnOrderWidget**)Z_Param__Result=P_THIS->GetTurnOrderWidget();
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function GetTurnOrderWidget ****************************

// ********** Begin Class UUIManagerComponent Function HideCombatUI ********************************
struct Z_Construct_UFunction_UUIManagerComponent_HideCombatUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hide all combat UI elements\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hide all combat UI elements" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_HideCombatUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "HideCombatUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_HideCombatUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_HideCombatUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIManagerComponent_HideCombatUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_HideCombatUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execHideCombatUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideCombatUI();
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function HideCombatUI **********************************

// ********** Begin Class UUIManagerComponent Function HideDamagePreview ***************************
struct Z_Construct_UFunction_UUIManagerComponent_HideDamagePreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hide damage preview\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hide damage preview" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_HideDamagePreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "HideDamagePreview", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_HideDamagePreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_HideDamagePreview_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIManagerComponent_HideDamagePreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_HideDamagePreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execHideDamagePreview)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideDamagePreview();
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function HideDamagePreview *****************************

// ********** Begin Class UUIManagerComponent Function OnPhaseChanged ******************************
struct Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics
{
	struct UIManagerComponent_eventOnPhaseChanged_Parms
	{
		AActor* CurrentCharacter;
		ETurnPhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventOnPhaseChanged_Parms, CurrentCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventOnPhaseChanged_Parms, NewPhase), Z_Construct_UEnum_ProjectGate_ETurnPhase, METADATA_PARAMS(0, nullptr) }; // 1421385386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::NewProp_CurrentCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "OnPhaseChanged", Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::UIManagerComponent_eventOnPhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::UIManagerComponent_eventOnPhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execOnPhaseChanged)
{
	P_GET_OBJECT(AActor,Z_Param_CurrentCharacter);
	P_GET_ENUM(ETurnPhase,Z_Param_NewPhase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPhaseChanged(Z_Param_CurrentCharacter,ETurnPhase(Z_Param_NewPhase));
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function OnPhaseChanged ********************************

// ********** Begin Class UUIManagerComponent Function OnTurnChanged *******************************
struct Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics
{
	struct UIManagerComponent_eventOnTurnChanged_Parms
	{
		AActor* CurrentCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === \xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe6\x96\xb9\xe6\xb3\x95 ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== \xe4\xba\x8b\xe4\xbb\xb6\xe8\x99\x95\xe7\x90\x86\xe6\x96\xb9\xe6\xb3\x95 ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventOnTurnChanged_Parms, CurrentCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::NewProp_CurrentCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "OnTurnChanged", Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::UIManagerComponent_eventOnTurnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::UIManagerComponent_eventOnTurnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execOnTurnChanged)
{
	P_GET_OBJECT(AActor,Z_Param_CurrentCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnChanged(Z_Param_CurrentCharacter);
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function OnTurnChanged *********************************

// ********** Begin Class UUIManagerComponent Function OnTurnOrderChanged **************************
struct Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics
{
	struct UIManagerComponent_eventOnTurnOrderChanged_Parms
	{
		TArray<AActor*> NewOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::NewProp_NewOrder_Inner = { "NewOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::NewProp_NewOrder = { "NewOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventOnTurnOrderChanged_Parms, NewOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOrder_MetaData), NewProp_NewOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::NewProp_NewOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::NewProp_NewOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "OnTurnOrderChanged", Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::UIManagerComponent_eventOnTurnOrderChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::UIManagerComponent_eventOnTurnOrderChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execOnTurnOrderChanged)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_NewOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTurnOrderChanged(Z_Param_Out_NewOrder);
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function OnTurnOrderChanged ****************************

// ********** Begin Class UUIManagerComponent Function SetAttackModeActive *************************
struct Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics
{
	struct UIManagerComponent_eventSetAttackModeActive_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set attack mode UI state\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set attack mode UI state" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((UIManagerComponent_eventSetAttackModeActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIManagerComponent_eventSetAttackModeActive_Parms), &Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "SetAttackModeActive", Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::UIManagerComponent_eventSetAttackModeActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::UIManagerComponent_eventSetAttackModeActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execSetAttackModeActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttackModeActive(Z_Param_bActive);
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function SetAttackModeActive ***************************

// ********** Begin Class UUIManagerComponent Function ShowCombatResult ****************************
struct Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics
{
	struct UIManagerComponent_eventShowCombatResult_Parms
	{
		FDamageResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show combat result\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show combat result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventShowCombatResult_Parms, Result), Z_Construct_UScriptStruct_FDamageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1306040926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "ShowCombatResult", Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::UIManagerComponent_eventShowCombatResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::UIManagerComponent_eventShowCombatResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execShowCombatResult)
{
	P_GET_STRUCT_REF(FDamageResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCombatResult(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function ShowCombatResult ******************************

// ********** Begin Class UUIManagerComponent Function ShowDamagePreview ***************************
struct Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics
{
	struct UIManagerComponent_eventShowDamagePreview_Parms
	{
		int32 Damage;
		bool bIsCritical;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show damage preview\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show damage preview" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
	static void NewProp_bIsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCritical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventShowDamagePreview_Parms, Damage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::NewProp_bIsCritical_SetBit(void* Obj)
{
	((UIManagerComponent_eventShowDamagePreview_Parms*)Obj)->bIsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::NewProp_bIsCritical = { "bIsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIManagerComponent_eventShowDamagePreview_Parms), &Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::NewProp_bIsCritical_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::NewProp_bIsCritical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "ShowDamagePreview", Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::UIManagerComponent_eventShowDamagePreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::UIManagerComponent_eventShowDamagePreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execShowDamagePreview)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
	P_GET_UBOOL(Z_Param_bIsCritical);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDamagePreview(Z_Param_Damage,Z_Param_bIsCritical);
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function ShowDamagePreview *****************************

// ********** Begin Class UUIManagerComponent Function UpdateCombatUI ******************************
struct Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics
{
	struct UIManagerComponent_eventUpdateCombatUI_Parms
	{
		AActor* Target;
		bool bCanAttack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update combat UI with new data\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update combat UI with new data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bCanAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventUpdateCombatUI_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::NewProp_bCanAttack_SetBit(void* Obj)
{
	((UIManagerComponent_eventUpdateCombatUI_Parms*)Obj)->bCanAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::NewProp_bCanAttack = { "bCanAttack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIManagerComponent_eventUpdateCombatUI_Parms), &Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::NewProp_bCanAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "UpdateCombatUI", Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::UIManagerComponent_eventUpdateCombatUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::UIManagerComponent_eventUpdateCombatUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execUpdateCombatUI)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_UBOOL(Z_Param_bCanAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCombatUI(Z_Param_Target,Z_Param_bCanAttack);
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function UpdateCombatUI ********************************

// ********** Begin Class UUIManagerComponent Function UpdateTurnOrderUI ***************************
struct Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics
{
	struct UIManagerComponent_eventUpdateTurnOrderUI_Parms
	{
		TArray<AActor*> TurnOrder;
		int32 CurrentIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update turn order display\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update turn order display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TurnOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::NewProp_TurnOrder_Inner = { "TurnOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::NewProp_TurnOrder = { "TurnOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventUpdateTurnOrderUI_Parms, TurnOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrder_MetaData), NewProp_TurnOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerComponent_eventUpdateTurnOrderUI_Parms, CurrentIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::NewProp_TurnOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::NewProp_TurnOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::NewProp_CurrentIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIManagerComponent, nullptr, "UpdateTurnOrderUI", Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::UIManagerComponent_eventUpdateTurnOrderUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::UIManagerComponent_eventUpdateTurnOrderUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerComponent::execUpdateTurnOrderUI)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_TurnOrder);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTurnOrderUI(Z_Param_Out_TurnOrder,Z_Param_CurrentIndex);
	P_NATIVE_END;
}
// ********** End Class UUIManagerComponent Function UpdateTurnOrderUI *****************************

// ********** Begin Class UUIManagerComponent ******************************************************
void UUIManagerComponent::StaticRegisterNativesUUIManagerComponent()
{
	UClass* Class = UUIManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAllUI", &UUIManagerComponent::execCreateAllUI },
		{ "DestroyAllUI", &UUIManagerComponent::execDestroyAllUI },
		{ "GetCombatDisplayWidget", &UUIManagerComponent::execGetCombatDisplayWidget },
		{ "GetTurnOrderWidget", &UUIManagerComponent::execGetTurnOrderWidget },
		{ "HideCombatUI", &UUIManagerComponent::execHideCombatUI },
		{ "HideDamagePreview", &UUIManagerComponent::execHideDamagePreview },
		{ "OnPhaseChanged", &UUIManagerComponent::execOnPhaseChanged },
		{ "OnTurnChanged", &UUIManagerComponent::execOnTurnChanged },
		{ "OnTurnOrderChanged", &UUIManagerComponent::execOnTurnOrderChanged },
		{ "SetAttackModeActive", &UUIManagerComponent::execSetAttackModeActive },
		{ "ShowCombatResult", &UUIManagerComponent::execShowCombatResult },
		{ "ShowDamagePreview", &UUIManagerComponent::execShowDamagePreview },
		{ "UpdateCombatUI", &UUIManagerComponent::execUpdateCombatUI },
		{ "UpdateTurnOrderUI", &UUIManagerComponent::execUpdateTurnOrderUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIManagerComponent;
UClass* UUIManagerComponent::GetPrivateStaticClass()
{
	using TClass = UUIManagerComponent;
	if (!Z_Registration_Info_UClass_UUIManagerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UIManagerComponent"),
			Z_Registration_Info_UClass_UUIManagerComponent.InnerSingleton,
			StaticRegisterNativesUUIManagerComponent,
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
	return Z_Registration_Info_UClass_UUIManagerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIManagerComponent_NoRegister()
{
	return UUIManagerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnBasedSystem/Components/UI/UIManagerComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatDisplayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatDisplayWidgetClass_MetaData[] = {
		{ "Category", "UI Classes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat display widget class\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat display widget class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderWidgetClass_MetaData[] = {
		{ "Category", "UI Classes" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GetController\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetController" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatUILayer_MetaData[] = {
		{ "Category", "UI|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI layer priorities\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI layer priorities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderUILayer_MetaData[] = {
		{ "Category", "UI|Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderPosition_MetaData[] = {
		{ "Category", "UI|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn order UI positioning\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn order UI positioning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderAnchors_MetaData[] = {
		{ "Category", "UI|Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderAlignment_MetaData[] = {
		{ "Category", "UI|Config" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTurnManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TurnManager \xe5\xbc\x95\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/UI/UIManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurnManager \xe5\xbc\x95\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatDisplayWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CombatDisplayWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TurnOrderWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CombatUILayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TurnOrderUILayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnOrderPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnOrderAnchors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnOrderAlignment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTurnManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIManagerComponent_CreateAllUI, "CreateAllUI" }, // 702684254
		{ &Z_Construct_UFunction_UUIManagerComponent_DestroyAllUI, "DestroyAllUI" }, // 1207143698
		{ &Z_Construct_UFunction_UUIManagerComponent_GetCombatDisplayWidget, "GetCombatDisplayWidget" }, // 482810506
		{ &Z_Construct_UFunction_UUIManagerComponent_GetTurnOrderWidget, "GetTurnOrderWidget" }, // 4123665361
		{ &Z_Construct_UFunction_UUIManagerComponent_HideCombatUI, "HideCombatUI" }, // 3540855383
		{ &Z_Construct_UFunction_UUIManagerComponent_HideDamagePreview, "HideDamagePreview" }, // 842407290
		{ &Z_Construct_UFunction_UUIManagerComponent_OnPhaseChanged, "OnPhaseChanged" }, // 1609817541
		{ &Z_Construct_UFunction_UUIManagerComponent_OnTurnChanged, "OnTurnChanged" }, // 1056192380
		{ &Z_Construct_UFunction_UUIManagerComponent_OnTurnOrderChanged, "OnTurnOrderChanged" }, // 1770620466
		{ &Z_Construct_UFunction_UUIManagerComponent_SetAttackModeActive, "SetAttackModeActive" }, // 1779929445
		{ &Z_Construct_UFunction_UUIManagerComponent_ShowCombatResult, "ShowCombatResult" }, // 2702035201
		{ &Z_Construct_UFunction_UUIManagerComponent_ShowDamagePreview, "ShowDamagePreview" }, // 4023225259
		{ &Z_Construct_UFunction_UUIManagerComponent_UpdateCombatUI, "UpdateCombatUI" }, // 3887693306
		{ &Z_Construct_UFunction_UUIManagerComponent_UpdateTurnOrderUI, "UpdateTurnOrderUI" }, // 1452721651
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CombatDisplayWidget = { "CombatDisplayWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, CombatDisplayWidget), Z_Construct_UClass_UCombatDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatDisplayWidget_MetaData), NewProp_CombatDisplayWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderWidget = { "TurnOrderWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, TurnOrderWidget), Z_Construct_UClass_UTurnOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderWidget_MetaData), NewProp_TurnOrderWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CombatDisplayWidgetClass = { "CombatDisplayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, CombatDisplayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCombatDisplayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatDisplayWidgetClass_MetaData), NewProp_CombatDisplayWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderWidgetClass = { "TurnOrderWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, TurnOrderWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTurnOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderWidgetClass_MetaData), NewProp_TurnOrderWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, OwnerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CombatUILayer = { "CombatUILayer", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, CombatUILayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatUILayer_MetaData), NewProp_CombatUILayer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderUILayer = { "TurnOrderUILayer", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, TurnOrderUILayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderUILayer_MetaData), NewProp_TurnOrderUILayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderPosition = { "TurnOrderPosition", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, TurnOrderPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderPosition_MetaData), NewProp_TurnOrderPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderAnchors = { "TurnOrderAnchors", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, TurnOrderAnchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderAnchors_MetaData), NewProp_TurnOrderAnchors_MetaData) }; // 110128851
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderAlignment = { "TurnOrderAlignment", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, TurnOrderAlignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderAlignment_MetaData), NewProp_TurnOrderAlignment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CachedTurnManager = { "CachedTurnManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerComponent, CachedTurnManager), Z_Construct_UClass_ASimpleTurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTurnManager_MetaData), NewProp_CachedTurnManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CombatDisplayWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CombatDisplayWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CombatUILayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderUILayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_TurnOrderAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerComponent_Statics::NewProp_CachedTurnManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIManagerComponent_Statics::ClassParams = {
	&UUIManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIManagerComponent()
{
	if (!Z_Registration_Info_UClass_UUIManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIManagerComponent.OuterSingleton, Z_Construct_UClass_UUIManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIManagerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIManagerComponent);
UUIManagerComponent::~UUIManagerComponent() {}
// ********** End Class UUIManagerComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIManagerComponent, UUIManagerComponent::StaticClass, TEXT("UUIManagerComponent"), &Z_Registration_Info_UClass_UUIManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIManagerComponent), 53737815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h__Script_ProjectGate_3524226950(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_UI_UIManagerComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
