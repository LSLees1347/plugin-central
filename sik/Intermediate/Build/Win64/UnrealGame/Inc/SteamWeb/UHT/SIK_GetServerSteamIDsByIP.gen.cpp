// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_GetServerSteamIDsByIP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetServerSteamIDsByIP() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServerSteamIDsByIP();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServerSteamIDsByIP_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetServerSteamIDsByIP Function GetServerSteamIDsByIP
struct Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics
{
	struct SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms
	{
		FString Key;
		TArray<FString> ServerIPs;
		USIK_GetServerSteamIDsByIP* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "//Gets a list of server SteamIDs given a list of IPs.\n" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_GetServerSteamIDsByIP.h" },
		{ "ToolTip", "Gets a list of server SteamIDs given a list of IPs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIPs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIPs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServerIPs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ServerIPs_Inner = { "ServerIPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ServerIPs = { "ServerIPs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms, ServerIPs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIPs_MetaData), NewProp_ServerIPs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms, ReturnValue), Z_Construct_UClass_USIK_GetServerSteamIDsByIP_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ServerIPs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ServerIPs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetServerSteamIDsByIP, nullptr, "GetServerSteamIDsByIP", nullptr, nullptr, Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetServerSteamIDsByIP::execGetServerSteamIDsByIP)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_ServerIPs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetServerSteamIDsByIP**)Z_Param__Result=USIK_GetServerSteamIDsByIP::GetServerSteamIDsByIP(Z_Param_Key,Z_Param_Out_ServerIPs);
	P_NATIVE_END;
}
// End Class USIK_GetServerSteamIDsByIP Function GetServerSteamIDsByIP

// Begin Class USIK_GetServerSteamIDsByIP
void USIK_GetServerSteamIDsByIP::StaticRegisterNativesUSIK_GetServerSteamIDsByIP()
{
	UClass* Class = USIK_GetServerSteamIDsByIP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetServerSteamIDsByIP", &USIK_GetServerSteamIDsByIP::execGetServerSteamIDsByIP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetServerSteamIDsByIP);
UClass* Z_Construct_UClass_USIK_GetServerSteamIDsByIP_NoRegister()
{
	return USIK_GetServerSteamIDsByIP::StaticClass();
}
struct Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_GetServerSteamIDsByIP.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_GetServerSteamIDsByIP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP, "GetServerSteamIDsByIP" }, // 4260951365
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetServerSteamIDsByIP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::ClassParams = {
	&USIK_GetServerSteamIDsByIP::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetServerSteamIDsByIP()
{
	if (!Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.OuterSingleton, Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetServerSteamIDsByIP>()
{
	return USIK_GetServerSteamIDsByIP::StaticClass();
}
USIK_GetServerSteamIDsByIP::USIK_GetServerSteamIDsByIP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetServerSteamIDsByIP);
USIK_GetServerSteamIDsByIP::~USIK_GetServerSteamIDsByIP() {}
// End Class USIK_GetServerSteamIDsByIP

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetServerSteamIDsByIP, USIK_GetServerSteamIDsByIP::StaticClass, TEXT("USIK_GetServerSteamIDsByIP"), &Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetServerSteamIDsByIP), 3463567508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h_645892809(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
