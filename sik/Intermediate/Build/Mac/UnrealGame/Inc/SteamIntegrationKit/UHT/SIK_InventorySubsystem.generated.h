// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Inventory/SIK_InventorySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;
struct FSIK_SteamInventoryResult;
#ifdef STEAMINTEGRATIONKIT_SIK_InventorySubsystem_generated_h
#error "SIK_InventorySubsystem.generated.h already included, missing '#pragma once' in SIK_InventorySubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_InventorySubsystem_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryDefinitionUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryDefinitionUpdateDelegate);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryEligiblePromoItemDefIDsDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryEligiblePromoItemDefIDsDelegate, ESIK_Result Result, FSIK_SteamId SteamID, int32 ItemDefs, bool CachedData);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryFullUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryFullUpdateDelegate, FSIK_SteamInventoryResult Result);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryResultReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryResultReadyDelegate, FSIK_SteamInventoryResult Result, ESIK_Result ResultType);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryStartPurchaseResultDelegate, ESIK_Result Result, int64 OrderID, int64 TransID);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryRequestPricesResultDelegate, ESIK_Result Result, const FString& Currency);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_InventorySubsystem(); \
	friend struct Z_Construct_UClass_USIK_InventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(USIK_InventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_InventorySubsystem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_InventorySubsystem(USIK_InventorySubsystem&&); \
	USIK_InventorySubsystem(const USIK_InventorySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_InventorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_InventorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_InventorySubsystem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_16_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_InventorySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
