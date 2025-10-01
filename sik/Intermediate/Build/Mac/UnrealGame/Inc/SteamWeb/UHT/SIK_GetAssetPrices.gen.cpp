// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Economy/SIK_GetAssetPrices.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetAssetPrices() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAssetPrices();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAssetPrices_NoRegister();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin ScriptStruct FSIK_GetAssetPricesOptional
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SIK_GetAssetPricesOptional;
class UScriptStruct* FSIK_GetAssetPricesOptional::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_GetAssetPricesOptional.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SIK_GetAssetPricesOptional.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_GetAssetPricesOptional"));
	}
	return Z_Registration_Info_UScriptStruct_SIK_GetAssetPricesOptional.OuterSingleton;
}
template<> STEAMWEB_API UScriptStruct* StaticStruct<FSIK_GetAssetPricesOptional>()
{
	return FSIK_GetAssetPricesOptional::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetAssetPrices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetAssetPrices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetAssetPrices.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_GetAssetPricesOptional>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_GetAssetPricesOptional, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_GetAssetPricesOptional, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_GetAssetPricesOptional",
	Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::PropPointers),
	sizeof(FSIK_GetAssetPricesOptional),
	alignof(FSIK_GetAssetPricesOptional),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_GetAssetPricesOptional.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SIK_GetAssetPricesOptional.InnerSingleton, Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SIK_GetAssetPricesOptional.InnerSingleton;
}
// End ScriptStruct FSIK_GetAssetPricesOptional

// Begin Class USIK_GetAssetPrices Function GetAssetPrices
struct Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics
{
	struct SIK_GetAssetPrices_eventGetAssetPrices_Parms
	{
		FString Key;
		int32 AppId;
		FSIK_GetAssetPricesOptional Optional;
		USIK_GetAssetPrices* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "Comment", "//Returns prices and categories for items that users are able to purchase.\n" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetAssetPrices.h" },
		{ "ToolTip", "Returns prices and categories for items that users are able to purchase." },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Optional;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetPrices_eventGetAssetPrices_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetPrices_eventGetAssetPrices_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::NewProp_Optional = { "Optional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetPrices_eventGetAssetPrices_Parms, Optional), Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional, METADATA_PARAMS(0, nullptr) }; // 1696686291
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetPrices_eventGetAssetPrices_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAssetPrices_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::NewProp_Optional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetAssetPrices, nullptr, "GetAssetPrices", nullptr, nullptr, Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::SIK_GetAssetPrices_eventGetAssetPrices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::SIK_GetAssetPrices_eventGetAssetPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAssetPrices::execGetAssetPrices)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_STRUCT(FSIK_GetAssetPricesOptional,Z_Param_Optional);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAssetPrices**)Z_Param__Result=USIK_GetAssetPrices::GetAssetPrices(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Optional);
	P_NATIVE_END;
}
// End Class USIK_GetAssetPrices Function GetAssetPrices

// Begin Class USIK_GetAssetPrices
void USIK_GetAssetPrices::StaticRegisterNativesUSIK_GetAssetPrices()
{
	UClass* Class = USIK_GetAssetPrices::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssetPrices", &USIK_GetAssetPrices::execGetAssetPrices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetAssetPrices);
UClass* Z_Construct_UClass_USIK_GetAssetPrices_NoRegister()
{
	return USIK_GetAssetPrices::StaticClass();
}
struct Z_Construct_UClass_USIK_GetAssetPrices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Economy/SIK_GetAssetPrices.h" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetAssetPrices.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAssetPrices_GetAssetPrices, "GetAssetPrices" }, // 4036867918
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAssetPrices>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetAssetPrices_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAssetPrices_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAssetPrices_Statics::ClassParams = {
	&USIK_GetAssetPrices::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAssetPrices_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAssetPrices_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetAssetPrices()
{
	if (!Z_Registration_Info_UClass_USIK_GetAssetPrices.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAssetPrices.OuterSingleton, Z_Construct_UClass_USIK_GetAssetPrices_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAssetPrices.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetAssetPrices>()
{
	return USIK_GetAssetPrices::StaticClass();
}
USIK_GetAssetPrices::USIK_GetAssetPrices(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetAssetPrices);
USIK_GetAssetPrices::~USIK_GetAssetPrices() {}
// End Class USIK_GetAssetPrices

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_GetAssetPricesOptional::StaticStruct, Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics::NewStructOps, TEXT("SIK_GetAssetPricesOptional"), &Z_Registration_Info_UScriptStruct_SIK_GetAssetPricesOptional, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_GetAssetPricesOptional), 1696686291U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAssetPrices, USIK_GetAssetPrices::StaticClass, TEXT("USIK_GetAssetPrices"), &Z_Registration_Info_UClass_USIK_GetAssetPrices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAssetPrices), 2492449639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_3025003445(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
