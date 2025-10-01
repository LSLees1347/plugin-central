// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_DownloadLeaderboardEntries_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Enum ESIK_LeaderboardDataRequest
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LeaderboardDataRequest;
static UEnum* ESIK_LeaderboardDataRequest_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LeaderboardDataRequest.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LeaderboardDataRequest.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LeaderboardDataRequest"));
	}
	return Z_Registration_Info_UEnum_ESIK_LeaderboardDataRequest.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UEnum* StaticEnum<ESIK_LeaderboardDataRequest>()
{
	return ESIK_LeaderboardDataRequest_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeaderboardDataRequestFriends.DisplayName", "Friends" },
		{ "LeaderboardDataRequestFriends.Name", "LeaderboardDataRequestFriends" },
		{ "LeaderboardDataRequestGlobal.DisplayName", "Global" },
		{ "LeaderboardDataRequestGlobal.Name", "LeaderboardDataRequestGlobal" },
		{ "LeaderboardDataRequestGlobalAroundUser.DisplayName", "Global Around User" },
		{ "LeaderboardDataRequestGlobalAroundUser.Name", "LeaderboardDataRequestGlobalAroundUser" },
		{ "LeaderboardDataRequestUsers.DisplayName", "Users" },
		{ "LeaderboardDataRequestUsers.Name", "LeaderboardDataRequestUsers" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LeaderboardDataRequestGlobal", (int64)LeaderboardDataRequestGlobal },
		{ "LeaderboardDataRequestGlobalAroundUser", (int64)LeaderboardDataRequestGlobalAroundUser },
		{ "LeaderboardDataRequestFriends", (int64)LeaderboardDataRequestFriends },
		{ "LeaderboardDataRequestUsers", (int64)LeaderboardDataRequestUsers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LeaderboardDataRequest",
	"ESIK_LeaderboardDataRequest",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest()
{
	if (!Z_Registration_Info_UEnum_ESIK_LeaderboardDataRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LeaderboardDataRequest.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LeaderboardDataRequest.InnerSingleton;
}
// End Enum ESIK_LeaderboardDataRequest

// Begin ScriptStruct FDownloadedLeaderboardEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DownloadedLeaderboardEntry;
class UScriptStruct* FDownloadedLeaderboardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DownloadedLeaderboardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DownloadedLeaderboardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("DownloadedLeaderboardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_DownloadedLeaderboardEntry.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UScriptStruct* StaticStruct<FDownloadedLeaderboardEntry>()
{
	return FDownloadedLeaderboardEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "Steam Integration Kit || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRank_MetaData[] = {
		{ "Category", "Steam Integration Kit || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Steam Integration Kit || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDownloadedLeaderboardEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDownloadedLeaderboardEntry, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 432135848
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::NewProp_GlobalRank = { "GlobalRank", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDownloadedLeaderboardEntry, GlobalRank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRank_MetaData), NewProp_GlobalRank_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDownloadedLeaderboardEntry, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::NewProp_GlobalRank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"DownloadedLeaderboardEntry",
	Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::PropPointers),
	sizeof(FDownloadedLeaderboardEntry),
	alignof(FDownloadedLeaderboardEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry()
{
	if (!Z_Registration_Info_UScriptStruct_DownloadedLeaderboardEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DownloadedLeaderboardEntry.InnerSingleton, Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DownloadedLeaderboardEntry.InnerSingleton;
}
// End ScriptStruct FDownloadedLeaderboardEntry

// Begin Delegate FLeaderboardScoresDownloaded
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventLeaderboardScoresDownloaded_Parms
	{
		TArray<FDownloadedLeaderboardEntry> LeaderboardEntries;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardEntries_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeaderboardEntries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_LeaderboardEntries_Inner = { "LeaderboardEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry, METADATA_PARAMS(0, nullptr) }; // 3910552834
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_LeaderboardEntries = { "LeaderboardEntries", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventLeaderboardScoresDownloaded_Parms, LeaderboardEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardEntries_MetaData), NewProp_LeaderboardEntries_MetaData) }; // 3910552834
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_LeaderboardEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_LeaderboardEntries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "LeaderboardScoresDownloaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventLeaderboardScoresDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventLeaderboardScoresDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeaderboardScoresDownloaded_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardScoresDownloaded, TArray<FDownloadedLeaderboardEntry> const& LeaderboardEntries)
{
	struct _Script_SteamIntegrationKit_eventLeaderboardScoresDownloaded_Parms
	{
		TArray<FDownloadedLeaderboardEntry> LeaderboardEntries;
	};
	_Script_SteamIntegrationKit_eventLeaderboardScoresDownloaded_Parms Parms;
	Parms.LeaderboardEntries=LeaderboardEntries;
	LeaderboardScoresDownloaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeaderboardScoresDownloaded

// Begin Class USIK_DownloadLeaderboardEntries_AsyncFunction Function DownloadLeaderboardEntries
struct Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics
{
	struct SIK_DownloadLeaderboardEntries_AsyncFunction_eventDownloadLeaderboardEntries_Parms
	{
		int32 LeaderboardId;
		int32 RangeStart;
		int32 RangeEnd;
		TEnumAsByte<ESIK_LeaderboardDataRequest> LeaderboardDataRequest;
		USIK_DownloadLeaderboardEntries_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "DisplayName", "Download Steam Leaderboard Entries" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeaderboardDataRequest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DownloadLeaderboardEntries_AsyncFunction_eventDownloadLeaderboardEntries_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DownloadLeaderboardEntries_AsyncFunction_eventDownloadLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DownloadLeaderboardEntries_AsyncFunction_eventDownloadLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_LeaderboardDataRequest = { "LeaderboardDataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DownloadLeaderboardEntries_AsyncFunction_eventDownloadLeaderboardEntries_Parms, LeaderboardDataRequest), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDataRequest, METADATA_PARAMS(0, nullptr) }; // 1196571860
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DownloadLeaderboardEntries_AsyncFunction_eventDownloadLeaderboardEntries_Parms, ReturnValue), Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_LeaderboardDataRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction, nullptr, "DownloadLeaderboardEntries", nullptr, nullptr, Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::SIK_DownloadLeaderboardEntries_AsyncFunction_eventDownloadLeaderboardEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::SIK_DownloadLeaderboardEntries_AsyncFunction_eventDownloadLeaderboardEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_DownloadLeaderboardEntries_AsyncFunction::execDownloadLeaderboardEntries)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
	P_GET_PROPERTY(FByteProperty,Z_Param_LeaderboardDataRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_DownloadLeaderboardEntries_AsyncFunction**)Z_Param__Result=USIK_DownloadLeaderboardEntries_AsyncFunction::DownloadLeaderboardEntries(Z_Param_LeaderboardId,Z_Param_RangeStart,Z_Param_RangeEnd,ESIK_LeaderboardDataRequest(Z_Param_LeaderboardDataRequest));
	P_NATIVE_END;
}
// End Class USIK_DownloadLeaderboardEntries_AsyncFunction Function DownloadLeaderboardEntries

// Begin Class USIK_DownloadLeaderboardEntries_AsyncFunction
void USIK_DownloadLeaderboardEntries_AsyncFunction::StaticRegisterNativesUSIK_DownloadLeaderboardEntries_AsyncFunction()
{
	UClass* Class = USIK_DownloadLeaderboardEntries_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownloadLeaderboardEntries", &USIK_DownloadLeaderboardEntries_AsyncFunction::execDownloadLeaderboardEntries },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_DownloadLeaderboardEntries_AsyncFunction);
UClass* Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_NoRegister()
{
	return USIK_DownloadLeaderboardEntries_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_DownloadLeaderboardEntries_AsyncFunction_DownloadLeaderboardEntries, "DownloadLeaderboardEntries" }, // 1917195800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_DownloadLeaderboardEntries_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_DownloadLeaderboardEntries_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 454615889
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_DownloadLeaderboardEntries_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoresDownloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 454615889
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::ClassParams = {
	&USIK_DownloadLeaderboardEntries_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_DownloadLeaderboardEntries_AsyncFunction>()
{
	return USIK_DownloadLeaderboardEntries_AsyncFunction::StaticClass();
}
USIK_DownloadLeaderboardEntries_AsyncFunction::USIK_DownloadLeaderboardEntries_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_DownloadLeaderboardEntries_AsyncFunction);
USIK_DownloadLeaderboardEntries_AsyncFunction::~USIK_DownloadLeaderboardEntries_AsyncFunction() {}
// End Class USIK_DownloadLeaderboardEntries_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_LeaderboardDataRequest_StaticEnum, TEXT("ESIK_LeaderboardDataRequest"), &Z_Registration_Info_UEnum_ESIK_LeaderboardDataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1196571860U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDownloadedLeaderboardEntry::StaticStruct, Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics::NewStructOps, TEXT("DownloadedLeaderboardEntry"), &Z_Registration_Info_UScriptStruct_DownloadedLeaderboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDownloadedLeaderboardEntry), 3910552834U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction, USIK_DownloadLeaderboardEntries_AsyncFunction::StaticClass, TEXT("USIK_DownloadLeaderboardEntries_AsyncFunction"), &Z_Registration_Info_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_DownloadLeaderboardEntries_AsyncFunction), 1231875861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_3829702737(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
