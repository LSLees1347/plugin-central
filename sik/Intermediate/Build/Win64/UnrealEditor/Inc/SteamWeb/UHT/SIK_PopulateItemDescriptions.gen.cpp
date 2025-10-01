// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Workshop/SIK_PopulateItemDescriptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_PopulateItemDescriptions() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_PopulateItemDescriptions();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_PopulateItemDescriptions_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_PopulateItemDescriptions Function PopulateItemDescriptions
struct Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics
{
	struct SIK_PopulateItemDescriptions_eventPopulateItemDescriptions_Parms
	{
		FString Key;
		int32 AppId;
		FString Languages;
		USIK_PopulateItemDescriptions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Workshop" },
		{ "Comment", "//Populate block of item descriptions.\n" },
		{ "ModuleRelativePath", "Functions/Workshop/SIK_PopulateItemDescriptions.h" },
		{ "ToolTip", "Populate block of item descriptions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Languages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Languages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PopulateItemDescriptions_eventPopulateItemDescriptions_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PopulateItemDescriptions_eventPopulateItemDescriptions_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::NewProp_Languages = { "Languages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PopulateItemDescriptions_eventPopulateItemDescriptions_Parms, Languages), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Languages_MetaData), NewProp_Languages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PopulateItemDescriptions_eventPopulateItemDescriptions_Parms, ReturnValue), Z_Construct_UClass_USIK_PopulateItemDescriptions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::NewProp_Languages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_PopulateItemDescriptions, nullptr, "PopulateItemDescriptions", nullptr, nullptr, Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::SIK_PopulateItemDescriptions_eventPopulateItemDescriptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::SIK_PopulateItemDescriptions_eventPopulateItemDescriptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PopulateItemDescriptions::execPopulateItemDescriptions)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Languages);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_PopulateItemDescriptions**)Z_Param__Result=USIK_PopulateItemDescriptions::PopulateItemDescriptions(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Languages);
	P_NATIVE_END;
}
// End Class USIK_PopulateItemDescriptions Function PopulateItemDescriptions

// Begin Class USIK_PopulateItemDescriptions
void USIK_PopulateItemDescriptions::StaticRegisterNativesUSIK_PopulateItemDescriptions()
{
	UClass* Class = USIK_PopulateItemDescriptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PopulateItemDescriptions", &USIK_PopulateItemDescriptions::execPopulateItemDescriptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_PopulateItemDescriptions);
UClass* Z_Construct_UClass_USIK_PopulateItemDescriptions_NoRegister()
{
	return USIK_PopulateItemDescriptions::StaticClass();
}
struct Z_Construct_UClass_USIK_PopulateItemDescriptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Workshop/SIK_PopulateItemDescriptions.h" },
		{ "ModuleRelativePath", "Functions/Workshop/SIK_PopulateItemDescriptions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_PopulateItemDescriptions_PopulateItemDescriptions, "PopulateItemDescriptions" }, // 565412488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_PopulateItemDescriptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_PopulateItemDescriptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PopulateItemDescriptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_PopulateItemDescriptions_Statics::ClassParams = {
	&USIK_PopulateItemDescriptions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PopulateItemDescriptions_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_PopulateItemDescriptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_PopulateItemDescriptions()
{
	if (!Z_Registration_Info_UClass_USIK_PopulateItemDescriptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_PopulateItemDescriptions.OuterSingleton, Z_Construct_UClass_USIK_PopulateItemDescriptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_PopulateItemDescriptions.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_PopulateItemDescriptions>()
{
	return USIK_PopulateItemDescriptions::StaticClass();
}
USIK_PopulateItemDescriptions::USIK_PopulateItemDescriptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_PopulateItemDescriptions);
USIK_PopulateItemDescriptions::~USIK_PopulateItemDescriptions() {}
// End Class USIK_PopulateItemDescriptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_PopulateItemDescriptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_PopulateItemDescriptions, USIK_PopulateItemDescriptions::StaticClass, TEXT("USIK_PopulateItemDescriptions"), &Z_Registration_Info_UClass_USIK_PopulateItemDescriptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_PopulateItemDescriptions), 2760765334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_PopulateItemDescriptions_h_2786660257(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_PopulateItemDescriptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_PopulateItemDescriptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
