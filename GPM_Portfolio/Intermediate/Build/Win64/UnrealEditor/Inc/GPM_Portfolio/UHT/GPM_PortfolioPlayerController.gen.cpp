// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPM_PortfolioPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGPM_PortfolioPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GPM_PORTFOLIO_API UClass* Z_Construct_UClass_AGPM_PortfolioPlayerController();
GPM_PORTFOLIO_API UClass* Z_Construct_UClass_AGPM_PortfolioPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GPM_Portfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGPM_PortfolioPlayerController *******************************************
void AGPM_PortfolioPlayerController::StaticRegisterNativesAGPM_PortfolioPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGPM_PortfolioPlayerController;
UClass* AGPM_PortfolioPlayerController::GetPrivateStaticClass()
{
	using TClass = AGPM_PortfolioPlayerController;
	if (!Z_Registration_Info_UClass_AGPM_PortfolioPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GPM_PortfolioPlayerController"),
			Z_Registration_Info_UClass_AGPM_PortfolioPlayerController.InnerSingleton,
			StaticRegisterNativesAGPM_PortfolioPlayerController,
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
	return Z_Registration_Info_UClass_AGPM_PortfolioPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AGPM_PortfolioPlayerController_NoRegister()
{
	return AGPM_PortfolioPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple first person Player Controller\n *  Manages the input mapping context.\n *  Overrides the Player Camera Manager class.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GPM_PortfolioPlayerController.h" },
		{ "ModuleRelativePath", "GPM_PortfolioPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple first person Player Controller\nManages the input mapping context.\nOverrides the Player Camera Manager class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "GPM_PortfolioPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "GPM_PortfolioPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "GPM_PortfolioPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGPM_PortfolioPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGPM_PortfolioPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGPM_PortfolioPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGPM_PortfolioPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::NewProp_MobileControlsWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GPM_Portfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::ClassParams = {
	&AGPM_PortfolioPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGPM_PortfolioPlayerController()
{
	if (!Z_Registration_Info_UClass_AGPM_PortfolioPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGPM_PortfolioPlayerController.OuterSingleton, Z_Construct_UClass_AGPM_PortfolioPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGPM_PortfolioPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGPM_PortfolioPlayerController);
AGPM_PortfolioPlayerController::~AGPM_PortfolioPlayerController() {}
// ********** End Class AGPM_PortfolioPlayerController *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioPlayerController_h__Script_GPM_Portfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGPM_PortfolioPlayerController, AGPM_PortfolioPlayerController::StaticClass, TEXT("AGPM_PortfolioPlayerController"), &Z_Registration_Info_UClass_AGPM_PortfolioPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGPM_PortfolioPlayerController), 4168629442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioPlayerController_h__Script_GPM_Portfolio_4199389966(TEXT("/Script/GPM_Portfolio"),
	Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioPlayerController_h__Script_GPM_Portfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lotti_OneDrive___MMU_Documents_GitHub_mgp_ljh1246_GPM_Portfolio_Source_GPM_Portfolio_GPM_PortfolioPlayerController_h__Script_GPM_Portfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
