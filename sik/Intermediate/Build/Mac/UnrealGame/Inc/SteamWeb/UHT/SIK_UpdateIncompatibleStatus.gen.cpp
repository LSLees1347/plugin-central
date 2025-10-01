// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedFile/SIK_UpdateIncompatibleStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_UpdateIncompatibleStatus() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateIncompatibleStatus();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateIncompatibleStatus_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_UpdateIncompatibleStatus Function UpdateIncompatibleStatus
struct Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics
{
	struct SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms
	{
		FString Key;
		int64 PublishedFileId;
		int32 AppId;
		bool Incompatible;
		USIK_UpdateIncompatibleStatus* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedFile" },
		{ "Comment", "//Updates the incompatible status on the published file. \"Incompatible\" items are hidden from community hubs and user profiles, but can still be accessed by a direct link.\n" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_UpdateIncompatibleStatus.h" },
		{ "ToolTip", "Updates the incompatible status on the published file. \"Incompatible\" items are hidden from community hubs and user profiles, but can still be accessed by a direct link." },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Incompatible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_Incompatible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Incompatible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms, PublishedFileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
void Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_Incompatible_SetBit(void* Obj)
{
	((SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms*)Obj)->Incompatible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_Incompatible = { "Incompatible", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms), &Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_Incompatible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Incompatible_MetaData), NewProp_Incompatible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms, ReturnValue), Z_Construct_UClass_USIK_UpdateIncompatibleStatus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_Incompatible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UpdateIncompatibleStatus, nullptr, "UpdateIncompatibleStatus", nullptr, nullptr, Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::SIK_UpdateIncompatibleStatus_eventUpdateIncompatibleStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UpdateIncompatibleStatus::execUpdateIncompatibleStatus)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_PublishedFileId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_UBOOL_REF(Z_Param_Out_Incompatible);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UpdateIncompatibleStatus**)Z_Param__Result=USIK_UpdateIncompatibleStatus::UpdateIncompatibleStatus(Z_Param_Key,Z_Param_Out_PublishedFileId,Z_Param_Out_AppId,Z_Param_Out_Incompatible);
	P_NATIVE_END;
}
// End Class USIK_UpdateIncompatibleStatus Function UpdateIncompatibleStatus

// Begin Class USIK_UpdateIncompatibleStatus
void USIK_UpdateIncompatibleStatus::StaticRegisterNativesUSIK_UpdateIncompatibleStatus()
{
	UClass* Class = USIK_UpdateIncompatibleStatus::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateIncompatibleStatus", &USIK_UpdateIncompatibleStatus::execUpdateIncompatibleStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_UpdateIncompatibleStatus);
UClass* Z_Construct_UClass_USIK_UpdateIncompatibleStatus_NoRegister()
{
	return USIK_UpdateIncompatibleStatus::StaticClass();
}
struct Z_Construct_UClass_USIK_UpdateIncompatibleStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedFile/SIK_UpdateIncompatibleStatus.h" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_UpdateIncompatibleStatus.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UpdateIncompatibleStatus_UpdateIncompatibleStatus, "UpdateIncompatibleStatus" }, // 2392333067
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UpdateIncompatibleStatus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_UpdateIncompatibleStatus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateIncompatibleStatus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UpdateIncompatibleStatus_Statics::ClassParams = {
	&USIK_UpdateIncompatibleStatus::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateIncompatibleStatus_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UpdateIncompatibleStatus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_UpdateIncompatibleStatus()
{
	if (!Z_Registration_Info_UClass_USIK_UpdateIncompatibleStatus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UpdateIncompatibleStatus.OuterSingleton, Z_Construct_UClass_USIK_UpdateIncompatibleStatus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UpdateIncompatibleStatus.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_UpdateIncompatibleStatus>()
{
	return USIK_UpdateIncompatibleStatus::StaticClass();
}
USIK_UpdateIncompatibleStatus::USIK_UpdateIncompatibleStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_UpdateIncompatibleStatus);
USIK_UpdateIncompatibleStatus::~USIK_UpdateIncompatibleStatus() {}
// End Class USIK_UpdateIncompatibleStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateIncompatibleStatus_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UpdateIncompatibleStatus, USIK_UpdateIncompatibleStatus::StaticClass, TEXT("USIK_UpdateIncompatibleStatus"), &Z_Registration_Info_UClass_USIK_UpdateIncompatibleStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UpdateIncompatibleStatus), 4075294579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateIncompatibleStatus_h_1489190197(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateIncompatibleStatus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateIncompatibleStatus_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
