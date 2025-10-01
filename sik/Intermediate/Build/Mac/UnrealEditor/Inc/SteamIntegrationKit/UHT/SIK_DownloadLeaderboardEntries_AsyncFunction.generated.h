// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_DownloadLeaderboardEntries_AsyncFunction;
struct FDownloadedLeaderboardEntry;
#ifdef STEAMINTEGRATIONKIT_SIK_DownloadLeaderboardEntries_AsyncFunction_generated_h
#error "SIK_DownloadLeaderboardEntries_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_DownloadLeaderboardEntries_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_DownloadLeaderboardEntries_AsyncFunction_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


template<> STEAMINTEGRATIONKIT_API UScriptStruct* StaticStruct<struct FDownloadedLeaderboardEntry>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_34_DELEGATE \
STEAMINTEGRATIONKIT_API void FLeaderboardScoresDownloaded_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardScoresDownloaded, TArray<FDownloadedLeaderboardEntry> const& LeaderboardEntries);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_DownloadLeaderboardEntries_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_DownloadLeaderboardEntries_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_DownloadLeaderboardEntries_AsyncFunction)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_DownloadLeaderboardEntries_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_DownloadLeaderboardEntries_AsyncFunction(USIK_DownloadLeaderboardEntries_AsyncFunction&&); \
	USIK_DownloadLeaderboardEntries_AsyncFunction(const USIK_DownloadLeaderboardEntries_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_DownloadLeaderboardEntries_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_DownloadLeaderboardEntries_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_DownloadLeaderboardEntries_AsyncFunction) \
	NO_API virtual ~USIK_DownloadLeaderboardEntries_AsyncFunction();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_35_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_38_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_DownloadLeaderboardEntries_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h


#define FOREACH_ENUM_ESIK_LEADERBOARDDATAREQUEST(op) \
	op(LeaderboardDataRequestGlobal) \
	op(LeaderboardDataRequestGlobalAroundUser) \
	op(LeaderboardDataRequestFriends) \
	op(LeaderboardDataRequestUsers) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
