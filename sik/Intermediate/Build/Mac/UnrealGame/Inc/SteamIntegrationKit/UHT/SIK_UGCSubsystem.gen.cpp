// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_UGCSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_UGCSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCQueryHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnAddAppDependencyResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnAddAppDependencyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddAppDependencyResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddAppDependencyResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddAppDependencyResult_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnAddAppDependencyResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddAppDependencyResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddAppDependencyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAddAppDependencyResult_DelegateWrapper(const FMulticastScriptDelegate& OnAddAppDependencyResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppId)
{
	struct _Script_SteamIntegrationKit_eventOnAddAppDependencyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppId;
	};
	_Script_SteamIntegrationKit_eventOnAddAppDependencyResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.AppId=AppId;
	OnAddAppDependencyResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAddAppDependencyResult

// Begin Delegate FOnAddUGCDependencyResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnAddUGCDependencyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_PublishedFileId ChildPublishedFileId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddUGCDependencyResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddUGCDependencyResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::NewProp_ChildPublishedFileId = { "ChildPublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddUGCDependencyResult_Parms, ChildPublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::NewProp_ChildPublishedFileId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnAddUGCDependencyResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddUGCDependencyResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddUGCDependencyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAddUGCDependencyResult_DelegateWrapper(const FMulticastScriptDelegate& OnAddUGCDependencyResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_PublishedFileId ChildPublishedFileId)
{
	struct _Script_SteamIntegrationKit_eventOnAddUGCDependencyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_PublishedFileId ChildPublishedFileId;
	};
	_Script_SteamIntegrationKit_eventOnAddUGCDependencyResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.ChildPublishedFileId=ChildPublishedFileId;
	OnAddUGCDependencyResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAddUGCDependencyResult

// Begin Delegate FOnCreateItemResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnCreateItemResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool UserNeedsToAcceptWorkshopLegalAgreement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_UserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UserNeedsToAcceptWorkshopLegalAgreement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnCreateItemResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnCreateItemResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::NewProp_UserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnCreateItemResult_Parms*)Obj)->UserNeedsToAcceptWorkshopLegalAgreement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::NewProp_UserNeedsToAcceptWorkshopLegalAgreement = { "UserNeedsToAcceptWorkshopLegalAgreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnCreateItemResult_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::NewProp_UserNeedsToAcceptWorkshopLegalAgreement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::NewProp_UserNeedsToAcceptWorkshopLegalAgreement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnCreateItemResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnCreateItemResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnCreateItemResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateItemResult_DelegateWrapper(const FMulticastScriptDelegate& OnCreateItemResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool UserNeedsToAcceptWorkshopLegalAgreement)
{
	struct _Script_SteamIntegrationKit_eventOnCreateItemResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool UserNeedsToAcceptWorkshopLegalAgreement;
	};
	_Script_SteamIntegrationKit_eventOnCreateItemResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.UserNeedsToAcceptWorkshopLegalAgreement=UserNeedsToAcceptWorkshopLegalAgreement ? true : false;
	OnCreateItemResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateItemResult

// Begin Delegate FOnDownloadItemResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnDownloadItemResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDownloadItemResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDownloadItemResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDownloadItemResult_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnDownloadItemResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnDownloadItemResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnDownloadItemResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadItemResult_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadItemResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppId)
{
	struct _Script_SteamIntegrationKit_eventOnDownloadItemResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppId;
	};
	_Script_SteamIntegrationKit_eventOnDownloadItemResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.AppId=AppId;
	OnDownloadItemResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDownloadItemResult

// Begin Delegate FOnGetAppDependenciesResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		TArray<FSIK_AppId> AppDependencies;
		int32 NumAppDependencies;
		int32 TotalNumAppDependencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AppDependencies;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAppDependencies;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNumAppDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_AppDependencies_Inner = { "AppDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_AppDependencies = { "AppDependencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms, AppDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_NumAppDependencies = { "NumAppDependencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms, NumAppDependencies), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_TotalNumAppDependencies = { "TotalNumAppDependencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms, TotalNumAppDependencies), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_AppDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_AppDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_NumAppDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::NewProp_TotalNumAppDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGetAppDependenciesResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetAppDependenciesResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetAppDependenciesResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, const TArray<FSIK_AppId>& AppDependencies, int32 NumAppDependencies, int32 TotalNumAppDependencies)
{
	struct _Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		TArray<FSIK_AppId> AppDependencies;
		int32 NumAppDependencies;
		int32 TotalNumAppDependencies;
	};
	_Script_SteamIntegrationKit_eventOnGetAppDependenciesResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.AppDependencies=AppDependencies;
	Parms.NumAppDependencies=NumAppDependencies;
	Parms.TotalNumAppDependencies=TotalNumAppDependencies;
	OnGetAppDependenciesResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetAppDependenciesResult

