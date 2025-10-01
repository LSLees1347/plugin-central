// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Workshop/SIK_GetFinalizedContributors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetFinalizedContributors() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetFinalizedContributors();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetFinalizedContributors_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetFinalizedContributors Function GetFinalizedContributors
struct Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics
{
	struct SIK_GetFinalizedContributors_eventGetFinalizedContributors_Parms
	{
		FString Key;
		int32 AppId;
		int32 GameItemId;
		USIK_GetFinalizedContributors* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Workshop" },
		{ "Comment", "//Get a list of contributors for a specific app/workshop item combination.\n" },
		{ "ModuleRelativePath", "Functions/Workshop/SIK_GetFinalizedContributors.h" },
		{ "ToolTip", "Get a list of contributors for a specific app/workshop item combination." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameItemId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFinalizedContributors_eventGetFinalizedContributors_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFinalizedContributors_eventGetFinalizedContributors_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::NewProp_GameItemId = { "GameItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFinalizedContributors_eventGetFinalizedContributors_Parms, GameItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameItemId_MetaData), NewProp_GameItemId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFinalizedContributors_eventGetFinalizedContributors_Parms, ReturnValue), Z_Construct_UClass_USIK_GetFinalizedContributors_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::NewProp_GameItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetFinalizedContributors, nullptr, "GetFinalizedContributors", nullptr, nullptr, Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::SIK_GetFinalizedContributors_eventGetFinalizedContributors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::SIK_GetFinalizedContributors_eventGetFinalizedContributors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetFinalizedContributors::execGetFinalizedContributors)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetFinalizedContributors**)Z_Param__Result=USIK_GetFinalizedContributors::GetFinalizedContributors(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_GameItemId);
	P_NATIVE_END;
}
// End Class USIK_GetFinalizedContributors Function GetFinalizedContributors

// Begin Class USIK_GetFinalizedContributors
void USIK_GetFinalizedContributors::StaticRegisterNativesUSIK_GetFinalizedContributors()
{
	UClass* Class = USIK_GetFinalizedContributors::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFinalizedContributors", &USIK_GetFinalizedContributors::execGetFinalizedContributors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetFinalizedContributors);
UClass* Z_Construct_UClass_USIK_GetFinalizedContributors_NoRegister()
{
	return USIK_GetFinalizedContributors::StaticClass();
}
struct Z_Construct_UClass_USIK_GetFinalizedContributors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Workshop/SIK_GetFinalizedContributors.h" },
		{ "ModuleRelativePath", "Functions/Workshop/SIK_GetFinalizedContributors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetFinalizedContributors_GetFinalizedContributors, "GetFinalizedContributors" }, // 2308388903
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetFinalizedContributors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetFinalizedContributors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetFinalizedContributors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetFinalizedContributors_Statics::ClassParams = {
	&USIK_GetFinalizedContributors::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetFinalizedContributors_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetFinalizedContributors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetFinalizedContributors()
{
	if (!Z_Registration_Info_UClass_USIK_GetFinalizedContributors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetFinalizedContributors.OuterSingleton, Z_Construct_UClass_USIK_GetFinalizedContributors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetFinalizedContributors.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetFinalizedContributors>()
{
	return USIK_GetFinalizedContributors::StaticClass();
}
USIK_GetFinalizedContributors::USIK_GetFinalizedContributors(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetFinalizedContributors);
USIK_GetFinalizedContributors::~USIK_GetFinalizedContributors() {}
// End Class USIK_GetFinalizedContributors

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetFinalizedContributors_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetFinalizedContributors, USIK_GetFinalizedContributors::StaticClass, TEXT("USIK_GetFinalizedContributors"), &Z_Registration_Info_UClass_USIK_GetFinalizedContributors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetFinalizedContributors), 3900611963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetFinalizedContributors_h_99875416(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetFinalizedContributors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetFinalizedContributors_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
