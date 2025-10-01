// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/LobbyMatchmaking/SIK_GetLobbyData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetLobbyData() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetLobbyData();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetLobbyData_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetLobbyData Function GetLobbyData
struct Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics
{
	struct SIK_GetLobbyData_eventGetLobbyData_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamIdLobby;
		USIK_GetLobbyData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|LobbyMatchmaking" },
		{ "Comment", "//GetLobbyData will return any lobby data and member list for the lobby ID.\n" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_GetLobbyData.h" },
		{ "ToolTip", "GetLobbyData will return any lobby data and member list for the lobby ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIdLobby_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdLobby;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLobbyData_eventGetLobbyData_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLobbyData_eventGetLobbyData_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::NewProp_SteamIdLobby = { "SteamIdLobby", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLobbyData_eventGetLobbyData_Parms, SteamIdLobby), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIdLobby_MetaData), NewProp_SteamIdLobby_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLobbyData_eventGetLobbyData_Parms, ReturnValue), Z_Construct_UClass_USIK_GetLobbyData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::NewProp_SteamIdLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetLobbyData, nullptr, "GetLobbyData", nullptr, nullptr, Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::SIK_GetLobbyData_eventGetLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::SIK_GetLobbyData_eventGetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetLobbyData::execGetLobbyData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamIdLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetLobbyData**)Z_Param__Result=USIK_GetLobbyData::GetLobbyData(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamIdLobby);
	P_NATIVE_END;
}
// End Class USIK_GetLobbyData Function GetLobbyData

// Begin Class USIK_GetLobbyData
void USIK_GetLobbyData::StaticRegisterNativesUSIK_GetLobbyData()
{
	UClass* Class = USIK_GetLobbyData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLobbyData", &USIK_GetLobbyData::execGetLobbyData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetLobbyData);
UClass* Z_Construct_UClass_USIK_GetLobbyData_NoRegister()
{
	return USIK_GetLobbyData::StaticClass();
}
struct Z_Construct_UClass_USIK_GetLobbyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/LobbyMatchmaking/SIK_GetLobbyData.h" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_GetLobbyData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetLobbyData_GetLobbyData, "GetLobbyData" }, // 1590841301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetLobbyData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetLobbyData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetLobbyData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetLobbyData_Statics::ClassParams = {
	&USIK_GetLobbyData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetLobbyData_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetLobbyData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetLobbyData()
{
	if (!Z_Registration_Info_UClass_USIK_GetLobbyData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetLobbyData.OuterSingleton, Z_Construct_UClass_USIK_GetLobbyData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetLobbyData.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetLobbyData>()
{
	return USIK_GetLobbyData::StaticClass();
}
USIK_GetLobbyData::USIK_GetLobbyData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetLobbyData);
USIK_GetLobbyData::~USIK_GetLobbyData() {}
// End Class USIK_GetLobbyData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_GetLobbyData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetLobbyData, USIK_GetLobbyData::StaticClass, TEXT("USIK_GetLobbyData"), &Z_Registration_Info_UClass_USIK_GetLobbyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetLobbyData), 1546162785U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_GetLobbyData_h_256181922(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_GetLobbyData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_GetLobbyData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
