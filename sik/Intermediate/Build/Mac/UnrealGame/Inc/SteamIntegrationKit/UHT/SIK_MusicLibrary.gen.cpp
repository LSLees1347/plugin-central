// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Music/SIK_MusicLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_MusicLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_MusicLibrary Function GetPlaybackStatus
struct Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics
{
	struct SIK_MusicLibrary_eventGetPlaybackStatus_Parms
	{
		TEnumAsByte<ESIK_AudioPlayback_Status> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicLibrary_eventGetPlaybackStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status, METADATA_PARAMS(0, nullptr) }; // 717604916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "GetPlaybackStatus", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::SIK_MusicLibrary_eventGetPlaybackStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::SIK_MusicLibrary_eventGetPlaybackStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execGetPlaybackStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_AudioPlayback_Status>*)Z_Param__Result=USIK_MusicLibrary::GetPlaybackStatus();
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function GetPlaybackStatus

// Begin Class USIK_MusicLibrary Function GetVolume
struct Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics
{
	struct SIK_MusicLibrary_eventGetVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicLibrary_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "GetVolume", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::SIK_MusicLibrary_eventGetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::SIK_MusicLibrary_eventGetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_GetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execGetVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USIK_MusicLibrary::GetVolume();
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function GetVolume

// Begin Class USIK_MusicLibrary Function IsEnabled
struct Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics
{
	struct SIK_MusicLibrary_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicLibrary_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicLibrary_eventIsEnabled_Parms), &Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::SIK_MusicLibrary_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::SIK_MusicLibrary_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicLibrary::IsEnabled();
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function IsEnabled

// Begin Class USIK_MusicLibrary Function IsPlaying
struct Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics
{
	struct SIK_MusicLibrary_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicLibrary_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicLibrary_eventIsPlaying_Parms), &Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::SIK_MusicLibrary_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::SIK_MusicLibrary_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicLibrary::IsPlaying();
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function IsPlaying

// Begin Class USIK_MusicLibrary Function Pause
struct Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::Pause();
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function Pause

// Begin Class USIK_MusicLibrary Function Play
struct Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::Play();
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function Play

// Begin Class USIK_MusicLibrary Function PlayNext
struct Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "PlayNext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_PlayNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execPlayNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::PlayNext();
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function PlayNext

// Begin Class USIK_MusicLibrary Function PlayPrevious
struct Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "PlayPrevious", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execPlayPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::PlayPrevious();
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function PlayPrevious

// Begin Class USIK_MusicLibrary Function SetVolume
struct Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics
{
	struct SIK_MusicLibrary_eventSetVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicLibrary_eventSetVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "SetVolume", nullptr, nullptr, Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::SIK_MusicLibrary_eventSetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::SIK_MusicLibrary_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::SetVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// End Class USIK_MusicLibrary Function SetVolume

// Begin Class USIK_MusicLibrary
void USIK_MusicLibrary::StaticRegisterNativesUSIK_MusicLibrary()
{
	UClass* Class = USIK_MusicLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlaybackStatus", &USIK_MusicLibrary::execGetPlaybackStatus },
		{ "GetVolume", &USIK_MusicLibrary::execGetVolume },
		{ "IsEnabled", &USIK_MusicLibrary::execIsEnabled },
		{ "IsPlaying", &USIK_MusicLibrary::execIsPlaying },
		{ "Pause", &USIK_MusicLibrary::execPause },
		{ "Play", &USIK_MusicLibrary::execPlay },
		{ "PlayNext", &USIK_MusicLibrary::execPlayNext },
		{ "PlayPrevious", &USIK_MusicLibrary::execPlayPrevious },
		{ "SetVolume", &USIK_MusicLibrary::execSetVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_MusicLibrary);
UClass* Z_Construct_UClass_USIK_MusicLibrary_NoRegister()
{
	return USIK_MusicLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_MusicLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Music/SIK_MusicLibrary.h" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus, "GetPlaybackStatus" }, // 999289457
		{ &Z_Construct_UFunction_USIK_MusicLibrary_GetVolume, "GetVolume" }, // 98127515
		{ &Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled, "IsEnabled" }, // 3938969404
		{ &Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying, "IsPlaying" }, // 1470463218
		{ &Z_Construct_UFunction_USIK_MusicLibrary_Pause, "Pause" }, // 1080887236
		{ &Z_Construct_UFunction_USIK_MusicLibrary_Play, "Play" }, // 2218406208
		{ &Z_Construct_UFunction_USIK_MusicLibrary_PlayNext, "PlayNext" }, // 3569119360
		{ &Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious, "PlayPrevious" }, // 153211305
		{ &Z_Construct_UFunction_USIK_MusicLibrary_SetVolume, "SetVolume" }, // 1683170456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_MusicLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_MusicLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_MusicLibrary_Statics::ClassParams = {
	&USIK_MusicLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_MusicLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_MusicLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_MusicLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_MusicLibrary.OuterSingleton, Z_Construct_UClass_USIK_MusicLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_MusicLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_MusicLibrary>()
{
	return USIK_MusicLibrary::StaticClass();
}
USIK_MusicLibrary::USIK_MusicLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_MusicLibrary);
USIK_MusicLibrary::~USIK_MusicLibrary() {}
// End Class USIK_MusicLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_MusicLibrary, USIK_MusicLibrary::StaticClass, TEXT("USIK_MusicLibrary"), &Z_Registration_Info_UClass_USIK_MusicLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_MusicLibrary), 665165836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_3128453070(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
