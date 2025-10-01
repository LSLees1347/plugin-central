// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Friends/SIK_RequestClanOfficerList_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_RequestClanOfficerList_AsyncFunction;
struct FSIK_SteamId;
#ifdef STEAMINTEGRATIONKIT_SIK_RequestClanOfficerList_AsyncFunction_generated_h
#error "SIK_RequestClanOfficerList_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_RequestClanOfficerList_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_RequestClanOfficerList_AsyncFunction_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRequestClanOfficerList_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerList, int32 NumberOfOfficers);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestClanOfficerList);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_RequestClanOfficerList_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_RequestClanOfficerList_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_RequestClanOfficerList_AsyncFunction)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_RequestClanOfficerList_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_RequestClanOfficerList_AsyncFunction(USIK_RequestClanOfficerList_AsyncFunction&&); \
	USIK_RequestClanOfficerList_AsyncFunction(const USIK_RequestClanOfficerList_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_RequestClanOfficerList_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_RequestClanOfficerList_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_RequestClanOfficerList_AsyncFunction) \
	NO_API virtual ~USIK_RequestClanOfficerList_AsyncFunction();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_13_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_RequestClanOfficerList_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
