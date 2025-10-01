// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/User/SIK_GetPlayerBans.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetPlayerBans() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPlayerBans();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPlayerBans_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetPlayerBans Function GetPlayerBans
struct Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics
{
	struct SIK_GetPlayerBans_eventGetPlayerBans_Parms
	{
		FString Key;
		FString SteamIds;
		USIK_GetPlayerBans* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetPlayerBans.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerBans_eventGetPlayerBans_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerBans_eventGetPlayerBans_Parms, SteamIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIds_MetaData), NewProp_SteamIds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerBans_eventGetPlayerBans_Parms, ReturnValue), Z_Construct_UClass_USIK_GetPlayerBans_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::NewProp_SteamIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetPlayerBans, nullptr, "GetPlayerBans", nullptr, nullptr, Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::SIK_GetPlayerBans_eventGetPlayerBans_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::SIK_GetPlayerBans_eventGetPlayerBans_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetPlayerBans::execGetPlayerBans)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetPlayerBans**)Z_Param__Result=USIK_GetPlayerBans::GetPlayerBans(Z_Param_Key,Z_Param_SteamIds);
	P_NATIVE_END;
}
// End Class USIK_GetPlayerBans Function GetPlayerBans

// Begin Class USIK_GetPlayerBans
void USIK_GetPlayerBans::StaticRegisterNativesUSIK_GetPlayerBans()
{
	UClass* Class = USIK_GetPlayerBans::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerBans", &USIK_GetPlayerBans::execGetPlayerBans },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetPlayerBans);
UClass* Z_Construct_UClass_USIK_GetPlayerBans_NoRegister()
{
	return USIK_GetPlayerBans::StaticClass();
}
struct Z_Construct_UClass_USIK_GetPlayerBans_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_GetPlayerBans.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetPlayerBans.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetPlayerBans_GetPlayerBans, "GetPlayerBans" }, // 3839181863
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetPlayerBans>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetPlayerBans_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPlayerBans_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetPlayerBans_Statics::ClassParams = {
	&USIK_GetPlayerBans::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPlayerBans_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetPlayerBans_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetPlayerBans()
{
	if (!Z_Registration_Info_UClass_USIK_GetPlayerBans.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetPlayerBans.OuterSingleton, Z_Construct_UClass_USIK_GetPlayerBans_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetPlayerBans.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetPlayerBans>()
{
	return USIK_GetPlayerBans::StaticClass();
}
USIK_GetPlayerBans::USIK_GetPlayerBans(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetPlayerBans);
USIK_GetPlayerBans::~USIK_GetPlayerBans() {}
// End Class USIK_GetPlayerBans

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerBans_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetPlayerBans, USIK_GetPlayerBans::StaticClass, TEXT("USIK_GetPlayerBans"), &Z_Registration_Info_UClass_USIK_GetPlayerBans, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetPlayerBans), 182967773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerBans_h_876867355(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerBans_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerBans_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
