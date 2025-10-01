// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/MusicRemote/SIK_MusicRemoteLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_MusicRemoteLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicRemoteLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicRemoteLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_MusicRemoteLibrary Function ActivationSuccess
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics
{
	struct SIK_MusicRemoteLibrary_eventActivationSuccess_Parms
	{
		bool bValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventActivationSuccess_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventActivationSuccess_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventActivationSuccess_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventActivationSuccess_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "ActivationSuccess", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::SIK_MusicRemoteLibrary_eventActivationSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::SIK_MusicRemoteLibrary_eventActivationSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execActivationSuccess)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::ActivationSuccess(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function ActivationSuccess

// Begin Class USIK_MusicRemoteLibrary Function CurrentEntryDidChange
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics
{
	struct SIK_MusicRemoteLibrary_eventCurrentEntryDidChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventCurrentEntryDidChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventCurrentEntryDidChange_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "CurrentEntryDidChange", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::SIK_MusicRemoteLibrary_eventCurrentEntryDidChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::SIK_MusicRemoteLibrary_eventCurrentEntryDidChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execCurrentEntryDidChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::CurrentEntryDidChange();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function CurrentEntryDidChange

// Begin Class USIK_MusicRemoteLibrary Function CurrentEntryIsAvailable
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics
{
	struct SIK_MusicRemoteLibrary_eventCurrentEntryIsAvailable_Parms
	{
		bool bAvailable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::NewProp_bAvailable_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventCurrentEntryIsAvailable_Parms*)Obj)->bAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventCurrentEntryIsAvailable_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventCurrentEntryIsAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventCurrentEntryIsAvailable_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::NewProp_bAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "CurrentEntryIsAvailable", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::SIK_MusicRemoteLibrary_eventCurrentEntryIsAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::SIK_MusicRemoteLibrary_eventCurrentEntryIsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execCurrentEntryIsAvailable)
{
	P_GET_UBOOL(Z_Param_bAvailable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::CurrentEntryIsAvailable(Z_Param_bAvailable);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function CurrentEntryIsAvailable

// Begin Class USIK_MusicRemoteLibrary Function CurrentEntryWillChange
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics
{
	struct SIK_MusicRemoteLibrary_eventCurrentEntryWillChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventCurrentEntryWillChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventCurrentEntryWillChange_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "CurrentEntryWillChange", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::SIK_MusicRemoteLibrary_eventCurrentEntryWillChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::SIK_MusicRemoteLibrary_eventCurrentEntryWillChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execCurrentEntryWillChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::CurrentEntryWillChange();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function CurrentEntryWillChange

// Begin Class USIK_MusicRemoteLibrary Function DeregisterSteamMusicRemote
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics
{
	struct SIK_MusicRemoteLibrary_eventDeregisterSteamMusicRemote_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventDeregisterSteamMusicRemote_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventDeregisterSteamMusicRemote_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "DeregisterSteamMusicRemote", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::SIK_MusicRemoteLibrary_eventDeregisterSteamMusicRemote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::SIK_MusicRemoteLibrary_eventDeregisterSteamMusicRemote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execDeregisterSteamMusicRemote)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::DeregisterSteamMusicRemote();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function DeregisterSteamMusicRemote

// Begin Class USIK_MusicRemoteLibrary Function EnableLooped
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics
{
	struct SIK_MusicRemoteLibrary_eventEnableLooped_Parms
	{
		bool bEnable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnableLooped_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnableLooped_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnableLooped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnableLooped_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "EnableLooped", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::SIK_MusicRemoteLibrary_eventEnableLooped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::SIK_MusicRemoteLibrary_eventEnableLooped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execEnableLooped)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::EnableLooped(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function EnableLooped

// Begin Class USIK_MusicRemoteLibrary Function EnablePlaylists
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics
{
	struct SIK_MusicRemoteLibrary_eventEnablePlaylists_Parms
	{
		bool bEnable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnablePlaylists_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnablePlaylists_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnablePlaylists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnablePlaylists_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "EnablePlaylists", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::SIK_MusicRemoteLibrary_eventEnablePlaylists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::SIK_MusicRemoteLibrary_eventEnablePlaylists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execEnablePlaylists)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::EnablePlaylists(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function EnablePlaylists

// Begin Class USIK_MusicRemoteLibrary Function EnablePlayNext
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics
{
	struct SIK_MusicRemoteLibrary_eventEnablePlayNext_Parms
	{
		bool bEnable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnablePlayNext_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnablePlayNext_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnablePlayNext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnablePlayNext_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "EnablePlayNext", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::SIK_MusicRemoteLibrary_eventEnablePlayNext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::SIK_MusicRemoteLibrary_eventEnablePlayNext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execEnablePlayNext)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::EnablePlayNext(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function EnablePlayNext

// Begin Class USIK_MusicRemoteLibrary Function EnablePlayPrevious
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics
{
	struct SIK_MusicRemoteLibrary_eventEnablePlayPrevious_Parms
	{
		bool bEnable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnablePlayPrevious_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnablePlayPrevious_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnablePlayPrevious_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnablePlayPrevious_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "EnablePlayPrevious", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::SIK_MusicRemoteLibrary_eventEnablePlayPrevious_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::SIK_MusicRemoteLibrary_eventEnablePlayPrevious_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execEnablePlayPrevious)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::EnablePlayPrevious(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function EnablePlayPrevious

// Begin Class USIK_MusicRemoteLibrary Function EnableQueue
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics
{
	struct SIK_MusicRemoteLibrary_eventEnableQueue_Parms
	{
		bool bEnable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnableQueue_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnableQueue_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnableQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnableQueue_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "EnableQueue", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::SIK_MusicRemoteLibrary_eventEnableQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::SIK_MusicRemoteLibrary_eventEnableQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execEnableQueue)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::EnableQueue(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function EnableQueue

// Begin Class USIK_MusicRemoteLibrary Function EnableShuffled
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics
{
	struct SIK_MusicRemoteLibrary_eventEnableShuffled_Parms
	{
		bool bEnable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnableShuffled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnableShuffled_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventEnableShuffled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventEnableShuffled_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "EnableShuffled", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::SIK_MusicRemoteLibrary_eventEnableShuffled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::SIK_MusicRemoteLibrary_eventEnableShuffled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execEnableShuffled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::EnableShuffled(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function EnableShuffled

// Begin Class USIK_MusicRemoteLibrary Function IsCurrentMusicRemote
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics
{
	struct SIK_MusicRemoteLibrary_eventIsCurrentMusicRemote_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventIsCurrentMusicRemote_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventIsCurrentMusicRemote_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "IsCurrentMusicRemote", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::SIK_MusicRemoteLibrary_eventIsCurrentMusicRemote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::SIK_MusicRemoteLibrary_eventIsCurrentMusicRemote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execIsCurrentMusicRemote)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::IsCurrentMusicRemote();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function IsCurrentMusicRemote

// Begin Class USIK_MusicRemoteLibrary Function PlaylistDidChange
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics
{
	struct SIK_MusicRemoteLibrary_eventPlaylistDidChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventPlaylistDidChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventPlaylistDidChange_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "PlaylistDidChange", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::SIK_MusicRemoteLibrary_eventPlaylistDidChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::SIK_MusicRemoteLibrary_eventPlaylistDidChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execPlaylistDidChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::PlaylistDidChange();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function PlaylistDidChange

// Begin Class USIK_MusicRemoteLibrary Function PlaylistWillChange
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics
{
	struct SIK_MusicRemoteLibrary_eventPlaylistWillChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventPlaylistWillChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventPlaylistWillChange_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "PlaylistWillChange", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::SIK_MusicRemoteLibrary_eventPlaylistWillChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::SIK_MusicRemoteLibrary_eventPlaylistWillChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execPlaylistWillChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::PlaylistWillChange();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function PlaylistWillChange

// Begin Class USIK_MusicRemoteLibrary Function QueueDidChange
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics
{
	struct SIK_MusicRemoteLibrary_eventQueueDidChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventQueueDidChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventQueueDidChange_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "QueueDidChange", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::SIK_MusicRemoteLibrary_eventQueueDidChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::SIK_MusicRemoteLibrary_eventQueueDidChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execQueueDidChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::QueueDidChange();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function QueueDidChange

// Begin Class USIK_MusicRemoteLibrary Function QueueWillChange
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics
{
	struct SIK_MusicRemoteLibrary_eventQueueWillChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventQueueWillChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventQueueWillChange_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "QueueWillChange", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::SIK_MusicRemoteLibrary_eventQueueWillChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::SIK_MusicRemoteLibrary_eventQueueWillChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execQueueWillChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::QueueWillChange();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function QueueWillChange

// Begin Class USIK_MusicRemoteLibrary Function RegisterSteamMusicRemote
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics
{
	struct SIK_MusicRemoteLibrary_eventRegisterSteamMusicRemote_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventRegisterSteamMusicRemote_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventRegisterSteamMusicRemote_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventRegisterSteamMusicRemote_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "RegisterSteamMusicRemote", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::SIK_MusicRemoteLibrary_eventRegisterSteamMusicRemote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::SIK_MusicRemoteLibrary_eventRegisterSteamMusicRemote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execRegisterSteamMusicRemote)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::RegisterSteamMusicRemote(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function RegisterSteamMusicRemote

// Begin Class USIK_MusicRemoteLibrary Function ResetPlaylistEntries
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics
{
	struct SIK_MusicRemoteLibrary_eventResetPlaylistEntries_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventResetPlaylistEntries_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventResetPlaylistEntries_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "ResetPlaylistEntries", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::SIK_MusicRemoteLibrary_eventResetPlaylistEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::SIK_MusicRemoteLibrary_eventResetPlaylistEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execResetPlaylistEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::ResetPlaylistEntries();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function ResetPlaylistEntries

// Begin Class USIK_MusicRemoteLibrary Function ResetQueueEntries
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics
{
	struct SIK_MusicRemoteLibrary_eventResetQueueEntries_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventResetQueueEntries_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventResetQueueEntries_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "ResetQueueEntries", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::SIK_MusicRemoteLibrary_eventResetQueueEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::SIK_MusicRemoteLibrary_eventResetQueueEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execResetQueueEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::ResetQueueEntries();
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function ResetQueueEntries

// Begin Class USIK_MusicRemoteLibrary Function SetCurrentPlaylistEntry
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics
{
	struct SIK_MusicRemoteLibrary_eventSetCurrentPlaylistEntry_Parms
	{
		int32 nID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_nID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::NewProp_nID = { "nID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetCurrentPlaylistEntry_Parms, nID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventSetCurrentPlaylistEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventSetCurrentPlaylistEntry_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::NewProp_nID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "SetCurrentPlaylistEntry", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::SIK_MusicRemoteLibrary_eventSetCurrentPlaylistEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::SIK_MusicRemoteLibrary_eventSetCurrentPlaylistEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execSetCurrentPlaylistEntry)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_nID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::SetCurrentPlaylistEntry(Z_Param_nID);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function SetCurrentPlaylistEntry

// Begin Class USIK_MusicRemoteLibrary Function SetCurrentQueueEntry
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics
{
	struct SIK_MusicRemoteLibrary_eventSetCurrentQueueEntry_Parms
	{
		int32 nID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_nID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::NewProp_nID = { "nID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetCurrentQueueEntry_Parms, nID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventSetCurrentQueueEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventSetCurrentQueueEntry_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::NewProp_nID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "SetCurrentQueueEntry", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::SIK_MusicRemoteLibrary_eventSetCurrentQueueEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::SIK_MusicRemoteLibrary_eventSetCurrentQueueEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execSetCurrentQueueEntry)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_nID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::SetCurrentQueueEntry(Z_Param_nID);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function SetCurrentQueueEntry

// Begin Class USIK_MusicRemoteLibrary Function SetDisplayName
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics
{
	struct SIK_MusicRemoteLibrary_eventSetDisplayName_Parms
	{
		FString DisplayName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetDisplayName_Parms, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventSetDisplayName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventSetDisplayName_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "SetDisplayName", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::SIK_MusicRemoteLibrary_eventSetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::SIK_MusicRemoteLibrary_eventSetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execSetDisplayName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::SetDisplayName(Z_Param_DisplayName);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function SetDisplayName

// Begin Class USIK_MusicRemoteLibrary Function SetPlaylistEntry
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics
{
	struct SIK_MusicRemoteLibrary_eventSetPlaylistEntry_Parms
	{
		int32 nID;
		int32 nPosition;
		FString EntryText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_nID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nPosition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntryText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_nID = { "nID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetPlaylistEntry_Parms, nID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_nPosition = { "nPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetPlaylistEntry_Parms, nPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_EntryText = { "EntryText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetPlaylistEntry_Parms, EntryText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryText_MetaData), NewProp_EntryText_MetaData) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventSetPlaylistEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventSetPlaylistEntry_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_nID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_nPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_EntryText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "SetPlaylistEntry", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::SIK_MusicRemoteLibrary_eventSetPlaylistEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::SIK_MusicRemoteLibrary_eventSetPlaylistEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execSetPlaylistEntry)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_nID);
	P_GET_PROPERTY(FIntProperty,Z_Param_nPosition);
	P_GET_PROPERTY(FStrProperty,Z_Param_EntryText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::SetPlaylistEntry(Z_Param_nID,Z_Param_nPosition,Z_Param_EntryText);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function SetPlaylistEntry

// Begin Class USIK_MusicRemoteLibrary Function SetPNGIcon_64x64
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics
{
	struct SIK_MusicRemoteLibrary_eventSetPNGIcon_64x64_Parms
	{
		TArray<uint8> PNGData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PNGData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PNGData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::NewProp_PNGData_Inner = { "PNGData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::NewProp_PNGData = { "PNGData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetPNGIcon_64x64_Parms, PNGData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventSetPNGIcon_64x64_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventSetPNGIcon_64x64_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::NewProp_PNGData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::NewProp_PNGData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "SetPNGIcon_64x64", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::SIK_MusicRemoteLibrary_eventSetPNGIcon_64x64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::SIK_MusicRemoteLibrary_eventSetPNGIcon_64x64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execSetPNGIcon_64x64)
{
	P_GET_TARRAY(uint8,Z_Param_PNGData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::SetPNGIcon_64x64(Z_Param_PNGData);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function SetPNGIcon_64x64

// Begin Class USIK_MusicRemoteLibrary Function SetQueueEntry
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics
{
	struct SIK_MusicRemoteLibrary_eventSetQueueEntry_Parms
	{
		int32 nID;
		int32 nPosition;
		FString EntryText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_nID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nPosition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntryText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_nID = { "nID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetQueueEntry_Parms, nID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_nPosition = { "nPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetQueueEntry_Parms, nPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_EntryText = { "EntryText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventSetQueueEntry_Parms, EntryText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryText_MetaData), NewProp_EntryText_MetaData) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventSetQueueEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventSetQueueEntry_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_nID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_nPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_EntryText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "SetQueueEntry", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::SIK_MusicRemoteLibrary_eventSetQueueEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::SIK_MusicRemoteLibrary_eventSetQueueEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execSetQueueEntry)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_nID);
	P_GET_PROPERTY(FIntProperty,Z_Param_nPosition);
	P_GET_PROPERTY(FStrProperty,Z_Param_EntryText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::SetQueueEntry(Z_Param_nID,Z_Param_nPosition,Z_Param_EntryText);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function SetQueueEntry

// Begin Class USIK_MusicRemoteLibrary Function UpdateCurrentEntryCoverArt
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics
{
	struct SIK_MusicRemoteLibrary_eventUpdateCurrentEntryCoverArt_Parms
	{
		TArray<uint8> PNGData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PNGData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PNGData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::NewProp_PNGData_Inner = { "PNGData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::NewProp_PNGData = { "PNGData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventUpdateCurrentEntryCoverArt_Parms, PNGData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdateCurrentEntryCoverArt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdateCurrentEntryCoverArt_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::NewProp_PNGData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::NewProp_PNGData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "UpdateCurrentEntryCoverArt", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::SIK_MusicRemoteLibrary_eventUpdateCurrentEntryCoverArt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::SIK_MusicRemoteLibrary_eventUpdateCurrentEntryCoverArt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execUpdateCurrentEntryCoverArt)
{
	P_GET_TARRAY(uint8,Z_Param_PNGData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::UpdateCurrentEntryCoverArt(Z_Param_PNGData);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function UpdateCurrentEntryCoverArt

// Begin Class USIK_MusicRemoteLibrary Function UpdateCurrentEntryElapsedSeconds
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics
{
	struct SIK_MusicRemoteLibrary_eventUpdateCurrentEntryElapsedSeconds_Parms
	{
		int32 nValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_nValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_nValue = { "nValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventUpdateCurrentEntryElapsedSeconds_Parms, nValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdateCurrentEntryElapsedSeconds_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdateCurrentEntryElapsedSeconds_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_nValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "UpdateCurrentEntryElapsedSeconds", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::SIK_MusicRemoteLibrary_eventUpdateCurrentEntryElapsedSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::SIK_MusicRemoteLibrary_eventUpdateCurrentEntryElapsedSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execUpdateCurrentEntryElapsedSeconds)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_nValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::UpdateCurrentEntryElapsedSeconds(Z_Param_nValue);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function UpdateCurrentEntryElapsedSeconds

// Begin Class USIK_MusicRemoteLibrary Function UpdateCurrentEntryText
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics
{
	struct SIK_MusicRemoteLibrary_eventUpdateCurrentEntryText_Parms
	{
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventUpdateCurrentEntryText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdateCurrentEntryText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdateCurrentEntryText_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "UpdateCurrentEntryText", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::SIK_MusicRemoteLibrary_eventUpdateCurrentEntryText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::SIK_MusicRemoteLibrary_eventUpdateCurrentEntryText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execUpdateCurrentEntryText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::UpdateCurrentEntryText(Z_Param_Text);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function UpdateCurrentEntryText

// Begin Class USIK_MusicRemoteLibrary Function UpdateLooped
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics
{
	struct SIK_MusicRemoteLibrary_eventUpdateLooped_Parms
	{
		bool bLooped;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bLooped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooped;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::NewProp_bLooped_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdateLooped_Parms*)Obj)->bLooped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::NewProp_bLooped = { "bLooped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdateLooped_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::NewProp_bLooped_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdateLooped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdateLooped_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::NewProp_bLooped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "UpdateLooped", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::SIK_MusicRemoteLibrary_eventUpdateLooped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::SIK_MusicRemoteLibrary_eventUpdateLooped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execUpdateLooped)
{
	P_GET_UBOOL(Z_Param_bLooped);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::UpdateLooped(Z_Param_bLooped);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function UpdateLooped

// Begin Class USIK_MusicRemoteLibrary Function UpdatePlaybackStatus
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics
{
	struct SIK_MusicRemoteLibrary_eventUpdatePlaybackStatus_Parms
	{
		TEnumAsByte<ESIK_AudioPlayback_Status> Status;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventUpdatePlaybackStatus_Parms, Status), Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status, METADATA_PARAMS(0, nullptr) }; // 717604916
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdatePlaybackStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdatePlaybackStatus_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "UpdatePlaybackStatus", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::SIK_MusicRemoteLibrary_eventUpdatePlaybackStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::SIK_MusicRemoteLibrary_eventUpdatePlaybackStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execUpdatePlaybackStatus)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Status);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::UpdatePlaybackStatus(ESIK_AudioPlayback_Status(Z_Param_Status));
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function UpdatePlaybackStatus

// Begin Class USIK_MusicRemoteLibrary Function UpdateShuffled
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics
{
	struct SIK_MusicRemoteLibrary_eventUpdateShuffled_Parms
	{
		bool bShuffled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShuffled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::NewProp_bShuffled_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdateShuffled_Parms*)Obj)->bShuffled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::NewProp_bShuffled = { "bShuffled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdateShuffled_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::NewProp_bShuffled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdateShuffled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdateShuffled_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::NewProp_bShuffled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "UpdateShuffled", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::SIK_MusicRemoteLibrary_eventUpdateShuffled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::SIK_MusicRemoteLibrary_eventUpdateShuffled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execUpdateShuffled)
{
	P_GET_UBOOL(Z_Param_bShuffled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::UpdateShuffled(Z_Param_bShuffled);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function UpdateShuffled

// Begin Class USIK_MusicRemoteLibrary Function UpdateVolume
struct Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics
{
	struct SIK_MusicRemoteLibrary_eventUpdateVolume_Parms
	{
		float flValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::NewProp_flValue = { "flValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicRemoteLibrary_eventUpdateVolume_Parms, flValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicRemoteLibrary_eventUpdateVolume_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicRemoteLibrary_eventUpdateVolume_Parms), &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::NewProp_flValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicRemoteLibrary, nullptr, "UpdateVolume", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::SIK_MusicRemoteLibrary_eventUpdateVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::SIK_MusicRemoteLibrary_eventUpdateVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicRemoteLibrary::execUpdateVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_flValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicRemoteLibrary::UpdateVolume(Z_Param_flValue);
	P_NATIVE_END;
}
// End Class USIK_MusicRemoteLibrary Function UpdateVolume

// Begin Class USIK_MusicRemoteLibrary
void USIK_MusicRemoteLibrary::StaticRegisterNativesUSIK_MusicRemoteLibrary()
{
	UClass* Class = USIK_MusicRemoteLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivationSuccess", &USIK_MusicRemoteLibrary::execActivationSuccess },
		{ "CurrentEntryDidChange", &USIK_MusicRemoteLibrary::execCurrentEntryDidChange },
		{ "CurrentEntryIsAvailable", &USIK_MusicRemoteLibrary::execCurrentEntryIsAvailable },
		{ "CurrentEntryWillChange", &USIK_MusicRemoteLibrary::execCurrentEntryWillChange },
		{ "DeregisterSteamMusicRemote", &USIK_MusicRemoteLibrary::execDeregisterSteamMusicRemote },
		{ "EnableLooped", &USIK_MusicRemoteLibrary::execEnableLooped },
		{ "EnablePlaylists", &USIK_MusicRemoteLibrary::execEnablePlaylists },
		{ "EnablePlayNext", &USIK_MusicRemoteLibrary::execEnablePlayNext },
		{ "EnablePlayPrevious", &USIK_MusicRemoteLibrary::execEnablePlayPrevious },
		{ "EnableQueue", &USIK_MusicRemoteLibrary::execEnableQueue },
		{ "EnableShuffled", &USIK_MusicRemoteLibrary::execEnableShuffled },
		{ "IsCurrentMusicRemote", &USIK_MusicRemoteLibrary::execIsCurrentMusicRemote },
		{ "PlaylistDidChange", &USIK_MusicRemoteLibrary::execPlaylistDidChange },
		{ "PlaylistWillChange", &USIK_MusicRemoteLibrary::execPlaylistWillChange },
		{ "QueueDidChange", &USIK_MusicRemoteLibrary::execQueueDidChange },
		{ "QueueWillChange", &USIK_MusicRemoteLibrary::execQueueWillChange },
		{ "RegisterSteamMusicRemote", &USIK_MusicRemoteLibrary::execRegisterSteamMusicRemote },
		{ "ResetPlaylistEntries", &USIK_MusicRemoteLibrary::execResetPlaylistEntries },
		{ "ResetQueueEntries", &USIK_MusicRemoteLibrary::execResetQueueEntries },
		{ "SetCurrentPlaylistEntry", &USIK_MusicRemoteLibrary::execSetCurrentPlaylistEntry },
		{ "SetCurrentQueueEntry", &USIK_MusicRemoteLibrary::execSetCurrentQueueEntry },
		{ "SetDisplayName", &USIK_MusicRemoteLibrary::execSetDisplayName },
		{ "SetPlaylistEntry", &USIK_MusicRemoteLibrary::execSetPlaylistEntry },
		{ "SetPNGIcon_64x64", &USIK_MusicRemoteLibrary::execSetPNGIcon_64x64 },
		{ "SetQueueEntry", &USIK_MusicRemoteLibrary::execSetQueueEntry },
		{ "UpdateCurrentEntryCoverArt", &USIK_MusicRemoteLibrary::execUpdateCurrentEntryCoverArt },
		{ "UpdateCurrentEntryElapsedSeconds", &USIK_MusicRemoteLibrary::execUpdateCurrentEntryElapsedSeconds },
		{ "UpdateCurrentEntryText", &USIK_MusicRemoteLibrary::execUpdateCurrentEntryText },
		{ "UpdateLooped", &USIK_MusicRemoteLibrary::execUpdateLooped },
		{ "UpdatePlaybackStatus", &USIK_MusicRemoteLibrary::execUpdatePlaybackStatus },
		{ "UpdateShuffled", &USIK_MusicRemoteLibrary::execUpdateShuffled },
		{ "UpdateVolume", &USIK_MusicRemoteLibrary::execUpdateVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_MusicRemoteLibrary);
UClass* Z_Construct_UClass_USIK_MusicRemoteLibrary_NoRegister()
{
	return USIK_MusicRemoteLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_ActivationSuccess, "ActivationSuccess" }, // 621351556
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryDidChange, "CurrentEntryDidChange" }, // 435819300
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryIsAvailable, "CurrentEntryIsAvailable" }, // 2208108827
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_CurrentEntryWillChange, "CurrentEntryWillChange" }, // 1952653126
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_DeregisterSteamMusicRemote, "DeregisterSteamMusicRemote" }, // 2362752701
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableLooped, "EnableLooped" }, // 3703195039
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlaylists, "EnablePlaylists" }, // 3874367614
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayNext, "EnablePlayNext" }, // 3682703833
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnablePlayPrevious, "EnablePlayPrevious" }, // 1569951679
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableQueue, "EnableQueue" }, // 896791784
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_EnableShuffled, "EnableShuffled" }, // 2434690556
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_IsCurrentMusicRemote, "IsCurrentMusicRemote" }, // 4018221313
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistDidChange, "PlaylistDidChange" }, // 363716252
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_PlaylistWillChange, "PlaylistWillChange" }, // 1319502847
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueDidChange, "QueueDidChange" }, // 2692049062
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_QueueWillChange, "QueueWillChange" }, // 3819001018
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_RegisterSteamMusicRemote, "RegisterSteamMusicRemote" }, // 3356258138
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetPlaylistEntries, "ResetPlaylistEntries" }, // 3699975382
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_ResetQueueEntries, "ResetQueueEntries" }, // 2239860323
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentPlaylistEntry, "SetCurrentPlaylistEntry" }, // 2408914651
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetCurrentQueueEntry, "SetCurrentQueueEntry" }, // 381423160
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetDisplayName, "SetDisplayName" }, // 4147299791
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPlaylistEntry, "SetPlaylistEntry" }, // 1553729639
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetPNGIcon_64x64, "SetPNGIcon_64x64" }, // 3755810566
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_SetQueueEntry, "SetQueueEntry" }, // 2965436167
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryCoverArt, "UpdateCurrentEntryCoverArt" }, // 336568072
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryElapsedSeconds, "UpdateCurrentEntryElapsedSeconds" }, // 3207868167
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateCurrentEntryText, "UpdateCurrentEntryText" }, // 999220157
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateLooped, "UpdateLooped" }, // 1271821786
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdatePlaybackStatus, "UpdatePlaybackStatus" }, // 2790838937
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateShuffled, "UpdateShuffled" }, // 1463887693
		{ &Z_Construct_UFunction_USIK_MusicRemoteLibrary_UpdateVolume, "UpdateVolume" }, // 2026504095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_MusicRemoteLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics::ClassParams = {
	&USIK_MusicRemoteLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_MusicRemoteLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_MusicRemoteLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_MusicRemoteLibrary.OuterSingleton, Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_MusicRemoteLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_MusicRemoteLibrary>()
{
	return USIK_MusicRemoteLibrary::StaticClass();
}
USIK_MusicRemoteLibrary::USIK_MusicRemoteLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_MusicRemoteLibrary);
USIK_MusicRemoteLibrary::~USIK_MusicRemoteLibrary() {}
// End Class USIK_MusicRemoteLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_MusicRemoteLibrary, USIK_MusicRemoteLibrary::StaticClass, TEXT("USIK_MusicRemoteLibrary"), &Z_Registration_Info_UClass_USIK_MusicRemoteLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_MusicRemoteLibrary), 560567218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_1682564404(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
