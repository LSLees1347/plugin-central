// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Economy/SIK_GetMarketPrices.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetMarketPrices() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetMarketPrices();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetMarketPrices_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetMarketPrices Function GetMarketPrices
struct Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics
{
	struct SIK_GetMarketPrices_eventGetMarketPrices_Parms
	{
		FString Key;
		int32 AppId;
		USIK_GetMarketPrices* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetMarketPrices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetMarketPrices_eventGetMarketPrices_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetMarketPrices_eventGetMarketPrices_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetMarketPrices_eventGetMarketPrices_Parms, ReturnValue), Z_Construct_UClass_USIK_GetMarketPrices_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetMarketPrices, nullptr, "GetMarketPrices", nullptr, nullptr, Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::SIK_GetMarketPrices_eventGetMarketPrices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::SIK_GetMarketPrices_eventGetMarketPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetMarketPrices::execGetMarketPrices)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetMarketPrices**)Z_Param__Result=USIK_GetMarketPrices::GetMarketPrices(Z_Param_Key,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// End Class USIK_GetMarketPrices Function GetMarketPrices

// Begin Class USIK_GetMarketPrices
void USIK_GetMarketPrices::StaticRegisterNativesUSIK_GetMarketPrices()
{
	UClass* Class = USIK_GetMarketPrices::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMarketPrices", &USIK_GetMarketPrices::execGetMarketPrices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetMarketPrices);
UClass* Z_Construct_UClass_USIK_GetMarketPrices_NoRegister()
{
	return USIK_GetMarketPrices::StaticClass();
}
struct Z_Construct_UClass_USIK_GetMarketPrices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Economy/SIK_GetMarketPrices.h" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetMarketPrices.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetMarketPrices_GetMarketPrices, "GetMarketPrices" }, // 4185564279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetMarketPrices>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetMarketPrices_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetMarketPrices_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetMarketPrices_Statics::ClassParams = {
	&USIK_GetMarketPrices::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetMarketPrices_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetMarketPrices_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetMarketPrices()
{
	if (!Z_Registration_Info_UClass_USIK_GetMarketPrices.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetMarketPrices.OuterSingleton, Z_Construct_UClass_USIK_GetMarketPrices_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetMarketPrices.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetMarketPrices>()
{
	return USIK_GetMarketPrices::StaticClass();
}
USIK_GetMarketPrices::USIK_GetMarketPrices(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetMarketPrices);
USIK_GetMarketPrices::~USIK_GetMarketPrices() {}
// End Class USIK_GetMarketPrices

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetMarketPrices_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetMarketPrices, USIK_GetMarketPrices::StaticClass, TEXT("USIK_GetMarketPrices"), &Z_Registration_Info_UClass_USIK_GetMarketPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetMarketPrices), 3133682443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetMarketPrices_h_3887034746(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetMarketPrices_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetMarketPrices_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
