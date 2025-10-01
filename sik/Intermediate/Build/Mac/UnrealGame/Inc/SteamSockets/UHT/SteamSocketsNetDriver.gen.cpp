// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSockets/Public/SteamSocketsNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSocketsNetDriver() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetDriver();
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetDriver_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamSockets();
// End Cross Module References

// Begin Class USteamSocketsNetDriver
void USteamSocketsNetDriver::StaticRegisterNativesUSteamSocketsNetDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamSocketsNetDriver);
UClass* Z_Construct_UClass_USteamSocketsNetDriver_NoRegister()
{
	return USteamSocketsNetDriver::StaticClass();
}
struct Z_Construct_UClass_USteamSocketsNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamSocketsNetDriver.h" },
		{ "ModuleRelativePath", "Public/SteamSocketsNetDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamSocketsNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamSocketsNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamSocketsNetDriver_Statics::ClassParams = {
	&USteamSocketsNetDriver::StaticClass,
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
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamSocketsNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamSocketsNetDriver()
{
	if (!Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton, Z_Construct_UClass_USteamSocketsNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton;
}
template<> STEAMSOCKETS_API UClass* StaticClass<USteamSocketsNetDriver>()
{
	return USteamSocketsNetDriver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamSocketsNetDriver);
USteamSocketsNetDriver::~USteamSocketsNetDriver() {}
// End Class USteamSocketsNetDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamSocketsNetDriver, USteamSocketsNetDriver::StaticClass, TEXT("USteamSocketsNetDriver"), &Z_Registration_Info_UClass_USteamSocketsNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamSocketsNetDriver), 307378001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h_3387088457(TEXT("/Script/SteamSockets"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
