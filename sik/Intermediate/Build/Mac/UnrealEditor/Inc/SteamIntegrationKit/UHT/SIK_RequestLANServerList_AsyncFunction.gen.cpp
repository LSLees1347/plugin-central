// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/MatchmakingServers/SIK_RequestLANServerList_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RequestLANServerList_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_FoundServers();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FRequestLANServerListDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventRequestLANServerListDelegate_Parms
	{
		TEnumAsByte<ESIK_MatchMakingServerResponse> Response;
		TArray<FSIK_FoundServers> ServerList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestLANServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServerList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventRequestLANServerListDelegate_Parms, Response), Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse, METADATA_PARAMS(0, nullptr) }; // 3859863783
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::NewProp_ServerList_Inner = { "ServerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_FoundServers, METADATA_PARAMS(0, nullptr) }; // 2860739189
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::NewProp_ServerList = { "ServerList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventRequestLANServerListDelegate_Parms, ServerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerList_MetaData), NewProp_ServerList_MetaData) }; // 2860739189
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::NewProp_ServerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::NewProp_ServerList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "RequestLANServerListDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventRequestLANServerListDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventRequestLANServerListDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestLANServerListDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestLANServerListDelegate, ESIK_MatchMakingServerResponse Response, TArray<FSIK_FoundServers> const& ServerList)
{
	struct _Script_SteamIntegrationKit_eventRequestLANServerListDelegate_Parms
	{
		TEnumAsByte<ESIK_MatchMakingServerResponse> Response;
		TArray<FSIK_FoundServers> ServerList;
	};
	_Script_SteamIntegrationKit_eventRequestLANServerListDelegate_Parms Parms;
	Parms.Response=Response;
	Parms.ServerList=ServerList;
	RequestLANServerListDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRequestLANServerListDelegate

// Begin Class USIK_RequestLANServerList_AsyncFunction Function RequestLANServerList
struct Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics
{
	struct SIK_RequestLANServerList_AsyncFunction_eventRequestLANServerList_Parms
	{
		FSIK_AppId AppId;
		float TimeOut;
		USIK_RequestLANServerList_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking Servers" },
		{ "CPP_Default_TimeOut", "10.000000" },
		{ "DisplayName", "Request LAN Server List" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestLANServerList_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestLANServerList_AsyncFunction_eventRequestLANServerList_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestLANServerList_AsyncFunction_eventRequestLANServerList_Parms, TimeOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestLANServerList_AsyncFunction_eventRequestLANServerList_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::NewProp_TimeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction, nullptr, "RequestLANServerList", nullptr, nullptr, Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::SIK_RequestLANServerList_AsyncFunction_eventRequestLANServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::SIK_RequestLANServerList_AsyncFunction_eventRequestLANServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestLANServerList_AsyncFunction::execRequestLANServerList)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestLANServerList_AsyncFunction**)Z_Param__Result=USIK_RequestLANServerList_AsyncFunction::RequestLANServerList(Z_Param_AppId,Z_Param_TimeOut);
	P_NATIVE_END;
}
// End Class USIK_RequestLANServerList_AsyncFunction Function RequestLANServerList

// Begin Class USIK_RequestLANServerList_AsyncFunction
void USIK_RequestLANServerList_AsyncFunction::StaticRegisterNativesUSIK_RequestLANServerList_AsyncFunction()
{
	UClass* Class = USIK_RequestLANServerList_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestLANServerList", &USIK_RequestLANServerList_AsyncFunction::execRequestLANServerList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RequestLANServerList_AsyncFunction);
UClass* Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_NoRegister()
{
	return USIK_RequestLANServerList_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/MatchmakingServers/SIK_RequestLANServerList_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestLANServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestLANServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestLANServerList_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestLANServerList_AsyncFunction_RequestLANServerList, "RequestLANServerList" }, // 3221095840
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestLANServerList_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestLANServerList_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1134032372
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestLANServerList_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestLANServerListDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1134032372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestLANServerList_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestLANServerList_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestLANServerList_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestLANServerList_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_RequestLANServerList_AsyncFunction>()
{
	return USIK_RequestLANServerList_AsyncFunction::StaticClass();
}
USIK_RequestLANServerList_AsyncFunction::USIK_RequestLANServerList_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RequestLANServerList_AsyncFunction);
USIK_RequestLANServerList_AsyncFunction::~USIK_RequestLANServerList_AsyncFunction() {}
// End Class USIK_RequestLANServerList_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction, USIK_RequestLANServerList_AsyncFunction::StaticClass, TEXT("USIK_RequestLANServerList_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestLANServerList_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestLANServerList_AsyncFunction), 2938908556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_1977301451(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
