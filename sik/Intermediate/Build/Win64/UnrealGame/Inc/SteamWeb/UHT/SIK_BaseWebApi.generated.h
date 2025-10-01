// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIK_BaseWebApi.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_BaseWebApiResponse;
#ifdef STEAMWEB_SIK_BaseWebApi_generated_h
#error "SIK_BaseWebApi.generated.h already included, missing '#pragma once' in SIK_BaseWebApi.h"
#endif
#define STEAMWEB_SIK_BaseWebApi_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


template<> STEAMWEB_API UScriptStruct* StaticStruct<struct FSIK_BaseWebApiResponse>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_38_DELEGATE \
STEAMWEB_API void FSIK_BaseWebApiDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_BaseWebApiDelegate, bool bSuccess, FSIK_BaseWebApiResponse Response);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_BaseWebApi(); \
	friend struct Z_Construct_UClass_USIK_BaseWebApi_Statics; \
public: \
	DECLARE_CLASS(USIK_BaseWebApi, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), NO_API) \
	DECLARE_SERIALIZER(USIK_BaseWebApi)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_BaseWebApi(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_BaseWebApi(USIK_BaseWebApi&&); \
	USIK_BaseWebApi(const USIK_BaseWebApi&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_BaseWebApi); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_BaseWebApi); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_BaseWebApi) \
	NO_API virtual ~USIK_BaseWebApi();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_39_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWEB_API UClass* StaticClass<class USIK_BaseWebApi>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
