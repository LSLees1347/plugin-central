// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Player/SIK_GetSingleGamePlaytime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetSingleGamePlaytime() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetSingleGamePlaytime();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetSingleGamePlaytime_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetSingleGamePlaytime Function GetSingleGamePlaytime
struct Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics
{
	struct SIK_GetSingleGamePlaytime_eventGetSingleGamePlaytime_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		USIK_GetSingleGamePlaytime* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Player" },
		{ "Comment", "//Gets information about a player's playtime for a single appID. The WebAPI key must be associated with this appID to get back results.\n" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetSingleGamePlaytime.h" },
		{ "ToolTip", "Gets information about a player's playtime for a single appID. The WebAPI key must be associated with this appID to get back results." },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetSingleGamePlaytime_eventGetSingleGamePlaytime_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetSingleGamePlaytime_eventGetSingleGamePlaytime_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetSingleGamePlaytime_eventGetSingleGamePlaytime_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetSingleGamePlaytime_eventGetSingleGamePlaytime_Parms, ReturnValue), Z_Construct_UClass_USIK_GetSingleGamePlaytime_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetSingleGamePlaytime, nullptr, "GetSingleGamePlaytime", nullptr, nullptr, Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::SIK_GetSingleGamePlaytime_eventGetSingleGamePlaytime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::SIK_GetSingleGamePlaytime_eventGetSingleGamePlaytime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetSingleGamePlaytime::execGetSingleGamePlaytime)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetSingleGamePlaytime**)Z_Param__Result=USIK_GetSingleGamePlaytime::GetSingleGamePlaytime(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// End Class USIK_GetSingleGamePlaytime Function GetSingleGamePlaytime

// Begin Class USIK_GetSingleGamePlaytime
void USIK_GetSingleGamePlaytime::StaticRegisterNativesUSIK_GetSingleGamePlaytime()
{
	UClass* Class = USIK_GetSingleGamePlaytime::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSingleGamePlaytime", &USIK_GetSingleGamePlaytime::execGetSingleGamePlaytime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetSingleGamePlaytime);
UClass* Z_Construct_UClass_USIK_GetSingleGamePlaytime_NoRegister()
{
	return USIK_GetSingleGamePlaytime::StaticClass();
}
struct Z_Construct_UClass_USIK_GetSingleGamePlaytime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Player/SIK_GetSingleGamePlaytime.h" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetSingleGamePlaytime.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetSingleGamePlaytime_GetSingleGamePlaytime, "GetSingleGamePlaytime" }, // 2724085494
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetSingleGamePlaytime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetSingleGamePlaytime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetSingleGamePlaytime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetSingleGamePlaytime_Statics::ClassParams = {
	&USIK_GetSingleGamePlaytime::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetSingleGamePlaytime_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetSingleGamePlaytime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetSingleGamePlaytime()
{
	if (!Z_Registration_Info_UClass_USIK_GetSingleGamePlaytime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetSingleGamePlaytime.OuterSingleton, Z_Construct_UClass_USIK_GetSingleGamePlaytime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetSingleGamePlaytime.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetSingleGamePlaytime>()
{
	return USIK_GetSingleGamePlaytime::StaticClass();
}
USIK_GetSingleGamePlaytime::USIK_GetSingleGamePlaytime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetSingleGamePlaytime);
USIK_GetSingleGamePlaytime::~USIK_GetSingleGamePlaytime() {}
// End Class USIK_GetSingleGamePlaytime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetSingleGamePlaytime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetSingleGamePlaytime, USIK_GetSingleGamePlaytime::StaticClass, TEXT("USIK_GetSingleGamePlaytime"), &Z_Registration_Info_UClass_USIK_GetSingleGamePlaytime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetSingleGamePlaytime), 4254879971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetSingleGamePlaytime_h_3275282322(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetSingleGamePlaytime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetSingleGamePlaytime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
