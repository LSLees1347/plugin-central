// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FSIKAttribute;
class USIK_CreateLobby_AsyncFunction;
struct FSIK_SteamId;
struct FSIKCreateLobbySettings;
#ifdef STEAMINTEGRATIONKIT_SIK_CreateLobby_AsyncFunction_generated_h
#error "SIK_CreateLobby_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_CreateLobby_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_CreateLobby_AsyncFunction_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


template<> STEAMINTEGRATIONKIT_API UScriptStruct* StaticStruct<struct FSIKCreateLobbySettings>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_42_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_CreateLobby_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_CreateLobby_Delegate, FSIK_SteamId const& LobbyID);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSIKLobby);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_CreateLobby_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_CreateLobby_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_CreateLobby_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_CreateLobby_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_CreateLobby_AsyncFunction(USIK_CreateLobby_AsyncFunction&&); \
	USIK_CreateLobby_AsyncFunction(const USIK_CreateLobby_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_CreateLobby_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_CreateLobby_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_CreateLobby_AsyncFunction) \
	NO_API virtual ~USIK_CreateLobby_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_44_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_47_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_CreateLobby_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
