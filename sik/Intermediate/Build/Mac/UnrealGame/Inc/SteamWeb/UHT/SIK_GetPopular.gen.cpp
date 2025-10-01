// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/EconMarket/SIK_GetPopular.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetPopular() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPopular();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPopular_NoRegister();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_GetPopularOptional();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin ScriptStruct FSIK_GetPopularOptional
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SIK_GetPopularOptional;
class UScriptStruct* FSIK_GetPopularOptional::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_GetPopularOptional.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SIK_GetPopularOptional.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_GetPopularOptional, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_GetPopularOptional"));
	}
	return Z_Registration_Info_UScriptStruct_SIK_GetPopularOptional.OuterSingleton;
}
template<> STEAMWEB_API UScriptStruct* StaticStruct<FSIK_GetPopularOptional>()
{
	return FSIK_GetPopularOptional::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_GetPopular.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|EconMarket" },
		{ "Comment", "//Number of rows per page\n" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_GetPopular.h" },
		{ "ToolTip", "Number of rows per page" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_GetPopularOptional>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_GetPopularOptional, Rows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rows_MetaData), NewProp_Rows_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::NewProp_Rows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_GetPopularOptional",
	Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::PropPointers),
	sizeof(FSIK_GetPopularOptional),
	alignof(FSIK_GetPopularOptional),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_GetPopularOptional()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_GetPopularOptional.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SIK_GetPopularOptional.InnerSingleton, Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SIK_GetPopularOptional.InnerSingleton;
}
// End ScriptStruct FSIK_GetPopularOptional

// Begin Class USIK_GetPopular Function GetPopular
struct Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics
{
	struct SIK_GetPopular_eventGetPopular_Parms
	{
		FString Key;
		FString Language;
		int32 Start;
		int32 FilterAppId;
		int32 ECurrency;
		FSIK_GetPopularOptional OptionalSettings;
		USIK_GetPopular* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|EconMarket" },
		{ "Comment", "//Gets the most popular items\n" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_GetPopular.h" },
		{ "ToolTip", "Gets the most popular items" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterAppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ECurrency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FilterAppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ECurrency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPopular_eventGetPopular_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPopular_eventGetPopular_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPopular_eventGetPopular_Parms, Start), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_FilterAppId = { "FilterAppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPopular_eventGetPopular_Parms, FilterAppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterAppId_MetaData), NewProp_FilterAppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_ECurrency = { "ECurrency", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPopular_eventGetPopular_Parms, ECurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ECurrency_MetaData), NewProp_ECurrency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_OptionalSettings = { "OptionalSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPopular_eventGetPopular_Parms, OptionalSettings), Z_Construct_UScriptStruct_FSIK_GetPopularOptional, METADATA_PARAMS(0, nullptr) }; // 1287848383
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPopular_eventGetPopular_Parms, ReturnValue), Z_Construct_UClass_USIK_GetPopular_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_FilterAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_ECurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_OptionalSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetPopular, nullptr, "GetPopular", nullptr, nullptr, Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::SIK_GetPopular_eventGetPopular_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::SIK_GetPopular_eventGetPopular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetPopular_GetPopular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetPopular_GetPopular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetPopular::execGetPopular)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Start);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FilterAppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ECurrency);
	P_GET_STRUCT(FSIK_GetPopularOptional,Z_Param_OptionalSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetPopular**)Z_Param__Result=USIK_GetPopular::GetPopular(Z_Param_Key,Z_Param_Language,Z_Param_Out_Start,Z_Param_Out_FilterAppId,Z_Param_Out_ECurrency,Z_Param_OptionalSettings);
	P_NATIVE_END;
}
// End Class USIK_GetPopular Function GetPopular

// Begin Class USIK_GetPopular
void USIK_GetPopular::StaticRegisterNativesUSIK_GetPopular()
{
	UClass* Class = USIK_GetPopular::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPopular", &USIK_GetPopular::execGetPopular },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetPopular);
UClass* Z_Construct_UClass_USIK_GetPopular_NoRegister()
{
	return USIK_GetPopular::StaticClass();
}
struct Z_Construct_UClass_USIK_GetPopular_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/EconMarket/SIK_GetPopular.h" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_GetPopular.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetPopular_GetPopular, "GetPopular" }, // 19995149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetPopular>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetPopular_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPopular_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetPopular_Statics::ClassParams = {
	&USIK_GetPopular::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPopular_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetPopular_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetPopular()
{
	if (!Z_Registration_Info_UClass_USIK_GetPopular.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetPopular.OuterSingleton, Z_Construct_UClass_USIK_GetPopular_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetPopular.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetPopular>()
{
	return USIK_GetPopular::StaticClass();
}
USIK_GetPopular::USIK_GetPopular(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetPopular);
USIK_GetPopular::~USIK_GetPopular() {}
// End Class USIK_GetPopular

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetPopular_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_GetPopularOptional::StaticStruct, Z_Construct_UScriptStruct_FSIK_GetPopularOptional_Statics::NewStructOps, TEXT("SIK_GetPopularOptional"), &Z_Registration_Info_UScriptStruct_SIK_GetPopularOptional, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_GetPopularOptional), 1287848383U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetPopular, USIK_GetPopular::StaticClass, TEXT("USIK_GetPopular"), &Z_Registration_Info_UClass_USIK_GetPopular, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetPopular), 3242493815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetPopular_h_4070284466(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetPopular_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetPopular_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetPopular_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_GetPopular_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
