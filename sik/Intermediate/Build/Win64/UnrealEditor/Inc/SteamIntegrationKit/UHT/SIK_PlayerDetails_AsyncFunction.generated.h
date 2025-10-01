// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_PlayerDetails_AsyncFunction;
#ifdef STEAMINTEGRATIONKIT_SIK_PlayerDetails_AsyncFunction_generated_h
#error "SIK_PlayerDetails_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_PlayerDetails_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_PlayerDetails_AsyncFunction_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnAddPlayerToList_DelegateWrapper(const FMulticastScriptDelegate& OnAddPlayerToList, const FString& PlayerName, int32 Score, float TimePlayed);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnPlayersFailedToRespond_DelegateWrapper(const FMulticastScriptDelegate& OnPlayersFailedToRespond);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnPlayersRefreshComplete_DelegateWrapper(const FMulticastScriptDelegate& OnPlayersRefreshComplete);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestPlayerDetails);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_PlayerDetails_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_PlayerDetails_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_PlayerDetails_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_PlayerDetails_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_PlayerDetails_AsyncFunction(USIK_PlayerDetails_AsyncFunction&&); \
	USIK_PlayerDetails_AsyncFunction(const USIK_PlayerDetails_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_PlayerDetails_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_PlayerDetails_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_PlayerDetails_AsyncFunction) \
	NO_API virtual ~USIK_PlayerDetails_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_PlayerDetails_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
