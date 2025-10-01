// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Screenshots/SIK_ScreenshotsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_PublishedFileId;
struct FSIK_ScreenshotHandle;
struct FSIK_SteamId;
#ifdef STEAMINTEGRATIONKIT_SIK_ScreenshotsLibrary_generated_h
#error "SIK_ScreenshotsLibrary.generated.h already included, missing '#pragma once' in SIK_ScreenshotsLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_ScreenshotsLibrary_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteScreenshot); \
	DECLARE_FUNCTION(execTriggerScreenshot); \
	DECLARE_FUNCTION(execTagUser); \
	DECLARE_FUNCTION(execTagPublishedFile); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execIsScreenshotsHooked); \
	DECLARE_FUNCTION(execHookScreenshots); \
	DECLARE_FUNCTION(execAddVRScreenshotToLibrary); \
	DECLARE_FUNCTION(execAddScreenshotToLibrary);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_ScreenshotsLibrary(); \
	friend struct Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics; \
public: \
	DECLARE_CLASS(USIK_ScreenshotsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_ScreenshotsLibrary)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_ScreenshotsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_ScreenshotsLibrary(USIK_ScreenshotsLibrary&&); \
	USIK_ScreenshotsLibrary(const USIK_ScreenshotsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_ScreenshotsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_ScreenshotsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_ScreenshotsLibrary) \
	NO_API virtual ~USIK_ScreenshotsLibrary();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h_13_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_ScreenshotsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
