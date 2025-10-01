// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Public/SIK_BaseWebApi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_BaseWebApi() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi_NoRegister();
STEAMWEB_API UFunction* Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin ScriptStruct FSIK_BaseWebApiResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SIK_BaseWebApiResponse;
class UScriptStruct* FSIK_BaseWebApiResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_BaseWebApiResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SIK_BaseWebApiResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_BaseWebApiResponse"));
	}
	return Z_Registration_Info_UScriptStruct_SIK_BaseWebApiResponse.OuterSingleton;
}
template<> STEAMWEB_API UScriptStruct* StaticStruct<FSIK_BaseWebApiResponse>()
{
	return FSIK_BaseWebApiResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_BaseWebApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web" },
		{ "ModuleRelativePath", "Public/SIK_BaseWebApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web" },
		{ "ModuleRelativePath", "Public/SIK_BaseWebApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_BaseWebApiResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_BaseWebApiResponse, StatusCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusCode_MetaData), NewProp_StatusCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_BaseWebApiResponse, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_BaseWebApiResponse",
	Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::PropPointers),
	sizeof(FSIK_BaseWebApiResponse),
	alignof(FSIK_BaseWebApiResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_BaseWebApiResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SIK_BaseWebApiResponse.InnerSingleton, Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SIK_BaseWebApiResponse.InnerSingleton;
}
// End ScriptStruct FSIK_BaseWebApiResponse

// Begin Delegate FSIK_BaseWebApiDelegate
struct Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics
{
	struct _Script_SteamWeb_eventSIK_BaseWebApiDelegate_Parms
	{
		bool bSuccess;
		FSIK_BaseWebApiResponse Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SIK_BaseWebApi.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SteamWeb_eventSIK_BaseWebApiDelegate_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamWeb_eventSIK_BaseWebApiDelegate_Parms), &Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamWeb_eventSIK_BaseWebApiDelegate_Parms, Response), Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse, METADATA_PARAMS(0, nullptr) }; // 509127922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamWeb, nullptr, "SIK_BaseWebApiDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::_Script_SteamWeb_eventSIK_BaseWebApiDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::_Script_SteamWeb_eventSIK_BaseWebApiDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_BaseWebApiDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_BaseWebApiDelegate, bool bSuccess, FSIK_BaseWebApiResponse Response)
{
	struct _Script_SteamWeb_eventSIK_BaseWebApiDelegate_Parms
	{
		bool bSuccess;
		FSIK_BaseWebApiResponse Response;
	};
	_Script_SteamWeb_eventSIK_BaseWebApiDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Response=Response;
	SIK_BaseWebApiDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSIK_BaseWebApiDelegate

// Begin Class USIK_BaseWebApi
void USIK_BaseWebApi::StaticRegisterNativesUSIK_BaseWebApi()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_BaseWebApi);
UClass* Z_Construct_UClass_USIK_BaseWebApi_NoRegister()
{
	return USIK_BaseWebApi::StaticClass();
}
struct Z_Construct_UClass_USIK_BaseWebApi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SIK_BaseWebApi.h" },
		{ "ModuleRelativePath", "Public/SIK_BaseWebApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResponse_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web" },
		{ "ModuleRelativePath", "Public/SIK_BaseWebApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_BaseWebApi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_BaseWebApi_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_BaseWebApi, OnResponse), Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResponse_MetaData), NewProp_OnResponse_MetaData) }; // 2454792706
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_BaseWebApi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_BaseWebApi_Statics::NewProp_OnResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_BaseWebApi_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_BaseWebApi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_BaseWebApi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_BaseWebApi_Statics::ClassParams = {
	&USIK_BaseWebApi::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_BaseWebApi_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_BaseWebApi_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_BaseWebApi_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_BaseWebApi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_BaseWebApi()
{
	if (!Z_Registration_Info_UClass_USIK_BaseWebApi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_BaseWebApi.OuterSingleton, Z_Construct_UClass_USIK_BaseWebApi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_BaseWebApi.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_BaseWebApi>()
{
	return USIK_BaseWebApi::StaticClass();
}
USIK_BaseWebApi::USIK_BaseWebApi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_BaseWebApi);
USIK_BaseWebApi::~USIK_BaseWebApi() {}
// End Class USIK_BaseWebApi

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_BaseWebApiResponse::StaticStruct, Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics::NewStructOps, TEXT("SIK_BaseWebApiResponse"), &Z_Registration_Info_UScriptStruct_SIK_BaseWebApiResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_BaseWebApiResponse), 509127922U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_BaseWebApi, USIK_BaseWebApi::StaticClass, TEXT("USIK_BaseWebApi"), &Z_Registration_Info_UClass_USIK_BaseWebApi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_BaseWebApi), 3687975216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_2746118238(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
