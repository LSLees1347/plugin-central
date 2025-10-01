// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_PlayerDetails_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnAddPlayerToList
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms
	{
		FString PlayerName;
		int32 Score;
		float TimePlayed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePlayed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_TimePlayed = { "TimePlayed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms, TimePlayed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_TimePlayed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnAddPlayerToList__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAddPlayerToList_DelegateWrapper(const FMulticastScriptDelegate& OnAddPlayerToList, const FString& PlayerName, int32 Score, float TimePlayed)
{
	struct _Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms
	{
		FString PlayerName;
		int32 Score;
		float TimePlayed;
	};
	_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms Parms;
	Parms.PlayerName=PlayerName;
	Parms.Score=Score;
	Parms.TimePlayed=TimePlayed;
	OnAddPlayerToList.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAddPlayerToList

// Begin Delegate FOnPlayersFailedToRespond
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnPlayersFailedToRespond__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayersFailedToRespond_DelegateWrapper(const FMulticastScriptDelegate& OnPlayersFailedToRespond)
{
	OnPlayersFailedToRespond.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPlayersFailedToRespond

// Begin Delegate FOnPlayersRefreshComplete
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnPlayersRefreshComplete__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayersRefreshComplete_DelegateWrapper(const FMulticastScriptDelegate& OnPlayersRefreshComplete)
{
	OnPlayersRefreshComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPlayersRefreshComplete

// Begin Class USIK_PlayerDetails_AsyncFunction Function RequestPlayerDetails
struct Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics
{
	struct SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms
	{
		FString ServerIP;
		int32 ServerPort;
		USIK_PlayerDetails_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking Servers" },
		{ "DisplayName", "Request Player Details" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms, ServerIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIP_MetaData), NewProp_ServerIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms, ServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms, ReturnValue), Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction, nullptr, "RequestPlayerDetails", nullptr, nullptr, Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PlayerDetails_AsyncFunction::execRequestPlayerDetails)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_PlayerDetails_AsyncFunction**)Z_Param__Result=USIK_PlayerDetails_AsyncFunction::RequestPlayerDetails(Z_Param_ServerIP,Z_Param_ServerPort);
	P_NATIVE_END;
}
// End Class USIK_PlayerDetails_AsyncFunction Function RequestPlayerDetails

// Begin Class USIK_PlayerDetails_AsyncFunction
void USIK_PlayerDetails_AsyncFunction::StaticRegisterNativesUSIK_PlayerDetails_AsyncFunction()
{
	UClass* Class = USIK_PlayerDetails_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestPlayerDetails", &USIK_PlayerDetails_AsyncFunction::execRequestPlayerDetails },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_PlayerDetails_AsyncFunction);
UClass* Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_NoRegister()
{
	return USIK_PlayerDetails_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAddPlayerToList_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayersFailedToRespond_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayersRefreshComplete_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddPlayerToList;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayersFailedToRespond;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayersRefreshComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails, "RequestPlayerDetails" }, // 3791790903
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_PlayerDetails_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnAddPlayerToList = { "OnAddPlayerToList", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PlayerDetails_AsyncFunction, OnAddPlayerToList), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAddPlayerToList_MetaData), NewProp_OnAddPlayerToList_MetaData) }; // 3206717343
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnPlayersFailedToRespond = { "OnPlayersFailedToRespond", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PlayerDetails_AsyncFunction, OnPlayersFailedToRespond), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayersFailedToRespond_MetaData), NewProp_OnPlayersFailedToRespond_MetaData) }; // 2106167967
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnPlayersRefreshComplete = { "OnPlayersRefreshComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PlayerDetails_AsyncFunction, OnPlayersRefreshComplete), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayersRefreshComplete_MetaData), NewProp_OnPlayersRefreshComplete_MetaData) }; // 981450245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnAddPlayerToList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnPlayersFailedToRespond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnPlayersRefreshComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::ClassParams = {
	&USIK_PlayerDetails_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_PlayerDetails_AsyncFunction>()
{
	return USIK_PlayerDetails_AsyncFunction::StaticClass();
}
USIK_PlayerDetails_AsyncFunction::USIK_PlayerDetails_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_PlayerDetails_AsyncFunction);
USIK_PlayerDetails_AsyncFunction::~USIK_PlayerDetails_AsyncFunction() {}
// End Class USIK_PlayerDetails_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction, USIK_PlayerDetails_AsyncFunction::StaticClass, TEXT("USIK_PlayerDetails_AsyncFunction"), &Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_PlayerDetails_AsyncFunction), 1792769076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_3249363294(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