// Begin Delegate FOnDeleteItemResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnDeleteItemResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDeleteItemResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDeleteItemResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::NewProp_PublishedFileId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnDeleteItemResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnDeleteItemResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnDeleteItemResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeleteItemResult_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteItemResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId)
{
	struct _Script_SteamIntegrationKit_eventOnDeleteItemResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
	};
	_Script_SteamIntegrationKit_eventOnDeleteItemResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	OnDeleteItemResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDeleteItemResult

// Begin Delegate FOnGetUserItemVoteResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool VotedUp;
		bool VotedDown;
		bool VotedSkipper;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_VotedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VotedUp;
	static void NewProp_VotedDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VotedDown;
	static void NewProp_VotedSkipper_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VotedSkipper;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedUp_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms*)Obj)->VotedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedUp = { "VotedUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedUp_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedDown_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms*)Obj)->VotedDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedDown = { "VotedDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedDown_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedSkipper_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms*)Obj)->VotedSkipper = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedSkipper = { "VotedSkipper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedSkipper_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedSkipper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGetUserItemVoteResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetUserItemVoteResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserItemVoteResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool VotedUp, bool VotedDown, bool VotedSkipper)
{
	struct _Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool VotedUp;
		bool VotedDown;
		bool VotedSkipper;
	};
	_Script_SteamIntegrationKit_eventOnGetUserItemVoteResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.VotedUp=VotedUp ? true : false;
	Parms.VotedDown=VotedDown ? true : false;
	Parms.VotedSkipper=VotedSkipper ? true : false;
	OnGetUserItemVoteResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetUserItemVoteResult

// Begin Delegate FOnItemInstalled
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnItemInstalled_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnItemInstalled_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnItemInstalled_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnItemInstalled__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnItemInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnItemInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnItemInstalled, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppId)
{
	struct _Script_SteamIntegrationKit_eventOnItemInstalled_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppId;
	};
	_Script_SteamIntegrationKit_eventOnItemInstalled_Parms Parms;
	Parms.PublishedFileId=PublishedFileId;
	Parms.AppId=AppId;
	OnItemInstalled.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemInstalled

// Begin Delegate FOnRemoveAppDependencyResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoveAppDependencyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveAppDependencyResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveAppDependencyResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveAppDependencyResult_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoveAppDependencyResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveAppDependencyResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveAppDependencyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoveAppDependencyResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveAppDependencyResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppId)
{
	struct _Script_SteamIntegrationKit_eventOnRemoveAppDependencyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppId;
	};
	_Script_SteamIntegrationKit_eventOnRemoveAppDependencyResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.AppId=AppId;
	OnRemoveAppDependencyResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemoveAppDependencyResult

// Begin Delegate FOnRemoveUGCDependencyResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoveUGCDependencyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_PublishedFileId ChildPublishedFileId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveUGCDependencyResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveUGCDependencyResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::NewProp_ChildPublishedFileId = { "ChildPublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveUGCDependencyResult_Parms, ChildPublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::NewProp_ChildPublishedFileId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoveUGCDependencyResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveUGCDependencyResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveUGCDependencyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoveUGCDependencyResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveUGCDependencyResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_PublishedFileId ChildPublishedFileId)
{
	struct _Script_SteamIntegrationKit_eventOnRemoveUGCDependencyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		FSIK_PublishedFileId ChildPublishedFileId;
	};
	_Script_SteamIntegrationKit_eventOnRemoveUGCDependencyResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.ChildPublishedFileId=ChildPublishedFileId;
	OnRemoveUGCDependencyResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemoveUGCDependencyResult

// Begin Delegate FOnSetUserItemVoteResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool VotedUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_VotedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VotedUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedUp_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms*)Obj)->VotedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedUp = { "VotedUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::NewProp_VotedUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnSetUserItemVoteResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSetUserItemVoteResult_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool VotedUp)
{
	struct _Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool VotedUp;
	};
	_Script_SteamIntegrationKit_eventOnSetUserItemVoteResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.VotedUp=VotedUp ? true : false;
	OnSetUserItemVoteResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSetUserItemVoteResult

