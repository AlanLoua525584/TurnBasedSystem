// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/GA_BasicAttack_Test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGA_BasicAttack_Test() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGA_BasicAttack_Test();
PROJECTGATE_API UClass* Z_Construct_UClass_UGA_BasicAttack_Test_NoRegister();
PROJECTGATE_API UClass* Z_Construct_UClass_UGateGameplayAbility();
UPackage* Z_Construct_UPackage__Script_ProjectGate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGA_BasicAttack_Test Function OnAttackHit ********************************
struct Z_Construct_UFunction_UGA_BasicAttack_Test_OnAttackHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd""B\xef\xbf\xbdz\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdR\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GA_BasicAttack_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""B\xef\xbf\xbdz\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdR\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_BasicAttack_Test_OnAttackHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_BasicAttack_Test, nullptr, "OnAttackHit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_BasicAttack_Test_OnAttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_BasicAttack_Test_OnAttackHit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_BasicAttack_Test_OnAttackHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_BasicAttack_Test_OnAttackHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_BasicAttack_Test::execOnAttackHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackHit();
	P_NATIVE_END;
}
// ********** End Class UGA_BasicAttack_Test Function OnAttackHit **********************************

// ********** Begin Class UGA_BasicAttack_Test Function PerformAttack ******************************
struct Z_Construct_UFunction_UGA_BasicAttack_Test_PerformAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GA_BasicAttack_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_BasicAttack_Test_PerformAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_BasicAttack_Test, nullptr, "PerformAttack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_BasicAttack_Test_PerformAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_BasicAttack_Test_PerformAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_BasicAttack_Test_PerformAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_BasicAttack_Test_PerformAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_BasicAttack_Test::execPerformAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformAttack();
	P_NATIVE_END;
}
// ********** End Class UGA_BasicAttack_Test Function PerformAttack ********************************

// ********** Begin Class UGA_BasicAttack_Test *****************************************************
void UGA_BasicAttack_Test::StaticRegisterNativesUGA_BasicAttack_Test()
{
	UClass* Class = UGA_BasicAttack_Test::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAttackHit", &UGA_BasicAttack_Test::execOnAttackHit },
		{ "PerformAttack", &UGA_BasicAttack_Test::execPerformAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGA_BasicAttack_Test;
UClass* UGA_BasicAttack_Test::GetPrivateStaticClass()
{
	using TClass = UGA_BasicAttack_Test;
	if (!Z_Registration_Info_UClass_UGA_BasicAttack_Test.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GA_BasicAttack_Test"),
			Z_Registration_Info_UClass_UGA_BasicAttack_Test.InnerSingleton,
			StaticRegisterNativesUGA_BasicAttack_Test,
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
	return Z_Registration_Info_UClass_UGA_BasicAttack_Test.InnerSingleton;
}
UClass* Z_Construct_UClass_UGA_BasicAttack_Test_NoRegister()
{
	return UGA_BasicAttack_Test::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGA_BasicAttack_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n  * \xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa7\xde\xaf\xef\xbf\xbd\n * \xef\xbf\xbdi\xef\xbf\xbd\xdc\xa6p\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdXGAS\xef\xbf\xbdP\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GA_BasicAttack_Test.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GA_BasicAttack_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xa7\xde\xaf\xef\xbf\xbd\n\xef\xbf\xbdi\xef\xbf\xbd\xdc\xa6p\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdXGAS\xef\xbf\xbdP\xef\xbf\xbd{\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb0\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Ability|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xc4\xaaG\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GA_BasicAttack_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xc4\xaaG\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Ability|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GA_BasicAttack_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc2\xa6\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Ability|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdv\xef\xbf\xbd]\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""AttackPower\xef\xbf\xbd\xdd\xa9\xca\xa1^\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GA_BasicAttack_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcb\xae`\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdv\xef\xbf\xbd]\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""AttackPower\xef\xbf\xbd\xdd\xa9\xca\xa1^" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GA_BasicAttack_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""e\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_BasicAttack_Test_OnAttackHit, "OnAttackHit" }, // 2778207377
		{ &Z_Construct_UFunction_UGA_BasicAttack_Test_PerformAttack, "PerformAttack" }, // 2903169910
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_BasicAttack_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_BasicAttack_Test_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_BasicAttack_Test, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_BasicAttack_Test_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_BasicAttack_Test, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_BasicAttack_Test_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_BasicAttack_Test, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_BasicAttack_Test_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_BasicAttack_Test, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_BasicAttack_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_BasicAttack_Test_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_BasicAttack_Test_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_BasicAttack_Test_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_BasicAttack_Test_Statics::NewProp_CurrentTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_BasicAttack_Test_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_BasicAttack_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGateGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_BasicAttack_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_BasicAttack_Test_Statics::ClassParams = {
	&UGA_BasicAttack_Test::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGA_BasicAttack_Test_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_BasicAttack_Test_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_BasicAttack_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_BasicAttack_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_BasicAttack_Test()
{
	if (!Z_Registration_Info_UClass_UGA_BasicAttack_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_BasicAttack_Test.OuterSingleton, Z_Construct_UClass_UGA_BasicAttack_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_BasicAttack_Test.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_BasicAttack_Test);
UGA_BasicAttack_Test::~UGA_BasicAttack_Test() {}
// ********** End Class UGA_BasicAttack_Test *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h__Script_ProjectGate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_BasicAttack_Test, UGA_BasicAttack_Test::StaticClass, TEXT("UGA_BasicAttack_Test"), &Z_Registration_Info_UClass_UGA_BasicAttack_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_BasicAttack_Test), 2463934959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h__Script_ProjectGate_3332067176(TEXT("/Script/ProjectGate"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h__Script_ProjectGate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ProjectGate_Source_ProjectGate_Public_GameplayAbilitySystem_GA_BasicAttack_Test_h__Script_ProjectGate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
