// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/EconMarket/SIK_GetAssetID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetAssetID() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAssetID();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAssetID_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetAssetID Function GetAssetID
struct Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics
{
	struct SIK_GetAssetID_eventGetAssetID_Parms
	{
		FString Key;
		int32 AppId;
		int64 ListingId;
		USIK_GetAssetID* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|EconMarket" },
		{ "Comment", "//Returns the asset ID of the item sold in a listing\n" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_GetAssetID.h" },
		{ "ToolTip", "Returns the asset ID of the item sold in a listing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListingId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ListingId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetID_eventGetAssetID_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetID_eventGetAssetID_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::NewProp_ListingId = { "ListingId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetID_eventGetAssetID_Parms, ListingId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListingId_MetaData), NewProp_ListingId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetID_eventGetAssetID_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAssetID_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::NewProp_ListingId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetAssetID, nullptr, "GetAssetID", nullptr, nullptr, Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::SIK_GetAssetID_eventGetAssetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::SIK_GetAssetID_eventGetAssetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAssetID_GetAssetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAssetID_GetAssetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAssetID::execGetAssetID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ListingId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAssetID**)Z_Param__Result=USIK_GetAssetID::GetAssetID(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_ListingId);
	P_NATIVE_END;
}
// End Class USIK_GetAssetID Function GetAssetID

// Begin Class USIK_GetAssetID
void USIK_GetAssetID::StaticRegisterNativesUSIK_GetAssetID()
{
	UClass* Class = USIK_GetAssetID::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssetID", &USIK_GetAssetID::execGetAssetID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetAssetID);
UClass* Z_Construct_UClass_USIK_GetAssetID_NoRegister()
{
	return USIK_GetAssetID::StaticClass();
}
struct Z_Construct_UClass_USIK_GetAssetID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/EconMarket/SIK_GetAssetID.h" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_GetAssetID.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAssetID_GetAssetID, "GetAssetID" }, // 1902250132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAssetID>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetAssetID_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAssetID_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAssetID_Statics::ClassParams = {
	&USIK_GetAssetID::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAssetID_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAssetID_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetAssetID()
{
	if (!Z_Registration_Info_UClass_USIK_GetAssetID.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAssetID.OuterSingleton, Z_Construct_UClass_USIK_GetAssetID_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAssetID.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetAssetID>()
{
	return USIK_GetAssetID::StaticClass();
}
USIK_GetAssetID::USIK_GetAssetID(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetAssetID);
USIK_GetAssetID::~USIK_GetAssetID() {}
// End Class USIK_GetAssetID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetAssetID_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAssetID, USIK_GetAssetID::StaticClass, TEXT("USIK_GetAssetID"), &Z_Registration_Info_UClass_USIK_GetAssetID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAssetID), 1613719449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetAssetID_h_3591310207(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetAssetID_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetAssetID_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