// Begin Delegate FOnStartPlaytimeTrackingResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnStartPlaytimeTrackingResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartPlaytimeTrackingResult_DelegateWrapper(const FMulticastScriptDelegate& OnStartPlaytimeTrackingResult, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingResult_Parms Parms;
	Parms.Result=Result;
	OnStartPlaytimeTrackingResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStartPlaytimeTrackingResult

// Begin Delegate FOnSteamUGCQueryCompleted
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_UGCQueryHandle UGCQueryHandle;
		int32 NumResultsReturned;
		int32 TotalMatchingResults;
		bool bCachedData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCQueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumResultsReturned;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalMatchingResults;
	static void NewProp_bCachedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_UGCQueryHandle = { "UGCQueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms, UGCQueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_NumResultsReturned = { "NumResultsReturned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms, NumResultsReturned), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_TotalMatchingResults = { "TotalMatchingResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms, TotalMatchingResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_bCachedData_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms*)Obj)->bCachedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_UGCQueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_NumResultsReturned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_TotalMatchingResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::NewProp_bCachedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnSteamUGCQueryCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamUGCQueryCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnSteamUGCQueryCompleted, ESIK_Result Result, FSIK_UGCQueryHandle UGCQueryHandle, int32 NumResultsReturned, int32 TotalMatchingResults, bool bCachedData)
{
	struct _Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_UGCQueryHandle UGCQueryHandle;
		int32 NumResultsReturned;
		int32 TotalMatchingResults;
		bool bCachedData;
	};
	_Script_SteamIntegrationKit_eventOnSteamUGCQueryCompleted_Parms Parms;
	Parms.Result=Result;
	Parms.UGCQueryHandle=UGCQueryHandle;
	Parms.NumResultsReturned=NumResultsReturned;
	Parms.TotalMatchingResults=TotalMatchingResults;
	Parms.bCachedData=bCachedData ? true : false;
	OnSteamUGCQueryCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamUGCQueryCompleted

// Begin Delegate FOnStopPlaytimeTrackingResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnStopPlaytimeTrackingResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStopPlaytimeTrackingResult_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingResult, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingResult_Parms Parms;
	Parms.Result=Result;
	OnStopPlaytimeTrackingResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStopPlaytimeTrackingResult

// Begin Delegate FOnSubmitItemUpdateResult
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool bUserNeedsToAcceptWorkshopLegalAgreement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserNeedsToAcceptWorkshopLegalAgreement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms*)Obj)->bUserNeedsToAcceptWorkshopLegalAgreement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement = { "bUserNeedsToAcceptWorkshopLegalAgreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnSubmitItemUpdateResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSubmitItemUpdateResult_DelegateWrapper(const FMulticastScriptDelegate& OnSubmitItemUpdateResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	struct _Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool bUserNeedsToAcceptWorkshopLegalAgreement;
	};
	_Script_SteamIntegrationKit_eventOnSubmitItemUpdateResult_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.bUserNeedsToAcceptWorkshopLegalAgreement=bUserNeedsToAcceptWorkshopLegalAgreement ? true : false;
	OnSubmitItemUpdateResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSubmitItemUpdateResult

