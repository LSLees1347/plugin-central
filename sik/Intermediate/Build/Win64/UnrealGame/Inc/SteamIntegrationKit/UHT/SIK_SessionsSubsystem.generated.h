// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Sessions/SIK_SessionsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FBlueprintSessionResult;
struct FSIK_CurrentSessionInfo;
#ifdef STEAMINTEGRATIONKIT_SIK_SessionsSubsystem_generated_h
#error "SIK_SessionsSubsystem.generated.h already included, missing '#pragma once' in SIK_SessionsSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_SessionsSubsystem_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


template<> STEAMINTEGRATIONKIT_API UScriptStruct* StaticStruct<struct FSIK_CurrentSessionInfo>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_34_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_OnSessionUserInviteAccepted_DelegateWrapper(const FMulticastScriptDelegate& SIK_OnSessionUserInviteAccepted, bool bWasSuccesfull, FBlueprintSessionResult const& AcceptedSession);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSIKActive); \
	DECLARE_FUNCTION(execGetAllJoinedSessionsAndLobbies);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_SessionsSubsystem(); \
	friend struct Z_Construct_UClass_USIK_SessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(USIK_SessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_SessionsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_SessionsSubsystem(USIK_SessionsSubsystem&&); \
	USIK_SessionsSubsystem(const USIK_SessionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_SessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_SessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_SessionsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_36_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_SessionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
