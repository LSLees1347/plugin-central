// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Econ/SIK_GetTradeOffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetTradeOffer() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetTradeOffer();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetTradeOffer_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetTradeOffer Function GetTradeOffer
struct Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics
{
	struct SIK_GetTradeOffer_eventGetTradeOffer_Parms
	{
		FString Key;
		int64 TradeOfferId;
		FString Language;
		USIK_GetTradeOffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Econ" },
		{ "Comment", "//Gets a specific trade offer\n" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_GetTradeOffer.h" },
		{ "ToolTip", "Gets a specific trade offer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TradeOfferId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TradeOfferId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeOffer_eventGetTradeOffer_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeOffer_eventGetTradeOffer_Parms, TradeOfferId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TradeOfferId_MetaData), NewProp_TradeOfferId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeOffer_eventGetTradeOffer_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeOffer_eventGetTradeOffer_Parms, ReturnValue), Z_Construct_UClass_USIK_GetTradeOffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::NewProp_TradeOfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetTradeOffer, nullptr, "GetTradeOffer", nullptr, nullptr, Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::SIK_GetTradeOffer_eventGetTradeOffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::SIK_GetTradeOffer_eventGetTradeOffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetTradeOffer::execGetTradeOffer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TradeOfferId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetTradeOffer**)Z_Param__Result=USIK_GetTradeOffer::GetTradeOffer(Z_Param_Key,Z_Param_Out_TradeOfferId,Z_Param_Language);
	P_NATIVE_END;
}
// End Class USIK_GetTradeOffer Function GetTradeOffer

// Begin Class USIK_GetTradeOffer
void USIK_GetTradeOffer::StaticRegisterNativesUSIK_GetTradeOffer()
{
	UClass* Class = USIK_GetTradeOffer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTradeOffer", &USIK_GetTradeOffer::execGetTradeOffer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetTradeOffer);
UClass* Z_Construct_UClass_USIK_GetTradeOffer_NoRegister()
{
	return USIK_GetTradeOffer::StaticClass();
}
struct Z_Construct_UClass_USIK_GetTradeOffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Econ/SIK_GetTradeOffer.h" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_GetTradeOffer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetTradeOffer_GetTradeOffer, "GetTradeOffer" }, // 3420382870
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetTradeOffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetTradeOffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetTradeOffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetTradeOffer_Statics::ClassParams = {
	&USIK_GetTradeOffer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetTradeOffer_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetTradeOffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetTradeOffer()
{
	if (!Z_Registration_Info_UClass_USIK_GetTradeOffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetTradeOffer.OuterSingleton, Z_Construct_UClass_USIK_GetTradeOffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetTradeOffer.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetTradeOffer>()
{
	return USIK_GetTradeOffer::StaticClass();
}
USIK_GetTradeOffer::USIK_GetTradeOffer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetTradeOffer);
USIK_GetTradeOffer::~USIK_GetTradeOffer() {}
// End Class USIK_GetTradeOffer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeOffer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetTradeOffer, USIK_GetTradeOffer::StaticClass, TEXT("USIK_GetTradeOffer"), &Z_Registration_Info_UClass_USIK_GetTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetTradeOffer), 803920669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeOffer_h_1754816138(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeOffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeOffer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
