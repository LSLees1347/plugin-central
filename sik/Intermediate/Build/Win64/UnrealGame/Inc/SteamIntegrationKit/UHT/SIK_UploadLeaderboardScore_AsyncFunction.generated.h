// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_UploadLeaderboardScore_AsyncFunction;
struct FSIK_LeaderboardScoreUploaded;
#ifdef STEAMINTEGRATIONKIT_SIK_UploadLeaderboardScore_AsyncFunction_generated_h
#error "SIK_UploadLeaderboardScore_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_UploadLeaderboardScore_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UploadLeaderboardScore_AsyncFunction_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


template<> STEAMINTEGRATIONKIT_API UScriptStruct* StaticStruct<struct FSIK_LeaderboardScoreUploaded>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_39_DELEGATE \
STEAMINTEGRATIONKIT_API void FLeaderboardScoreUploaded_Delegate_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardScoreUploaded_Delegate, FSIK_LeaderboardScoreUploaded const& LeaderboardScoreUploaded);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUploadLeaderboardScore);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UploadLeaderboardScore_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_UploadLeaderboardScore_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_UploadLeaderboardScore_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_UploadLeaderboardScore_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_UploadLeaderboardScore_AsyncFunction(USIK_UploadLeaderboardScore_AsyncFunction&&); \
	USIK_UploadLeaderboardScore_AsyncFunction(const USIK_UploadLeaderboardScore_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UploadLeaderboardScore_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UploadLeaderboardScore_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_UploadLeaderboardScore_AsyncFunction) \
	NO_API virtual ~USIK_UploadLeaderboardScore_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_41_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_UploadLeaderboardScore_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h


#define FOREACH_ENUM_ESIK_LEADERBOARDUPLOADSCOREMETHOD(op) \
	op(LeaderboardUploadScoreMethodNone) \
	op(LeaderboardUploadScoreMethodKeepBest) \
	op(LeaderboardUploadScoreMethodForceUpdate) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
