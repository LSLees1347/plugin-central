// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSockets/Public/SteamSocketsNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSocketsNetConnection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetConnection();
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamSockets();
// End Cross Module References

// Begin Class USteamSocketsNetConnection
void USteamSocketsNetConnection::StaticRegisterNativesUSteamSocketsNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamSocketsNetConnection);
UClass* Z_Construct_UClass_USteamSocketsNetConnection_NoRegister()
{
	return USteamSocketsNetConnection::StaticClass();
}
struct Z_Construct_UClass_USteamSocketsNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamSocketsNetConnection.h" },
		{ "ModuleRelativePath", "Public/SteamSocketsNetConnection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamSocketsNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamSocketsNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamSocketsNetConnection_Statics::ClassParams = {
	&USteamSocketsNetConnection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamSocketsNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamSocketsNetConnection()
{
	if (!Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton, Z_Construct_UClass_USteamSocketsNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton;
}
template<> STEAMSOCKETS_API UClass* StaticClass<USteamSocketsNetConnection>()
{
	return USteamSocketsNetConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamSocketsNetConnection);
USteamSocketsNetConnection::~USteamSocketsNetConnection() {}
// End Class USteamSocketsNetConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamSocketsNetConnection, USteamSocketsNetConnection::StaticClass, TEXT("USteamSocketsNetConnection"), &Z_Registration_Info_UClass_USteamSocketsNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamSocketsNetConnection), 713661753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_724738589(TEXT("/Script/SteamSockets"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
