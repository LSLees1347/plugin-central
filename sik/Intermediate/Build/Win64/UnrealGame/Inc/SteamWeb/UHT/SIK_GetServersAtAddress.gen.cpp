// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_GetServersAtAddress.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetServersAtAddress() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServersAtAddress();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServersAtAddress_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetServersAtAddress Function GetServersAtAddress
struct Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics
{
	struct SIK_GetServersAtAddress_eventGetServersAtAddress_Parms
	{
		FString Addr;
		USIK_GetServersAtAddress* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetServersAtAddress.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Addr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Addr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::NewProp_Addr = { "Addr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServersAtAddress_eventGetServersAtAddress_Parms, Addr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Addr_MetaData), NewProp_Addr_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServersAtAddress_eventGetServersAtAddress_Parms, ReturnValue), Z_Construct_UClass_USIK_GetServersAtAddress_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::NewProp_Addr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetServersAtAddress, nullptr, "GetServersAtAddress", nullptr, nullptr, Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::SIK_GetServersAtAddress_eventGetServersAtAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::SIK_GetServersAtAddress_eventGetServersAtAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetServersAtAddress::execGetServersAtAddress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Addr);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetServersAtAddress**)Z_Param__Result=USIK_GetServersAtAddress::GetServersAtAddress(Z_Param_Addr);
	P_NATIVE_END;
}
// End Class USIK_GetServersAtAddress Function GetServersAtAddress

// Begin Class USIK_GetServersAtAddress
void USIK_GetServersAtAddress::StaticRegisterNativesUSIK_GetServersAtAddress()
{
	UClass* Class = USIK_GetServersAtAddress::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetServersAtAddress", &USIK_GetServersAtAddress::execGetServersAtAddress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetServersAtAddress);
UClass* Z_Construct_UClass_USIK_GetServersAtAddress_NoRegister()
{
	return USIK_GetServersAtAddress::StaticClass();
}
struct Z_Construct_UClass_USIK_GetServersAtAddress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_GetServersAtAddress.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetServersAtAddress.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetServersAtAddress_GetServersAtAddress, "GetServersAtAddress" }, // 1365636420
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetServersAtAddress>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetServersAtAddress_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServersAtAddress_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetServersAtAddress_Statics::ClassParams = {
	&USIK_GetServersAtAddress::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServersAtAddress_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetServersAtAddress_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetServersAtAddress()
{
	if (!Z_Registration_Info_UClass_USIK_GetServersAtAddress.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetServersAtAddress.OuterSingleton, Z_Construct_UClass_USIK_GetServersAtAddress_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetServersAtAddress.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetServersAtAddress>()
{
	return USIK_GetServersAtAddress::StaticClass();
}
USIK_GetServersAtAddress::USIK_GetServersAtAddress(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetServersAtAddress);
USIK_GetServersAtAddress::~USIK_GetServersAtAddress() {}
// End Class USIK_GetServersAtAddress

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServersAtAddress_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetServersAtAddress, USIK_GetServersAtAddress::StaticClass, TEXT("USIK_GetServersAtAddress"), &Z_Registration_Info_UClass_USIK_GetServersAtAddress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetServersAtAddress), 1244480512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServersAtAddress_h_4281947314(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServersAtAddress_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServersAtAddress_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
