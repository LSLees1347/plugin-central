// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Parties/SIK_PartiesSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_PartyBeaconID;
struct FSIK_SteamId;
#ifdef STEAMINTEGRATIONKIT_SIK_PartiesSubsystem_generated_h
#error "SIK_PartiesSubsystem.generated.h already included, missing '#pragma once' in SIK_PartiesSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_PartiesSubsystem_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_JoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_JoinPartyDelegate, ESIK_Result Result, FSIK_PartyBeaconID PartyBeaconID, FSIK_SteamId BeaconOwner, const FString& ConnectString);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FCreateBeaconDelegate1_DelegateWrapper(const FMulticastScriptDelegate& CreateBeaconDelegate1, ESIK_Result Result, FSIK_PartyBeaconID BeaconID);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReservationNotificationDelegate, FSIK_PartyBeaconID BeaconID, FSIK_SteamId SteamID);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FChangeNumOpenSlotsDelegate1_DelegateWrapper(const FMulticastScriptDelegate& ChangeNumOpenSlotsDelegate1, const ESIK_Result Result);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FAvailableBeaconLocationsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AvailableBeaconLocationsUpdatedDelegate);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FActiveBeaconsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActiveBeaconsUpdatedDelegate);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_PartiesSubsystem(); \
	friend struct Z_Construct_UClass_USIK_PartiesSubsystem_Statics; \
public: \
	DECLARE_CLASS(USIK_PartiesSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_PartiesSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_PartiesSubsystem(USIK_PartiesSubsystem&&); \
	USIK_PartiesSubsystem(const USIK_PartiesSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_PartiesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_PartiesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_PartiesSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_16_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_PartiesSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
