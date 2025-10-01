// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Apps/SIK_GetFileDetails_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_GetFileDetails_AsyncFunction;
#ifdef STEAMINTEGRATIONKIT_SIK_GetFileDetails_AsyncFunction_generated_h
#error "SIK_GetFileDetails_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_GetFileDetails_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_GetFileDetails_AsyncFunction_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FGetFileDetailsResult_DelegateWrapper(const FMulticastScriptDelegate& GetFileDetailsResult, ESIK_Result Result, int64 FileSize, TArray<int32> const& FileHash, int32 Flags);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFileDetails);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GetFileDetails_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_GetFileDetails_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_GetFileDetails_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_GetFileDetails_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_GetFileDetails_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_GetFileDetails_AsyncFunction(USIK_GetFileDetails_AsyncFunction&&); \
	USIK_GetFileDetails_AsyncFunction(const USIK_GetFileDetails_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GetFileDetails_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GetFileDetails_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_GetFileDetails_AsyncFunction) \
	NO_API virtual ~USIK_GetFileDetails_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_GetFileDetails_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_GetFileDetails_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
