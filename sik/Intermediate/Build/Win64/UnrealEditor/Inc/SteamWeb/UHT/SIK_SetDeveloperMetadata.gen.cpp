// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedFile/SIK_SetDeveloperMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_SetDeveloperMetadata() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetDeveloperMetadata();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetDeveloperMetadata_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_SetDeveloperMetadata Function SetDeveloperMetadata
struct Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics
{
	struct SIK_SetDeveloperMetadata_eventSetDeveloperMetadata_Parms
	{
		FString Key;
		int64 PublishedFileId;
		int32 AppId;
		FString Metadata;
		USIK_SetDeveloperMetadata* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedFile" },
		{ "Comment", "//Sets the metadata for a developer on the published file\n" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_SetDeveloperMetadata.h" },
		{ "ToolTip", "Sets the metadata for a developer on the published file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetDeveloperMetadata_eventSetDeveloperMetadata_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetDeveloperMetadata_eventSetDeveloperMetadata_Parms, PublishedFileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetDeveloperMetadata_eventSetDeveloperMetadata_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetDeveloperMetadata_eventSetDeveloperMetadata_Parms, Metadata), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetDeveloperMetadata_eventSetDeveloperMetadata_Parms, ReturnValue), Z_Construct_UClass_USIK_SetDeveloperMetadata_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SetDeveloperMetadata, nullptr, "SetDeveloperMetadata", nullptr, nullptr, Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::SIK_SetDeveloperMetadata_eventSetDeveloperMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::SIK_SetDeveloperMetadata_eventSetDeveloperMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetDeveloperMetadata::execSetDeveloperMetadata)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_PublishedFileId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetDeveloperMetadata**)Z_Param__Result=USIK_SetDeveloperMetadata::SetDeveloperMetadata(Z_Param_Key,Z_Param_Out_PublishedFileId,Z_Param_Out_AppId,Z_Param_Metadata);
	P_NATIVE_END;
}
// End Class USIK_SetDeveloperMetadata Function SetDeveloperMetadata

// Begin Class USIK_SetDeveloperMetadata
void USIK_SetDeveloperMetadata::StaticRegisterNativesUSIK_SetDeveloperMetadata()
{
	UClass* Class = USIK_SetDeveloperMetadata::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDeveloperMetadata", &USIK_SetDeveloperMetadata::execSetDeveloperMetadata },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_SetDeveloperMetadata);
UClass* Z_Construct_UClass_USIK_SetDeveloperMetadata_NoRegister()
{
	return USIK_SetDeveloperMetadata::StaticClass();
}
struct Z_Construct_UClass_USIK_SetDeveloperMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedFile/SIK_SetDeveloperMetadata.h" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_SetDeveloperMetadata.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetDeveloperMetadata_SetDeveloperMetadata, "SetDeveloperMetadata" }, // 3155960835
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetDeveloperMetadata>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_SetDeveloperMetadata_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetDeveloperMetadata_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetDeveloperMetadata_Statics::ClassParams = {
	&USIK_SetDeveloperMetadata::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetDeveloperMetadata_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetDeveloperMetadata_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_SetDeveloperMetadata()
{
	if (!Z_Registration_Info_UClass_USIK_SetDeveloperMetadata.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetDeveloperMetadata.OuterSingleton, Z_Construct_UClass_USIK_SetDeveloperMetadata_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetDeveloperMetadata.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_SetDeveloperMetadata>()
{
	return USIK_SetDeveloperMetadata::StaticClass();
}
USIK_SetDeveloperMetadata::USIK_SetDeveloperMetadata(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_SetDeveloperMetadata);
USIK_SetDeveloperMetadata::~USIK_SetDeveloperMetadata() {}
// End Class USIK_SetDeveloperMetadata

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_SetDeveloperMetadata_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetDeveloperMetadata, USIK_SetDeveloperMetadata::StaticClass, TEXT("USIK_SetDeveloperMetadata"), &Z_Registration_Info_UClass_USIK_SetDeveloperMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetDeveloperMetadata), 2714126211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_SetDeveloperMetadata_h_3937111289(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_SetDeveloperMetadata_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_SetDeveloperMetadata_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
