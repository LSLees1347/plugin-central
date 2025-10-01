// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/User/SIK_ResolveVanityURL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_ResolveVanityURL() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ResolveVanityURL();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ResolveVanityURL_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_ResolveVanityURL Function ResolveVanityURL
struct Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics
{
	struct SIK_ResolveVanityURL_eventResolveVanityURL_Parms
	{
		FString Key;
		FString VanityUrl;
		int32 UrlType;
		USIK_ResolveVanityURL* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "CPP_Default_UrlType", "-1" },
		{ "ModuleRelativePath", "Functions/User/SIK_ResolveVanityURL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VanityUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UrlType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VanityUrl;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UrlType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResolveVanityURL_eventResolveVanityURL_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::NewProp_VanityUrl = { "VanityUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResolveVanityURL_eventResolveVanityURL_Parms, VanityUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VanityUrl_MetaData), NewProp_VanityUrl_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::NewProp_UrlType = { "UrlType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResolveVanityURL_eventResolveVanityURL_Parms, UrlType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UrlType_MetaData), NewProp_UrlType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResolveVanityURL_eventResolveVanityURL_Parms, ReturnValue), Z_Construct_UClass_USIK_ResolveVanityURL_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::NewProp_VanityUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::NewProp_UrlType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_ResolveVanityURL, nullptr, "ResolveVanityURL", nullptr, nullptr, Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::SIK_ResolveVanityURL_eventResolveVanityURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::SIK_ResolveVanityURL_eventResolveVanityURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ResolveVanityURL::execResolveVanityURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_VanityUrl);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UrlType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ResolveVanityURL**)Z_Param__Result=USIK_ResolveVanityURL::ResolveVanityURL(Z_Param_Key,Z_Param_VanityUrl,Z_Param_Out_UrlType);
	P_NATIVE_END;
}
// End Class USIK_ResolveVanityURL Function ResolveVanityURL

// Begin Class USIK_ResolveVanityURL
void USIK_ResolveVanityURL::StaticRegisterNativesUSIK_ResolveVanityURL()
{
	UClass* Class = USIK_ResolveVanityURL::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResolveVanityURL", &USIK_ResolveVanityURL::execResolveVanityURL },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_ResolveVanityURL);
UClass* Z_Construct_UClass_USIK_ResolveVanityURL_NoRegister()
{
	return USIK_ResolveVanityURL::StaticClass();
}
struct Z_Construct_UClass_USIK_ResolveVanityURL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_ResolveVanityURL.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_ResolveVanityURL.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ResolveVanityURL_ResolveVanityURL, "ResolveVanityURL" }, // 1220412955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ResolveVanityURL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_ResolveVanityURL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ResolveVanityURL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ResolveVanityURL_Statics::ClassParams = {
	&USIK_ResolveVanityURL::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ResolveVanityURL_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ResolveVanityURL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_ResolveVanityURL()
{
	if (!Z_Registration_Info_UClass_USIK_ResolveVanityURL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ResolveVanityURL.OuterSingleton, Z_Construct_UClass_USIK_ResolveVanityURL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ResolveVanityURL.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_ResolveVanityURL>()
{
	return USIK_ResolveVanityURL::StaticClass();
}
USIK_ResolveVanityURL::USIK_ResolveVanityURL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_ResolveVanityURL);
USIK_ResolveVanityURL::~USIK_ResolveVanityURL() {}
// End Class USIK_ResolveVanityURL

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_ResolveVanityURL_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ResolveVanityURL, USIK_ResolveVanityURL::StaticClass, TEXT("USIK_ResolveVanityURL"), &Z_Registration_Info_UClass_USIK_ResolveVanityURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ResolveVanityURL), 3623863479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_ResolveVanityURL_h_1108516394(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_ResolveVanityURL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_ResolveVanityURL_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
