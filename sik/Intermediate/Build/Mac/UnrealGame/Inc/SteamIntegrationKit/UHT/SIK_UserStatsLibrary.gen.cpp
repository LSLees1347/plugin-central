// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_UserStatsLibrary.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_UserStatsLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserStatsLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserStatsLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_UserStatsLibrary Function CacheCurrentStats
struct Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics
{
	struct SIK_UserStatsLibrary_eventCacheCurrentStats_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventCacheCurrentStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventCacheCurrentStats_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "CacheCurrentStats", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::SIK_UserStatsLibrary_eventCacheCurrentStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::SIK_UserStatsLibrary_eventCacheCurrentStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execCacheCurrentStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::CacheCurrentStats();
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function CacheCurrentStats

// Begin Class USIK_UserStatsLibrary Function ClearAchievement
struct Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics
{
	struct SIK_UserStatsLibrary_eventClearAchievement_Parms
	{
		FString AchievementName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventClearAchievement_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventClearAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventClearAchievement_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "ClearAchievement", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::SIK_UserStatsLibrary_eventClearAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::SIK_UserStatsLibrary_eventClearAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execClearAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::ClearAchievement(Z_Param_AchievementName);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function ClearAchievement

// Begin Class USIK_UserStatsLibrary Function GetAchievement
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics
{
	struct SIK_UserStatsLibrary_eventGetAchievement_Parms
	{
		FString AchievementName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievement_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetAchievement_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetAchievement", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::SIK_UserStatsLibrary_eventGetAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::SIK_UserStatsLibrary_eventGetAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::GetAchievement(Z_Param_AchievementName);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetAchievement

// Begin Class USIK_UserStatsLibrary Function GetAchievementAchievedPercent
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics
{
	struct SIK_UserStatsLibrary_eventGetAchievementAchievedPercent_Parms
	{
		FString AchievementName;
		float Percent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementAchievedPercent_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementAchievedPercent_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetAchievementAchievedPercent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetAchievementAchievedPercent_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetAchievementAchievedPercent", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::SIK_UserStatsLibrary_eventGetAchievementAchievedPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::SIK_UserStatsLibrary_eventGetAchievementAchievedPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetAchievementAchievedPercent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::GetAchievementAchievedPercent(Z_Param_AchievementName,Z_Param_Out_Percent);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetAchievementAchievedPercent

// Begin Class USIK_UserStatsLibrary Function GetAchievementAndUnlockTime
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics
{
	struct SIK_UserStatsLibrary_eventGetAchievementAndUnlockTime_Parms
	{
		FString AchievementName;
		bool bAchieved;
		FDateTime UnlockTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementAndUnlockTime_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementAndUnlockTime_Parms, UnlockTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetAchievementAndUnlockTime", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::SIK_UserStatsLibrary_eventGetAchievementAndUnlockTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::SIK_UserStatsLibrary_eventGetAchievementAndUnlockTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetAchievementAndUnlockTime)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UnlockTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UserStatsLibrary::GetAchievementAndUnlockTime(Z_Param_AchievementName,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetAchievementAndUnlockTime

// Begin Class USIK_UserStatsLibrary Function GetAchievementDisplayAttribute
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics
{
	struct SIK_UserStatsLibrary_eventGetAchievementDisplayAttribute_Parms
	{
		FString AchievementName;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementDisplayAttribute_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementDisplayAttribute_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementDisplayAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetAchievementDisplayAttribute", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::SIK_UserStatsLibrary_eventGetAchievementDisplayAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::SIK_UserStatsLibrary_eventGetAchievementDisplayAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetAchievementDisplayAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UserStatsLibrary::GetAchievementDisplayAttribute(Z_Param_AchievementName,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetAchievementDisplayAttribute

// Begin Class USIK_UserStatsLibrary Function GetAchievementIcon
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics
{
	struct SIK_UserStatsLibrary_eventGetAchievementIcon_Parms
	{
		FString AchievementName;
		UTexture2D* Icon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementIcon_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementIcon_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetAchievementIcon", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::SIK_UserStatsLibrary_eventGetAchievementIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::SIK_UserStatsLibrary_eventGetAchievementIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetAchievementIcon)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Icon);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UserStatsLibrary::GetAchievementIcon(Z_Param_AchievementName,P_ARG_GC_BARRIER(Z_Param_Out_Icon));
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetAchievementIcon

// Begin Class USIK_UserStatsLibrary Function GetAchievementName
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics
{
	struct SIK_UserStatsLibrary_eventGetAchievementName_Parms
	{
		int32 AchievementIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AchievementIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::NewProp_AchievementIndex = { "AchievementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementName_Parms, AchievementIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetAchievementName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::NewProp_AchievementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetAchievementName", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::SIK_UserStatsLibrary_eventGetAchievementName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::SIK_UserStatsLibrary_eventGetAchievementName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetAchievementName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AchievementIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UserStatsLibrary::GetAchievementName(Z_Param_AchievementIndex);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetAchievementName

// Begin Class USIK_UserStatsLibrary Function GetGlobalStatFloat
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics
{
	struct SIK_UserStatsLibrary_eventGetGlobalStatFloat_Parms
	{
		FString StatName;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatFloat_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetGlobalStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetGlobalStatFloat_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetGlobalStatFloat", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::SIK_UserStatsLibrary_eventGetGlobalStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::SIK_UserStatsLibrary_eventGetGlobalStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetGlobalStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::GetGlobalStatFloat(Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetGlobalStatFloat

// Begin Class USIK_UserStatsLibrary Function GetGlobalStatHistoryFloat
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics
{
	struct SIK_UserStatsLibrary_eventGetGlobalStatHistoryFloat_Parms
	{
		FString StatName;
		TArray<float> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatHistoryFloat_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatHistoryFloat_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatHistoryFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetGlobalStatHistoryFloat", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::SIK_UserStatsLibrary_eventGetGlobalStatHistoryFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::SIK_UserStatsLibrary_eventGetGlobalStatHistoryFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetGlobalStatHistoryFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_TARRAY_REF(float,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserStatsLibrary::GetGlobalStatHistoryFloat(Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetGlobalStatHistoryFloat

// Begin Class USIK_UserStatsLibrary Function GetGlobalStatHistoryInt
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics
{
	struct SIK_UserStatsLibrary_eventGetGlobalStatHistoryInt_Parms
	{
		FString StatName;
		TArray<int32> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatHistoryInt_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatHistoryInt_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatHistoryInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetGlobalStatHistoryInt", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::SIK_UserStatsLibrary_eventGetGlobalStatHistoryInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::SIK_UserStatsLibrary_eventGetGlobalStatHistoryInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetGlobalStatHistoryInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserStatsLibrary::GetGlobalStatHistoryInt(Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetGlobalStatHistoryInt

// Begin Class USIK_UserStatsLibrary Function GetGlobalStatInt
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics
{
	struct SIK_UserStatsLibrary_eventGetGlobalStatInt_Parms
	{
		FString StatName;
		int64 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatInt_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetGlobalStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetGlobalStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetGlobalStatInt_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetGlobalStatInt", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::SIK_UserStatsLibrary_eventGetGlobalStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::SIK_UserStatsLibrary_eventGetGlobalStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetGlobalStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::GetGlobalStatInt(Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetGlobalStatInt

// Begin Class USIK_UserStatsLibrary Function GetLeaderboardDisplayType
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics
{
	struct SIK_UserStatsLibrary_eventGetLeaderboardDisplayType_Parms
	{
		int32 LeaderboardId;
		TEnumAsByte<ESIK_LeaderboardDisplayType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetLeaderboardDisplayType_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetLeaderboardDisplayType_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType, METADATA_PARAMS(0, nullptr) }; // 1936917140
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetLeaderboardDisplayType", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::SIK_UserStatsLibrary_eventGetLeaderboardDisplayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::SIK_UserStatsLibrary_eventGetLeaderboardDisplayType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetLeaderboardDisplayType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_LeaderboardDisplayType>*)Z_Param__Result=USIK_UserStatsLibrary::GetLeaderboardDisplayType(Z_Param_LeaderboardId);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetLeaderboardDisplayType

// Begin Class USIK_UserStatsLibrary Function GetLeaderboardEntryCount
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics
{
	struct SIK_UserStatsLibrary_eventGetLeaderboardEntryCount_Parms
	{
		int32 LeaderboardId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetLeaderboardEntryCount_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetLeaderboardEntryCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetLeaderboardEntryCount", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::SIK_UserStatsLibrary_eventGetLeaderboardEntryCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::SIK_UserStatsLibrary_eventGetLeaderboardEntryCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetLeaderboardEntryCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserStatsLibrary::GetLeaderboardEntryCount(Z_Param_LeaderboardId);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetLeaderboardEntryCount

// Begin Class USIK_UserStatsLibrary Function GetLeaderboardName
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics
{
	struct SIK_UserStatsLibrary_eventGetLeaderboardName_Parms
	{
		int32 LeaderboardId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetLeaderboardName_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetLeaderboardName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetLeaderboardName", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::SIK_UserStatsLibrary_eventGetLeaderboardName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::SIK_UserStatsLibrary_eventGetLeaderboardName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetLeaderboardName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UserStatsLibrary::GetLeaderboardName(Z_Param_LeaderboardId);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetLeaderboardName

// Begin Class USIK_UserStatsLibrary Function GetLeaderboardSortMethod
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics
{
	struct SIK_UserStatsLibrary_eventGetLeaderboardSortMethod_Parms
	{
		int32 LeaderboardId;
		TEnumAsByte<ESIK_LeaderboardSortMethod> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetLeaderboardSortMethod_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetLeaderboardSortMethod_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod, METADATA_PARAMS(0, nullptr) }; // 2746170457
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetLeaderboardSortMethod", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::SIK_UserStatsLibrary_eventGetLeaderboardSortMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::SIK_UserStatsLibrary_eventGetLeaderboardSortMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetLeaderboardSortMethod)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_LeaderboardSortMethod>*)Z_Param__Result=USIK_UserStatsLibrary::GetLeaderboardSortMethod(Z_Param_LeaderboardId);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetLeaderboardSortMethod

// Begin Class USIK_UserStatsLibrary Function GetMostAchievedAchievementInfo
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics
{
	struct SIK_UserStatsLibrary_eventGetMostAchievedAchievementInfo_Parms
	{
		FString AchievementName;
		float Percent;
		bool bIsAchieved;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_bIsAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetMostAchievedAchievementInfo_Parms, AchievementName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_bIsAchieved_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetMostAchievedAchievementInfo_Parms*)Obj)->bIsAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_bIsAchieved = { "bIsAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_bIsAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_bIsAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetMostAchievedAchievementInfo", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::SIK_UserStatsLibrary_eventGetMostAchievedAchievementInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::SIK_UserStatsLibrary_eventGetMostAchievedAchievementInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetMostAchievedAchievementInfo)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AchievementName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_GET_UBOOL_REF(Z_Param_Out_bIsAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserStatsLibrary::GetMostAchievedAchievementInfo(Z_Param_Out_AchievementName,Z_Param_Out_Percent,Z_Param_Out_bIsAchieved);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetMostAchievedAchievementInfo

// Begin Class USIK_UserStatsLibrary Function GetNextMostAchievedAchievementInfo
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics
{
	struct SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms
	{
		int32 IteratorPrevious;
		FString AchievementName;
		float Percent;
		bool bIsAchieved;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IteratorPrevious;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_bIsAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious = { "IteratorPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms, IteratorPrevious), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms, AchievementName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_bIsAchieved_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms*)Obj)->bIsAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_bIsAchieved = { "bIsAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_bIsAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_bIsAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetNextMostAchievedAchievementInfo", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::SIK_UserStatsLibrary_eventGetNextMostAchievedAchievementInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetNextMostAchievedAchievementInfo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IteratorPrevious);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AchievementName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_GET_UBOOL_REF(Z_Param_Out_bIsAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserStatsLibrary::GetNextMostAchievedAchievementInfo(Z_Param_IteratorPrevious,Z_Param_Out_AchievementName,Z_Param_Out_Percent,Z_Param_Out_bIsAchieved);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetNextMostAchievedAchievementInfo

// Begin Class USIK_UserStatsLibrary Function GetNumOfAchievements
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics
{
	struct SIK_UserStatsLibrary_eventGetNumOfAchievements_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetNumOfAchievements_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetNumOfAchievements", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::SIK_UserStatsLibrary_eventGetNumOfAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::SIK_UserStatsLibrary_eventGetNumOfAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetNumOfAchievements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UserStatsLibrary::GetNumOfAchievements();
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetNumOfAchievements

// Begin Class USIK_UserStatsLibrary Function GetStatFloat
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics
{
	struct SIK_UserStatsLibrary_eventGetStatFloat_Parms
	{
		FString StatName;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetStatFloat_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetStatFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetStatFloat_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetStatFloat", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::SIK_UserStatsLibrary_eventGetStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::SIK_UserStatsLibrary_eventGetStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::GetStatFloat(Z_Param_StatName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetStatFloat

// Begin Class USIK_UserStatsLibrary Function GetStatInt
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics
{
	struct SIK_UserStatsLibrary_eventGetStatInt_Parms
	{
		FString StatName;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetStatInt_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetStatInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetStatInt_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetStatInt", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::SIK_UserStatsLibrary_eventGetStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::SIK_UserStatsLibrary_eventGetStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::GetStatInt(Z_Param_StatName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetStatInt

// Begin Class USIK_UserStatsLibrary Function GetUserAchievement
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics
{
	struct SIK_UserStatsLibrary_eventGetUserAchievement_Parms
	{
		FSIK_SteamId SteamID;
		FString AchievementName;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetUserAchievement_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetUserAchievement_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetUserAchievement_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetUserAchievement_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetUserAchievement", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::SIK_UserStatsLibrary_eventGetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::SIK_UserStatsLibrary_eventGetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetUserAchievement)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::GetUserAchievement(Z_Param_SteamID,Z_Param_AchievementName,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetUserAchievement

// Begin Class USIK_UserStatsLibrary Function GetUserAchievementAndUnlockTime
struct Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics
{
	struct SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms
	{
		FSIK_SteamId SteamID;
		FString AchievementName;
		bool bAchieved;
		FDateTime UnlockTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms, UnlockTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "GetUserAchievementAndUnlockTime", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::SIK_UserStatsLibrary_eventGetUserAchievementAndUnlockTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execGetUserAchievementAndUnlockTime)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UnlockTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::GetUserAchievementAndUnlockTime(Z_Param_SteamID,Z_Param_AchievementName,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function GetUserAchievementAndUnlockTime

// Begin Class USIK_UserStatsLibrary Function IndicateAchievementProgress
struct Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics
{
	struct SIK_UserStatsLibrary_eventIndicateAchievementProgress_Parms
	{
		FString AchievementName;
		int32 CurProgress;
		int32 MaxProgress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventIndicateAchievementProgress_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_CurProgress = { "CurProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventIndicateAchievementProgress_Parms, CurProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventIndicateAchievementProgress_Parms, MaxProgress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventIndicateAchievementProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventIndicateAchievementProgress_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_CurProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_MaxProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "IndicateAchievementProgress", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::SIK_UserStatsLibrary_eventIndicateAchievementProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::SIK_UserStatsLibrary_eventIndicateAchievementProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execIndicateAchievementProgress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurProgress);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::IndicateAchievementProgress(Z_Param_AchievementName,Z_Param_CurProgress,Z_Param_MaxProgress);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function IndicateAchievementProgress

// Begin Class USIK_UserStatsLibrary Function RequestCurrentStats
struct Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics
{
	struct SIK_UserStatsLibrary_eventRequestCurrentStats_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventRequestCurrentStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventRequestCurrentStats_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "RequestCurrentStats", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::SIK_UserStatsLibrary_eventRequestCurrentStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::SIK_UserStatsLibrary_eventRequestCurrentStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execRequestCurrentStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::RequestCurrentStats();
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function RequestCurrentStats

// Begin Class USIK_UserStatsLibrary Function ResetAllStats
struct Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics
{
	struct SIK_UserStatsLibrary_eventResetAllStats_Parms
	{
		bool AchievementsToo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AchievementsToo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AchievementsToo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::NewProp_AchievementsToo_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventResetAllStats_Parms*)Obj)->AchievementsToo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::NewProp_AchievementsToo = { "AchievementsToo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventResetAllStats_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::NewProp_AchievementsToo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventResetAllStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventResetAllStats_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::NewProp_AchievementsToo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "ResetAllStats", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::SIK_UserStatsLibrary_eventResetAllStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::SIK_UserStatsLibrary_eventResetAllStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execResetAllStats)
{
	P_GET_UBOOL(Z_Param_AchievementsToo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::ResetAllStats(Z_Param_AchievementsToo);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function ResetAllStats

// Begin Class USIK_UserStatsLibrary Function SetAchievement
struct Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics
{
	struct SIK_UserStatsLibrary_eventSetAchievement_Parms
	{
		FString AchievementName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventSetAchievement_Parms, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventSetAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventSetAchievement_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "SetAchievement", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::SIK_UserStatsLibrary_eventSetAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::SIK_UserStatsLibrary_eventSetAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execSetAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::SetAchievement(Z_Param_AchievementName);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function SetAchievement

// Begin Class USIK_UserStatsLibrary Function SetStatFloat
struct Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics
{
	struct SIK_UserStatsLibrary_eventSetStatFloat_Parms
	{
		FString StatName;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventSetStatFloat_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventSetStatFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventSetStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventSetStatFloat_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "SetStatFloat", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::SIK_UserStatsLibrary_eventSetStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::SIK_UserStatsLibrary_eventSetStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execSetStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::SetStatFloat(Z_Param_StatName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function SetStatFloat

// Begin Class USIK_UserStatsLibrary Function SetStatInt
struct Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics
{
	struct SIK_UserStatsLibrary_eventSetStatInt_Parms
	{
		FString StatName;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventSetStatInt_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventSetStatInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventSetStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventSetStatInt_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "SetStatInt", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::SIK_UserStatsLibrary_eventSetStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::SIK_UserStatsLibrary_eventSetStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execSetStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::SetStatInt(Z_Param_StatName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function SetStatInt

// Begin Class USIK_UserStatsLibrary Function StoreStats
struct Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics
{
	struct SIK_UserStatsLibrary_eventStoreStats_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventStoreStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventStoreStats_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "StoreStats", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::SIK_UserStatsLibrary_eventStoreStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::SIK_UserStatsLibrary_eventStoreStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execStoreStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::StoreStats();
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function StoreStats

// Begin Class USIK_UserStatsLibrary Function UpdateAvgRateStat
struct Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics
{
	struct SIK_UserStatsLibrary_eventUpdateAvgRateStat_Parms
	{
		FString StatName;
		float Value;
		float Rate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventUpdateAvgRateStat_Parms, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventUpdateAvgRateStat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserStatsLibrary_eventUpdateAvgRateStat_Parms, Rate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UserStatsLibrary_eventUpdateAvgRateStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UserStatsLibrary_eventUpdateAvgRateStat_Parms), &Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UserStatsLibrary, nullptr, "UpdateAvgRateStat", nullptr, nullptr, Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::SIK_UserStatsLibrary_eventUpdateAvgRateStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::SIK_UserStatsLibrary_eventUpdateAvgRateStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserStatsLibrary::execUpdateAvgRateStat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UserStatsLibrary::UpdateAvgRateStat(Z_Param_StatName,Z_Param_Value,Z_Param_Rate);
	P_NATIVE_END;
}
// End Class USIK_UserStatsLibrary Function UpdateAvgRateStat

// Begin Class USIK_UserStatsLibrary
void USIK_UserStatsLibrary::StaticRegisterNativesUSIK_UserStatsLibrary()
{
	UClass* Class = USIK_UserStatsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CacheCurrentStats", &USIK_UserStatsLibrary::execCacheCurrentStats },
		{ "ClearAchievement", &USIK_UserStatsLibrary::execClearAchievement },
		{ "GetAchievement", &USIK_UserStatsLibrary::execGetAchievement },
		{ "GetAchievementAchievedPercent", &USIK_UserStatsLibrary::execGetAchievementAchievedPercent },
		{ "GetAchievementAndUnlockTime", &USIK_UserStatsLibrary::execGetAchievementAndUnlockTime },
		{ "GetAchievementDisplayAttribute", &USIK_UserStatsLibrary::execGetAchievementDisplayAttribute },
		{ "GetAchievementIcon", &USIK_UserStatsLibrary::execGetAchievementIcon },
		{ "GetAchievementName", &USIK_UserStatsLibrary::execGetAchievementName },
		{ "GetGlobalStatFloat", &USIK_UserStatsLibrary::execGetGlobalStatFloat },
		{ "GetGlobalStatHistoryFloat", &USIK_UserStatsLibrary::execGetGlobalStatHistoryFloat },
		{ "GetGlobalStatHistoryInt", &USIK_UserStatsLibrary::execGetGlobalStatHistoryInt },
		{ "GetGlobalStatInt", &USIK_UserStatsLibrary::execGetGlobalStatInt },
		{ "GetLeaderboardDisplayType", &USIK_UserStatsLibrary::execGetLeaderboardDisplayType },
		{ "GetLeaderboardEntryCount", &USIK_UserStatsLibrary::execGetLeaderboardEntryCount },
		{ "GetLeaderboardName", &USIK_UserStatsLibrary::execGetLeaderboardName },
		{ "GetLeaderboardSortMethod", &USIK_UserStatsLibrary::execGetLeaderboardSortMethod },
		{ "GetMostAchievedAchievementInfo", &USIK_UserStatsLibrary::execGetMostAchievedAchievementInfo },
		{ "GetNextMostAchievedAchievementInfo", &USIK_UserStatsLibrary::execGetNextMostAchievedAchievementInfo },
		{ "GetNumOfAchievements", &USIK_UserStatsLibrary::execGetNumOfAchievements },
		{ "GetStatFloat", &USIK_UserStatsLibrary::execGetStatFloat },
		{ "GetStatInt", &USIK_UserStatsLibrary::execGetStatInt },
		{ "GetUserAchievement", &USIK_UserStatsLibrary::execGetUserAchievement },
		{ "GetUserAchievementAndUnlockTime", &USIK_UserStatsLibrary::execGetUserAchievementAndUnlockTime },
		{ "IndicateAchievementProgress", &USIK_UserStatsLibrary::execIndicateAchievementProgress },
		{ "RequestCurrentStats", &USIK_UserStatsLibrary::execRequestCurrentStats },
		{ "ResetAllStats", &USIK_UserStatsLibrary::execResetAllStats },
		{ "SetAchievement", &USIK_UserStatsLibrary::execSetAchievement },
		{ "SetStatFloat", &USIK_UserStatsLibrary::execSetStatFloat },
		{ "SetStatInt", &USIK_UserStatsLibrary::execSetStatInt },
		{ "StoreStats", &USIK_UserStatsLibrary::execStoreStats },
		{ "UpdateAvgRateStat", &USIK_UserStatsLibrary::execUpdateAvgRateStat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_UserStatsLibrary);
UClass* Z_Construct_UClass_USIK_UserStatsLibrary_NoRegister()
{
	return USIK_UserStatsLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_UserStatsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_CacheCurrentStats, "CacheCurrentStats" }, // 722593926
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_ClearAchievement, "ClearAchievement" }, // 2098292595
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievement, "GetAchievement" }, // 1342329825
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAchievedPercent, "GetAchievementAchievedPercent" }, // 2603251584
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementAndUnlockTime, "GetAchievementAndUnlockTime" }, // 1442228519
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementDisplayAttribute, "GetAchievementDisplayAttribute" }, // 1613692627
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementIcon, "GetAchievementIcon" }, // 1449368164
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetAchievementName, "GetAchievementName" }, // 2675647385
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatFloat, "GetGlobalStatFloat" }, // 1601415500
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryFloat, "GetGlobalStatHistoryFloat" }, // 3958884777
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatHistoryInt, "GetGlobalStatHistoryInt" }, // 3778201840
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetGlobalStatInt, "GetGlobalStatInt" }, // 4109073090
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardDisplayType, "GetLeaderboardDisplayType" }, // 3546304794
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardEntryCount, "GetLeaderboardEntryCount" }, // 1233585067
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardName, "GetLeaderboardName" }, // 775969727
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetLeaderboardSortMethod, "GetLeaderboardSortMethod" }, // 1896778856
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetMostAchievedAchievementInfo, "GetMostAchievedAchievementInfo" }, // 2034724592
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetNextMostAchievedAchievementInfo, "GetNextMostAchievedAchievementInfo" }, // 2707701622
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetNumOfAchievements, "GetNumOfAchievements" }, // 33360721
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatFloat, "GetStatFloat" }, // 1509168647
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetStatInt, "GetStatInt" }, // 3908599455
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievement, "GetUserAchievement" }, // 1071987864
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_GetUserAchievementAndUnlockTime, "GetUserAchievementAndUnlockTime" }, // 4167593510
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_IndicateAchievementProgress, "IndicateAchievementProgress" }, // 819092446
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_RequestCurrentStats, "RequestCurrentStats" }, // 926930859
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_ResetAllStats, "ResetAllStats" }, // 1272799492
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_SetAchievement, "SetAchievement" }, // 1302550383
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatFloat, "SetStatFloat" }, // 1528446405
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_SetStatInt, "SetStatInt" }, // 3389955082
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_StoreStats, "StoreStats" }, // 695657739
		{ &Z_Construct_UFunction_USIK_UserStatsLibrary_UpdateAvgRateStat, "UpdateAvgRateStat" }, // 3711227851
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UserStatsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_UserStatsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserStatsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UserStatsLibrary_Statics::ClassParams = {
	&USIK_UserStatsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserStatsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UserStatsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_UserStatsLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_UserStatsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UserStatsLibrary.OuterSingleton, Z_Construct_UClass_USIK_UserStatsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UserStatsLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_UserStatsLibrary>()
{
	return USIK_UserStatsLibrary::StaticClass();
}
USIK_UserStatsLibrary::USIK_UserStatsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_UserStatsLibrary);
USIK_UserStatsLibrary::~USIK_UserStatsLibrary() {}
// End Class USIK_UserStatsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UserStatsLibrary, USIK_UserStatsLibrary::StaticClass, TEXT("USIK_UserStatsLibrary"), &Z_Registration_Info_UClass_USIK_UserStatsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UserStatsLibrary), 2880062615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_4191376154(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
