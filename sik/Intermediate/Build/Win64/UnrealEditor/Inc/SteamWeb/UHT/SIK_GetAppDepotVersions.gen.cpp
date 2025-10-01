// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_GetAppDepotVersions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetAppDepotVersions() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAppDepotVersions();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAppDepotVersions_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetAppDepotVersions Function GetAppDepotVersions
struct Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics
{
	struct SIK_GetAppDepotVersions_eventGetAppDepotVersions_Parms
	{
		FString Key;
		int32 AppId;
		USIK_GetAppDepotVersions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "Comment", "//Gets all the versions of all the depots for the specified application.\n" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetAppDepotVersions.h" },
		{ "ToolTip", "Gets all the versions of all the depots for the specified application." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppDepotVersions_eventGetAppDepotVersions_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppDepotVersions_eventGetAppDepotVersions_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppDepotVersions_eventGetAppDepotVersions_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAppDepotVersions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetAppDepotVersions, nullptr, "GetAppDepotVersions", nullptr, nullptr, Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::SIK_GetAppDepotVersions_eventGetAppDepotVersions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::SIK_GetAppDepotVersions_eventGetAppDepotVersions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAppDepotVersions::execGetAppDepotVersions)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAppDepotVersions**)Z_Param__Result=USIK_GetAppDepotVersions::GetAppDepotVersions(Z_Param_Key,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// End Class USIK_GetAppDepotVersions Function GetAppDepotVersions

// Begin Class USIK_GetAppDepotVersions
void USIK_GetAppDepotVersions::StaticRegisterNativesUSIK_GetAppDepotVersions()
{
	UClass* Class = USIK_GetAppDepotVersions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppDepotVersions", &USIK_GetAppDepotVersions::execGetAppDepotVersions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetAppDepotVersions);
UClass* Z_Construct_UClass_USIK_GetAppDepotVersions_NoRegister()
{
	return USIK_GetAppDepotVersions::StaticClass();
}
struct Z_Construct_UClass_USIK_GetAppDepotVersions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_GetAppDepotVersions.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetAppDepotVersions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAppDepotVersions_GetAppDepotVersions, "GetAppDepotVersions" }, // 2098009072
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAppDepotVersions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetAppDepotVersions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppDepotVersions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAppDepotVersions_Statics::ClassParams = {
	&USIK_GetAppDepotVersions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppDepotVersions_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAppDepotVersions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetAppDepotVersions()
{
	if (!Z_Registration_Info_UClass_USIK_GetAppDepotVersions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAppDepotVersions.OuterSingleton, Z_Construct_UClass_USIK_GetAppDepotVersions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAppDepotVersions.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetAppDepotVersions>()
{
	return USIK_GetAppDepotVersions::StaticClass();
}
USIK_GetAppDepotVersions::USIK_GetAppDepotVersions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetAppDepotVersions);
USIK_GetAppDepotVersions::~USIK_GetAppDepotVersions() {}
// End Class USIK_GetAppDepotVersions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppDepotVersions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAppDepotVersions, USIK_GetAppDepotVersions::StaticClass, TEXT("USIK_GetAppDepotVersions"), &Z_Registration_Info_UClass_USIK_GetAppDepotVersions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAppDepotVersions), 2662914576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppDepotVersions_h_2719430228(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppDepotVersions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppDepotVersions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
