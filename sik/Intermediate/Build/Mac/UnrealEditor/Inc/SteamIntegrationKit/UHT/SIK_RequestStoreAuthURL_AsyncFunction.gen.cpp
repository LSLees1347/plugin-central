// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/User/SIK_RequestStoreAuthURL_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RequestStoreAuthURL_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnRequestStoreAuthURL
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRequestStoreAuthURL_Parms
	{
		FString URL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_RequestStoreAuthURL_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRequestStoreAuthURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRequestStoreAuthURL__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestStoreAuthURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestStoreAuthURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestStoreAuthURL_DelegateWrapper(const FMulticastScriptDelegate& OnRequestStoreAuthURL, const FString& URL)
{
	struct _Script_SteamIntegrationKit_eventOnRequestStoreAuthURL_Parms
	{
		FString URL;
	};
	_Script_SteamIntegrationKit_eventOnRequestStoreAuthURL_Parms Parms;
	Parms.URL=URL;
	OnRequestStoreAuthURL.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestStoreAuthURL

// Begin Class USIK_RequestStoreAuthURL_AsyncFunction Function RequestStoreAuthURL
struct Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics
{
	struct SIK_RequestStoreAuthURL_AsyncFunction_eventRequestStoreAuthURL_Parms
	{
		FString URL;
		USIK_RequestStoreAuthURL_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Request Store Auth URL" },
		{ "ModuleRelativePath", "Functions/User/SIK_RequestStoreAuthURL_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestStoreAuthURL_AsyncFunction_eventRequestStoreAuthURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestStoreAuthURL_AsyncFunction_eventRequestStoreAuthURL_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction, nullptr, "RequestStoreAuthURL", nullptr, nullptr, Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::SIK_RequestStoreAuthURL_AsyncFunction_eventRequestStoreAuthURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::SIK_RequestStoreAuthURL_AsyncFunction_eventRequestStoreAuthURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestStoreAuthURL_AsyncFunction::execRequestStoreAuthURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestStoreAuthURL_AsyncFunction**)Z_Param__Result=USIK_RequestStoreAuthURL_AsyncFunction::RequestStoreAuthURL(Z_Param_URL);
	P_NATIVE_END;
}
// End Class USIK_RequestStoreAuthURL_AsyncFunction Function RequestStoreAuthURL

// Begin Class USIK_RequestStoreAuthURL_AsyncFunction
void USIK_RequestStoreAuthURL_AsyncFunction::StaticRegisterNativesUSIK_RequestStoreAuthURL_AsyncFunction()
{
	UClass* Class = USIK_RequestStoreAuthURL_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestStoreAuthURL", &USIK_RequestStoreAuthURL_AsyncFunction::execRequestStoreAuthURL },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RequestStoreAuthURL_AsyncFunction);
UClass* Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_NoRegister()
{
	return USIK_RequestStoreAuthURL_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/User/SIK_RequestStoreAuthURL_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_RequestStoreAuthURL_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_RequestStoreAuthURL_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_RequestStoreAuthURL_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestStoreAuthURL_AsyncFunction_RequestStoreAuthURL, "RequestStoreAuthURL" }, // 1117406226
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestStoreAuthURL_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestStoreAuthURL_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3079601374
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestStoreAuthURL_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestStoreAuthURL__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3079601374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestStoreAuthURL_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestStoreAuthURL_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestStoreAuthURL_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestStoreAuthURL_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_RequestStoreAuthURL_AsyncFunction>()
{
	return USIK_RequestStoreAuthURL_AsyncFunction::StaticClass();
}
USIK_RequestStoreAuthURL_AsyncFunction::USIK_RequestStoreAuthURL_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RequestStoreAuthURL_AsyncFunction);
USIK_RequestStoreAuthURL_AsyncFunction::~USIK_RequestStoreAuthURL_AsyncFunction() {}
// End Class USIK_RequestStoreAuthURL_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_RequestStoreAuthURL_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestStoreAuthURL_AsyncFunction, USIK_RequestStoreAuthURL_AsyncFunction::StaticClass, TEXT("USIK_RequestStoreAuthURL_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestStoreAuthURL_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestStoreAuthURL_AsyncFunction), 1702716423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_RequestStoreAuthURL_AsyncFunction_h_586263917(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_RequestStoreAuthURL_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_RequestStoreAuthURL_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
