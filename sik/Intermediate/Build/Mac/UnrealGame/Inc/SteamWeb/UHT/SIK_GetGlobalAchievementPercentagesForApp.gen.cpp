// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/UserStats/SIK_GetGlobalAchievementPercentagesForApp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetGlobalAchievementPercentagesForApp() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetGlobalAchievementPercentagesForApp Function GetGlobalAchievementPercentagesForApp
struct Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics
{
	struct SIK_GetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForApp_Parms
	{
		int64 GameId;
		USIK_GetGlobalAchievementPercentagesForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|UserStats" },
		{ "Comment", "//Retrieves the global achievement percentages for the specified app.\n" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetGlobalAchievementPercentagesForApp.h" },
		{ "ToolTip", "Retrieves the global achievement percentages for the specified app." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_GameId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForApp_Parms, GameId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameId_MetaData), NewProp_GameId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForApp_Parms, ReturnValue), Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp, nullptr, "GetGlobalAchievementPercentagesForApp", nullptr, nullptr, Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::SIK_GetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::SIK_GetGlobalAchievementPercentagesForApp_eventGetGlobalAchievementPercentagesForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetGlobalAchievementPercentagesForApp::execGetGlobalAchievementPercentagesForApp)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_GameId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetGlobalAchievementPercentagesForApp**)Z_Param__Result=USIK_GetGlobalAchievementPercentagesForApp::GetGlobalAchievementPercentagesForApp(Z_Param_Out_GameId);
	P_NATIVE_END;
}
// End Class USIK_GetGlobalAchievementPercentagesForApp Function GetGlobalAchievementPercentagesForApp

// Begin Class USIK_GetGlobalAchievementPercentagesForApp
void USIK_GetGlobalAchievementPercentagesForApp::StaticRegisterNativesUSIK_GetGlobalAchievementPercentagesForApp()
{
	UClass* Class = USIK_GetGlobalAchievementPercentagesForApp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGlobalAchievementPercentagesForApp", &USIK_GetGlobalAchievementPercentagesForApp::execGetGlobalAchievementPercentagesForApp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetGlobalAchievementPercentagesForApp);
UClass* Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_NoRegister()
{
	return USIK_GetGlobalAchievementPercentagesForApp::StaticClass();
}
struct Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserStats/SIK_GetGlobalAchievementPercentagesForApp.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetGlobalAchievementPercentagesForApp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForApp, "GetGlobalAchievementPercentagesForApp" }, // 3921616864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetGlobalAchievementPercentagesForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_Statics::ClassParams = {
	&USIK_GetGlobalAchievementPercentagesForApp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp()
{
	if (!Z_Registration_Info_UClass_USIK_GetGlobalAchievementPercentagesForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetGlobalAchievementPercentagesForApp.OuterSingleton, Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetGlobalAchievementPercentagesForApp.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetGlobalAchievementPercentagesForApp>()
{
	return USIK_GetGlobalAchievementPercentagesForApp::StaticClass();
}
USIK_GetGlobalAchievementPercentagesForApp::USIK_GetGlobalAchievementPercentagesForApp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetGlobalAchievementPercentagesForApp);
USIK_GetGlobalAchievementPercentagesForApp::~USIK_GetGlobalAchievementPercentagesForApp() {}
// End Class USIK_GetGlobalAchievementPercentagesForApp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalAchievementPercentagesForApp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetGlobalAchievementPercentagesForApp, USIK_GetGlobalAchievementPercentagesForApp::StaticClass, TEXT("USIK_GetGlobalAchievementPercentagesForApp"), &Z_Registration_Info_UClass_USIK_GetGlobalAchievementPercentagesForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetGlobalAchievementPercentagesForApp), 2732722774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalAchievementPercentagesForApp_h_2032976277(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalAchievementPercentagesForApp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalAchievementPercentagesForApp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
