// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPM_PortfolioCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGPM_PortfolioCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
GPM_PORTFOLIO_API UClass* Z_Construct_UClass_AGPM_PortfolioCameraManager();
GPM_PORTFOLIO_API UClass* Z_Construct_UClass_AGPM_PortfolioCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GPM_Portfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGPM_PortfolioCameraManager **********************************************
void AGPM_PortfolioCameraManager::StaticRegisterNativesAGPM_PortfolioCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGPM_PortfolioCameraManager;
UClass* AGPM_PortfolioCameraManager::GetPrivateStaticClass()
{
	using TClass = AGPM_PortfolioCameraManager;
	if (!Z_Registration_Info_UClass_AGPM_PortfolioCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GPM_PortfolioCameraManager"),
			Z_Registration_Info_UClass_AGPM_PortfolioCameraManager.InnerSingleton,
			StaticRegisterNativesAGPM_PortfolioCameraManager,
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
	return Z_Registration_Info_UClass_AGPM_PortfolioCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGPM_PortfolioCameraManager_NoRegister()
{
	return AGPM_PortfolioCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGPM_PortfolioCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "GPM_PortfolioCameraManager.h" },
		{ "ModuleRelativePath", "GPM_PortfolioCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGPM_PortfolioCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGPM_PortfolioCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GPM_Portfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGPM_PortfolioCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGPM_PortfolioCameraManager_Statics::ClassParams = {
	&AGPM_PortfolioCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGPM_PortfolioCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGPM_PortfolioCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGPM_PortfolioCameraManager()
{
	if (!Z_Registration_Info_UClass_AGPM_PortfolioCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGPM_PortfolioCameraManager.OuterSingleton, Z_Construct_UClass_AGPM_PortfolioCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGPM_PortfolioCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGPM_PortfolioCameraManager);
AGPM_PortfolioCameraManager::~AGPM_PortfolioCameraManager() {}
// ********** End Class AGPM_PortfolioCameraManager ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioCameraManager_h__Script_GPM_Portfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGPM_PortfolioCameraManager, AGPM_PortfolioCameraManager::StaticClass, TEXT("AGPM_PortfolioCameraManager"), &Z_Registration_Info_UClass_AGPM_PortfolioCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGPM_PortfolioCameraManager), 2453044257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioCameraManager_h__Script_GPM_Portfolio_1905178453(TEXT("/Script/GPM_Portfolio"),
	Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioCameraManager_h__Script_GPM_Portfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioCameraManager_h__Script_GPM_Portfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
