// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedItemSearch/SIK_RankedByVote.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RankedByVote() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RankedByVote();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RankedByVote_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_RankedByVote Function RankedByVote
struct Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics
{
	struct SIK_RankedByVote_eventRankedByVote_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int32 StartIdx;
		int32 Count;
		int32 TagCount;
		int32 UserTagCount;
		bool HasAppAdminAccess;
		int32 FileType;
		FString Tag0;
		FString UserTag0;
		USIK_RankedByVote* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedItemSearch" },
		{ "CPP_Default_FileType", "-1" },
		{ "CPP_Default_Tag0", "" },
		{ "CPP_Default_UserTag0", "" },
		{ "ModuleRelativePath", "Functions/PublishedItemSearch/SIK_RankedByVote.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagCount_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserTagCount_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasAppAdminAccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserTag0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserTagCount;
	static void NewProp_HasAppAdminAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasAppAdminAccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag0;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_StartIdx = { "StartIdx", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, StartIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartIdx_MetaData), NewProp_StartIdx_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_TagCount = { "TagCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, TagCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagCount_MetaData), NewProp_TagCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_UserTagCount = { "UserTagCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, UserTagCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserTagCount_MetaData), NewProp_UserTagCount_MetaData) };
void Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_HasAppAdminAccess_SetBit(void* Obj)
{
	((SIK_RankedByVote_eventRankedByVote_Parms*)Obj)->HasAppAdminAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_HasAppAdminAccess = { "HasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RankedByVote_eventRankedByVote_Parms), &Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_HasAppAdminAccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasAppAdminAccess_MetaData), NewProp_HasAppAdminAccess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileType_MetaData), NewProp_FileType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_Tag0 = { "Tag0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, Tag0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag0_MetaData), NewProp_Tag0_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_UserTag0 = { "UserTag0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, UserTag0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserTag0_MetaData), NewProp_UserTag0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RankedByVote_eventRankedByVote_Parms, ReturnValue), Z_Construct_UClass_USIK_RankedByVote_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_StartIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_TagCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_UserTagCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_HasAppAdminAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_Tag0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_UserTag0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RankedByVote, nullptr, "RankedByVote", nullptr, nullptr, Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::SIK_RankedByVote_eventRankedByVote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::SIK_RankedByVote_eventRankedByVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RankedByVote_RankedByVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RankedByVote_RankedByVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RankedByVote::execRankedByVote)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_StartIdx);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TagCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UserTagCount);
	P_GET_UBOOL_REF(Z_Param_Out_HasAppAdminAccess);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Tag0);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserTag0);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RankedByVote**)Z_Param__Result=USIK_RankedByVote::RankedByVote(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_StartIdx,Z_Param_Out_Count,Z_Param_Out_TagCount,Z_Param_Out_UserTagCount,Z_Param_Out_HasAppAdminAccess,Z_Param_Out_FileType,Z_Param_Tag0,Z_Param_UserTag0);
	P_NATIVE_END;
}
// End Class USIK_RankedByVote Function RankedByVote

// Begin Class USIK_RankedByVote
void USIK_RankedByVote::StaticRegisterNativesUSIK_RankedByVote()
{
	UClass* Class = USIK_RankedByVote::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RankedByVote", &USIK_RankedByVote::execRankedByVote },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RankedByVote);
UClass* Z_Construct_UClass_USIK_RankedByVote_NoRegister()
{
	return USIK_RankedByVote::StaticClass();
}
struct Z_Construct_UClass_USIK_RankedByVote_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedItemSearch/SIK_RankedByVote.h" },
		{ "ModuleRelativePath", "Functions/PublishedItemSearch/SIK_RankedByVote.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RankedByVote_RankedByVote, "RankedByVote" }, // 2315007301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RankedByVote>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_RankedByVote_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RankedByVote_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RankedByVote_Statics::ClassParams = {
	&USIK_RankedByVote::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RankedByVote_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RankedByVote_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RankedByVote()
{
	if (!Z_Registration_Info_UClass_USIK_RankedByVote.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RankedByVote.OuterSingleton, Z_Construct_UClass_USIK_RankedByVote_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RankedByVote.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_RankedByVote>()
{
	return USIK_RankedByVote::StaticClass();
}
USIK_RankedByVote::USIK_RankedByVote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RankedByVote);
USIK_RankedByVote::~USIK_RankedByVote() {}
// End Class USIK_RankedByVote

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemSearch_SIK_RankedByVote_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RankedByVote, USIK_RankedByVote::StaticClass, TEXT("USIK_RankedByVote"), &Z_Registration_Info_UClass_USIK_RankedByVote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RankedByVote), 2310154073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemSearch_SIK_RankedByVote_h_1919279569(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemSearch_SIK_RankedByVote_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemSearch_SIK_RankedByVote_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
