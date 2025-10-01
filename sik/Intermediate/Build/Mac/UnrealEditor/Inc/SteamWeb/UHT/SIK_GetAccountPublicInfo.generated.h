// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameServers/SIK_GetAccountPublicInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_GetAccountPublicInfo;
#ifdef STEAMWEB_SIK_GetAccountPublicInfo_generated_h
#error "SIK_GetAccountPublicInfo.generated.h already included, missing '#pragma once' in SIK_GetAccountPublicInfo.h"
#endif
#define STEAMWEB_SIK_GetAccountPublicInfo_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAccountPublicInfo);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GetAccountPublicInfo(); \
	friend struct Z_Construct_UClass_USIK_GetAccountPublicInfo_Statics; \
public: \
	DECLARE_CLASS(USIK_GetAccountPublicInfo, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), NO_API) \
	DECLARE_SERIALIZER(USIK_GetAccountPublicInfo)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_GetAccountPublicInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_GetAccountPublicInfo(USIK_GetAccountPublicInfo&&); \
	USIK_GetAccountPublicInfo(const USIK_GetAccountPublicInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GetAccountPublicInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GetAccountPublicInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_GetAccountPublicInfo) \
	NO_API virtual ~USIK_GetAccountPublicInfo();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h_12_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWEB_API UClass* StaticClass<class USIK_GetAccountPublicInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountPublicInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
