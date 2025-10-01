// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Sessions/SIK_CreateSession_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_CreateSession_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateSession_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateSession_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIKAttribute();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIKDedicatedServerSettings();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FSIK_CreateSession_Delegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_CreateSession_Delegate_Parms
	{
		FString SessionID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_CreateSession_Delegate_Parms, SessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_CreateSession_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_CreateSession_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_CreateSession_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_CreateSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_CreateSession_Delegate, const FString& SessionID)
{
	struct _Script_SteamIntegrationKit_eventSIK_CreateSession_Delegate_Parms
	{
		FString SessionID;
	};
	_Script_SteamIntegrationKit_eventSIK_CreateSession_Delegate_Parms Parms;
	Parms.SessionID=SessionID;
	SIK_CreateSession_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSIK_CreateSession_Delegate

// Begin ScriptStruct FSIKDedicatedServerSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SIKDedicatedServerSettings;
class UScriptStruct* FSIKDedicatedServerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SIKDedicatedServerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SIKDedicatedServerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIKDedicatedServerSettings, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIKDedicatedServerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SIKDedicatedServerSettings.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UScriptStruct* StaticStruct<FSIKDedicatedServerSettings>()
{
	return FSIKDedicatedServerSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDedicatedServer_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortInfo_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PortInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIKDedicatedServerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
{
	((FSIKDedicatedServerSettings*)Obj)->bIsDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIKDedicatedServerSettings), &Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDedicatedServer_MetaData), NewProp_bIsDedicatedServer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::NewProp_PortInfo = { "PortInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIKDedicatedServerSettings, PortInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortInfo_MetaData), NewProp_PortInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::NewProp_bIsDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::NewProp_PortInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIKDedicatedServerSettings",
	Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::PropPointers),
	sizeof(FSIKDedicatedServerSettings),
	alignof(FSIKDedicatedServerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIKDedicatedServerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SIKDedicatedServerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SIKDedicatedServerSettings.InnerSingleton, Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SIKDedicatedServerSettings.InnerSingleton;
}
// End ScriptStruct FSIKDedicatedServerSettings

// Begin ScriptStruct FSIK_CreateSessionExtraSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SIK_CreateSessionExtraSettings;
class UScriptStruct* FSIK_CreateSessionExtraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_CreateSessionExtraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SIK_CreateSessionExtraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_CreateSessionExtraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SIK_CreateSessionExtraSettings.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UScriptStruct* StaticStruct<FSIK_CreateSessionExtraSettings>()
{
	return FSIK_CreateSessionExtraSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLanMatch_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrivateConnections_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAdvertise_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinInProgress_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePresence_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinViaPresence_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLanMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLanMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static void NewProp_bUsePresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
	static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
	static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_CreateSessionExtraSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bIsLanMatch_SetBit(void* Obj)
{
	((FSIK_CreateSessionExtraSettings*)Obj)->bIsLanMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bIsLanMatch = { "bIsLanMatch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_CreateSessionExtraSettings), &Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bIsLanMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLanMatch_MetaData), NewProp_bIsLanMatch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CreateSessionExtraSettings, NumberOfPrivateConnections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPrivateConnections_MetaData), NewProp_NumberOfPrivateConnections_MetaData) };
void Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((FSIK_CreateSessionExtraSettings*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_CreateSessionExtraSettings), &Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAdvertise_MetaData), NewProp_bShouldAdvertise_MetaData) };
void Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((FSIK_CreateSessionExtraSettings*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_CreateSessionExtraSettings), &Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowJoinInProgress_MetaData), NewProp_bAllowJoinInProgress_MetaData) };
void Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bUsePresence_SetBit(void* Obj)
{
	((FSIK_CreateSessionExtraSettings*)Obj)->bUsePresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_CreateSessionExtraSettings), &Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePresence_MetaData), NewProp_bUsePresence_MetaData) };
void Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
{
	((FSIK_CreateSessionExtraSettings*)Obj)->bAllowJoinViaPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_CreateSessionExtraSettings), &Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowJoinViaPresence_MetaData), NewProp_bAllowJoinViaPresence_MetaData) };
void Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
{
	((FSIK_CreateSessionExtraSettings*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_CreateSessionExtraSettings), &Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData), NewProp_bAllowJoinViaPresenceFriendsOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bIsLanMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_NumberOfPrivateConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bUsePresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_CreateSessionExtraSettings",
	Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::PropPointers),
	sizeof(FSIK_CreateSessionExtraSettings),
	alignof(FSIK_CreateSessionExtraSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_CreateSessionExtraSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SIK_CreateSessionExtraSettings.InnerSingleton, Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SIK_CreateSessionExtraSettings.InnerSingleton;
}
// End ScriptStruct FSIK_CreateSessionExtraSettings

