// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/User/SIK_UserLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_UserLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SoundWaveProcedural_NoRegister();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_UserLibrary Function AdvertiseGame
struct Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics
{
	struct SIK_UserLibrary_eventAdvertiseGame_Parms
	{
		FSIK_SteamId GameServerId;
		FString GameServerIP;
		int32 GameServerPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Advertise Game" },
		{ "Keywords", "AdvertiseGame" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameServerId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::NewProp_GameServerId = { "GameServerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventAdvertiseGame_Parms, GameServerId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventAdvertiseGame_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventAdvertiseGame_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::NewProp_GameServerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::NewProp_GameServerPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "AdvertiseGame", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::SIK_UserLibrary_eventAdvertiseGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::SIK_UserLibrary_eventAdvertiseGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execAdvertiseGame)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_GameServerId);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameServerPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UserLibrary::AdvertiseGame(Z_Param_GameServerId,Z_Param_GameServerIP,Z_Param_GameServerPort);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function AdvertiseGame

// Begin Class USIK_UserLibrary Function BeginAuthSession
struct Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics
{
	struct SIK_UserLibrary_eventBeginAuthSession_Parms
	{
		TArray<uint8> Ticket;
		FSIK_SteamId EntitySteamId;
		TEnumAsByte<ESIK_BeginAuthSessionResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Begin Auth Session" },
		{ "Keywords", "BeginAuthSession" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntitySteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::NewProp_EntitySteamId = { "EntitySteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventBeginAuthSession_Parms, EntitySteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult, METADATA_PARAMS(0, nullptr) }; // 1049288089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::NewProp_EntitySteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "BeginAuthSession", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::SIK_UserLibrary_eventBeginAuthSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::SIK_UserLibrary_eventBeginAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execBeginAuthSession)
{
	P_GET_TARRAY(uint8,Z_Param_Ticket);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_EntitySteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_BeginAuthSessionResult>*)Z_Param__Result=USIK_UserLibrary::BeginAuthSession(Z_Param_Ticket,Z_Param_EntitySteamId);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function BeginAuthSession

// Begin Class USIK_UserLibrary Function CancelAuthTicket
struct Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics
{
	struct SIK_UserLibrary_eventCancelAuthTicket_Parms
	{
		int32 AuthTicket;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Cancel Auth Ticket" },
		{ "Keywords", "CancelAuthTicket" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AuthTicket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventCancelAuthTicket_Parms, AuthTicket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::NewProp_AuthTicket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "CancelAuthTicket", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::SIK_UserLibrary_eventCancelAuthTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::SIK_UserLibrary_eventCancelAuthTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execCancelAuthTicket)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AuthTicket);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UserLibrary::CancelAuthTicket(Z_Param_AuthTicket);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function CancelAuthTicket

// Begin Class USIK_UserLibrary Function ConstructSIKSoundWaveProcedural
struct Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics
{
	struct SIK_UserLibrary_eventConstructSIKSoundWaveProcedural_Parms
	{
		int32 SampleRate;
		int32 NumChannels;
		float Duration;
		USIK_SoundWaveProcedural* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "CPP_Default_Duration", "10000.000000" },
		{ "CPP_Default_NumChannels", "1" },
		{ "DisplayName", "Construct SIK Sound Wave Procedural" },
		{ "Keywords", "ConstructSIKSoundWaveProcedural" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventConstructSIKSoundWaveProcedural_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventConstructSIKSoundWaveProcedural_Parms, NumChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventConstructSIKSoundWaveProcedural_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventConstructSIKSoundWaveProcedural_Parms, ReturnValue), Z_Construct_UClass_USIK_SoundWaveProcedural_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::NewProp_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "ConstructSIKSoundWaveProcedural", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::SIK_UserLibrary_eventConstructSIKSoundWaveProcedural_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::SIK_UserLibrary_eventConstructSIKSoundWaveProcedural_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execConstructSIKSoundWaveProcedural)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumChannels);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SoundWaveProcedural**)Z_Param__Result=USIK_UserLibrary::ConstructSIKSoundWaveProcedural(Z_Param_SampleRate,Z_Param_NumChannels,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function ConstructSIKSoundWaveProcedural

// Begin Class USIK_UserLibrary Function DecompressVoice
struct Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics
{
	struct SIK_UserLibrary_eventDecompressVoice_Parms
	{
		TArray<uint8> Compressed;
		int32 DesiredSampleRate;
		TArray<uint8> Uncompressed;
		int32 BytesWritten;
		TEnumAsByte<ESIK_VoiceResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Decompress Voice" },
		{ "Keywords", "DecompressVoice" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Compressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Compressed_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Compressed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSampleRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Uncompressed_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Uncompressed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesWritten;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_Compressed_Inner = { "Compressed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_Compressed = { "Compressed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventDecompressVoice_Parms, Compressed), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Compressed_MetaData), NewProp_Compressed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_DesiredSampleRate = { "DesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventDecompressVoice_Parms, DesiredSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_Uncompressed_Inner = { "Uncompressed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_Uncompressed = { "Uncompressed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventDecompressVoice_Parms, Uncompressed), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_BytesWritten = { "BytesWritten", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventDecompressVoice_Parms, BytesWritten), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventDecompressVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult, METADATA_PARAMS(0, nullptr) }; // 1554909596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_Compressed_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_Compressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_DesiredSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_Uncompressed_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_Uncompressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_BytesWritten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "DecompressVoice", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::SIK_UserLibrary_eventDecompressVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::SIK_UserLibrary_eventDecompressVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execDecompressVoice)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Compressed);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSampleRate);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Uncompressed);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesWritten);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_VoiceResult>*)Z_Param__Result=USIK_UserLibrary::DecompressVoice(Z_Param_Out_Compressed,Z_Param_DesiredSampleRate,Z_Param_Out_Uncompressed,Z_Param_Out_BytesWritten);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function DecompressVoice

// Begin Class USIK_UserLibrary Function DestroySIKSoundWaveProcedural
struct Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics
{
	struct SIK_UserLibrary_eventDestroySIKSoundWaveProcedural_Parms
	{
		USIK_SoundWaveProcedural* SoundWaveProcedural;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Destroy SIK Sound Wave Procedural" },
		{ "Keywords", "DestroySIKSoundWaveProcedural" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWaveProcedural;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::NewProp_SoundWaveProcedural = { "SoundWaveProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventDestroySIKSoundWaveProcedural_Parms, SoundWaveProcedural), Z_Construct_UClass_USIK_SoundWaveProcedural_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::NewProp_SoundWaveProcedural,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "DestroySIKSoundWaveProcedural", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::SIK_UserLibrary_eventDestroySIKSoundWaveProcedural_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::SIK_UserLibrary_eventDestroySIKSoundWaveProcedural_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execDestroySIKSoundWaveProcedural)
{
	P_GET_OBJECT(USIK_SoundWaveProcedural,Z_Param_SoundWaveProcedural);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UserLibrary::DestroySIKSoundWaveProcedural(Z_Param_SoundWaveProcedural);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function DestroySIKSoundWaveProcedural

// Begin Class USIK_UserLibrary Function EndAuthSession
struct Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics
{
	struct SIK_UserLibrary_eventEndAuthSession_Parms
	{
		FSIK_SteamId SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "End Auth Session" },
		{ "Keywords", "EndAuthSession" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventEndAuthSession_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "EndAuthSession", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::SIK_UserLibrary_eventEndAuthSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::SIK_UserLibrary_eventEndAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execEndAuthSession)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UserLibrary::EndAuthSession(Z_Param_SteamId);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function EndAuthSession

// Begin Class USIK_UserLibrary Function GetAuthSessionTicket
struct Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics
{
	struct SIK_UserLibrary_eventGetAuthSessionTicket_Parms
	{
		TArray<uint8> Ticket;
		FSIK_SteamNetworkingIdentity Identity;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Auth Session Ticket" },
		{ "Keywords", "GetAuthSessionTicket" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Identity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::NewProp_Identity = { "Identity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAuthSessionTicket_Parms, Identity), Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 2683656557
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAuthSessionTicket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::NewProp_Identity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetAuthSessionTicket", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::SIK_UserLibrary_eventGetAuthSessionTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::SIK_UserLibrary_eventGetAuthSessionTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetAuthSessionTicket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
	P_GET_STRUCT(FSIK_SteamNetworkingIdentity,Z_Param_Identity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserLibrary::GetAuthSessionTicket(Z_Param_Out_Ticket,Z_Param_Identity);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetAuthSessionTicket

// Begin Class USIK_UserLibrary Function GetAuthTicketForWebApi
struct Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics
{
	struct SIK_UserLibrary_eventGetAuthTicketForWebApi_Parms
	{
		FString Identity;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Auth Ticket For Web Api" },
		{ "Keywords", "GetAuthTicketForWebApi" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::NewProp_Identity = { "Identity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAuthTicketForWebApi_Parms, Identity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAuthTicketForWebApi_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::NewProp_Identity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetAuthTicketForWebApi", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::SIK_UserLibrary_eventGetAuthTicketForWebApi_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::SIK_UserLibrary_eventGetAuthTicketForWebApi_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetAuthTicketForWebApi)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserLibrary::GetAuthTicketForWebApi(Z_Param_Identity);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetAuthTicketForWebApi

// Begin Class USIK_UserLibrary Function GetAvailableVoice
struct Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics
{
	struct SIK_UserLibrary_eventGetAvailableVoice_Parms
	{
		int32 Compressed;
		int32 Uncompressed;
		int32 DesiredSampleRate;
		TEnumAsByte<ESIK_VoiceResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Available Voice" },
		{ "Keywords", "GetAvailableVoice" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Compressed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Uncompressed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSampleRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::NewProp_Compressed = { "Compressed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAvailableVoice_Parms, Compressed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::NewProp_Uncompressed = { "Uncompressed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAvailableVoice_Parms, Uncompressed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::NewProp_DesiredSampleRate = { "DesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAvailableVoice_Parms, DesiredSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetAvailableVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult, METADATA_PARAMS(0, nullptr) }; // 1554909596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::NewProp_Compressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::NewProp_Uncompressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::NewProp_DesiredSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetAvailableVoice", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::SIK_UserLibrary_eventGetAvailableVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::SIK_UserLibrary_eventGetAvailableVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetAvailableVoice)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Compressed);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Uncompressed);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_VoiceResult>*)Z_Param__Result=USIK_UserLibrary::GetAvailableVoice(Z_Param_Out_Compressed,Z_Param_Out_Uncompressed,Z_Param_DesiredSampleRate);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetAvailableVoice

// Begin Class USIK_UserLibrary Function GetEncryptedAppTicket
struct Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics
{
	struct SIK_UserLibrary_eventGetEncryptedAppTicket_Parms
	{
		TArray<uint8> Ticket;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Encrypted App Ticket" },
		{ "Keywords", "GetEncryptedAppTicket" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetEncryptedAppTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventGetEncryptedAppTicket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventGetEncryptedAppTicket_Parms), &Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetEncryptedAppTicket", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::SIK_UserLibrary_eventGetEncryptedAppTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::SIK_UserLibrary_eventGetEncryptedAppTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetEncryptedAppTicket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::GetEncryptedAppTicket(Z_Param_Out_Ticket);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetEncryptedAppTicket

// Begin Class USIK_UserLibrary Function GetGameBadgeLevel
struct Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics
{
	struct SIK_UserLibrary_eventGetGameBadgeLevel_Parms
	{
		int32 Series;
		bool Foil;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Game Badge Level" },
		{ "Keywords", "GetGameBadgeLevel" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Series;
	static void NewProp_Foil_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Foil;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::NewProp_Series = { "Series", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetGameBadgeLevel_Parms, Series), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::NewProp_Foil_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventGetGameBadgeLevel_Parms*)Obj)->Foil = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::NewProp_Foil = { "Foil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventGetGameBadgeLevel_Parms), &Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::NewProp_Foil_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetGameBadgeLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::NewProp_Series,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::NewProp_Foil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetGameBadgeLevel", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::SIK_UserLibrary_eventGetGameBadgeLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::SIK_UserLibrary_eventGetGameBadgeLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetGameBadgeLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Series);
	P_GET_UBOOL(Z_Param_Foil);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserLibrary::GetGameBadgeLevel(Z_Param_Series,Z_Param_Foil);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetGameBadgeLevel

// Begin Class USIK_UserLibrary Function GetPlayerSteamLevel
struct Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics
{
	struct SIK_UserLibrary_eventGetPlayerSteamLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Player Steam Level" },
		{ "Keywords", "GetPlayerSteamLevel" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetPlayerSteamLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetPlayerSteamLevel", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::SIK_UserLibrary_eventGetPlayerSteamLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::SIK_UserLibrary_eventGetPlayerSteamLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetPlayerSteamLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserLibrary::GetPlayerSteamLevel();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetPlayerSteamLevel

// Begin Class USIK_UserLibrary Function GetSteamId
struct Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics
{
	struct SIK_UserLibrary_eventGetSteamId_Parms
	{
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Steam Id" },
		{ "Keywords", "GetSteamId" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetSteamId_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetSteamId", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::SIK_UserLibrary_eventGetSteamId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::SIK_UserLibrary_eventGetSteamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetSteamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetSteamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetSteamId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_UserLibrary::GetSteamId();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetSteamId

// Begin Class USIK_UserLibrary Function GetSteamIdPure
struct Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics
{
	struct SIK_UserLibrary_eventGetSteamIdPure_Parms
	{
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Steam Id as Pure" },
		{ "Keywords", "GetSteamId" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetSteamIdPure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetSteamIdPure", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::SIK_UserLibrary_eventGetSteamIdPure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::SIK_UserLibrary_eventGetSteamIdPure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetSteamIdPure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_UserLibrary::GetSteamIdPure();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetSteamIdPure

// Begin Class USIK_UserLibrary Function GetVoice
struct Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics
{
	struct SIK_UserLibrary_eventGetVoice_Parms
	{
		bool bWantCompressed;
		TArray<uint8> DestBuffer;
		int32 BytesWritten;
		TEnumAsByte<ESIK_VoiceResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Voice" },
		{ "Keywords", "GetVoice" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWantCompressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantCompressed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestBuffer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesWritten;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_bWantCompressed_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventGetVoice_Parms*)Obj)->bWantCompressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_bWantCompressed = { "bWantCompressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventGetVoice_Parms), &Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_bWantCompressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_DestBuffer_Inner = { "DestBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_DestBuffer = { "DestBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetVoice_Parms, DestBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_BytesWritten = { "BytesWritten", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetVoice_Parms, BytesWritten), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult, METADATA_PARAMS(0, nullptr) }; // 1554909596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_bWantCompressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_DestBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_DestBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_BytesWritten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetVoice", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::SIK_UserLibrary_eventGetVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::SIK_UserLibrary_eventGetVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetVoice)
{
	P_GET_UBOOL(Z_Param_bWantCompressed);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DestBuffer);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesWritten);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_VoiceResult>*)Z_Param__Result=USIK_UserLibrary::GetVoice(Z_Param_bWantCompressed,Z_Param_Out_DestBuffer,Z_Param_Out_BytesWritten);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetVoice

// Begin Class USIK_UserLibrary Function GetVoiceOptimalSampleRate
struct Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics
{
	struct SIK_UserLibrary_eventGetVoiceOptimalSampleRate_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Voice Optimal Sample Rate" },
		{ "Keywords", "GetVoiceOptimalSampleRate" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventGetVoiceOptimalSampleRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "GetVoiceOptimalSampleRate", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::SIK_UserLibrary_eventGetVoiceOptimalSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::SIK_UserLibrary_eventGetVoiceOptimalSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execGetVoiceOptimalSampleRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserLibrary::GetVoiceOptimalSampleRate();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function GetVoiceOptimalSampleRate

// Begin Class USIK_UserLibrary Function IsBehindNAT
struct Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics
{
	struct SIK_UserLibrary_eventIsBehindNAT_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Is Behind NAT" },
		{ "Keywords", "BIsBehindNAT" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventIsBehindNAT_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventIsBehindNAT_Parms), &Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "IsBehindNAT", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::SIK_UserLibrary_eventIsBehindNAT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::SIK_UserLibrary_eventIsBehindNAT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execIsBehindNAT)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::IsBehindNAT();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function IsBehindNAT

// Begin Class USIK_UserLibrary Function IsPhoneIdentifying
struct Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics
{
	struct SIK_UserLibrary_eventIsPhoneIdentifying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Is Phone Identifying" },
		{ "Keywords", "BIsPhoneIdentifying" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventIsPhoneIdentifying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventIsPhoneIdentifying_Parms), &Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "IsPhoneIdentifying", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::SIK_UserLibrary_eventIsPhoneIdentifying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::SIK_UserLibrary_eventIsPhoneIdentifying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execIsPhoneIdentifying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::IsPhoneIdentifying();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function IsPhoneIdentifying

// Begin Class USIK_UserLibrary Function IsPhoneRequiringVerification
struct Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics
{
	struct SIK_UserLibrary_eventIsPhoneRequiringVerification_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Is Phone Requiring Verification" },
		{ "Keywords", "BIsPhoneRequiringVerification" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventIsPhoneRequiringVerification_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventIsPhoneRequiringVerification_Parms), &Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "IsPhoneRequiringVerification", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::SIK_UserLibrary_eventIsPhoneRequiringVerification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::SIK_UserLibrary_eventIsPhoneRequiringVerification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execIsPhoneRequiringVerification)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::IsPhoneRequiringVerification();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function IsPhoneRequiringVerification

// Begin Class USIK_UserLibrary Function IsPhoneVerified
struct Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics
{
	struct SIK_UserLibrary_eventIsPhoneVerified_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Is Phone Verified" },
		{ "Keywords", "BIsPhoneVerified" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventIsPhoneVerified_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventIsPhoneVerified_Parms), &Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "IsPhoneVerified", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::SIK_UserLibrary_eventIsPhoneVerified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::SIK_UserLibrary_eventIsPhoneVerified_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execIsPhoneVerified)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::IsPhoneVerified();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function IsPhoneVerified

// Begin Class USIK_UserLibrary Function IsTwoFactorEnabled
struct Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics
{
	struct SIK_UserLibrary_eventIsTwoFactorEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Is Two Factor Enabled" },
		{ "Keywords", "BIsTwoFactorEnabled" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventIsTwoFactorEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventIsTwoFactorEnabled_Parms), &Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "IsTwoFactorEnabled", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::SIK_UserLibrary_eventIsTwoFactorEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::SIK_UserLibrary_eventIsTwoFactorEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execIsTwoFactorEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::IsTwoFactorEnabled();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function IsTwoFactorEnabled

// Begin Class USIK_UserLibrary Function LoggedOn
struct Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics
{
	struct SIK_UserLibrary_eventLoggedOn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Logged On" },
		{ "Keywords", "BLoggedOn" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventLoggedOn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventLoggedOn_Parms), &Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "LoggedOn", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::SIK_UserLibrary_eventLoggedOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::SIK_UserLibrary_eventLoggedOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_LoggedOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_LoggedOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execLoggedOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::LoggedOn();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function LoggedOn

// Begin Class USIK_UserLibrary Function LoggedOnPure
struct Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics
{
	struct SIK_UserLibrary_eventLoggedOnPure_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Logged On as Pure" },
		{ "Keywords", "BLoggedOn" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventLoggedOnPure_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventLoggedOnPure_Parms), &Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "LoggedOnPure", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::SIK_UserLibrary_eventLoggedOnPure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::SIK_UserLibrary_eventLoggedOnPure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execLoggedOnPure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::LoggedOnPure();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function LoggedOnPure

// Begin Class USIK_UserLibrary Function StartVoiceRecording
struct Z_Construct_UFunction_USIK_UserLibrary_StartVoiceRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Start Voice Recording" },
		{ "Keywords", "StartVoiceRecording" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_StartVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "StartVoiceRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_StartVoiceRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_StartVoiceRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_UserLibrary_StartVoiceRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_StartVoiceRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execStartVoiceRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UserLibrary::StartVoiceRecording();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function StartVoiceRecording

// Begin Class USIK_UserLibrary Function StopVoiceRecording
struct Z_Construct_UFunction_USIK_UserLibrary_StopVoiceRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Stop Voice Recording" },
		{ "Keywords", "StopVoiceRecording" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_StopVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "StopVoiceRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_StopVoiceRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_StopVoiceRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_UserLibrary_StopVoiceRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_StopVoiceRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execStopVoiceRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UserLibrary::StopVoiceRecording();
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function StopVoiceRecording

// Begin Class USIK_UserLibrary Function UserHasLicenseForApp
struct Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics
{
	struct SIK_UserLibrary_eventUserHasLicenseForApp_Parms
	{
		FSIK_SteamId SteamId;
		int32 AppId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "User Has License For App" },
		{ "Keywords", "UserHasLicenseForApp" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventUserHasLicenseForApp_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserLibrary_eventUserHasLicenseForApp_Parms, AppId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserLibrary_eventUserHasLicenseForApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserLibrary_eventUserHasLicenseForApp_Parms), &Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserLibrary, nullptr, "UserHasLicenseForApp", nullptr, nullptr, Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::SIK_UserLibrary_eventUserHasLicenseForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::SIK_UserLibrary_eventUserHasLicenseForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserLibrary::execUserHasLicenseForApp)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserLibrary::UserHasLicenseForApp(Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// End Class USIK_UserLibrary Function UserHasLicenseForApp

// Begin Class USIK_UserLibrary
void USIK_UserLibrary::StaticRegisterNativesUSIK_UserLibrary()
{
	UClass* Class = USIK_UserLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvertiseGame", &USIK_UserLibrary::execAdvertiseGame },
		{ "BeginAuthSession", &USIK_UserLibrary::execBeginAuthSession },
		{ "CancelAuthTicket", &USIK_UserLibrary::execCancelAuthTicket },
		{ "ConstructSIKSoundWaveProcedural", &USIK_UserLibrary::execConstructSIKSoundWaveProcedural },
		{ "DecompressVoice", &USIK_UserLibrary::execDecompressVoice },
		{ "DestroySIKSoundWaveProcedural", &USIK_UserLibrary::execDestroySIKSoundWaveProcedural },
		{ "EndAuthSession", &USIK_UserLibrary::execEndAuthSession },
		{ "GetAuthSessionTicket", &USIK_UserLibrary::execGetAuthSessionTicket },
		{ "GetAuthTicketForWebApi", &USIK_UserLibrary::execGetAuthTicketForWebApi },
		{ "GetAvailableVoice", &USIK_UserLibrary::execGetAvailableVoice },
		{ "GetEncryptedAppTicket", &USIK_UserLibrary::execGetEncryptedAppTicket },
		{ "GetGameBadgeLevel", &USIK_UserLibrary::execGetGameBadgeLevel },
		{ "GetPlayerSteamLevel", &USIK_UserLibrary::execGetPlayerSteamLevel },
		{ "GetSteamId", &USIK_UserLibrary::execGetSteamId },
		{ "GetSteamIdPure", &USIK_UserLibrary::execGetSteamIdPure },
		{ "GetVoice", &USIK_UserLibrary::execGetVoice },
		{ "GetVoiceOptimalSampleRate", &USIK_UserLibrary::execGetVoiceOptimalSampleRate },
		{ "IsBehindNAT", &USIK_UserLibrary::execIsBehindNAT },
		{ "IsPhoneIdentifying", &USIK_UserLibrary::execIsPhoneIdentifying },
		{ "IsPhoneRequiringVerification", &USIK_UserLibrary::execIsPhoneRequiringVerification },
		{ "IsPhoneVerified", &USIK_UserLibrary::execIsPhoneVerified },
		{ "IsTwoFactorEnabled", &USIK_UserLibrary::execIsTwoFactorEnabled },
		{ "LoggedOn", &USIK_UserLibrary::execLoggedOn },
		{ "LoggedOnPure", &USIK_UserLibrary::execLoggedOnPure },
		{ "StartVoiceRecording", &USIK_UserLibrary::execStartVoiceRecording },
		{ "StopVoiceRecording", &USIK_UserLibrary::execStopVoiceRecording },
		{ "UserHasLicenseForApp", &USIK_UserLibrary::execUserHasLicenseForApp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_UserLibrary);
UClass* Z_Construct_UClass_USIK_UserLibrary_NoRegister()
{
	return USIK_UserLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_UserLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_UserLibrary.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UserLibrary_AdvertiseGame, "AdvertiseGame" }, // 3018479127
		{ &Z_Construct_UFunction_USIK_UserLibrary_BeginAuthSession, "BeginAuthSession" }, // 3264765409
		{ &Z_Construct_UFunction_USIK_UserLibrary_CancelAuthTicket, "CancelAuthTicket" }, // 3448762856
		{ &Z_Construct_UFunction_USIK_UserLibrary_ConstructSIKSoundWaveProcedural, "ConstructSIKSoundWaveProcedural" }, // 4051844056
		{ &Z_Construct_UFunction_USIK_UserLibrary_DecompressVoice, "DecompressVoice" }, // 24583070
		{ &Z_Construct_UFunction_USIK_UserLibrary_DestroySIKSoundWaveProcedural, "DestroySIKSoundWaveProcedural" }, // 632396637
		{ &Z_Construct_UFunction_USIK_UserLibrary_EndAuthSession, "EndAuthSession" }, // 2066686738
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 4097998122
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetAuthTicketForWebApi, "GetAuthTicketForWebApi" }, // 2131745446
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetAvailableVoice, "GetAvailableVoice" }, // 1657986036
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetEncryptedAppTicket, "GetEncryptedAppTicket" }, // 1346756687
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetGameBadgeLevel, "GetGameBadgeLevel" }, // 1767706584
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetPlayerSteamLevel, "GetPlayerSteamLevel" }, // 844619735
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetSteamId, "GetSteamId" }, // 1765918487
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetSteamIdPure, "GetSteamIdPure" }, // 1263455762
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetVoice, "GetVoice" }, // 3151699243
		{ &Z_Construct_UFunction_USIK_UserLibrary_GetVoiceOptimalSampleRate, "GetVoiceOptimalSampleRate" }, // 1792894248
		{ &Z_Construct_UFunction_USIK_UserLibrary_IsBehindNAT, "IsBehindNAT" }, // 517777164
		{ &Z_Construct_UFunction_USIK_UserLibrary_IsPhoneIdentifying, "IsPhoneIdentifying" }, // 4173438477
		{ &Z_Construct_UFunction_USIK_UserLibrary_IsPhoneRequiringVerification, "IsPhoneRequiringVerification" }, // 2202348743
		{ &Z_Construct_UFunction_USIK_UserLibrary_IsPhoneVerified, "IsPhoneVerified" }, // 1319480369
		{ &Z_Construct_UFunction_USIK_UserLibrary_IsTwoFactorEnabled, "IsTwoFactorEnabled" }, // 1305594079
		{ &Z_Construct_UFunction_USIK_UserLibrary_LoggedOn, "LoggedOn" }, // 3462426195
		{ &Z_Construct_UFunction_USIK_UserLibrary_LoggedOnPure, "LoggedOnPure" }, // 3708814909
		{ &Z_Construct_UFunction_USIK_UserLibrary_StartVoiceRecording, "StartVoiceRecording" }, // 4165636336
		{ &Z_Construct_UFunction_USIK_UserLibrary_StopVoiceRecording, "StopVoiceRecording" }, // 1242158940
		{ &Z_Construct_UFunction_USIK_UserLibrary_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 2064388958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UserLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_UserLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UserLibrary_Statics::ClassParams = {
	&USIK_UserLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UserLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_UserLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_UserLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UserLibrary.OuterSingleton, Z_Construct_UClass_USIK_UserLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UserLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_UserLibrary>()
{
	return USIK_UserLibrary::StaticClass();
}
USIK_UserLibrary::USIK_UserLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_UserLibrary);
USIK_UserLibrary::~USIK_UserLibrary() {}
// End Class USIK_UserLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UserLibrary, USIK_UserLibrary::StaticClass, TEXT("USIK_UserLibrary"), &Z_Registration_Info_UClass_USIK_UserLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UserLibrary), 3457621329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_1468234282(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
