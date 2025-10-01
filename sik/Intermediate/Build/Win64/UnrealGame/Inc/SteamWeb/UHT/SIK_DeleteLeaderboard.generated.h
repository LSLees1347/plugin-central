// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Leaderboards/SIK_DeleteLeaderboard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_DeleteLeaderboard;
#ifdef STEAMWEB_SIK_DeleteLeaderboard_generated_h
#error "SIK_DeleteLeaderboard.generated.h already included, missing '#pragma once' in SIK_DeleteLeaderboard.h"
#endif
#define STEAMWEB_SIK_DeleteLeaderboard_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteLeaderboard);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_DeleteLeaderboard(); \
	friend struct Z_Construct_UClass_USIK_DeleteLeaderboard_Statics; \
public: \
	DECLARE_CLASS(USIK_DeleteLeaderboard, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), NO_API) \
	DECLARE_SERIALIZER(USIK_DeleteLeaderboard)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_DeleteLeaderboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_DeleteLeaderboard(USIK_DeleteLeaderboard&&); \
	USIK_DeleteLeaderboard(const USIK_DeleteLeaderboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_DeleteLeaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_DeleteLeaderboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_DeleteLeaderboard) \
	NO_API virtual ~USIK_DeleteLeaderboard();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWEB_API UClass* StaticClass<class USIK_DeleteLeaderboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
