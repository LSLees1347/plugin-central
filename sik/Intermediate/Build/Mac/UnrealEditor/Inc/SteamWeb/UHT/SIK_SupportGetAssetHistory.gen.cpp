// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameInventory/SIK_SupportGetAssetHistory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_SupportGetAssetHistory() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SupportGetAssetHistory();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SupportGetAssetHistory_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_SupportGetAssetHistory Function SupportGetAssetHistory
struct Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics
{
	struct SIK_SupportGetAssetHistory_eventSupportGetAssetHistory_Parms
	{
		FString Key;
		int32 AppId;
		int64 AssetId;
		int64 ContextId;
		USIK_SupportGetAssetHistory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_SupportGetAssetHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SupportGetAssetHistory_eventSupportGetAssetHistory_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SupportGetAssetHistory_eventSupportGetAssetHistory_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SupportGetAssetHistory_eventSupportGetAssetHistory_Parms, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SupportGetAssetHistory_eventSupportGetAssetHistory_Parms, ContextId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextId_MetaData), NewProp_ContextId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SupportGetAssetHistory_eventSupportGetAssetHistory_Parms, ReturnValue), Z_Construct_UClass_USIK_SupportGetAssetHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SupportGetAssetHistory, nullptr, "SupportGetAssetHistory", nullptr, nullptr, Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::SIK_SupportGetAssetHistory_eventSupportGetAssetHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::SIK_SupportGetAssetHistory_eventSupportGetAssetHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SupportGetAssetHistory::execSupportGetAssetHistory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_AssetId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SupportGetAssetHistory**)Z_Param__Result=USIK_SupportGetAssetHistory::SupportGetAssetHistory(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_AssetId,Z_Param_Out_ContextId);
	P_NATIVE_END;
}
// End Class USIK_SupportGetAssetHistory Function SupportGetAssetHistory

// Begin Class USIK_SupportGetAssetHistory
void USIK_SupportGetAssetHistory::StaticRegisterNativesUSIK_SupportGetAssetHistory()
{
	UClass* Class = USIK_SupportGetAssetHistory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SupportGetAssetHistory", &USIK_SupportGetAssetHistory::execSupportGetAssetHistory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_SupportGetAssetHistory);
UClass* Z_Construct_UClass_USIK_SupportGetAssetHistory_NoRegister()
{
	return USIK_SupportGetAssetHistory::StaticClass();
}
struct Z_Construct_UClass_USIK_SupportGetAssetHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameInventory/SIK_SupportGetAssetHistory.h" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_SupportGetAssetHistory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SupportGetAssetHistory_SupportGetAssetHistory, "SupportGetAssetHistory" }, // 2312632936
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SupportGetAssetHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_SupportGetAssetHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SupportGetAssetHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SupportGetAssetHistory_Statics::ClassParams = {
	&USIK_SupportGetAssetHistory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SupportGetAssetHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SupportGetAssetHistory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_SupportGetAssetHistory()
{
	if (!Z_Registration_Info_UClass_USIK_SupportGetAssetHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SupportGetAssetHistory.OuterSingleton, Z_Construct_UClass_USIK_SupportGetAssetHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SupportGetAssetHistory.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_SupportGetAssetHistory>()
{
	return USIK_SupportGetAssetHistory::StaticClass();
}
USIK_SupportGetAssetHistory::USIK_SupportGetAssetHistory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_SupportGetAssetHistory);
USIK_SupportGetAssetHistory::~USIK_SupportGetAssetHistory() {}
// End Class USIK_SupportGetAssetHistory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_SupportGetAssetHistory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SupportGetAssetHistory, USIK_SupportGetAssetHistory::StaticClass, TEXT("USIK_SupportGetAssetHistory"), &Z_Registration_Info_UClass_USIK_SupportGetAssetHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SupportGetAssetHistory), 1676034457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_SupportGetAssetHistory_h_2641748115(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_SupportGetAssetHistory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_SupportGetAssetHistory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