// Begin Delegate FOnUserFavoriteItemsListChanged
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		bool bWasAddRequest;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_bWasAddRequest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAddRequest;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::NewProp_bWasAddRequest_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms*)Obj)->bWasAddRequest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::NewProp_bWasAddRequest = { "bWasAddRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::NewProp_bWasAddRequest_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::NewProp_bWasAddRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUserFavoriteItemsListChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserFavoriteItemsListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUserFavoriteItemsListChanged, FSIK_PublishedFileId PublishedFileId, bool bWasAddRequest, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		bool bWasAddRequest;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnUserFavoriteItemsListChanged_Parms Parms;
	Parms.PublishedFileId=PublishedFileId;
	Parms.bWasAddRequest=bWasAddRequest ? true : false;
	Parms.Result=Result;
	OnUserFavoriteItemsListChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserFavoriteItemsListChanged

// Begin Delegate FOnUserSubscribedItemsListChanged
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUserSubscribedItemsListChanged_Parms
	{
		FSIK_AppId AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserSubscribedItemsListChanged_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUserSubscribedItemsListChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserSubscribedItemsListChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserSubscribedItemsListChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserSubscribedItemsListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUserSubscribedItemsListChanged, FSIK_AppId AppId)
{
	struct _Script_SteamIntegrationKit_eventOnUserSubscribedItemsListChanged_Parms
	{
		FSIK_AppId AppId;
	};
	_Script_SteamIntegrationKit_eventOnUserSubscribedItemsListChanged_Parms Parms;
	Parms.AppId=AppId;
	OnUserSubscribedItemsListChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserSubscribedItemsListChanged

// Begin Delegate FOnWorkshopEULAStatus
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_AppId AppId;
		int32 Version;
		int32 ActionTime;
		bool bAccepted;
		bool bNeedsToAccept;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionTime;
	static void NewProp_bAccepted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccepted;
	static void NewProp_bNeedsToAccept_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsToAccept;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms, Version), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_ActionTime = { "ActionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms, ActionTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_bAccepted_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms*)Obj)->bAccepted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_bAccepted = { "bAccepted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_bAccepted_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_bNeedsToAccept_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms*)Obj)->bNeedsToAccept = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_bNeedsToAccept = { "bNeedsToAccept", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_bNeedsToAccept_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_ActionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_bAccepted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::NewProp_bNeedsToAccept,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnWorkshopEULAStatus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWorkshopEULAStatus_DelegateWrapper(const FMulticastScriptDelegate& OnWorkshopEULAStatus, ESIK_Result Result, FSIK_AppId AppId, int32 Version, int32 ActionTime, bool bAccepted, bool bNeedsToAccept)
{
	struct _Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_AppId AppId;
		int32 Version;
		int32 ActionTime;
		bool bAccepted;
		bool bNeedsToAccept;
	};
	_Script_SteamIntegrationKit_eventOnWorkshopEULAStatus_Parms Parms;
	Parms.Result=Result;
	Parms.AppId=AppId;
	Parms.Version=Version;
	Parms.ActionTime=ActionTime;
	Parms.bAccepted=bAccepted ? true : false;
	Parms.bNeedsToAccept=bNeedsToAccept ? true : false;
	OnWorkshopEULAStatus.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWorkshopEULAStatus

// Begin Class USIK_UGCSubsystem
void USIK_UGCSubsystem::StaticRegisterNativesUSIK_UGCSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_UGCSubsystem);
UClass* Z_Construct_UClass_USIK_UGCSubsystem_NoRegister()
{
	return USIK_UGCSubsystem::StaticClass();
}
struct Z_Construct_UClass_USIK_UGCSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_UGCSubsystem.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAddAppDependencyResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAddUGCDependencyResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCreateItemResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDownloadItemResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetAppDependenciesResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeleteItemResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetUserItemVoteResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemInstalled_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveAppDependencyResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveUGCDependencyResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSetUserItemVoteResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartPlaytimeTrackingResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamUGCQueryCompleted_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStopPlaytimeTrackingResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmitItemUpdateResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUserFavoriteItemsListChanged_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUserSubscribedItemsListChanged_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWorkshopEULAStatus_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddAppDependencyResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddUGCDependencyResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateItemResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownloadItemResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetAppDependenciesResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeleteItemResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetUserItemVoteResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveAppDependencyResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveUGCDependencyResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetUserItemVoteResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartPlaytimeTrackingResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamUGCQueryCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopPlaytimeTrackingResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubmitItemUpdateResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserFavoriteItemsListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserSubscribedItemsListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWorkshopEULAStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UGCSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnAddAppDependencyResult = { "OnAddAppDependencyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnAddAppDependencyResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddAppDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAddAppDependencyResult_MetaData), NewProp_OnAddAppDependencyResult_MetaData) }; // 653328547
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnAddUGCDependencyResult = { "OnAddUGCDependencyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnAddUGCDependencyResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddUGCDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAddUGCDependencyResult_MetaData), NewProp_OnAddUGCDependencyResult_MetaData) }; // 1985929556
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnCreateItemResult = { "OnCreateItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnCreateItemResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCreateItemResult_MetaData), NewProp_OnCreateItemResult_MetaData) }; // 386835191
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnDownloadItemResult = { "OnDownloadItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnDownloadItemResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDownloadItemResult_MetaData), NewProp_OnDownloadItemResult_MetaData) }; // 370425887
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnGetAppDependenciesResult = { "OnGetAppDependenciesResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnGetAppDependenciesResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetAppDependenciesResult_MetaData), NewProp_OnGetAppDependenciesResult_MetaData) }; // 1910145570
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnDeleteItemResult = { "OnDeleteItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnDeleteItemResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDeleteItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeleteItemResult_MetaData), NewProp_OnDeleteItemResult_MetaData) }; // 630290730
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnGetUserItemVoteResult = { "OnGetUserItemVoteResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnGetUserItemVoteResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetUserItemVoteResult_MetaData), NewProp_OnGetUserItemVoteResult_MetaData) }; // 3737426968
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnItemInstalled = { "OnItemInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnItemInstalled), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnItemInstalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemInstalled_MetaData), NewProp_OnItemInstalled_MetaData) }; // 2002927371
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnRemoveAppDependencyResult = { "OnRemoveAppDependencyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnRemoveAppDependencyResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoveAppDependencyResult_MetaData), NewProp_OnRemoveAppDependencyResult_MetaData) }; // 4049857220
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnRemoveUGCDependencyResult = { "OnRemoveUGCDependencyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnRemoveUGCDependencyResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveUGCDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoveUGCDependencyResult_MetaData), NewProp_OnRemoveUGCDependencyResult_MetaData) }; // 2725675164
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnSetUserItemVoteResult = { "OnSetUserItemVoteResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnSetUserItemVoteResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSetUserItemVoteResult_MetaData), NewProp_OnSetUserItemVoteResult_MetaData) }; // 2960125271
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnStartPlaytimeTrackingResult = { "OnStartPlaytimeTrackingResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnStartPlaytimeTrackingResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartPlaytimeTrackingResult_MetaData), NewProp_OnStartPlaytimeTrackingResult_MetaData) }; // 435082477
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnSteamUGCQueryCompleted = { "OnSteamUGCQueryCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnSteamUGCQueryCompleted), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamUGCQueryCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamUGCQueryCompleted_MetaData), NewProp_OnSteamUGCQueryCompleted_MetaData) }; // 2794676634
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnStopPlaytimeTrackingResult = { "OnStopPlaytimeTrackingResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnStopPlaytimeTrackingResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStopPlaytimeTrackingResult_MetaData), NewProp_OnStopPlaytimeTrackingResult_MetaData) }; // 576620907
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnSubmitItemUpdateResult = { "OnSubmitItemUpdateResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnSubmitItemUpdateResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubmitItemUpdateResult_MetaData), NewProp_OnSubmitItemUpdateResult_MetaData) }; // 2952993938
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnUserFavoriteItemsListChanged = { "OnUserFavoriteItemsListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnUserFavoriteItemsListChanged), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserFavoriteItemsListChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUserFavoriteItemsListChanged_MetaData), NewProp_OnUserFavoriteItemsListChanged_MetaData) }; // 1762730155
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnUserSubscribedItemsListChanged = { "OnUserSubscribedItemsListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnUserSubscribedItemsListChanged), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserSubscribedItemsListChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUserSubscribedItemsListChanged_MetaData), NewProp_OnUserSubscribedItemsListChanged_MetaData) }; // 2987221759
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnWorkshopEULAStatus = { "OnWorkshopEULAStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCSubsystem, OnWorkshopEULAStatus), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnWorkshopEULAStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWorkshopEULAStatus_MetaData), NewProp_OnWorkshopEULAStatus_MetaData) }; // 4273759855
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_UGCSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnAddAppDependencyResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnAddUGCDependencyResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnCreateItemResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnDownloadItemResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnGetAppDependenciesResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnDeleteItemResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnGetUserItemVoteResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnItemInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnRemoveAppDependencyResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnRemoveUGCDependencyResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnSetUserItemVoteResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnStartPlaytimeTrackingResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnSteamUGCQueryCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnStopPlaytimeTrackingResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnSubmitItemUpdateResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnUserFavoriteItemsListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnUserSubscribedItemsListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCSubsystem_Statics::NewProp_OnWorkshopEULAStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_UGCSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UGCSubsystem_Statics::ClassParams = {
	&USIK_UGCSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_UGCSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UGCSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_UGCSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_UGCSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UGCSubsystem.OuterSingleton, Z_Construct_UClass_USIK_UGCSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UGCSubsystem.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_UGCSubsystem>()
{
	return USIK_UGCSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_UGCSubsystem);
// End Class USIK_UGCSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UGCSubsystem, USIK_UGCSubsystem::StaticClass, TEXT("USIK_UGCSubsystem"), &Z_Registration_Info_UClass_USIK_UGCSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UGCSubsystem), 2645560977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_966924134(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
