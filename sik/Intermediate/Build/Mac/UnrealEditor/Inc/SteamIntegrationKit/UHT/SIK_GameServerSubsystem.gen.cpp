// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/GameServer/SIK_GameServerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GameServerSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FAssociateWithClanResultDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventAssociateWithClanResultDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventAssociateWithClanResultDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "AssociateWithClanResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventAssociateWithClanResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventAssociateWithClanResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAssociateWithClanResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& AssociateWithClanResultDelegate, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventAssociateWithClanResultDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventAssociateWithClanResultDelegate_Parms Parms;
	Parms.Result=Result;
	AssociateWithClanResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAssociateWithClanResultDelegate

// Begin Delegate FComputeNewPlayerCompatibilityResultDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamID;
		int32 PlayersThatDontLikeCandidate;
		int32 PlayersThatCandidateDoesntLike;
		int32 ClanPlayersThatDontLikeCandidate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersThatDontLikeCandidate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersThatCandidateDoesntLike;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClanPlayersThatDontLikeCandidate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_PlayersThatDontLikeCandidate = { "PlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms, PlayersThatDontLikeCandidate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_PlayersThatCandidateDoesntLike = { "PlayersThatCandidateDoesntLike", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms, PlayersThatCandidateDoesntLike), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_ClanPlayersThatDontLikeCandidate = { "ClanPlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms, ClanPlayersThatDontLikeCandidate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_PlayersThatDontLikeCandidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_PlayersThatCandidateDoesntLike,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_ClanPlayersThatDontLikeCandidate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComputeNewPlayerCompatibilityResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComputeNewPlayerCompatibilityResultDelegate, ESIK_Result Result, FSIK_SteamId SteamID, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate)
{
	struct _Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamID;
		int32 PlayersThatDontLikeCandidate;
		int32 PlayersThatCandidateDoesntLike;
		int32 ClanPlayersThatDontLikeCandidate;
	};
	_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.SteamID=SteamID;
	Parms.PlayersThatDontLikeCandidate=PlayersThatDontLikeCandidate;
	Parms.PlayersThatCandidateDoesntLike=PlayersThatCandidateDoesntLike;
	Parms.ClanPlayersThatDontLikeCandidate=ClanPlayersThatDontLikeCandidate;
	ComputeNewPlayerCompatibilityResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FComputeNewPlayerCompatibilityResultDelegate

// Begin Delegate FGSClientApproveDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventGSClientApproveDelegate_Parms
	{
		FSIK_SteamId SteamID;
		FSIK_SteamId OwnerSteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientApproveDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientApproveDelegate_Parms, OwnerSteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::NewProp_OwnerSteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "GSClientApproveDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSClientApproveDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSClientApproveDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSClientApproveDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientApproveDelegate, FSIK_SteamId SteamID, FSIK_SteamId OwnerSteamID)
{
	struct _Script_SteamIntegrationKit_eventGSClientApproveDelegate_Parms
	{
		FSIK_SteamId SteamID;
		FSIK_SteamId OwnerSteamID;
	};
	_Script_SteamIntegrationKit_eventGSClientApproveDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.OwnerSteamID=OwnerSteamID;
	GSClientApproveDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGSClientApproveDelegate

// Begin Delegate FGSClientDenyDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventGSClientDenyDelegate_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_DenyReason> Reason;
		FString OptionalText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientDenyDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientDenyDelegate_Parms, Reason), Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason, METADATA_PARAMS(0, nullptr) }; // 2885788716
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::NewProp_OptionalText = { "OptionalText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientDenyDelegate_Parms, OptionalText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalText_MetaData), NewProp_OptionalText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::NewProp_OptionalText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "GSClientDenyDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSClientDenyDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSClientDenyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSClientDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientDenyDelegate, FSIK_SteamId SteamID, ESIK_DenyReason Reason, const FString& OptionalText)
{
	struct _Script_SteamIntegrationKit_eventGSClientDenyDelegate_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_DenyReason> Reason;
		FString OptionalText;
	};
	_Script_SteamIntegrationKit_eventGSClientDenyDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.Reason=Reason;
	Parms.OptionalText=OptionalText;
	GSClientDenyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGSClientDenyDelegate

