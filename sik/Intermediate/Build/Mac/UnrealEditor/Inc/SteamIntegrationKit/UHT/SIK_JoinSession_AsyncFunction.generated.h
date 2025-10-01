// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Sessions/SIK_JoinSession_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USIK_JoinSession_AsyncFunction;
enum class ESIKJoinResult : uint8;
struct FSSessionFindStruct;
#ifdef STEAMINTEGRATIONKIT_SIK_JoinSession_AsyncFunction_generated_h
#error "SIK_JoinSession_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_JoinSession_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_JoinSession_AsyncFunction_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_22_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_JoinSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_JoinSession_Delegate, ESIKJoinResult Result, const FString& SessionJoinAddress);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJoinSIKSessions);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_JoinSession_AsyncFunction(); \
	friend struct Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(USIK_JoinSession_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), NO_API) \
	DECLARE_SERIALIZER(USIK_JoinSession_AsyncFunction)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_JoinSession_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIK_JoinSession_AsyncFunction(USIK_JoinSession_AsyncFunction&&); \
	USIK_JoinSession_AsyncFunction(const USIK_JoinSession_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_JoinSession_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_JoinSession_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_JoinSession_AsyncFunction) \
	NO_API virtual ~USIK_JoinSession_AsyncFunction();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_26_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_29_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<class USIK_JoinSession_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h


#define FOREACH_ENUM_ESIKJOINRESULT(op) \
	op(ESIKJoinResult::Success) \
	op(ESIKJoinResult::SessionIsFull) \
	op(ESIKJoinResult::SessionDoesNotExist) \
	op(ESIKJoinResult::CouldNotRetrieveAddress) \
	op(ESIKJoinResult::AlreadyInSession) \
	op(ESIKJoinResult::UnknownError) 

enum class ESIKJoinResult : uint8;
template<> struct TIsUEnumClass<ESIKJoinResult> { enum { Value = true }; };
template<> STEAMINTEGRATIONKIT_API UEnum* StaticEnum<ESIKJoinResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