// Begin Class USIK_CreateSession_AsyncFunction Function CreateEIKSession
struct Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics
{
	struct SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms
	{
		TMap<FString,FSIKAttribute> SessionSettings;
		FName SessionName;
		int32 NumberOfPublicConnections;
		FSIKDedicatedServerSettings DedicatedServerSettings;
		FSIK_CreateSessionExtraSettings ExtraSettings;
		USIK_CreateSession_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "Comment", "/*\n\x09This C++ method creates a session in Steam using the selected method and sets up a callback function to handle the response.\n\x09""Documentation link: https://betide-studio.gitbook.io/Steam-integration-kit/sessions/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09*/" },
		{ "CPP_Default_DedicatedServerSettings", "()" },
		{ "CPP_Default_ExtraSettings", "()" },
		{ "CPP_Default_NumberOfPublicConnections", "15" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Create Dedicated Server Session" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
		{ "ToolTip", "This C++ method creates a session in Steam using the selected method and sets up a callback function to handle the response.\nDocumentation link: https://betide-studio.gitbook.io/Steam-integration-kit/sessions/\nFor Input Parameters, please refer to the documentation link above." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DedicatedServerSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSIKAttribute, METADATA_PARAMS(0, nullptr) }; // 2531212480
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2531212480
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_DedicatedServerSettings = { "DedicatedServerSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, DedicatedServerSettings), Z_Construct_UScriptStruct_FSIKDedicatedServerSettings, METADATA_PARAMS(0, nullptr) }; // 1752738789
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, ExtraSettings), Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings, METADATA_PARAMS(0, nullptr) }; // 1894350674
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms, ReturnValue), Z_Construct_UClass_USIK_CreateSession_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_NumberOfPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_DedicatedServerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_ExtraSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_CreateSession_AsyncFunction, nullptr, "CreateEIKSession", nullptr, nullptr, Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::SIK_CreateSession_AsyncFunction_eventCreateEIKSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CreateSession_AsyncFunction::execCreateEIKSession)
{
	P_GET_TMAP(FString,FSIKAttribute,Z_Param_SessionSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
	P_GET_STRUCT(FSIKDedicatedServerSettings,Z_Param_DedicatedServerSettings);
	P_GET_STRUCT(FSIK_CreateSessionExtraSettings,Z_Param_ExtraSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CreateSession_AsyncFunction**)Z_Param__Result=USIK_CreateSession_AsyncFunction::CreateEIKSession(Z_Param_SessionSettings,Z_Param_SessionName,Z_Param_NumberOfPublicConnections,Z_Param_DedicatedServerSettings,Z_Param_ExtraSettings);
	P_NATIVE_END;
}
// End Class USIK_CreateSession_AsyncFunction Function CreateEIKSession

// Begin Class USIK_CreateSession_AsyncFunction
void USIK_CreateSession_AsyncFunction::StaticRegisterNativesUSIK_CreateSession_AsyncFunction()
{
	UClass* Class = USIK_CreateSession_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateEIKSession", &USIK_CreateSession_AsyncFunction::execCreateEIKSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_CreateSession_AsyncFunction);
UClass* Z_Construct_UClass_USIK_CreateSession_AsyncFunction_NoRegister()
{
	return USIK_CreateSession_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CreateSession_AsyncFunction_CreateEIKSession, "CreateEIKSession" }, // 2723930020
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CreateSession_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateSession_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 206962600
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateSession_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 206962600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::ClassParams = {
	&USIK_CreateSession_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_CreateSession_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_CreateSession_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CreateSession_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CreateSession_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_CreateSession_AsyncFunction>()
{
	return USIK_CreateSession_AsyncFunction::StaticClass();
}
USIK_CreateSession_AsyncFunction::USIK_CreateSession_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_CreateSession_AsyncFunction);
USIK_CreateSession_AsyncFunction::~USIK_CreateSession_AsyncFunction() {}
// End Class USIK_CreateSession_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIKDedicatedServerSettings::StaticStruct, Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics::NewStructOps, TEXT("SIKDedicatedServerSettings"), &Z_Registration_Info_UScriptStruct_SIKDedicatedServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIKDedicatedServerSettings), 1752738789U) },
		{ FSIK_CreateSessionExtraSettings::StaticStruct, Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics::NewStructOps, TEXT("SIK_CreateSessionExtraSettings"), &Z_Registration_Info_UScriptStruct_SIK_CreateSessionExtraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_CreateSessionExtraSettings), 1894350674U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CreateSession_AsyncFunction, USIK_CreateSession_AsyncFunction::StaticClass, TEXT("USIK_CreateSession_AsyncFunction"), &Z_Registration_Info_UClass_USIK_CreateSession_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CreateSession_AsyncFunction), 2455827649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_1766650513(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
