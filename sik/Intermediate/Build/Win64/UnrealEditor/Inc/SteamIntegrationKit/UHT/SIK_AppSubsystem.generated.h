// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Apps/SIK_AppSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMINTEGRATIONKIT_SIK_AppSubsystem_generated_h
#error "SIK_AppSubsystem.generated.h already included, missing '#pragma once' in SIK_AppSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_AppSubsystem_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_20_DELEGATE \
STEAMINTEGRATIONKIT_API void FDlcInstalledDelegate_DelegateWrapper(const FMulticastScriptDelegate& DlcInstalledDelegate, int32 AppID);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_21_DELEGATE \
STEAMINTEGRATIONKIT_API void FFileDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& FileDetailsDelegate, ESIK_Result Result, int32 FileSize, int32 Flags, TArray<uint8> const& SHA);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_22_DELEGATE \
STEAMINTEGRATIONKIT_API void FNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewUrlLaunchParametersDelegate);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_23_DELEGATE \
STEAMINTEGRATIONKIT_API void FTimedTrialStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& TimedTrialStatusDelegate, int32 AppID, bool bIsOffline, int32 SecondsAllowed, int32 SecondsPlayed);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_AppSubsystem(); \
	friend struct Z_Construct_UClass_USIK_AppSubsystem_Statics; \
public: \
	DECLARE_CLASS(USIK_AppSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_AppSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_AppSubsystem(USIK_AppSubsystem&&); \
	USIK_AppSubsystem(const USIK_AppSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_AppSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_AppSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_AppSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_25_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_AppSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h


#define FOREACH_ENUM_ESIK_REGISTERACTIVATIONCODERESULT(op) \
	op(RegisterActivationCodeResultOK) \
	op(RegisterActivationCodeResultFail) \
	op(RegisterActivationCodeResultAlreadyRegistered) \
	op(RegisterActivationCodeResultTimeout) \
	op(RegisterActivationCodeAlreadyOwned) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
