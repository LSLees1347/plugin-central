// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Econ/SIK_FlushContextCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_FlushContextCache() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FlushContextCache();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FlushContextCache_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_FlushContextCache Function FlushContextCache
struct Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics
{
	struct SIK_FlushContextCache_eventFlushContextCache_Parms
	{
		FString Key;
		int32 AppId;
		USIK_FlushContextCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Econ" },
		{ "Comment", "//Flushes the cache for a user's inventory in a specific app context\n" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_FlushContextCache.h" },
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushContextCache_eventFlushContextCache_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushContextCache_eventFlushContextCache_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushContextCache_eventFlushContextCache_Parms, ReturnValue), Z_Construct_UClass_USIK_FlushContextCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_FlushContextCache, nullptr, "FlushContextCache", nullptr, nullptr, Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::SIK_FlushContextCache_eventFlushContextCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::SIK_FlushContextCache_eventFlushContextCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FlushContextCache::execFlushContextCache)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FlushContextCache**)Z_Param__Result=USIK_FlushContextCache::FlushContextCache(Z_Param_Key,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// End Class USIK_FlushContextCache Function FlushContextCache

// Begin Class USIK_FlushContextCache
void USIK_FlushContextCache::StaticRegisterNativesUSIK_FlushContextCache()
{
	UClass* Class = USIK_FlushContextCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlushContextCache", &USIK_FlushContextCache::execFlushContextCache },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_FlushContextCache);
UClass* Z_Construct_UClass_USIK_FlushContextCache_NoRegister()
{
	return USIK_FlushContextCache::StaticClass();
}
struct Z_Construct_UClass_USIK_FlushContextCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Econ/SIK_FlushContextCache.h" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_FlushContextCache.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FlushContextCache_FlushContextCache, "FlushContextCache" }, // 2094799209
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FlushContextCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_FlushContextCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FlushContextCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FlushContextCache_Statics::ClassParams = {
	&USIK_FlushContextCache::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FlushContextCache_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FlushContextCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_FlushContextCache()
{
	if (!Z_Registration_Info_UClass_USIK_FlushContextCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FlushContextCache.OuterSingleton, Z_Construct_UClass_USIK_FlushContextCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FlushContextCache.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_FlushContextCache>()
{
	return USIK_FlushContextCache::StaticClass();
}
USIK_FlushContextCache::USIK_FlushContextCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_FlushContextCache);
USIK_FlushContextCache::~USIK_FlushContextCache() {}
// End Class USIK_FlushContextCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushContextCache_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FlushContextCache, USIK_FlushContextCache::StaticClass, TEXT("USIK_FlushContextCache"), &Z_Registration_Info_UClass_USIK_FlushContextCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FlushContextCache), 3271701617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushContextCache_h_3336382025(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushContextCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushContextCache_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
