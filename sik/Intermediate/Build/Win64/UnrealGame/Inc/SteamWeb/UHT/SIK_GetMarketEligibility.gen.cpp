// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/EconMarket/SIK_GetMarketEligibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetMarketEligibility() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetMarketEligibility();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetMarketEligibility_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetMarketEligibility Function GetMarketEligibility
struct Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics
{
	struct SIK_GetMarketEligibility_eventGetMarketEligibility_Parms
	{
		FString Key;
		int64 SteamId;
		USIK_GetMarketEligibility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|EconMarket" },
		{ "Comment", "//Checks whether or not an account is allowed to use the market.\n" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_GetMarketEligibility.h" },
		{ "ToolTip", "Checks whether or not an account is allowed to use the market." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetMarketEligibility_eventGetMarketEligibility_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetMarketEligibility_eventGetMarketEligibility_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetMarketEligibility_eventGetMarketEligibility_Parms, ReturnValue), Z_Construct_UClass_USIK_GetMarketEligibility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetMarketEligibility, nullptr, "GetMarketEligibility", nullptr, nullptr, Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::SIK_GetMarketEligibility_eventGetMarketEligibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::SIK_GetMarketEligibility_eventGetMarketEligibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetMarketEligibility::execGetMarketEligibility)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetMarketEligibility**)Z_Param__Result=USIK_GetMarketEligibility::GetMarketEligibility(Z_Param_Key,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// End Class USIK_GetMarketEligibility Function GetMarketEligibility

// Begin Class USIK_GetMarketEligibility
void USIK_GetMarketEligibility::StaticRegisterNativesUSIK_GetMarketEligibility()
{
	UClass* Class = USIK_GetMarketEligibility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMarketEligibility", &USIK_GetMarketEligibility::execGetMarketEligibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetMarketEligibility);
UClass* Z_Construct_UClass_USIK_GetMarketEligibility_NoRegister()
{
	return USIK_GetMarketEligibility::StaticClass();
}
struct Z_Construct_UClass_USIK_GetMarketEligibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/EconMarket/SIK_GetMarketEligibility.h" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_GetMarketEligibility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetMarketEligibility_GetMarketEligibility, "GetMarketEligibility" }, // 177594034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetMarketEligibility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetMarketEligibility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetMarketEligibility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetMarketEligibility_Statics::ClassParams = {
	&USIK_GetMarketEligibility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetMarketEligibility_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetMarketEligibility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetMarketEligibility()
{
	if (!Z_Registration_Info_UClass_USIK_GetMarketEligibility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetMarketEligibility.OuterSingleton, Z_Construct_UClass_USIK_GetMarketEligibility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetMarketEligibility.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetMarketEligibility>()
{
	return USIK_GetMarketEligibility::StaticClass();
}
USIK_GetMarketEligibility::USIK_GetMarketEligibility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetMarketEligibility);
USIK_GetMarketEligibility::~USIK_GetMarketEligibility() {}
// End Class USIK_GetMarketEligibility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetMarketEligibility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetMarketEligibility, USIK_GetMarketEligibility::StaticClass, TEXT("USIK_GetMarketEligibility"), &Z_Registration_Info_UClass_USIK_GetMarketEligibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetMarketEligibility), 2263461744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetMarketEligibility_h_1770451262(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetMarketEligibility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetMarketEligibility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
