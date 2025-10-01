// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_GetAppBuilds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetAppBuilds() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAppBuilds();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAppBuilds_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetAppBuilds Function GetAppBuilds
struct Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics
{
	struct SIK_GetAppBuilds_eventGetAppBuilds_Parms
	{
		FString Key;
		int32 AppId;
		int32 Count;
		USIK_GetAppBuilds* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "Comment", "//Gets an applications build history.\n" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetAppBuilds.h" },
		{ "ToolTip", "Gets an applications build history." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppBuilds_eventGetAppBuilds_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppBuilds_eventGetAppBuilds_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppBuilds_eventGetAppBuilds_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppBuilds_eventGetAppBuilds_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAppBuilds_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetAppBuilds, nullptr, "GetAppBuilds", nullptr, nullptr, Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::SIK_GetAppBuilds_eventGetAppBuilds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::SIK_GetAppBuilds_eventGetAppBuilds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAppBuilds::execGetAppBuilds)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAppBuilds**)Z_Param__Result=USIK_GetAppBuilds::GetAppBuilds(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_Count);
	P_NATIVE_END;
}
// End Class USIK_GetAppBuilds Function GetAppBuilds

// Begin Class USIK_GetAppBuilds
void USIK_GetAppBuilds::StaticRegisterNativesUSIK_GetAppBuilds()
{
	UClass* Class = USIK_GetAppBuilds::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppBuilds", &USIK_GetAppBuilds::execGetAppBuilds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetAppBuilds);
UClass* Z_Construct_UClass_USIK_GetAppBuilds_NoRegister()
{
	return USIK_GetAppBuilds::StaticClass();
}
struct Z_Construct_UClass_USIK_GetAppBuilds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_GetAppBuilds.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetAppBuilds.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAppBuilds_GetAppBuilds, "GetAppBuilds" }, // 3243301620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAppBuilds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetAppBuilds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppBuilds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAppBuilds_Statics::ClassParams = {
	&USIK_GetAppBuilds::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppBuilds_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAppBuilds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetAppBuilds()
{
	if (!Z_Registration_Info_UClass_USIK_GetAppBuilds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAppBuilds.OuterSingleton, Z_Construct_UClass_USIK_GetAppBuilds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAppBuilds.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetAppBuilds>()
{
	return USIK_GetAppBuilds::StaticClass();
}
USIK_GetAppBuilds::USIK_GetAppBuilds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetAppBuilds);
USIK_GetAppBuilds::~USIK_GetAppBuilds() {}
// End Class USIK_GetAppBuilds

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBuilds_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAppBuilds, USIK_GetAppBuilds::StaticClass, TEXT("USIK_GetAppBuilds"), &Z_Registration_Info_UClass_USIK_GetAppBuilds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAppBuilds), 4244894173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBuilds_h_277002864(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBuilds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBuilds_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
