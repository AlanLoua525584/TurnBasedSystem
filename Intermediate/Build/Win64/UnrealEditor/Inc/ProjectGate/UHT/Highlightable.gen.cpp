// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HighlightSystem/Highlightable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHighlightable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightable();
PROJECTGATE_API UClass* Z_Construct_UClass_UHighlightable_NoRegister();
PROJECTGATE_API UEnum* Z_Construct_UEnum_ProjectGate_EHighlightType();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UHighlightable Function CanBeHighlighted *****************************
struct Highlightable_eventCanBeHighlighted_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Highlightable_eventCanBeHighlighted_Parms()
		: ReturnValue(false)
	{
	}
};
bool IHighlightable::CanBeHighlighted() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBeHighlighted instead.");
	Highlightable_eventCanBeHighlighted_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UHighlightable_CanBeHighlighted = FName(TEXT("CanBeHighlighted"));
bool IHighlightable::Execute_CanBeHighlighted(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHighlightable::StaticClass()));
	Highlightable_eventCanBeHighlighted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHighlightable_CanBeHighlighted);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IHighlightable*)(O->GetNativeInterfaceAddress(UHighlightable::StaticClass())))
	{
		Parms.ReturnValue = I->CanBeHighlighted_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x81\xe8\xa8\xb1\xe9\xab\x98\xe4\xba\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/Highlightable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x81\xe8\xa8\xb1\xe9\xab\x98\xe4\xba\xae" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Highlightable_eventCanBeHighlighted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Highlightable_eventCanBeHighlighted_Parms), &Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightable, nullptr, "CanBeHighlighted", Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::PropPointers), sizeof(Highlightable_eventCanBeHighlighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Highlightable_eventCanBeHighlighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightable_CanBeHighlighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightable_CanBeHighlighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHighlightable::execCanBeHighlighted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeHighlighted_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UHighlightable Function CanBeHighlighted *******************************

// ********** Begin Interface UHighlightable Function GetHighlightableComponents *******************
struct Highlightable_eventGetHighlightableComponents_Parms
{
	TArray<UPrimitiveComponent*> ReturnValue;
};
TArray<UPrimitiveComponent*> IHighlightable::GetHighlightableComponents()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHighlightableComponents instead.");
	Highlightable_eventGetHighlightableComponents_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UHighlightable_GetHighlightableComponents = FName(TEXT("GetHighlightableComponents"));
TArray<UPrimitiveComponent*> IHighlightable::Execute_GetHighlightableComponents(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHighlightable::StaticClass()));
	Highlightable_eventGetHighlightableComponents_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHighlightable_GetHighlightableComponents);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IHighlightable*)(O->GetNativeInterfaceAddress(UHighlightable::StaticClass())))
	{
		Parms.ReturnValue = I->GetHighlightableComponents_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8d\xb2\xe5\x8f\x96\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe9\xab\x98\xe4\xba\xae\xe7\x9a\x84\xe7\xb5\x84\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/Highlightable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8d\xb2\xe5\x8f\x96\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe9\xab\x98\xe4\xba\xae\xe7\x9a\x84\xe7\xb5\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Highlightable_eventGetHighlightableComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightable, nullptr, "GetHighlightableComponents", Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::PropPointers), sizeof(Highlightable_eventGetHighlightableComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Highlightable_eventGetHighlightableComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightable_GetHighlightableComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightable_GetHighlightableComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHighlightable::execGetHighlightableComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->GetHighlightableComponents_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UHighlightable Function GetHighlightableComponents *********************

// ********** Begin Interface UHighlightable Function OnHighlightApplied ***************************
struct Highlightable_eventOnHighlightApplied_Parms
{
	EHighlightType Type;
};
void IHighlightable::OnHighlightApplied(EHighlightType Type)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHighlightApplied instead.");
}
static FName NAME_UHighlightable_OnHighlightApplied = FName(TEXT("OnHighlightApplied"));
void IHighlightable::Execute_OnHighlightApplied(UObject* O, EHighlightType Type)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHighlightable::StaticClass()));
	Highlightable_eventOnHighlightApplied_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHighlightable_OnHighlightApplied);
	if (Func)
	{
		Parms.Type=Type;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IHighlightable*)(O->GetNativeInterfaceAddress(UHighlightable::StaticClass())))
	{
		I->OnHighlightApplied_Implementation(Type);
	}
}
struct Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x95\xb6\xe9\xab\x98\xe4\xba\xae\xe8\xa2\xab\xe6\x87\x89\xe7\x94\xa8\xe6\x99\x82\xe8\xaa\xbf\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/Highlightable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\xb6\xe9\xab\x98\xe4\xba\xae\xe8\xa2\xab\xe6\x87\x89\xe7\x94\xa8\xe6\x99\x82\xe8\xaa\xbf\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Highlightable_eventOnHighlightApplied_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightable, nullptr, "OnHighlightApplied", Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::PropPointers), sizeof(Highlightable_eventOnHighlightApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Highlightable_eventOnHighlightApplied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightable_OnHighlightApplied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightable_OnHighlightApplied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHighlightable::execOnHighlightApplied)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHighlightApplied_Implementation(EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Interface UHighlightable Function OnHighlightApplied *****************************

// ********** Begin Interface UHighlightable Function OnHighlightRemoved ***************************
struct Highlightable_eventOnHighlightRemoved_Parms
{
	EHighlightType Type;
};
void IHighlightable::OnHighlightRemoved(EHighlightType Type)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHighlightRemoved instead.");
}
static FName NAME_UHighlightable_OnHighlightRemoved = FName(TEXT("OnHighlightRemoved"));
void IHighlightable::Execute_OnHighlightRemoved(UObject* O, EHighlightType Type)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHighlightable::StaticClass()));
	Highlightable_eventOnHighlightRemoved_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHighlightable_OnHighlightRemoved);
	if (Func)
	{
		Parms.Type=Type;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IHighlightable*)(O->GetNativeInterfaceAddress(UHighlightable::StaticClass())))
	{
		I->OnHighlightRemoved_Implementation(Type);
	}
}
struct Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Highlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x95\xb6\xe9\xab\x98\xe4\xba\xae\xe8\xa2\xab\xe7\xa7\xbb\xe9\x99\xa4\xe6\x99\x82\xe8\xaa\xbf\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/HighlightSystem/Highlightable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\xb6\xe9\xab\x98\xe4\xba\xae\xe8\xa2\xab\xe7\xa7\xbb\xe9\x99\xa4\xe6\x99\x82\xe8\xaa\xbf\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Highlightable_eventOnHighlightRemoved_Parms, Type), Z_Construct_UEnum_ProjectGate_EHighlightType, METADATA_PARAMS(0, nullptr) }; // 2403232974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHighlightable, nullptr, "OnHighlightRemoved", Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::PropPointers), sizeof(Highlightable_eventOnHighlightRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Highlightable_eventOnHighlightRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHighlightable_OnHighlightRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighlightable_OnHighlightRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHighlightable::execOnHighlightRemoved)
{
	P_GET_ENUM(EHighlightType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHighlightRemoved_Implementation(EHighlightType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Interface UHighlightable Function OnHighlightRemoved *****************************

// ********** Begin Interface UHighlightable *******************************************************
void UHighlightable::StaticRegisterNativesUHighlightable()
{
	UClass* Class = UHighlightable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanBeHighlighted", &IHighlightable::execCanBeHighlighted },
		{ "GetHighlightableComponents", &IHighlightable::execGetHighlightableComponents },
		{ "OnHighlightApplied", &IHighlightable::execOnHighlightApplied },
		{ "OnHighlightRemoved", &IHighlightable::execOnHighlightRemoved },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHighlightable;
UClass* UHighlightable::GetPrivateStaticClass()
{
	using TClass = UHighlightable;
	if (!Z_Registration_Info_UClass_UHighlightable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Highlightable"),
			Z_Registration_Info_UClass_UHighlightable.InnerSingleton,
			StaticRegisterNativesUHighlightable,
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
	return Z_Registration_Info_UClass_UHighlightable.InnerSingleton;
}
UClass* Z_Construct_UClass_UHighlightable_NoRegister()
{
	return UHighlightable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHighlightable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HighlightSystem/Highlightable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightable_CanBeHighlighted, "CanBeHighlighted" }, // 280395282
		{ &Z_Construct_UFunction_UHighlightable_GetHighlightableComponents, "GetHighlightableComponents" }, // 3525470576
		{ &Z_Construct_UFunction_UHighlightable_OnHighlightApplied, "OnHighlightApplied" }, // 716823355
		{ &Z_Construct_UFunction_UHighlightable_OnHighlightRemoved, "OnHighlightRemoved" }, // 4018226715
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHighlightable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHighlightable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHighlightable_Statics::ClassParams = {
	&UHighlightable::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightable_Statics::Class_MetaDataParams), Z_Construct_UClass_UHighlightable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHighlightable()
{
	if (!Z_Registration_Info_UClass_UHighlightable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHighlightable.OuterSingleton, Z_Construct_UClass_UHighlightable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHighlightable.OuterSingleton;
}
UHighlightable::UHighlightable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightable);
// ********** End Interface UHighlightable *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHighlightable, UHighlightable::StaticClass, TEXT("UHighlightable"), &Z_Registration_Info_UClass_UHighlightable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHighlightable), 566508340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h__Script_ProjectGate_2876270693(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_HighlightSystem_Highlightable_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
