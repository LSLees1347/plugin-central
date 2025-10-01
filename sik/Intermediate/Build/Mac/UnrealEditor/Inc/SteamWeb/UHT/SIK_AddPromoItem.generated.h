// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Inventory/SIK_AddPromoItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_AddPromoItem;
struct FSIK_AddPromoItemOptional;
#ifdef STEAMWEB_SIK_AddPromoItem_generated_h
#error "SIK_AddPromoItem.generated.h already included, missing '#pragma once' in SIK_AddPromoItem.h"
#endif
#define STEAMWEB_SIK_AddPromoItem_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


template<> STEAMWEB_API UScriptStruct* StaticStruct<struct FSIK_AddPromoItemOptional>();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPromoItem);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_AddPromoItem(); \
	friend struct Z_Construct_UClass_USIK_AddPromoItem_Statics; \
public: \
	DECLARE_CLASS(USIK_AddPromoItem, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), NO_API) \
	DECLARE_SERIALIZER(USIK_AddPromoItem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_AddPromoItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_AddPromoItem(USIK_AddPromoItem&&); \
	USIK_AddPromoItem(const USIK_AddPromoItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_AddPromoItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_AddPromoItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_AddPromoItem) \
	NO_API virtual ~USIK_AddPromoItem();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_22_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWEB_API UClass* StaticClass<class USIK_AddPromoItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
