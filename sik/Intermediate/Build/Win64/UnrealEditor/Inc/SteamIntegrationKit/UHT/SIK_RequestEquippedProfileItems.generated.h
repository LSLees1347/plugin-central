// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Friends/SIK_RequestEquippedProfileItems.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_RequestEquippedProfileItems;
struct FSIK_SteamId;
#ifdef STEAMINTEGRATIONKIT_SIK_RequestEquippedProfileItems_generated_h
#error "SIK_RequestEquippedProfileItems.generated.h already included, missing '#pragma once' in SIK_RequestEquippedProfileItems.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_RequestEquippedProfileItems_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_OnRequestEquippedProfileItems_DelegateWrapper(const FMulticastScriptDelegate& SIK_OnRequestEquippedProfileItems, TEnumAsByte<ESIK_Result> const& Result, FSIK_SteamId const& bHasAnimatedAvatar, bool bHasAvatarFrame, bool bHasProfileModifier, bool bHasProfileBackground, bool bHasMiniProfileBackground);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestEquippedProfileItems);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_RequestEquippedProfileItems(); \
	friend struct Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics; \
public: \
	DECLARE_CLASS(USIK_RequestEquippedProfileItems, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_RequestEquippedProfileItems)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_RequestEquippedProfileItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_RequestEquippedProfileItems(USIK_RequestEquippedProfileItems&&); \
	USIK_RequestEquippedProfileItems(const USIK_RequestEquippedProfileItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_RequestEquippedProfileItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_RequestEquippedProfileItems); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_RequestEquippedProfileItems) \
	NO_API virtual ~USIK_RequestEquippedProfileItems();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_RequestEquippedProfileItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
