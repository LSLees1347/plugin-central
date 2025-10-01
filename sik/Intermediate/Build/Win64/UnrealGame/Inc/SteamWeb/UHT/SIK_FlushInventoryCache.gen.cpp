// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Econ/SIK_FlushInventoryCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_FlushInventoryCache() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FlushInventoryCache();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FlushInventoryCache_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_FlushInventoryCache Function FlushInventoryCache
struct Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics
{
	struct SIK_FlushInventoryCache_eventFlushInventoryCache_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int64 ContextId;
		USIK_FlushInventoryCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Econ" },
		{ "Comment", "//Flushes the cache for a user's inventory in a specific app context\n" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_FlushInventoryCache.h" },
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, ContextId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextId_MetaData), NewProp_ContextId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, ReturnValue), Z_Construct_UClass_USIK_FlushInventoryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_FlushInventoryCache, nullptr, "FlushInventoryCache", nullptr, nullptr, Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::SIK_FlushInventoryCache_eventFlushInventoryCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::SIK_FlushInventoryCache_eventFlushInventoryCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FlushInventoryCache::execFlushInventoryCache)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FlushInventoryCache**)Z_Param__Result=USIK_FlushInventoryCache::FlushInventoryCache(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_ContextId);
	P_NATIVE_END;
}
// End Class USIK_FlushInventoryCache Function FlushInventoryCache

// Begin Class USIK_FlushInventoryCache
void USIK_FlushInventoryCache::StaticRegisterNativesUSIK_FlushInventoryCache()
{
	UClass* Class = USIK_FlushInventoryCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlushInventoryCache", &USIK_FlushInventoryCache::execFlushInventoryCache },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_FlushInventoryCache);
UClass* Z_Construct_UClass_USIK_FlushInventoryCache_NoRegister()
{
	return USIK_FlushInventoryCache::StaticClass();
}
struct Z_Construct_UClass_USIK_FlushInventoryCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Econ/SIK_FlushInventoryCache.h" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_FlushInventoryCache.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache, "FlushInventoryCache" }, // 3680818007
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FlushInventoryCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_FlushInventoryCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FlushInventoryCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FlushInventoryCache_Statics::ClassParams = {
	&USIK_FlushInventoryCache::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FlushInventoryCache_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FlushInventoryCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_FlushInventoryCache()
{
	if (!Z_Registration_Info_UClass_USIK_FlushInventoryCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FlushInventoryCache.OuterSingleton, Z_Construct_UClass_USIK_FlushInventoryCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FlushInventoryCache.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_FlushInventoryCache>()
{
	return USIK_FlushInventoryCache::StaticClass();
}
USIK_FlushInventoryCache::USIK_FlushInventoryCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_FlushInventoryCache);
USIK_FlushInventoryCache::~USIK_FlushInventoryCache() {}
// End Class USIK_FlushInventoryCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FlushInventoryCache, USIK_FlushInventoryCache::StaticClass, TEXT("USIK_FlushInventoryCache"), &Z_Registration_Info_UClass_USIK_FlushInventoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FlushInventoryCache), 4095767566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h_1833408472(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
