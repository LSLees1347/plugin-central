// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/MatchmakingServers/SIK_RequestFriendsServerList_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RequestFriendsServerList_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_FoundServers();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FRequestFriendsServerListDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventRequestFriendsServerListDelegate_Parms
	{
		TEnumAsByte<ESIK_MatchMakingServerResponse> Response;
		TArray<FSIK_FoundServers> ServerList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFriendsServerList_AsyncFunction.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventRequestFriendsServerListDelegate_Parms, Response), Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse, METADATA_PARAMS(0, nullptr) }; // 3859863783
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::NewProp_ServerList_Inner = { "ServerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_FoundServers, METADATA_PARAMS(0, nullptr) }; // 2860739189
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::NewProp_ServerList = { "ServerList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventRequestFriendsServerListDelegate_Parms, ServerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerList_MetaData), NewProp_ServerList_MetaData) }; // 2860739189
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::NewProp_ServerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::NewProp_ServerList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "RequestFriendsServerListDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventRequestFriendsServerListDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventRequestFriendsServerListDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestFriendsServerListDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestFriendsServerListDelegate, ESIK_MatchMakingServerResponse Response, TArray<FSIK_FoundServers> const& ServerList)
{
	struct _Script_SteamIntegrationKit_eventRequestFriendsServerListDelegate_Parms
	{
		TEnumAsByte<ESIK_MatchMakingServerResponse> Response;
		TArray<FSIK_FoundServers> ServerList;
	};
	_Script_SteamIntegrationKit_eventRequestFriendsServerListDelegate_Parms Parms;
	Parms.Response=Response;
	Parms.ServerList=ServerList;
	RequestFriendsServerListDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRequestFriendsServerListDelegate

// Begin Class USIK_RequestFriendsServerList_AsyncFunction Function RequestFriendsServerList
struct Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics
{
	struct SIK_RequestFriendsServerList_AsyncFunction_eventRequestFriendsServerList_Parms
	{
		FSIK_AppId AppId;
		TMap<FString,FString> Filters;
		float TimeOut;
		USIK_RequestFriendsServerList_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Filters" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking Servers" },
		{ "CPP_Default_TimeOut", "10.000000" },
		{ "DisplayName", "Request Friends Server List" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFriendsServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filters_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestFriendsServerList_AsyncFunction_eventRequestFriendsServerList_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_Filters_ValueProp = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_Filters_Key_KeyProp = { "Filters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestFriendsServerList_AsyncFunction_eventRequestFriendsServerList_Parms, Filters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestFriendsServerList_AsyncFunction_eventRequestFriendsServerList_Parms, TimeOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestFriendsServerList_AsyncFunction_eventRequestFriendsServerList_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_Filters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_Filters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_Filters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_TimeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction, nullptr, "RequestFriendsServerList", nullptr, nullptr, Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::SIK_RequestFriendsServerList_AsyncFunction_eventRequestFriendsServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::SIK_RequestFriendsServerList_AsyncFunction_eventRequestFriendsServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestFriendsServerList_AsyncFunction::execRequestFriendsServerList)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppId);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_Filters);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestFriendsServerList_AsyncFunction**)Z_Param__Result=USIK_RequestFriendsServerList_AsyncFunction::RequestFriendsServerList(Z_Param_AppId,Z_Param_Out_Filters,Z_Param_TimeOut);
	P_NATIVE_END;
}
// End Class USIK_RequestFriendsServerList_AsyncFunction Function RequestFriendsServerList

// Begin Class USIK_RequestFriendsServerList_AsyncFunction
void USIK_RequestFriendsServerList_AsyncFunction::StaticRegisterNativesUSIK_RequestFriendsServerList_AsyncFunction()
{
	UClass* Class = USIK_RequestFriendsServerList_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestFriendsServerList", &USIK_RequestFriendsServerList_AsyncFunction::execRequestFriendsServerList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RequestFriendsServerList_AsyncFunction);
UClass* Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_NoRegister()
{
	return USIK_RequestFriendsServerList_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/MatchmakingServers/SIK_RequestFriendsServerList_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFriendsServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFriendsServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFriendsServerList_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestFriendsServerList_AsyncFunction_RequestFriendsServerList, "RequestFriendsServerList" }, // 1610431764
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestFriendsServerList_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestFriendsServerList_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2047208939
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestFriendsServerList_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFriendsServerListDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2047208939
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestFriendsServerList_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestFriendsServerList_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestFriendsServerList_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestFriendsServerList_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_RequestFriendsServerList_AsyncFunction>()
{
	return USIK_RequestFriendsServerList_AsyncFunction::StaticClass();
}
USIK_RequestFriendsServerList_AsyncFunction::USIK_RequestFriendsServerList_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RequestFriendsServerList_AsyncFunction);
USIK_RequestFriendsServerList_AsyncFunction::~USIK_RequestFriendsServerList_AsyncFunction() {}
// End Class USIK_RequestFriendsServerList_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFriendsServerList_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestFriendsServerList_AsyncFunction, USIK_RequestFriendsServerList_AsyncFunction::StaticClass, TEXT("USIK_RequestFriendsServerList_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestFriendsServerList_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestFriendsServerList_AsyncFunction), 2162320196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFriendsServerList_AsyncFunction_h_1082842512(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFriendsServerList_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFriendsServerList_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
