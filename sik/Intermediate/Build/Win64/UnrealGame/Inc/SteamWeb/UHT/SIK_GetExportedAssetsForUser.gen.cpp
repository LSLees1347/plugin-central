// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Economy/SIK_GetExportedAssetsForUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetExportedAssetsForUser() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetExportedAssetsForUser();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetExportedAssetsForUser_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetExportedAssetsForUser Function GetExportedAssetsForUser
struct Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics
{
	struct SIK_GetExportedAssetsForUser_eventGetExportedAssetsForUser_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int64 ContextId;
		USIK_GetExportedAssetsForUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "Comment", "// Retrieves the list of assets from another game to import. \n" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetExportedAssetsForUser.h" },
		{ "ToolTip", "Retrieves the list of assets from another game to import." },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetExportedAssetsForUser_eventGetExportedAssetsForUser_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetExportedAssetsForUser_eventGetExportedAssetsForUser_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetExportedAssetsForUser_eventGetExportedAssetsForUser_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetExportedAssetsForUser_eventGetExportedAssetsForUser_Parms, ContextId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextId_MetaData), NewProp_ContextId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetExportedAssetsForUser_eventGetExportedAssetsForUser_Parms, ReturnValue), Z_Construct_UClass_USIK_GetExportedAssetsForUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetExportedAssetsForUser, nullptr, "GetExportedAssetsForUser", nullptr, nullptr, Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::SIK_GetExportedAssetsForUser_eventGetExportedAssetsForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::SIK_GetExportedAssetsForUser_eventGetExportedAssetsForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetExportedAssetsForUser::execGetExportedAssetsForUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetExportedAssetsForUser**)Z_Param__Result=USIK_GetExportedAssetsForUser::GetExportedAssetsForUser(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_ContextId);
	P_NATIVE_END;
}
// End Class USIK_GetExportedAssetsForUser Function GetExportedAssetsForUser

// Begin Class USIK_GetExportedAssetsForUser
void USIK_GetExportedAssetsForUser::StaticRegisterNativesUSIK_GetExportedAssetsForUser()
{
	UClass* Class = USIK_GetExportedAssetsForUser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetExportedAssetsForUser", &USIK_GetExportedAssetsForUser::execGetExportedAssetsForUser },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetExportedAssetsForUser);
UClass* Z_Construct_UClass_USIK_GetExportedAssetsForUser_NoRegister()
{
	return USIK_GetExportedAssetsForUser::StaticClass();
}
struct Z_Construct_UClass_USIK_GetExportedAssetsForUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Economy/SIK_GetExportedAssetsForUser.h" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetExportedAssetsForUser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetExportedAssetsForUser_GetExportedAssetsForUser, "GetExportedAssetsForUser" }, // 2779877268
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetExportedAssetsForUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetExportedAssetsForUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetExportedAssetsForUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetExportedAssetsForUser_Statics::ClassParams = {
	&USIK_GetExportedAssetsForUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetExportedAssetsForUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetExportedAssetsForUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetExportedAssetsForUser()
{
	if (!Z_Registration_Info_UClass_USIK_GetExportedAssetsForUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetExportedAssetsForUser.OuterSingleton, Z_Construct_UClass_USIK_GetExportedAssetsForUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetExportedAssetsForUser.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetExportedAssetsForUser>()
{
	return USIK_GetExportedAssetsForUser::StaticClass();
}
USIK_GetExportedAssetsForUser::USIK_GetExportedAssetsForUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetExportedAssetsForUser);
USIK_GetExportedAssetsForUser::~USIK_GetExportedAssetsForUser() {}
// End Class USIK_GetExportedAssetsForUser

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetExportedAssetsForUser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetExportedAssetsForUser, USIK_GetExportedAssetsForUser::StaticClass, TEXT("USIK_GetExportedAssetsForUser"), &Z_Registration_Info_UClass_USIK_GetExportedAssetsForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetExportedAssetsForUser), 1085143405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetExportedAssetsForUser_h_2396140711(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetExportedAssetsForUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetExportedAssetsForUser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
