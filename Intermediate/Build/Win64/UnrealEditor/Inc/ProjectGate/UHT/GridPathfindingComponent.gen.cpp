// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedSystem/GridPathfindingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridPathfindingComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridPathfindingComponent();
PROJECTGATE_API UClass* Z_Construct_UClass_UGridPathfindingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGridPathfindingComponent Function CalculatePathCost *********************
struct Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics
{
	struct GridPathfindingComponent_eventCalculatePathCost_Parms
	{
		TArray<FIntPoint> Path;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculate path cost\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPathfindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate path cost" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPathfindingComponent_eventCalculatePathCost_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPathfindingComponent_eventCalculatePathCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridPathfindingComponent, nullptr, "CalculatePathCost", Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::GridPathfindingComponent_eventCalculatePathCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::GridPathfindingComponent_eventCalculatePathCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridPathfindingComponent::execCalculatePathCost)
{
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CalculatePathCost(Z_Param_Out_Path);
	P_NATIVE_END;
}
// ********** End Class UGridPathfindingComponent Function CalculatePathCost ***********************

// ********** Begin Class UGridPathfindingComponent Function FindPath ******************************
struct Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics
{
	struct GridPathfindingComponent_eventFindPath_Parms
	{
		FIntPoint StartPos;
		FIntPoint EndPos;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfingding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Find path\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPathfindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPathfindingComponent_eventFindPath_Parms, StartPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPathfindingComponent_eventFindPath_Parms, EndPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPathfindingComponent_eventFindPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::NewProp_StartPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::NewProp_EndPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridPathfindingComponent, nullptr, "FindPath", Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::GridPathfindingComponent_eventFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::GridPathfindingComponent_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridPathfindingComponent_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridPathfindingComponent_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridPathfindingComponent::execFindPath)
{
	P_GET_STRUCT(FIntPoint,Z_Param_StartPos);
	P_GET_STRUCT(FIntPoint,Z_Param_EndPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->FindPath(Z_Param_StartPos,Z_Param_EndPos);
	P_NATIVE_END;
}
// ********** End Class UGridPathfindingComponent Function FindPath ********************************

// ********** Begin Class UGridPathfindingComponent Function InitializeGrid ************************
struct Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics
{
	struct GridPathfindingComponent_eventInitializeGrid_Parms
	{
		AGridManager* InGridManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize\n" },
#endif
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPathfindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGridManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::NewProp_InGridManager = { "InGridManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPathfindingComponent_eventInitializeGrid_Parms, InGridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::NewProp_InGridManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridPathfindingComponent, nullptr, "InitializeGrid", Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::GridPathfindingComponent_eventInitializeGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::GridPathfindingComponent_eventInitializeGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridPathfindingComponent::execInitializeGrid)
{
	P_GET_OBJECT(AGridManager,Z_Param_InGridManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeGrid(Z_Param_InGridManager);
	P_NATIVE_END;
}
// ********** End Class UGridPathfindingComponent Function InitializeGrid **************************

// ********** Begin Class UGridPathfindingComponent ************************************************
void UGridPathfindingComponent::StaticRegisterNativesUGridPathfindingComponent()
{
	UClass* Class = UGridPathfindingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculatePathCost", &UGridPathfindingComponent::execCalculatePathCost },
		{ "FindPath", &UGridPathfindingComponent::execFindPath },
		{ "InitializeGrid", &UGridPathfindingComponent::execInitializeGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGridPathfindingComponent;
UClass* UGridPathfindingComponent::GetPrivateStaticClass()
{
	using TClass = UGridPathfindingComponent;
	if (!Z_Registration_Info_UClass_UGridPathfindingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridPathfindingComponent"),
			Z_Registration_Info_UClass_UGridPathfindingComponent.InnerSingleton,
			StaticRegisterNativesUGridPathfindingComponent,
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
	return Z_Registration_Info_UClass_UGridPathfindingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGridPathfindingComponent_NoRegister()
{
	return UGridPathfindingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGridPathfindingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnBasedSystem/GridPathfindingComponent.h" },
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPathfindingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TurnBasedSystem/GridPathfindingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridPathfindingComponent_CalculatePathCost, "CalculatePathCost" }, // 2524191608
		{ &Z_Construct_UFunction_UGridPathfindingComponent_FindPath, "FindPath" }, // 1807113102
		{ &Z_Construct_UFunction_UGridPathfindingComponent_InitializeGrid, "InitializeGrid" }, // 1991086669
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPathfindingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridPathfindingComponent_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPathfindingComponent, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPathfindingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPathfindingComponent_Statics::NewProp_GridManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathfindingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridPathfindingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathfindingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridPathfindingComponent_Statics::ClassParams = {
	&UGridPathfindingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGridPathfindingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathfindingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPathfindingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridPathfindingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridPathfindingComponent()
{
	if (!Z_Registration_Info_UClass_UGridPathfindingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridPathfindingComponent.OuterSingleton, Z_Construct_UClass_UGridPathfindingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridPathfindingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPathfindingComponent);
UGridPathfindingComponent::~UGridPathfindingComponent() {}
// ********** End Class UGridPathfindingComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridPathfindingComponent, UGridPathfindingComponent::StaticClass, TEXT("UGridPathfindingComponent"), &Z_Registration_Info_UClass_UGridPathfindingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridPathfindingComponent), 4108884351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h__Script_ProjectGate_1365498689(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_TurnBasedSystem_GridPathfindingComponent_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
