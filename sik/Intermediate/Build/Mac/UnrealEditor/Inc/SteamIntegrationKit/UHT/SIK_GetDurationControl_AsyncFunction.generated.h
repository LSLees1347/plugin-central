// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/User/SIK_GetDurationControl_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_GetDurationControl_AsyncFunction;
#ifdef STEAMINTEGRATIONKIT_SIK_GetDurationControl_AsyncFunction_generated_h
#error "SIK_GetDurationControl_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_GetDurationControl_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_GetDurationControl_AsyncFunction_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_29_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnDurationControl_DelegateWrapper(const FMulticastScriptDelegate& OnDurationControl, ESIK_Result Result, ESIK_DurationControlNotification Notification, ESIK_DurationControlProgress Progress, int32 SecsLast5h, bool bApplicable, int32 AppID);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDurationControl);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GetDurationControl_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_GetDurationControl_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_GetDurationControl_AsyncFunction)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_GetDurationControl_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_GetDurationControl_AsyncFunction(USIK_GetDurationControl_AsyncFunction&&); \
	USIK_GetDurationControl_AsyncFunction(const USIK_GetDurationControl_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GetDurationControl_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GetDurationControl_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_GetDurationControl_AsyncFunction) \
	NO_API virtual ~USIK_GetDurationControl_AsyncFunction();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_31_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_34_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_GetDurationControl_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h


#define FOREACH_ENUM_ESIK_DURATIONCONTROLNOTIFICATION(op) \
	op(DurationControlNotification_None) \
	op(DurationControlNotification_1Hour) \
	op(DurationControlNotification_3Hours) \
	op(DurationControlNotification_HalfProgress) \
	op(DurationControlNotification_ExitSoon_3h) \
	op(DurationControlNotification_ExitSoon_5h) \
	op(DurationControlNotification_ExitSoon_Night) 
#define FOREACH_ENUM_ESIK_DURATIONCONTROLPROGRESS(op) \
	op(DurationControlProgress_Full) \
	op(DurationControlProgress_Half) \
	op(DurationControlProgress_None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
