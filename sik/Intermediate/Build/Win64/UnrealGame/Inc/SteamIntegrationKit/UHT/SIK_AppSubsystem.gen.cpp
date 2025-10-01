// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Apps/SIK_AppSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_AppSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AppSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AppSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_NewUrlLaunchParametersDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Enum ESIK_RegisterActivationCodeResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_RegisterActivationCodeResult;
static UEnum* ESIK_RegisterActivationCodeResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_RegisterActivationCodeResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_RegisterActivationCodeResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_RegisterActivationCodeResult"));
	}
	return Z_Registration_Info_UEnum_ESIK_RegisterActivationCodeResult.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UEnum* StaticEnum<ESIK_RegisterActivationCodeResult>()
{
	return ESIK_RegisterActivationCodeResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
		{ "RegisterActivationCodeAlreadyOwned.DisplayName", "Already Owned" },
		{ "RegisterActivationCodeAlreadyOwned.Name", "RegisterActivationCodeAlreadyOwned" },
		{ "RegisterActivationCodeResultAlreadyRegistered.DisplayName", "Already Registered" },
		{ "RegisterActivationCodeResultAlreadyRegistered.Name", "RegisterActivationCodeResultAlreadyRegistered" },
		{ "RegisterActivationCodeResultFail.DisplayName", "Fail" },
		{ "RegisterActivationCodeResultFail.Name", "RegisterActivationCodeResultFail" },
		{ "RegisterActivationCodeResultOK.DisplayName", "OK" },
		{ "RegisterActivationCodeResultOK.Name", "RegisterActivationCodeResultOK" },
		{ "RegisterActivationCodeResultTimeout.DisplayName", "Timeout" },
		{ "RegisterActivationCodeResultTimeout.Name", "RegisterActivationCodeResultTimeout" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RegisterActivationCodeResultOK", (int64)RegisterActivationCodeResultOK },
		{ "RegisterActivationCodeResultFail", (int64)RegisterActivationCodeResultFail },
		{ "RegisterActivationCodeResultAlreadyRegistered", (int64)RegisterActivationCodeResultAlreadyRegistered },
		{ "RegisterActivationCodeResultTimeout", (int64)RegisterActivationCodeResultTimeout },
		{ "RegisterActivationCodeAlreadyOwned", (int64)RegisterActivationCodeAlreadyOwned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_RegisterActivationCodeResult",
	"ESIK_RegisterActivationCodeResult",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult()
{
	if (!Z_Registration_Info_UEnum_ESIK_RegisterActivationCodeResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_RegisterActivationCodeResult.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_RegisterActivationCodeResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_RegisterActivationCodeResult.InnerSingleton;
}
// End Enum ESIK_RegisterActivationCodeResult

// Begin Delegate FDlcInstalledDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventDlcInstalledDelegate_Parms
	{
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventDlcInstalledDelegate_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "DlcInstalledDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventDlcInstalledDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventDlcInstalledDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDlcInstalledDelegate_DelegateWrapper(const FMulticastScriptDelegate& DlcInstalledDelegate, int32 AppID)
{
	struct _Script_SteamIntegrationKit_eventDlcInstalledDelegate_Parms
	{
		int32 AppID;
	};
	_Script_SteamIntegrationKit_eventDlcInstalledDelegate_Parms Parms;
	Parms.AppID=AppID;
	DlcInstalledDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDlcInstalledDelegate

// Begin Delegate FFileDetailsDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int32 FileSize;
		int32 Flags;
		TArray<uint8> SHA;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SHA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SHA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SHA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms, FileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms, Flags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_SHA_Inner = { "SHA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_SHA = { "SHA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms, SHA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SHA_MetaData), NewProp_SHA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_SHA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::NewProp_SHA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "FileDetailsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFileDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& FileDetailsDelegate, ESIK_Result Result, int32 FileSize, int32 Flags, TArray<uint8> const& SHA)
{
	struct _Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int32 FileSize;
		int32 Flags;
		TArray<uint8> SHA;
	};
	_Script_SteamIntegrationKit_eventFileDetailsDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.FileSize=FileSize;
	Parms.Flags=Flags;
	Parms.SHA=SHA;
	FileDetailsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFileDetailsDelegate

// Begin Delegate FNewUrlLaunchParametersDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_NewUrlLaunchParametersDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_NewUrlLaunchParametersDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "NewUrlLaunchParametersDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_NewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_NewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_NewUrlLaunchParametersDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_NewUrlLaunchParametersDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewUrlLaunchParametersDelegate)
{
	NewUrlLaunchParametersDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FNewUrlLaunchParametersDelegate

// Begin Delegate FTimedTrialStatusDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms
	{
		int32 AppID;
		bool bIsOffline;
		int32 SecondsAllowed;
		int32 SecondsPlayed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_bIsOffline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOffline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_bIsOffline_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms*)Obj)->bIsOffline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_bIsOffline = { "bIsOffline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_bIsOffline_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms, SecondsAllowed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms, SecondsPlayed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_bIsOffline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_SecondsAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_SecondsPlayed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "TimedTrialStatusDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTimedTrialStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& TimedTrialStatusDelegate, int32 AppID, bool bIsOffline, int32 SecondsAllowed, int32 SecondsPlayed)
{
	struct _Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms
	{
		int32 AppID;
		bool bIsOffline;
		int32 SecondsAllowed;
		int32 SecondsPlayed;
	};
	_Script_SteamIntegrationKit_eventTimedTrialStatusDelegate_Parms Parms;
	Parms.AppID=AppID;
	Parms.bIsOffline=bIsOffline ? true : false;
	Parms.SecondsAllowed=SecondsAllowed;
	Parms.SecondsPlayed=SecondsPlayed;
	TimedTrialStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTimedTrialStatusDelegate

// Begin Class USIK_AppSubsystem
void USIK_AppSubsystem::StaticRegisterNativesUSIK_AppSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_AppSubsystem);
UClass* Z_Construct_UClass_USIK_AppSubsystem_NoRegister()
{
	return USIK_AppSubsystem::StaticClass();
}
struct Z_Construct_UClass_USIK_AppSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Apps/SIK_AppSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDlcInstalled_MetaData[] = {
		{ "Category", "Steam Integration Kit || Apps || Callbacks" },
		{ "Comment", "//Triggered after the current user gains ownership of DLC and that DLC is installed.\n" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
		{ "ToolTip", "Triggered after the current user gains ownership of DLC and that DLC is installed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFileDetails_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "//Called after requesting the details of a specific file.\n" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
		{ "ToolTip", "Called after requesting the details of a specific file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNewUrlLaunchParameters_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "//Posted after the user executes a steam url with command line or query parameters such as steam://run/<appid>//?param1=value1;param2=value2;param3=value3; while the game is already running. The new params can be queried with GetLaunchCommandLine and GetLaunchQueryParam.\n" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
		{ "ToolTip", "Posted after the user executes a steam url with command line or query parameters such as steam:run/<appid>?param1=value1;param2=value2;param3=value3; while the game is already running. The new params can be queried with GetLaunchCommandLine and GetLaunchQueryParam." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimedTrialStatus_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "//Sent every minute when a appID is owned via a timed trial.\n" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppSubsystem.h" },
		{ "ToolTip", "Sent every minute when a appID is owned via a timed trial." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDlcInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileDetails;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewUrlLaunchParameters;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimedTrialStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AppSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AppSubsystem_Statics::NewProp_OnDlcInstalled = { "OnDlcInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AppSubsystem, OnDlcInstalled), Z_Construct_UDelegateFunction_SteamIntegrationKit_DlcInstalledDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDlcInstalled_MetaData), NewProp_OnDlcInstalled_MetaData) }; // 1753414199
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AppSubsystem_Statics::NewProp_OnFileDetails = { "OnFileDetails", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AppSubsystem, OnFileDetails), Z_Construct_UDelegateFunction_SteamIntegrationKit_FileDetailsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFileDetails_MetaData), NewProp_OnFileDetails_MetaData) }; // 4189089682
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AppSubsystem_Statics::NewProp_OnNewUrlLaunchParameters = { "OnNewUrlLaunchParameters", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AppSubsystem, OnNewUrlLaunchParameters), Z_Construct_UDelegateFunction_SteamIntegrationKit_NewUrlLaunchParametersDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewUrlLaunchParameters_MetaData), NewProp_OnNewUrlLaunchParameters_MetaData) }; // 4291624320
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AppSubsystem_Statics::NewProp_OnTimedTrialStatus = { "OnTimedTrialStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AppSubsystem, OnTimedTrialStatus), Z_Construct_UDelegateFunction_SteamIntegrationKit_TimedTrialStatusDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimedTrialStatus_MetaData), NewProp_OnTimedTrialStatus_MetaData) }; // 449936583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_AppSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AppSubsystem_Statics::NewProp_OnDlcInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AppSubsystem_Statics::NewProp_OnFileDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AppSubsystem_Statics::NewProp_OnNewUrlLaunchParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AppSubsystem_Statics::NewProp_OnTimedTrialStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AppSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_AppSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AppSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AppSubsystem_Statics::ClassParams = {
	&USIK_AppSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_AppSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AppSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AppSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AppSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_AppSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_AppSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AppSubsystem.OuterSingleton, Z_Construct_UClass_USIK_AppSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AppSubsystem.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_AppSubsystem>()
{
	return USIK_AppSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_AppSubsystem);
// End Class USIK_AppSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_RegisterActivationCodeResult_StaticEnum, TEXT("ESIK_RegisterActivationCodeResult"), &Z_Registration_Info_UEnum_ESIK_RegisterActivationCodeResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3505825904U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AppSubsystem, USIK_AppSubsystem::StaticClass, TEXT("USIK_AppSubsystem"), &Z_Registration_Info_UClass_USIK_AppSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AppSubsystem), 92588331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_3352884654(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