// Begin Delegate FGSClientGroupStatusDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms
	{
		FSIK_SteamId SteamID;
		FSIK_SteamId GroupID;
		bool Member;
		bool Officer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupID;
	static void NewProp_Member_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Member;
	static void NewProp_Officer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Officer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms, GroupID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
void Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_Member_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms*)Obj)->Member = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_Member_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_Officer_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms*)Obj)->Officer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_Officer = { "Officer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_Officer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_GroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_Officer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "GSClientGroupStatusDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSClientGroupStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientGroupStatusDelegate, FSIK_SteamId SteamID, FSIK_SteamId GroupID, bool Member, bool Officer)
{
	struct _Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms
	{
		FSIK_SteamId SteamID;
		FSIK_SteamId GroupID;
		bool Member;
		bool Officer;
	};
	_Script_SteamIntegrationKit_eventGSClientGroupStatusDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.GroupID=GroupID;
	Parms.Member=Member ? true : false;
	Parms.Officer=Officer ? true : false;
	GSClientGroupStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGSClientGroupStatusDelegate

// Begin Delegate FGSClientKickDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventGSClientKickDelegate_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_DenyReason> Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientKickDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSClientKickDelegate_Parms, Reason), Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason, METADATA_PARAMS(0, nullptr) }; // 2885788716
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "GSClientKickDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSClientKickDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSClientKickDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSClientKickDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientKickDelegate, FSIK_SteamId SteamID, ESIK_DenyReason Reason)
{
	struct _Script_SteamIntegrationKit_eventGSClientKickDelegate_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_DenyReason> Reason;
	};
	_Script_SteamIntegrationKit_eventGSClientKickDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.Reason=Reason;
	GSClientKickDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGSClientKickDelegate

// Begin Delegate FGSPolicyResponseDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventGSPolicyResponseDelegate_Parms
	{
		bool Secure;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Secure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Secure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::NewProp_Secure_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventGSPolicyResponseDelegate_Parms*)Obj)->Secure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::NewProp_Secure = { "Secure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventGSPolicyResponseDelegate_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::NewProp_Secure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::NewProp_Secure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "GSPolicyResponseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSPolicyResponseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSPolicyResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSPolicyResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSPolicyResponseDelegate, bool Secure)
{
	struct _Script_SteamIntegrationKit_eventGSPolicyResponseDelegate_Parms
	{
		bool Secure;
	};
	_Script_SteamIntegrationKit_eventGSPolicyResponseDelegate_Parms Parms;
	Parms.Secure=Secure ? true : false;
	GSPolicyResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGSPolicyResponseDelegate

// Begin Class USIK_GameServerSubsystem
void USIK_GameServerSubsystem::StaticRegisterNativesUSIK_GameServerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GameServerSubsystem);
UClass* Z_Construct_UClass_USIK_GameServerSubsystem_NoRegister()
{
	return USIK_GameServerSubsystem::StaticClass();
}
struct Z_Construct_UClass_USIK_GameServerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssociateWithClanResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComputeNewPlayerCompatibilityResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGSClientApprove_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGSClientDeny_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGSClientGroupStatus_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGSClientKick_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGSPolicyResponse_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssociateWithClanResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComputeNewPlayerCompatibilityResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGSClientApprove;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGSClientDeny;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGSClientGroupStatus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGSClientKick;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGSPolicyResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GameServerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnAssociateWithClanResult = { "OnAssociateWithClanResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerSubsystem, OnAssociateWithClanResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssociateWithClanResult_MetaData), NewProp_OnAssociateWithClanResult_MetaData) }; // 2201649273
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnComputeNewPlayerCompatibilityResult = { "OnComputeNewPlayerCompatibilityResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerSubsystem, OnComputeNewPlayerCompatibilityResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComputeNewPlayerCompatibilityResult_MetaData), NewProp_OnComputeNewPlayerCompatibilityResult_MetaData) }; // 3576063115
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSClientApprove = { "OnGSClientApprove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerSubsystem, OnGSClientApprove), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientApproveDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGSClientApprove_MetaData), NewProp_OnGSClientApprove_MetaData) }; // 2861386548
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSClientDeny = { "OnGSClientDeny", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerSubsystem, OnGSClientDeny), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientDenyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGSClientDeny_MetaData), NewProp_OnGSClientDeny_MetaData) }; // 2421253639
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSClientGroupStatus = { "OnGSClientGroupStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerSubsystem, OnGSClientGroupStatus), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientGroupStatusDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGSClientGroupStatus_MetaData), NewProp_OnGSClientGroupStatus_MetaData) }; // 2511221760
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSClientKick = { "OnGSClientKick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerSubsystem, OnGSClientKick), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSClientKickDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGSClientKick_MetaData), NewProp_OnGSClientKick_MetaData) }; // 3875988252
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSPolicyResponse = { "OnGSPolicyResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerSubsystem, OnGSPolicyResponse), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSPolicyResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGSPolicyResponse_MetaData), NewProp_OnGSPolicyResponse_MetaData) }; // 2792527887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_GameServerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnAssociateWithClanResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnComputeNewPlayerCompatibilityResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSClientApprove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSClientDeny,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSClientGroupStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSClientKick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerSubsystem_Statics::NewProp_OnGSPolicyResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_GameServerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GameServerSubsystem_Statics::ClassParams = {
	&USIK_GameServerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_GameServerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GameServerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GameServerSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_GameServerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GameServerSubsystem.OuterSingleton, Z_Construct_UClass_USIK_GameServerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GameServerSubsystem.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_GameServerSubsystem>()
{
	return USIK_GameServerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GameServerSubsystem);
// End Class USIK_GameServerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GameServerSubsystem, USIK_GameServerSubsystem::StaticClass, TEXT("USIK_GameServerSubsystem"), &Z_Registration_Info_UClass_USIK_GameServerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GameServerSubsystem), 409633818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_4167686028(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
