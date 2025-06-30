// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/IntegratedGridController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIntegratedGridController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AFreeCameraPawn_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_AIntegratedGridController();
PROJECTGATE_API UClass* Z_Construct_UClass_AIntegratedGridController_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_ASimpleTurnManager_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EControlMode();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EControlMode **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlMode;
static UEnum* EControlMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectGate_EControlMode, (UObject*)Z_Construct_UPackage__Script_ProjectGate(), TEXT("EControlMode"));
	}
	return Z_Registration_Info_UEnum_EControlMode.OuterSingleton;
}
template<> PROJECTGATE_API UEnum* StaticEnum<EControlMode>()
{
	return EControlMode_StaticEnum();
}
struct Z_Construct_UEnum_ProjectGate_EControlMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraControl.DisplayName", "Camera Control" },
		{ "CameraControl.Name", "EControlMode::CameraControl" },
		{ "CombatMode.DisplayName", "Combat Mode" },
		{ "CombatMode.Name", "EControlMode::CombatMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Control Mode Enum\n" },
#endif
		{ "GridInteraction.DisplayName", "Grid Interaction" },
		{ "GridInteraction.Name", "EControlMode::GridInteraction" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Mode Enum" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlMode::CameraControl", (int64)EControlMode::CameraControl },
		{ "EControlMode::GridInteraction", (int64)EControlMode::GridInteraction },
		{ "EControlMode::CombatMode", (int64)EControlMode::CombatMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectGate_EControlMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectGate,
	nullptr,
	"EControlMode",
	"EControlMode",
	Z_Construct_UEnum_ProjectGate_EControlMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EControlMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectGate_EControlMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectGate_EControlMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectGate_EControlMode()
{
	if (!Z_Registration_Info_UEnum_EControlMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlMode.InnerSingleton, Z_Construct_UEnum_ProjectGate_EControlMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlMode.InnerSingleton;
}
// ********** End Enum EControlMode ****************************************************************

// ********** Begin Class AIntegratedGridController ************************************************
void AIntegratedGridController::StaticRegisterNativesAIntegratedGridController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIntegratedGridController;
UClass* AIntegratedGridController::GetPrivateStaticClass()
{
	using TClass = AIntegratedGridController;
	if (!Z_Registration_Info_UClass_AIntegratedGridController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IntegratedGridController"),
			Z_Registration_Info_UClass_AIntegratedGridController.InnerSingleton,
			StaticRegisterNativesAIntegratedGridController,
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
	return Z_Registration_Info_UClass_AIntegratedGridController.InnerSingleton;
}
UClass* Z_Construct_UClass_AIntegratedGridController_NoRegister()
{
	return AIntegratedGridController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIntegratedGridController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Integrated controller that handles both camera control and grid interaction\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TurnBasedSystem/IntegratedGridController.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Integrated controller that handles both camera control and grid interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Enhanced Input System =====\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Enhanced Input System =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[] = {
		{ "Category", "Input|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic Input Actions\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightClickAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowRangeAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMoveAction_MetaData[] = {
		{ "Category", "Input|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera Control Actions\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Control Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotateAction_MetaData[] = {
		{ "Category", "Input|Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomAction_MetaData[] = {
		{ "Category", "Input|Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeedModifierAction_MetaData[] = {
		{ "Category", "Input|Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleModeAction_MetaData[] = {
		{ "Category", "Input|Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mode Toggle\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mode Toggle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentControlMode_MetaData[] = {
		{ "Category", "Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Control Mode =====\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Control Mode =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBaseSpeed_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Camera Settings =====\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Camera Settings =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFastSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEdgeScrolling_MetaData[] = {
		{ "Category", "Camera|EdgeScrolling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Edge Scrolling\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Edge Scrolling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollBorder_MetaData[] = {
		{ "Category", "Camera|EdgeScrolling" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollSpeed_MetaData[] = {
		{ "Category", "Camera|EdgeScrolling" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Component References =====\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Component References =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/IntegratedGridController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowRangeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRotateAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraZoomAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSpeedModifierAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleModeAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentControlMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentControlMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBaseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFastSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance;
	static void NewProp_bEnableEdgeScrolling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEdgeScrolling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollBorder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntegratedGridController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraMappingContext = { "CameraMappingContext", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMappingContext_MetaData), NewProp_CameraMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_GridMappingContext = { "GridMappingContext", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, GridMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridMappingContext_MetaData), NewProp_GridMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, ClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickAction_MetaData), NewProp_ClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_RightClickAction = { "RightClickAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, RightClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightClickAction_MetaData), NewProp_RightClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_ShowRangeAction = { "ShowRangeAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, ShowRangeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowRangeAction_MetaData), NewProp_ShowRangeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CancelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAction_MetaData), NewProp_CancelAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraMoveAction = { "CameraMoveAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMoveAction_MetaData), NewProp_CameraMoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraRotateAction = { "CameraRotateAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraRotateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotateAction_MetaData), NewProp_CameraRotateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraZoomAction = { "CameraZoomAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraZoomAction_MetaData), NewProp_CameraZoomAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraSpeedModifierAction = { "CameraSpeedModifierAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraSpeedModifierAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSpeedModifierAction_MetaData), NewProp_CameraSpeedModifierAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_ToggleModeAction = { "ToggleModeAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, ToggleModeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleModeAction_MetaData), NewProp_ToggleModeAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CurrentControlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CurrentControlMode = { "CurrentControlMode", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CurrentControlMode), Z_Construct_UEnum_ProjectGate_EControlMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentControlMode_MetaData), NewProp_CurrentControlMode_MetaData) }; // 4000300108
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraBaseSpeed = { "CameraBaseSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraBaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBaseSpeed_MetaData), NewProp_CameraBaseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraFastSpeed = { "CameraFastSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraFastSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFastSpeed_MetaData), NewProp_CameraFastSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraRotationSpeed = { "CameraRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationSpeed_MetaData), NewProp_CameraRotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraZoomSpeed = { "CameraZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraZoomSpeed_MetaData), NewProp_CameraZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_MinCameraDistance = { "MinCameraDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, MinCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCameraDistance_MetaData), NewProp_MinCameraDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_MaxCameraDistance = { "MaxCameraDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, MaxCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCameraDistance_MetaData), NewProp_MaxCameraDistance_MetaData) };
void Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_bEnableEdgeScrolling_SetBit(void* Obj)
{
	((AIntegratedGridController*)Obj)->bEnableEdgeScrolling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_bEnableEdgeScrolling = { "bEnableEdgeScrolling", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIntegratedGridController), &Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_bEnableEdgeScrolling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableEdgeScrolling_MetaData), NewProp_bEnableEdgeScrolling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_EdgeScrollBorder = { "EdgeScrollBorder", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, EdgeScrollBorder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScrollBorder_MetaData), NewProp_EdgeScrollBorder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_EdgeScrollSpeed = { "EdgeScrollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, EdgeScrollSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScrollSpeed_MetaData), NewProp_EdgeScrollSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_TurnManager = { "TurnManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, TurnManager), Z_Construct_UClass_ASimpleTurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnManager_MetaData), NewProp_TurnManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraPawn = { "CameraPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntegratedGridController, CameraPawn), Z_Construct_UClass_AFreeCameraPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPawn_MetaData), NewProp_CameraPawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIntegratedGridController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_GridMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_ClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_RightClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_ShowRangeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CancelAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraMoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraRotateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraZoomAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraSpeedModifierAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_ToggleModeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CurrentControlMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CurrentControlMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraBaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraFastSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_MinCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_MaxCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_bEnableEdgeScrolling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_EdgeScrollBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_EdgeScrollSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_TurnManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntegratedGridController_Statics::NewProp_CameraPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntegratedGridController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIntegratedGridController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntegratedGridController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntegratedGridController_Statics::ClassParams = {
	&AIntegratedGridController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIntegratedGridController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIntegratedGridController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntegratedGridController_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntegratedGridController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIntegratedGridController()
{
	if (!Z_Registration_Info_UClass_AIntegratedGridController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntegratedGridController.OuterSingleton, Z_Construct_UClass_AIntegratedGridController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntegratedGridController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIntegratedGridController);
AIntegratedGridController::~AIntegratedGridController() {}
// ********** End Class AIntegratedGridController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h__Script_ProjectGate_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControlMode_StaticEnum, TEXT("EControlMode"), &Z_Registration_Info_UEnum_EControlMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4000300108U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntegratedGridController, AIntegratedGridController::StaticClass, TEXT("AIntegratedGridController"), &Z_Registration_Info_UClass_AIntegratedGridController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntegratedGridController), 2526092518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h__Script_ProjectGate_440239375(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h__Script_ProjectGate_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_IntegratedGridController_h__Script_ProjectGate_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
