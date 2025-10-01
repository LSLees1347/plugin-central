// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_SetAppBuildLive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_SetAppBuildLive() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetAppBuildLive();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetAppBuildLive_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_SetAppBuildLive Function SetAppBuildLive
struct Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics
{
	struct SIK_SetAppBuildLive_eventSetAppBuildLive_Parms
	{
		FString Key;
		int32 AppId;
		int32 BuildId;
		FString BetaKey;
		int32 SteamId;
		FString Description;
		USIK_SetAppBuildLive* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "Comment", "//The steamID is required when an app is released and the betakey is set to public. The steamID must have appropriate permissions to make a build change, specifically the Edit App and Publish permissions. This account will receive a Steam Mobile app confirmation. When confirmation of a build change is required, SetAppBuildLive will return back a HTTP response code 201 Created.\n" },
		{ "CPP_Default_Description", "" },
		{ "CPP_Default_SteamId", "-1" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_SetAppBuildLive.h" },
		{ "ToolTip", "The steamID is required when an app is released and the betakey is set to public. The steamID must have appropriate permissions to make a build change, specifically the Edit App and Publish permissions. This account will receive a Steam Mobile app confirmation. When confirmation of a build change is required, SetAppBuildLive will return back a HTTP response code 201 Created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BetaKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BetaKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetAppBuildLive_eventSetAppBuildLive_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetAppBuildLive_eventSetAppBuildLive_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetAppBuildLive_eventSetAppBuildLive_Parms, BuildId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildId_MetaData), NewProp_BuildId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_BetaKey = { "BetaKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetAppBuildLive_eventSetAppBuildLive_Parms, BetaKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BetaKey_MetaData), NewProp_BetaKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetAppBuildLive_eventSetAppBuildLive_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetAppBuildLive_eventSetAppBuildLive_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetAppBuildLive_eventSetAppBuildLive_Parms, ReturnValue), Z_Construct_UClass_USIK_SetAppBuildLive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_BuildId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_BetaKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SetAppBuildLive, nullptr, "SetAppBuildLive", nullptr, nullptr, Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::SIK_SetAppBuildLive_eventSetAppBuildLive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::SIK_SetAppBuildLive_eventSetAppBuildLive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetAppBuildLive::execSetAppBuildLive)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BuildId);
	P_GET_PROPERTY(FStrProperty,Z_Param_BetaKey);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetAppBuildLive**)Z_Param__Result=USIK_SetAppBuildLive::SetAppBuildLive(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_BuildId,Z_Param_BetaKey,Z_Param_Out_SteamId,Z_Param_Description);
	P_NATIVE_END;
}
// End Class USIK_SetAppBuildLive Function SetAppBuildLive

// Begin Class USIK_SetAppBuildLive
void USIK_SetAppBuildLive::StaticRegisterNativesUSIK_SetAppBuildLive()
{
	UClass* Class = USIK_SetAppBuildLive::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAppBuildLive", &USIK_SetAppBuildLive::execSetAppBuildLive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_SetAppBuildLive);
UClass* Z_Construct_UClass_USIK_SetAppBuildLive_NoRegister()
{
	return USIK_SetAppBuildLive::StaticClass();
}
struct Z_Construct_UClass_USIK_SetAppBuildLive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_SetAppBuildLive.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_SetAppBuildLive.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetAppBuildLive_SetAppBuildLive, "SetAppBuildLive" }, // 4013223036
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetAppBuildLive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_SetAppBuildLive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetAppBuildLive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetAppBuildLive_Statics::ClassParams = {
	&USIK_SetAppBuildLive::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetAppBuildLive_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetAppBuildLive_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_SetAppBuildLive()
{
	if (!Z_Registration_Info_UClass_USIK_SetAppBuildLive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetAppBuildLive.OuterSingleton, Z_Construct_UClass_USIK_SetAppBuildLive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetAppBuildLive.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_SetAppBuildLive>()
{
	return USIK_SetAppBuildLive::StaticClass();
}
USIK_SetAppBuildLive::USIK_SetAppBuildLive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_SetAppBuildLive);
USIK_SetAppBuildLive::~USIK_SetAppBuildLive() {}
// End Class USIK_SetAppBuildLive

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_SetAppBuildLive_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetAppBuildLive, USIK_SetAppBuildLive::StaticClass, TEXT("USIK_SetAppBuildLive"), &Z_Registration_Info_UClass_USIK_SetAppBuildLive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetAppBuildLive), 704148474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_SetAppBuildLive_h_4187375870(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_SetAppBuildLive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_SetAppBuildLive_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
