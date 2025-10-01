// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Leaderboards/SIK_ResetLeaderboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_ResetLeaderboard() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ResetLeaderboard();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ResetLeaderboard_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_ResetLeaderboard Function ResetLeaderboard
struct Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics
{
	struct SIK_ResetLeaderboard_eventResetLeaderboard_Parms
	{
		FString Key;
		int32 AppId;
		int32 LeaderboardId;
		USIK_ResetLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Leaderboards" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_ResetLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResetLeaderboard_eventResetLeaderboard_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResetLeaderboard_eventResetLeaderboard_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResetLeaderboard_eventResetLeaderboard_Parms, LeaderboardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardId_MetaData), NewProp_LeaderboardId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResetLeaderboard_eventResetLeaderboard_Parms, ReturnValue), Z_Construct_UClass_USIK_ResetLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_ResetLeaderboard, nullptr, "ResetLeaderboard", nullptr, nullptr, Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::SIK_ResetLeaderboard_eventResetLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::SIK_ResetLeaderboard_eventResetLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ResetLeaderboard::execResetLeaderboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LeaderboardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ResetLeaderboard**)Z_Param__Result=USIK_ResetLeaderboard::ResetLeaderboard(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_LeaderboardId);
	P_NATIVE_END;
}
// End Class USIK_ResetLeaderboard Function ResetLeaderboard

// Begin Class USIK_ResetLeaderboard
void USIK_ResetLeaderboard::StaticRegisterNativesUSIK_ResetLeaderboard()
{
	UClass* Class = USIK_ResetLeaderboard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetLeaderboard", &USIK_ResetLeaderboard::execResetLeaderboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_ResetLeaderboard);
UClass* Z_Construct_UClass_USIK_ResetLeaderboard_NoRegister()
{
	return USIK_ResetLeaderboard::StaticClass();
}
struct Z_Construct_UClass_USIK_ResetLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Leaderboards/SIK_ResetLeaderboard.h" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_ResetLeaderboard.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ResetLeaderboard_ResetLeaderboard, "ResetLeaderboard" }, // 3931431776
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ResetLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_ResetLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ResetLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ResetLeaderboard_Statics::ClassParams = {
	&USIK_ResetLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ResetLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ResetLeaderboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_ResetLeaderboard()
{
	if (!Z_Registration_Info_UClass_USIK_ResetLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ResetLeaderboard.OuterSingleton, Z_Construct_UClass_USIK_ResetLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ResetLeaderboard.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_ResetLeaderboard>()
{
	return USIK_ResetLeaderboard::StaticClass();
}
USIK_ResetLeaderboard::USIK_ResetLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_ResetLeaderboard);
USIK_ResetLeaderboard::~USIK_ResetLeaderboard() {}
// End Class USIK_ResetLeaderboard

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_ResetLeaderboard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ResetLeaderboard, USIK_ResetLeaderboard::StaticClass, TEXT("USIK_ResetLeaderboard"), &Z_Registration_Info_UClass_USIK_ResetLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ResetLeaderboard), 4163898392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_ResetLeaderboard_h_2724182706(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_ResetLeaderboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_ResetLeaderboard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
