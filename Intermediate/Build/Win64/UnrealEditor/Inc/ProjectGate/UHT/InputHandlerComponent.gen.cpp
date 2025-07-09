// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/Components/Input/InputHandlerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputHandlerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridPlayerController_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UInputHandlerComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UInputHandlerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInputHandlerComponent Function GetGridPositionUnderCursor ***************
struct Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics
{
	struct InputHandlerComponent_eventGetGridPositionUnderCursor_Parms
	{
		FIntPoint OutGridPos;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility Functions \n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGridPos;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::NewProp_OutGridPos = { "OutGridPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandlerComponent_eventGetGridPositionUnderCursor_Parms, OutGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputHandlerComponent_eventGetGridPositionUnderCursor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputHandlerComponent_eventGetGridPositionUnderCursor_Parms), &Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::NewProp_OutGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputHandlerComponent, nullptr, "GetGridPositionUnderCursor", Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::InputHandlerComponent_eventGetGridPositionUnderCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::InputHandlerComponent_eventGetGridPositionUnderCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandlerComponent::execGetGridPositionUnderCursor)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_OutGridPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGridPositionUnderCursor(Z_Param_Out_OutGridPos);
	P_NATIVE_END;
}
// ********** End Class UInputHandlerComponent Function GetGridPositionUnderCursor *****************

// ********** Begin Class UInputHandlerComponent ***************************************************
void UInputHandlerComponent::StaticRegisterNativesUInputHandlerComponent()
{
	UClass* Class = UInputHandlerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGridPositionUnderCursor", &UInputHandlerComponent::execGetGridPositionUnderCursor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputHandlerComponent;
UClass* UInputHandlerComponent::GetPrivateStaticClass()
{
	using TClass = UInputHandlerComponent;
	if (!Z_Registration_Info_UClass_UInputHandlerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputHandlerComponent"),
			Z_Registration_Info_UClass_UInputHandlerComponent.InnerSingleton,
			StaticRegisterNativesUInputHandlerComponent,
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
	return Z_Registration_Info_UClass_UInputHandlerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInputHandlerComponent_NoRegister()
{
	return UInputHandlerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInputHandlerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Input Handler Component - Manages all input-related functionality\n */" },
#endif
		{ "IncludePath", "TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Handler Component - Manages all input-related functionality" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridInputMappingContext_MetaData[] = {
		{ "Category", "Input|Contexts" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Input Mapping Contexts  ===\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Input Mapping Contexts  ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[] = {
		{ "Category", "Input|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Input Actions  ===\n// Basic Actions \n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Input Actions  ===\nBasic Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowRangeAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicModeAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackModeAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMoveAction_MetaData[] = {
		{ "Category", "Input|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera Actions \n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotateAction_MetaData[] = {
		{ "Category", "Input|Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomAction_MetaData[] = {
		{ "Category", "Input|Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleFocusAction_MetaData[] = {
		{ "Category", "Input|Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Owner References \n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Owner References" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGridManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/Components/Input/InputHandlerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowRangeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicModeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackModeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRotateAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraZoomAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleFocusAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedGridManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputHandlerComponent_GetGridPositionUnderCursor, "GetGridPositionUnderCursor" }, // 1786395020
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandlerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_GridInputMappingContext = { "GridInputMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, GridInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridInputMappingContext_MetaData), NewProp_GridInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, ClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickAction_MetaData), NewProp_ClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_ShowRangeAction = { "ShowRangeAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, ShowRangeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowRangeAction_MetaData), NewProp_ShowRangeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, CancelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAction_MetaData), NewProp_CancelAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_DynamicModeAction = { "DynamicModeAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, DynamicModeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicModeAction_MetaData), NewProp_DynamicModeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_AttackModeAction = { "AttackModeAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, AttackModeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackModeAction_MetaData), NewProp_AttackModeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CameraMoveAction = { "CameraMoveAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, CameraMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMoveAction_MetaData), NewProp_CameraMoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CameraRotateAction = { "CameraRotateAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, CameraRotateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotateAction_MetaData), NewProp_CameraRotateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CameraZoomAction = { "CameraZoomAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, CameraZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraZoomAction_MetaData), NewProp_CameraZoomAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_ToggleFocusAction = { "ToggleFocusAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, ToggleFocusAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleFocusAction_MetaData), NewProp_ToggleFocusAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, OwnerController), Z_Construct_UClass_AGridPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CachedGridManager = { "CachedGridManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlerComponent, CachedGridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGridManager_MetaData), NewProp_CachedGridManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandlerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_GridInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_ClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_ShowRangeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CancelAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_DynamicModeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_AttackModeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CameraMoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CameraRotateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CameraZoomAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_ToggleFocusAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandlerComponent_Statics::NewProp_CachedGridManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandlerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandlerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandlerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandlerComponent_Statics::ClassParams = {
	&UInputHandlerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputHandlerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandlerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandlerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandlerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandlerComponent()
{
	if (!Z_Registration_Info_UClass_UInputHandlerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandlerComponent.OuterSingleton, Z_Construct_UClass_UInputHandlerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandlerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandlerComponent);
UInputHandlerComponent::~UInputHandlerComponent() {}
// ********** End Class UInputHandlerComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandlerComponent, UInputHandlerComponent::StaticClass, TEXT("UInputHandlerComponent"), &Z_Registration_Info_UClass_UInputHandlerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandlerComponent), 3387888371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h__Script_ProjectGate_3916188163(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_Components_Input_InputHandlerComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
