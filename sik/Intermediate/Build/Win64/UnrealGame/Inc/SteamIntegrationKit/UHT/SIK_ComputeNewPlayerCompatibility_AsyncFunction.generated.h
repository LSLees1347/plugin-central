// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameServer/SIK_ComputeNewPlayerCompatibility_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_ComputeNewPlayerCompatibility_AsyncFunction;
struct FSIK_SteamId;
#ifdef STEAMINTEGRATIONKIT_SIK_ComputeNewPlayerCompatibility_AsyncFunction_generated_h
#error "SIK_ComputeNewPlayerCompatibility_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_ComputeNewPlayerCompatibility_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_ComputeNewPlayerCompatibility_AsyncFunction_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FComputeNewPlayerCompatibilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComputeNewPlayerCompatibilityDelegate, TEnumAsByte<ESIK_Result> const& Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComputeNewPlayerCompatibility);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_ComputeNewPlayerCompatibility_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_ComputeNewPlayerCompatibility_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_ComputeNewPlayerCompatibility_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_ComputeNewPlayerCompatibility_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_ComputeNewPlayerCompatibility_AsyncFunction(USIK_ComputeNewPlayerCompatibility_AsyncFunction&&); \
	USIK_ComputeNewPlayerCompatibility_AsyncFunction(const USIK_ComputeNewPlayerCompatibility_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_ComputeNewPlayerCompatibility_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_ComputeNewPlayerCompatibility_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_ComputeNewPlayerCompatibility_AsyncFunction) \
	NO_API virtual ~USIK_ComputeNewPlayerCompatibility_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_ComputeNewPlayerCompatibility_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
