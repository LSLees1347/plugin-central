// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameServer/SIK_GameServerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;
#ifdef STEAMINTEGRATIONKIT_SIK_GameServerSubsystem_generated_h
#error "SIK_GameServerSubsystem.generated.h already included, missing '#pragma once' in SIK_GameServerSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_GameServerSubsystem_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FAssociateWithClanResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& AssociateWithClanResultDelegate, ESIK_Result Result);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FComputeNewPlayerCompatibilityResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComputeNewPlayerCompatibilityResultDelegate, ESIK_Result Result, FSIK_SteamId SteamID, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSClientApproveDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientApproveDelegate, FSIK_SteamId SteamID, FSIK_SteamId OwnerSteamID);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSClientDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientDenyDelegate, FSIK_SteamId SteamID, ESIK_DenyReason Reason, const FString& OptionalText);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSClientGroupStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientGroupStatusDelegate, FSIK_SteamId SteamID, FSIK_SteamId GroupID, bool Member, bool Officer);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSClientKickDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientKickDelegate, FSIK_SteamId SteamID, ESIK_DenyReason Reason);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSPolicyResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSPolicyResponseDelegate, bool Secure);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GameServerSubsystem(); \
	friend struct Z_Construct_UClass_USIK_GameServerSubsystem_Statics; \
public: \
	DECLARE_CLASS(USIK_GameServerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_GameServerSubsystem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_GameServerSubsystem(USIK_GameServerSubsystem&&); \
	USIK_GameServerSubsystem(const USIK_GameServerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GameServerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GameServerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_GameServerSubsystem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_18_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_GameServerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
