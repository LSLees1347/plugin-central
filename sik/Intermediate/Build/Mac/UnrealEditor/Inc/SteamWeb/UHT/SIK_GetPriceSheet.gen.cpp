// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_GetPriceSheet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetPriceSheet() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPriceSheet();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPriceSheet_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetPriceSheet Function GetPriceSheet
struct Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics
{
	struct SIK_GetPriceSheet_eventGetPriceSheet_Parms
	{
		FString Key;
		int32 ECurrency;
		USIK_GetPriceSheet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "//Get the Inventory Service price sheet\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_GetPriceSheet.h" },
		{ "ToolTip", "Get the Inventory Service price sheet" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ECurrency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ECurrency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPriceSheet_eventGetPriceSheet_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::NewProp_ECurrency = { "ECurrency", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPriceSheet_eventGetPriceSheet_Parms, ECurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ECurrency_MetaData), NewProp_ECurrency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPriceSheet_eventGetPriceSheet_Parms, ReturnValue), Z_Construct_UClass_USIK_GetPriceSheet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::NewProp_ECurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetPriceSheet, nullptr, "GetPriceSheet", nullptr, nullptr, Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::SIK_GetPriceSheet_eventGetPriceSheet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::SIK_GetPriceSheet_eventGetPriceSheet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetPriceSheet::execGetPriceSheet)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ECurrency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetPriceSheet**)Z_Param__Result=USIK_GetPriceSheet::GetPriceSheet(Z_Param_Key,Z_Param_Out_ECurrency);
	P_NATIVE_END;
}
// End Class USIK_GetPriceSheet Function GetPriceSheet

// Begin Class USIK_GetPriceSheet
void USIK_GetPriceSheet::StaticRegisterNativesUSIK_GetPriceSheet()
{
	UClass* Class = USIK_GetPriceSheet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPriceSheet", &USIK_GetPriceSheet::execGetPriceSheet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetPriceSheet);
UClass* Z_Construct_UClass_USIK_GetPriceSheet_NoRegister()
{
	return USIK_GetPriceSheet::StaticClass();
}
struct Z_Construct_UClass_USIK_GetPriceSheet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Inventory/SIK_GetPriceSheet.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_GetPriceSheet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetPriceSheet_GetPriceSheet, "GetPriceSheet" }, // 3463661965
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetPriceSheet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetPriceSheet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPriceSheet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetPriceSheet_Statics::ClassParams = {
	&USIK_GetPriceSheet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPriceSheet_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetPriceSheet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetPriceSheet()
{
	if (!Z_Registration_Info_UClass_USIK_GetPriceSheet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetPriceSheet.OuterSingleton, Z_Construct_UClass_USIK_GetPriceSheet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetPriceSheet.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetPriceSheet>()
{
	return USIK_GetPriceSheet::StaticClass();
}
USIK_GetPriceSheet::USIK_GetPriceSheet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetPriceSheet);
USIK_GetPriceSheet::~USIK_GetPriceSheet() {}
// End Class USIK_GetPriceSheet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetPriceSheet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetPriceSheet, USIK_GetPriceSheet::StaticClass, TEXT("USIK_GetPriceSheet"), &Z_Registration_Info_UClass_USIK_GetPriceSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetPriceSheet), 1784279391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetPriceSheet_h_3643151604(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetPriceSheet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetPriceSheet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
