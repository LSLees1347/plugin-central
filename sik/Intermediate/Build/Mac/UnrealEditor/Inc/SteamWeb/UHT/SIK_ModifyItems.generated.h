// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Inventory/SIK_ModifyItems.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_ModifyItems;
struct FSIK_ModifyItemUpdate;
#ifdef STEAMWEB_SIK_ModifyItems_generated_h
#error "SIK_ModifyItems.generated.h already included, missing '#pragma once' in SIK_ModifyItems.h"
#endif
#define STEAMWEB_SIK_ModifyItems_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


template<> STEAMWEB_API UScriptStruct* StaticStruct<struct FSIK_ModifyItemUpdate>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execModifyItems);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_ModifyItems(); \
	friend struct Z_Construct_UClass_USIK_ModifyItems_Statics; \
public: \
	DECLARE_CLASS(USIK_ModifyItems, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), NO_API) \
	DECLARE_SERIALIZER(USIK_ModifyItems)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_ModifyItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_ModifyItems(USIK_ModifyItems&&); \
	USIK_ModifyItems(const USIK_ModifyItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_ModifyItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_ModifyItems); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_ModifyItems) \
	NO_API virtual ~USIK_ModifyItems();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_37_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_40_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWEB_API UClass* StaticClass<class USIK_ModifyItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
