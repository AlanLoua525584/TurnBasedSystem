// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/UI/TurnOrderEntryWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnOrderEntryWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJECTGATE_API UClass* Z_Construct_UClass_ATurnBasedCharacter_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderEntryWidget();
PROJECTGATE_API UClass* Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTurnOrderEntryWidget Function GetAssociatedCharacter ********************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics
{
	struct TurnOrderEntryWidget_eventGetAssociatedCharacter_Parms
	{
		ATurnBasedCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderEntryWidget_eventGetAssociatedCharacter_Parms, ReturnValue), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "GetAssociatedCharacter", Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::TurnOrderEntryWidget_eventGetAssociatedCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::TurnOrderEntryWidget_eventGetAssociatedCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execGetAssociatedCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATurnBasedCharacter**)Z_Param__Result=P_THIS->GetAssociatedCharacter();
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function GetAssociatedCharacter **********************

// ********** Begin Class UTurnOrderEntryWidget Function PlayHighlightAnimation ********************
static FName NAME_UTurnOrderEntryWidget_PlayHighlightAnimation = FName(TEXT("PlayHighlightAnimation"));
void UTurnOrderEntryWidget::PlayHighlightAnimation()
{
	UFunction* Func = FindFunctionChecked(NAME_UTurnOrderEntryWidget_PlayHighlightAnimation);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintImplementableEvent\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintImplementableEvent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "PlayHighlightAnimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTurnOrderEntryWidget Function PlayHighlightAnimation **********************

// ********** Begin Class UTurnOrderEntryWidget Function SetCharacterData **************************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics
{
	struct TurnOrderEntryWidget_eventSetCharacterData_Parms
	{
		ATurnBasedCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderEntryWidget_eventSetCharacterData_Parms, Character), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "SetCharacterData", Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::TurnOrderEntryWidget_eventSetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::TurnOrderEntryWidget_eventSetCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execSetCharacterData)
{
	P_GET_OBJECT(ATurnBasedCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterData(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function SetCharacterData ****************************

// ********** Begin Class UTurnOrderEntryWidget Function SetHighlighted ****************************
struct Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics
{
	struct TurnOrderEntryWidget_eventSetHighlighted_Parms
	{
		bool bHighlight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHighlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::NewProp_bHighlight_SetBit(void* Obj)
{
	((TurnOrderEntryWidget_eventSetHighlighted_Parms*)Obj)->bHighlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::NewProp_bHighlight = { "bHighlight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnOrderEntryWidget_eventSetHighlighted_Parms), &Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::NewProp_bHighlight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::NewProp_bHighlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnOrderEntryWidget, nullptr, "SetHighlighted", Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::TurnOrderEntryWidget_eventSetHighlighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::TurnOrderEntryWidget_eventSetHighlighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderEntryWidget::execSetHighlighted)
{
	P_GET_UBOOL(Z_Param_bHighlight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighlighted(Z_Param_bHighlight);
	P_NATIVE_END;
}
// ********** End Class UTurnOrderEntryWidget Function SetHighlighted ******************************

// ********** Begin Class UTurnOrderEntryWidget ****************************************************
void UTurnOrderEntryWidget::StaticRegisterNativesUTurnOrderEntryWidget()
{
	UClass* Class = UTurnOrderEntryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssociatedCharacter", &UTurnOrderEntryWidget::execGetAssociatedCharacter },
		{ "SetCharacterData", &UTurnOrderEntryWidget::execSetCharacterData },
		{ "SetHighlighted", &UTurnOrderEntryWidget::execSetHighlighted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnOrderEntryWidget;
UClass* UTurnOrderEntryWidget::GetPrivateStaticClass()
{
	using TClass = UTurnOrderEntryWidget;
	if (!Z_Registration_Info_UClass_UTurnOrderEntryWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnOrderEntryWidget"),
			Z_Registration_Info_UClass_UTurnOrderEntryWidget.InnerSingleton,
			StaticRegisterNativesUTurnOrderEntryWidget,
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
	return Z_Registration_Info_UClass_UTurnOrderEntryWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnOrderEntryWidget_NoRegister()
{
	return UTurnOrderEntryWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnOrderEntryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPortrait_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitiativeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightFrame_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamColorBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/UI/TurnOrderEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPortrait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitiativeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamColorBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_GetAssociatedCharacter, "GetAssociatedCharacter" }, // 1593171024
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_PlayHighlightAnimation, "PlayHighlightAnimation" }, // 2171769412
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_SetCharacterData, "SetCharacterData" }, // 1998659893
		{ &Z_Construct_UFunction_UTurnOrderEntryWidget_SetHighlighted, "SetHighlighted" }, // 656477071
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnOrderEntryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CharacterPortrait = { "CharacterPortrait", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, CharacterPortrait), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPortrait_MetaData), NewProp_CharacterPortrait_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_InitiativeText = { "InitiativeText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, InitiativeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitiativeText_MetaData), NewProp_InitiativeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CharacterNameText = { "CharacterNameText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, CharacterNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNameText_MetaData), NewProp_CharacterNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_HighlightFrame = { "HighlightFrame", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, HighlightFrame), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightFrame_MetaData), NewProp_HighlightFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_TeamColorBorder = { "TeamColorBorder", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, TeamColorBorder), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamColorBorder_MetaData), NewProp_TeamColorBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_AssociatedCharacter = { "AssociatedCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderEntryWidget, AssociatedCharacter), Z_Construct_UClass_ATurnBasedCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedCharacter_MetaData), NewProp_AssociatedCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnOrderEntryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CharacterPortrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_InitiativeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_CharacterNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_HighlightFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_TeamColorBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderEntryWidget_Statics::NewProp_AssociatedCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderEntryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnOrderEntryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderEntryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnOrderEntryWidget_Statics::ClassParams = {
	&UTurnOrderEntryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnOrderEntryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderEntryWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderEntryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnOrderEntryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnOrderEntryWidget()
{
	if (!Z_Registration_Info_UClass_UTurnOrderEntryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnOrderEntryWidget.OuterSingleton, Z_Construct_UClass_UTurnOrderEntryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnOrderEntryWidget.OuterSingleton;
}
UTurnOrderEntryWidget::UTurnOrderEntryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnOrderEntryWidget);
UTurnOrderEntryWidget::~UTurnOrderEntryWidget() {}
// ********** End Class UTurnOrderEntryWidget ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnOrderEntryWidget, UTurnOrderEntryWidget::StaticClass, TEXT("UTurnOrderEntryWidget"), &Z_Registration_Info_UClass_UTurnOrderEntryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnOrderEntryWidget), 922507684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h__Script_ProjectGate_1600984274(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_UI_TurnOrderEntryWidget_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
