// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Broadcast/SIK_PostGameDataFrame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_PostGameDataFrame;
#ifdef STEAMWEB_SIK_PostGameDataFrame_generated_h
#error "SIK_PostGameDataFrame.generated.h already included, missing '#pragma once' in SIK_PostGameDataFrame.h"
#endif
#define STEAMWEB_SIK_PostGameDataFrame_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostGameDataFrame);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_PostGameDataFrame(); \
	friend struct Z_Construct_UClass_USIK_PostGameDataFrame_Statics; \
public: \
	DECLARE_CLASS(USIK_PostGameDataFrame, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), NO_API) \
	DECLARE_SERIALIZER(USIK_PostGameDataFrame)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_PostGameDataFrame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_PostGameDataFrame(USIK_PostGameDataFrame&&); \
	USIK_PostGameDataFrame(const USIK_PostGameDataFrame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_PostGameDataFrame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_PostGameDataFrame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_PostGameDataFrame) \
	NO_API virtual ~USIK_PostGameDataFrame();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWEB_API UClass* StaticClass<class USIK_PostGameDataFrame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
