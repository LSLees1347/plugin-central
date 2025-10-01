// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Sessions/SIK_SessionsSubsystem.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_SessionsSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SessionsSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SessionsSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin ScriptStruct FSIK_CurrentSessionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SIK_CurrentSessionInfo;
class UScriptStruct* FSIK_CurrentSessionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_CurrentSessionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SIK_CurrentSessionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_CurrentSessionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SIK_CurrentSessionInfo.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UScriptStruct* StaticStruct<FSIK_CurrentSessionInfo>()
{
	return FSIK_CurrentSessionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_CurrentSessionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CurrentSessionInfo, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CurrentSessionInfo, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 432135848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_CurrentSessionInfo",
	Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::PropPointers),
	sizeof(FSIK_CurrentSessionInfo),
	alignof(FSIK_CurrentSessionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_CurrentSessionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SIK_CurrentSessionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SIK_CurrentSessionInfo.InnerSingleton;
}
// End ScriptStruct FSIK_CurrentSessionInfo

// Begin Delegate FSIK_OnSessionUserInviteAccepted
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms
	{
		bool bWasSuccesfull;
		FBlueprintSessionResult AcceptedSession;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptedSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccesfull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccesfull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcceptedSession;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_bWasSuccesfull_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms*)Obj)->bWasSuccesfull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_bWasSuccesfull = { "bWasSuccesfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_bWasSuccesfull_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_AcceptedSession = { "AcceptedSession", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms, AcceptedSession), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptedSession_MetaData), NewProp_AcceptedSession_MetaData) }; // 1307808723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_bWasSuccesfull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_AcceptedSession,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_OnSessionUserInviteAccepted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_OnSessionUserInviteAccepted_DelegateWrapper(const FMulticastScriptDelegate& SIK_OnSessionUserInviteAccepted, bool bWasSuccesfull, FBlueprintSessionResult const& AcceptedSession)
{
	struct _Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms
	{
		bool bWasSuccesfull;
		FBlueprintSessionResult AcceptedSession;
	};
	_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms Parms;
	Parms.bWasSuccesfull=bWasSuccesfull ? true : false;
	Parms.AcceptedSession=AcceptedSession;
	SIK_OnSessionUserInviteAccepted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSIK_OnSessionUserInviteAccepted

// Begin Class USIK_SessionsSubsystem Function GetAllJoinedSessionsAndLobbies
struct Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics
{
	struct SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms
	{
		UObject* Context;
		TArray<FSIK_CurrentSessionInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "DisplayName", "Get All Joined Sessions And Lobbies" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo, METADATA_PARAMS(0, nullptr) }; // 2892632423
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2892632423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SessionsSubsystem, nullptr, "GetAllJoinedSessionsAndLobbies", nullptr, nullptr, Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SessionsSubsystem::execGetAllJoinedSessionsAndLobbies)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSIK_CurrentSessionInfo>*)Z_Param__Result=USIK_SessionsSubsystem::GetAllJoinedSessionsAndLobbies(Z_Param_Context);
	P_NATIVE_END;
}
// End Class USIK_SessionsSubsystem Function GetAllJoinedSessionsAndLobbies

// Begin Class USIK_SessionsSubsystem Function IsSIKActive
struct Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics
{
	struct SIK_SessionsSubsystem_eventIsSIKActive_Parms
	{
		UObject* Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "DisplayName", "Is SIK Active" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SessionsSubsystem_eventIsSIKActive_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_SessionsSubsystem_eventIsSIKActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SessionsSubsystem_eventIsSIKActive_Parms), &Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SessionsSubsystem, nullptr, "IsSIKActive", nullptr, nullptr, Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::SIK_SessionsSubsystem_eventIsSIKActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::SIK_SessionsSubsystem_eventIsSIKActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SessionsSubsystem::execIsSIKActive)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_SessionsSubsystem::IsSIKActive(Z_Param_Context);
	P_NATIVE_END;
}
// End Class USIK_SessionsSubsystem Function IsSIKActive

// Begin Class USIK_SessionsSubsystem
void USIK_SessionsSubsystem::StaticRegisterNativesUSIK_SessionsSubsystem()
{
	UClass* Class = USIK_SessionsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllJoinedSessionsAndLobbies", &USIK_SessionsSubsystem::execGetAllJoinedSessionsAndLobbies },
		{ "IsSIKActive", &USIK_SessionsSubsystem::execIsSIKActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_SessionsSubsystem);
UClass* Z_Construct_UClass_USIK_SessionsSubsystem_NoRegister()
{
	return USIK_SessionsSubsystem::StaticClass();
}
struct Z_Construct_UClass_USIK_SessionsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSessionUserInviteAccepted_MetaData[] = {
		{ "DisplayName", "On Session User Invite Accepted" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionUserInviteAccepted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies, "GetAllJoinedSessionsAndLobbies" }, // 3218768331
		{ &Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive, "IsSIKActive" }, // 2735755773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SessionsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SessionsSubsystem_Statics::NewProp_OnSessionUserInviteAccepted = { "OnSessionUserInviteAccepted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SessionsSubsystem, OnSessionUserInviteAccepted), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSessionUserInviteAccepted_MetaData), NewProp_OnSessionUserInviteAccepted_MetaData) }; // 3309826663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_SessionsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SessionsSubsystem_Statics::NewProp_OnSessionUserInviteAccepted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_SessionsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SessionsSubsystem_Statics::ClassParams = {
	&USIK_SessionsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_SessionsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SessionsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_SessionsSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_SessionsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SessionsSubsystem.OuterSingleton, Z_Construct_UClass_USIK_SessionsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SessionsSubsystem.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_SessionsSubsystem>()
{
	return USIK_SessionsSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_SessionsSubsystem);
// End Class USIK_SessionsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_CurrentSessionInfo::StaticStruct, Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewStructOps, TEXT("SIK_CurrentSessionInfo"), &Z_Registration_Info_UScriptStruct_SIK_CurrentSessionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_CurrentSessionInfo), 2892632423U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SessionsSubsystem, USIK_SessionsSubsystem::StaticClass, TEXT("USIK_SessionsSubsystem"), &Z_Registration_Info_UClass_USIK_SessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SessionsSubsystem), 892232050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_3376494012(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
