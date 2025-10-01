// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Utils/SIK_UtilsSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_UtilsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UtilsSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UtilsSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAppResumingFromSuspend__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnIPCountry__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamShutdown__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnGamepadTextInputDismissed
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGamepadTextInputDismissed_Parms
	{
		bool bSubmitted;
		int32 nSubmittedText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSubmitted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubmitted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nSubmittedText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_bSubmitted_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGamepadTextInputDismissed_Parms*)Obj)->bSubmitted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_bSubmitted = { "bSubmitted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGamepadTextInputDismissed_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_bSubmitted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_nSubmittedText = { "nSubmittedText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGamepadTextInputDismissed_Parms, nSubmittedText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_bSubmitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_nSubmittedText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGamepadTextInputDismissed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGamepadTextInputDismissed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGamepadTextInputDismissed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGamepadTextInputDismissed_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissed, bool bSubmitted, int32 nSubmittedText)
{
	struct _Script_SteamIntegrationKit_eventOnGamepadTextInputDismissed_Parms
	{
		bool bSubmitted;
		int32 nSubmittedText;
	};
	_Script_SteamIntegrationKit_eventOnGamepadTextInputDismissed_Parms Parms;
	Parms.bSubmitted=bSubmitted ? true : false;
	Parms.nSubmittedText=nSubmittedText;
	OnGamepadTextInputDismissed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGamepadTextInputDismissed

// Begin Delegate FOnIPCountry
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnIPCountry__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnIPCountry__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnIPCountry__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnIPCountry__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnIPCountry__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIPCountry_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountry)
{
	OnIPCountry.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnIPCountry

// Begin Delegate FOnLowBatteryPower
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLowBatteryPower_Parms
	{
		int32 nMinutesBatteryLeft;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_nMinutesBatteryLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::NewProp_nMinutesBatteryLeft = { "nMinutesBatteryLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLowBatteryPower_Parms, nMinutesBatteryLeft), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::NewProp_nMinutesBatteryLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLowBatteryPower__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLowBatteryPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLowBatteryPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLowBatteryPower_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPower, int32 nMinutesBatteryLeft)
{
	struct _Script_SteamIntegrationKit_eventOnLowBatteryPower_Parms
	{
		int32 nMinutesBatteryLeft;
	};
	_Script_SteamIntegrationKit_eventOnLowBatteryPower_Parms Parms;
	Parms.nMinutesBatteryLeft=nMinutesBatteryLeft;
	OnLowBatteryPower.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLowBatteryPower

// Begin Delegate FOnAppResumingFromSuspend
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAppResumingFromSuspend__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAppResumingFromSuspend__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnAppResumingFromSuspend__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAppResumingFromSuspend__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAppResumingFromSuspend__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAppResumingFromSuspend__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAppResumingFromSuspend__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAppResumingFromSuspend_DelegateWrapper(const FMulticastScriptDelegate& OnAppResumingFromSuspend)
{
	OnAppResumingFromSuspend.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAppResumingFromSuspend

// Begin Delegate FOnSteamShutdown
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamShutdown__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamShutdown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnSteamShutdown__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamShutdown__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamShutdown__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamShutdown_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdown)
{
	OnSteamShutdown.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSteamShutdown

// Begin Class USIK_UtilsSubsystem
void USIK_UtilsSubsystem::StaticRegisterNativesUSIK_UtilsSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_UtilsSubsystem);
UClass* Z_Construct_UClass_USIK_UtilsSubsystem_NoRegister()
{
	return USIK_UtilsSubsystem::StaticClass();
}
struct Z_Construct_UClass_USIK_UtilsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGamepadTextInputDismissed_MetaData[] = {
		{ "Category", "Steam Integration Kit | Utils" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnIPCountry_MetaData[] = {
		{ "Category", "Steam Integration Kit | Utils" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLowBatteryPower_MetaData[] = {
		{ "Category", "Steam Integration Kit | Utils" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAppResumingFromSuspend_MetaData[] = {
		{ "Category", "Steam Integration Kit | Utils" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamShutdown_MetaData[] = {
		{ "Category", "Steam Integration Kit | Utils" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGamepadTextInputDismissed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIPCountry;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLowBatteryPower;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAppResumingFromSuspend;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamShutdown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UtilsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnGamepadTextInputDismissed = { "OnGamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UtilsSubsystem, OnGamepadTextInputDismissed), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGamepadTextInputDismissed_MetaData), NewProp_OnGamepadTextInputDismissed_MetaData) }; // 2340041404
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnIPCountry = { "OnIPCountry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UtilsSubsystem, OnIPCountry), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnIPCountry__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnIPCountry_MetaData), NewProp_OnIPCountry_MetaData) }; // 971394707
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnLowBatteryPower = { "OnLowBatteryPower", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UtilsSubsystem, OnLowBatteryPower), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLowBatteryPower__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLowBatteryPower_MetaData), NewProp_OnLowBatteryPower_MetaData) }; // 2049723207
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnAppResumingFromSuspend = { "OnAppResumingFromSuspend", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UtilsSubsystem, OnAppResumingFromSuspend), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAppResumingFromSuspend__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAppResumingFromSuspend_MetaData), NewProp_OnAppResumingFromSuspend_MetaData) }; // 757669802
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnSteamShutdown = { "OnSteamShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UtilsSubsystem, OnSteamShutdown), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSteamShutdown__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamShutdown_MetaData), NewProp_OnSteamShutdown_MetaData) }; // 2065426708
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_UtilsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnGamepadTextInputDismissed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnIPCountry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnLowBatteryPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnAppResumingFromSuspend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UtilsSubsystem_Statics::NewProp_OnSteamShutdown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UtilsSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_UtilsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UtilsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UtilsSubsystem_Statics::ClassParams = {
	&USIK_UtilsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_UtilsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UtilsSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UtilsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UtilsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_UtilsSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_UtilsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UtilsSubsystem.OuterSingleton, Z_Construct_UClass_USIK_UtilsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UtilsSubsystem.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_UtilsSubsystem>()
{
	return USIK_UtilsSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_UtilsSubsystem);
// End Class USIK_UtilsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UtilsSubsystem, USIK_UtilsSubsystem::StaticClass, TEXT("USIK_UtilsSubsystem"), &Z_Registration_Info_UClass_USIK_UtilsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UtilsSubsystem), 2047765969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_3064288594(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
