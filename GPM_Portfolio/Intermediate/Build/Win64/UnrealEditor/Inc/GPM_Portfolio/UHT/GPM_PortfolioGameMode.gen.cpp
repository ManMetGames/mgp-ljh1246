// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPM_PortfolioGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGPM_PortfolioGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GPM_PORTFOLIO_API UClass* Z_Construct_UClass_AGPM_PortfolioGameMode();
GPM_PORTFOLIO_API UClass* Z_Construct_UClass_AGPM_PortfolioGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GPM_Portfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGPM_PortfolioGameMode ***************************************************
void AGPM_PortfolioGameMode::StaticRegisterNativesAGPM_PortfolioGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGPM_PortfolioGameMode;
UClass* AGPM_PortfolioGameMode::GetPrivateStaticClass()
{
	using TClass = AGPM_PortfolioGameMode;
	if (!Z_Registration_Info_UClass_AGPM_PortfolioGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GPM_PortfolioGameMode"),
			Z_Registration_Info_UClass_AGPM_PortfolioGameMode.InnerSingleton,
			StaticRegisterNativesAGPM_PortfolioGameMode,
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
	return Z_Registration_Info_UClass_AGPM_PortfolioGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGPM_PortfolioGameMode_NoRegister()
{
	return AGPM_PortfolioGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGPM_PortfolioGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GPM_PortfolioGameMode.h" },
		{ "ModuleRelativePath", "GPM_PortfolioGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGPM_PortfolioGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGPM_PortfolioGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GPM_Portfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGPM_PortfolioGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGPM_PortfolioGameMode_Statics::ClassParams = {
	&AGPM_PortfolioGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGPM_PortfolioGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGPM_PortfolioGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGPM_PortfolioGameMode()
{
	if (!Z_Registration_Info_UClass_AGPM_PortfolioGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGPM_PortfolioGameMode.OuterSingleton, Z_Construct_UClass_AGPM_PortfolioGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGPM_PortfolioGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGPM_PortfolioGameMode);
AGPM_PortfolioGameMode::~AGPM_PortfolioGameMode() {}
// ********** End Class AGPM_PortfolioGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioGameMode_h__Script_GPM_Portfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGPM_PortfolioGameMode, AGPM_PortfolioGameMode::StaticClass, TEXT("AGPM_PortfolioGameMode"), &Z_Registration_Info_UClass_AGPM_PortfolioGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGPM_PortfolioGameMode), 3833916538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioGameMode_h__Script_GPM_Portfolio_586032245(TEXT("/Script/GPM_Portfolio"),
	Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioGameMode_h__Script_GPM_Portfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioGameMode_h__Script_GPM_Portfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
