// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_CreateLeaderboard_AsyncFunction;
#ifdef STEAMINTEGRATIONKIT_SIK_CreateLeaderboard_AsyncFunction_generated_h
#error "SIK_CreateLeaderboard_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_CreateLeaderboard_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_CreateLeaderboard_AsyncFunction_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_27_DELEGATE \
STEAMINTEGRATIONKIT_API void FCreateorFindLeaderboard_Delegate_DelegateWrapper(const FMulticastScriptDelegate& CreateorFindLeaderboard_Delegate, int32 LeaderboardID);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateLeaderboard);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_CreateLeaderboard_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_CreateLeaderboard_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_CreateLeaderboard_AsyncFunction)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_CreateLeaderboard_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_CreateLeaderboard_AsyncFunction(USIK_CreateLeaderboard_AsyncFunction&&); \
	USIK_CreateLeaderboard_AsyncFunction(const USIK_CreateLeaderboard_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_CreateLeaderboard_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_CreateLeaderboard_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_CreateLeaderboard_AsyncFunction) \
	NO_API virtual ~USIK_CreateLeaderboard_AsyncFunction();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_29_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_32_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_CreateLeaderboard_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h


#define FOREACH_ENUM_ESIK_LEADERBOARDSORTMETHOD(op) \
	op(LeaderboardSortMethodNone) \
	op(LeaderboardSortMethodAscending) \
	op(LeaderboardSortMethodDescending) 
#define FOREACH_ENUM_ESIK_LEADERBOARDDISPLAYTYPE(op) \
	op(LeaderboardDisplayTypeNone) \
	op(LeaderboardDisplayTypeNumeric) \
	op(LeaderboardDisplayTypeTimeSeconds) \
	op(LeaderboardDisplayTypeTimeMilliSeconds) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
