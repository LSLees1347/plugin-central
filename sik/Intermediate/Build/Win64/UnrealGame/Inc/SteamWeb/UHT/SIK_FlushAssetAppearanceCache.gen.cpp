// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Econ/SIK_FlushAssetAppearanceCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_FlushAssetAppearanceCache() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FlushAssetAppearanceCache();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FlushAssetAppearanceCache_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_FlushAssetAppearanceCache Function FlushAssetAppearanceCache
struct Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics
{
	struct SIK_FlushAssetAppearanceCache_eventFlushAssetAppearanceCache_Parms
	{
		FString Key;
		int32 AppId;
		USIK_FlushAssetAppearanceCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Econ" },
		{ "Comment", "//Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_FlushAssetAppearanceCache.h" },
		{ "ToolTip", "Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushAssetAppearanceCache_eventFlushAssetAppearanceCache_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushAssetAppearanceCache_eventFlushAssetAppearanceCache_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushAssetAppearanceCache_eventFlushAssetAppearanceCache_Parms, ReturnValue), Z_Construct_UClass_USIK_FlushAssetAppearanceCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_FlushAssetAppearanceCache, nullptr, "FlushAssetAppearanceCache", nullptr, nullptr, Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::SIK_FlushAssetAppearanceCache_eventFlushAssetAppearanceCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::SIK_FlushAssetAppearanceCache_eventFlushAssetAppearanceCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FlushAssetAppearanceCache::execFlushAssetAppearanceCache)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FlushAssetAppearanceCache**)Z_Param__Result=USIK_FlushAssetAppearanceCache::FlushAssetAppearanceCache(Z_Param_Key,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// End Class USIK_FlushAssetAppearanceCache Function FlushAssetAppearanceCache

// Begin Class USIK_FlushAssetAppearanceCache
void USIK_FlushAssetAppearanceCache::StaticRegisterNativesUSIK_FlushAssetAppearanceCache()
{
	UClass* Class = USIK_FlushAssetAppearanceCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlushAssetAppearanceCache", &USIK_FlushAssetAppearanceCache::execFlushAssetAppearanceCache },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_FlushAssetAppearanceCache);
UClass* Z_Construct_UClass_USIK_FlushAssetAppearanceCache_NoRegister()
{
	return USIK_FlushAssetAppearanceCache::StaticClass();
}
struct Z_Construct_UClass_USIK_FlushAssetAppearanceCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Econ/SIK_FlushAssetAppearanceCache.h" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_FlushAssetAppearanceCache.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FlushAssetAppearanceCache_FlushAssetAppearanceCache, "FlushAssetAppearanceCache" }, // 3690943910
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FlushAssetAppearanceCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_FlushAssetAppearanceCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FlushAssetAppearanceCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FlushAssetAppearanceCache_Statics::ClassParams = {
	&USIK_FlushAssetAppearanceCache::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FlushAssetAppearanceCache_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FlushAssetAppearanceCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_FlushAssetAppearanceCache()
{
	if (!Z_Registration_Info_UClass_USIK_FlushAssetAppearanceCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FlushAssetAppearanceCache.OuterSingleton, Z_Construct_UClass_USIK_FlushAssetAppearanceCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FlushAssetAppearanceCache.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_FlushAssetAppearanceCache>()
{
	return USIK_FlushAssetAppearanceCache::StaticClass();
}
USIK_FlushAssetAppearanceCache::USIK_FlushAssetAppearanceCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_FlushAssetAppearanceCache);
USIK_FlushAssetAppearanceCache::~USIK_FlushAssetAppearanceCache() {}
// End Class USIK_FlushAssetAppearanceCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushAssetAppearanceCache_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FlushAssetAppearanceCache, USIK_FlushAssetAppearanceCache::StaticClass, TEXT("USIK_FlushAssetAppearanceCache"), &Z_Registration_Info_UClass_USIK_FlushAssetAppearanceCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FlushAssetAppearanceCache), 286314698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushAssetAppearanceCache_h_1638572535(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushAssetAppearanceCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushAssetAppearanceCache_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
