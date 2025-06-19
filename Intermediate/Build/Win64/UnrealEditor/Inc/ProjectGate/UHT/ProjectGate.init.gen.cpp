// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectGate_init() {}
	PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature();
	PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature();
	PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnEnemyDied__DelegateSignature();
	PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature();
	PROJECTGATE_API UFunction* Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectGate;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectGate()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectGate.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectGate_OnActionPerformed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectGate_OnActionPointsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectGate_OnEnemyDied__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectGate_OnPhaseChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectGate_OnTurnChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectGate",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5A55AF75,
				0xF9174145,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectGate.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectGate.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectGate(Z_Construct_UPackage__Script_ProjectGate, TEXT("/Script/ProjectGate"), Z_Registration_Info_UPackage__Script_ProjectGate, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5A55AF75, 0xF9174145));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
