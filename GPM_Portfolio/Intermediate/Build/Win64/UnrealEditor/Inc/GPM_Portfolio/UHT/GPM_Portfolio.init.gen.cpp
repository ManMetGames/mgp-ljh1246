// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPM_Portfolio_init() {}
	GPM_PORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_GPM_Portfolio_BulletCountUpdatedDelegate__DelegateSignature();
	GPM_PORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_GPM_Portfolio_DamagedDelegate__DelegateSignature();
	GPM_PORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_GPM_Portfolio_PawnDeathDelegate__DelegateSignature();
	GPM_PORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_GPM_Portfolio_SprintStateChangedDelegate__DelegateSignature();
	GPM_PORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_GPM_Portfolio_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GPM_Portfolio;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GPM_Portfolio()
	{
		if (!Z_Registration_Info_UPackage__Script_GPM_Portfolio.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GPM_Portfolio_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GPM_Portfolio_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GPM_Portfolio_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GPM_Portfolio_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GPM_Portfolio_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GPM_Portfolio",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD0BD3ED8,
				0x36080574,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GPM_Portfolio.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GPM_Portfolio.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GPM_Portfolio(Z_Construct_UPackage__Script_GPM_Portfolio, TEXT("/Script/GPM_Portfolio"), Z_Registration_Info_UPackage__Script_GPM_Portfolio, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD0BD3ED8, 0x36080574));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
