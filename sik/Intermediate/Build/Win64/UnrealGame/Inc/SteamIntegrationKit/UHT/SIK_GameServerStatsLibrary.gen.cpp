// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/GameServerStats/SIK_GameServerStatsLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GameServerStatsLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerStatsLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerStatsLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_GameServerStatsLibrary Function ClearUserAchievement
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics
{
	struct SIK_GameServerStatsLibrary_eventClearUserAchievement_Parms
	{
		FSIK_SteamId SteamId;
		FString AchievementName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "Comment", "/*\n\x09Resets the unlock status of an achievement for the specified user.\n\n\x09This is primarily only ever used for testing.\n\n\x09You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09\n\x09This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n\x09NOTE: This will work only on achievements that game servers are allowed to set. If the \"Set By\" field for this achievement is \"Official GS\" then only game servers that have been declared as officially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\x09 */" },
		{ "DisplayName", "Clear User Achievement" },
		{ "Keywords", "ClearUserAchievement" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
		{ "ToolTip", "Resets the unlock status of an achievement for the specified user.\n\nThis is primarily only ever used for testing.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\nNOTE: This will work only on achievements that game servers are allowed to set. If the \"Set By\" field for this achievement is \"Official GS\" then only game servers that have been declared as officially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventClearUserAchievement_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventClearUserAchievement_Parms, AchievementName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventClearUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventClearUserAchievement_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "ClearUserAchievement", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::SIK_GameServerStatsLibrary_eventClearUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::SIK_GameServerStatsLibrary_eventClearUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execClearUserAchievement)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::ClearUserAchievement(Z_Param_SteamId,Z_Param_AchievementName);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function ClearUserAchievement

// Begin Class USIK_GameServerStatsLibrary Function GetFloatUserStat
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics
{
	struct SIK_GameServerStatsLibrary_eventGetFloatUserStat_Parms
	{
		FSIK_SteamId SteamId;
		FString StatName;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Get Float User Stat" },
		{ "Keywords", "GetUserStat" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventGetFloatUserStat_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventGetFloatUserStat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventGetFloatUserStat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventGetFloatUserStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventGetFloatUserStat_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "GetFloatUserStat", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::SIK_GameServerStatsLibrary_eventGetFloatUserStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::SIK_GameServerStatsLibrary_eventGetFloatUserStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execGetFloatUserStat)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::GetFloatUserStat(Z_Param_SteamId,Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function GetFloatUserStat

// Begin Class USIK_GameServerStatsLibrary Function GetIntUserStat
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics
{
	struct SIK_GameServerStatsLibrary_eventGetIntUserStat_Parms
	{
		FSIK_SteamId SteamId;
		FString StatName;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Get Int User Stat" },
		{ "Keywords", "GetUserStat" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventGetIntUserStat_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventGetIntUserStat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventGetIntUserStat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventGetIntUserStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventGetIntUserStat_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "GetIntUserStat", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::SIK_GameServerStatsLibrary_eventGetIntUserStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::SIK_GameServerStatsLibrary_eventGetIntUserStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execGetIntUserStat)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::GetIntUserStat(Z_Param_SteamId,Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function GetIntUserStat

// Begin Class USIK_GameServerStatsLibrary Function GetUserAchievement
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics
{
	struct SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms
	{
		FSIK_SteamId SteamId;
		FString AchievementName;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Get User Achievement" },
		{ "Keywords", "GetUserAchievement" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms, AchievementName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "GetUserAchievement", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::SIK_GameServerStatsLibrary_eventGetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execGetUserAchievement)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::GetUserAchievement(Z_Param_SteamId,Z_Param_AchievementName,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function GetUserAchievement

// Begin Class USIK_GameServerStatsLibrary Function RequestUserStats
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics
{
	struct SIK_GameServerStatsLibrary_eventRequestUserStats_Parms
	{
		FSIK_SteamId SteamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Request User Stats" },
		{ "Keywords", "RequestUserStats" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventRequestUserStats_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventRequestUserStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventRequestUserStats_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "RequestUserStats", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::SIK_GameServerStatsLibrary_eventRequestUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::SIK_GameServerStatsLibrary_eventRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execRequestUserStats)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::RequestUserStats(Z_Param_SteamId);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function RequestUserStats

// Begin Class USIK_GameServerStatsLibrary Function SetFloatUserStat
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics
{
	struct SIK_GameServerStatsLibrary_eventSetFloatUserStat_Parms
	{
		FSIK_SteamId SteamId;
		FString StatName;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Set Float User Stat" },
		{ "Keywords", "SetUserStat" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventSetFloatUserStat_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventSetFloatUserStat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventSetFloatUserStat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventSetFloatUserStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventSetFloatUserStat_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "SetFloatUserStat", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::SIK_GameServerStatsLibrary_eventSetFloatUserStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::SIK_GameServerStatsLibrary_eventSetFloatUserStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execSetFloatUserStat)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::SetFloatUserStat(Z_Param_SteamId,Z_Param_StatName,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function SetFloatUserStat

// Begin Class USIK_GameServerStatsLibrary Function SetIntUserStat
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics
{
	struct SIK_GameServerStatsLibrary_eventSetIntUserStat_Parms
	{
		FSIK_SteamId SteamId;
		FString StatName;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Set Int User Stat" },
		{ "Keywords", "SetUserStat" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventSetIntUserStat_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventSetIntUserStat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventSetIntUserStat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventSetIntUserStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventSetIntUserStat_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "SetIntUserStat", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::SIK_GameServerStatsLibrary_eventSetIntUserStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::SIK_GameServerStatsLibrary_eventSetIntUserStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execSetIntUserStat)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::SetIntUserStat(Z_Param_SteamId,Z_Param_StatName,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function SetIntUserStat

// Begin Class USIK_GameServerStatsLibrary Function SetUserAchievement
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics
{
	struct SIK_GameServerStatsLibrary_eventSetUserAchievement_Parms
	{
		FSIK_SteamId SteamId;
		FString AchievementName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Set User Achievement" },
		{ "Keywords", "SetUserAchievement" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventSetUserAchievement_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventSetUserAchievement_Parms, AchievementName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventSetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventSetUserAchievement_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "SetUserAchievement", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::SIK_GameServerStatsLibrary_eventSetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::SIK_GameServerStatsLibrary_eventSetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execSetUserAchievement)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AchievementName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::SetUserAchievement(Z_Param_SteamId,Z_Param_AchievementName);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function SetUserAchievement

// Begin Class USIK_GameServerStatsLibrary Function StoreUserStats
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics
{
	struct SIK_GameServerStatsLibrary_eventStoreUserStats_Parms
	{
		FSIK_SteamId SteamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Store User Stats" },
		{ "Keywords", "StoreUserStats" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventStoreUserStats_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventStoreUserStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventStoreUserStats_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "StoreUserStats", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::SIK_GameServerStatsLibrary_eventStoreUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::SIK_GameServerStatsLibrary_eventStoreUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execStoreUserStats)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::StoreUserStats(Z_Param_SteamId);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function StoreUserStats

// Begin Class USIK_GameServerStatsLibrary Function UpdateUserAvgRateStat
struct Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics
{
	struct SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms
	{
		FSIK_SteamId SteamId;
		FString StatName;
		float CountThisSession;
		float SessionLength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server Stats" },
		{ "DisplayName", "Update User Avg Rate Stat" },
		{ "Keywords", "UpdateUserStat" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms, SessionLength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms), &Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_SessionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GameServerStatsLibrary, nullptr, "UpdateUserAvgRateStat", nullptr, nullptr, Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::SIK_GameServerStatsLibrary_eventUpdateUserAvgRateStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerStatsLibrary::execUpdateUserAvgRateStat)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerStatsLibrary::UpdateUserAvgRateStat(Z_Param_SteamId,Z_Param_StatName,Z_Param_CountThisSession,Z_Param_SessionLength);
	P_NATIVE_END;
}
// End Class USIK_GameServerStatsLibrary Function UpdateUserAvgRateStat

// Begin Class USIK_GameServerStatsLibrary
void USIK_GameServerStatsLibrary::StaticRegisterNativesUSIK_GameServerStatsLibrary()
{
	UClass* Class = USIK_GameServerStatsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearUserAchievement", &USIK_GameServerStatsLibrary::execClearUserAchievement },
		{ "GetFloatUserStat", &USIK_GameServerStatsLibrary::execGetFloatUserStat },
		{ "GetIntUserStat", &USIK_GameServerStatsLibrary::execGetIntUserStat },
		{ "GetUserAchievement", &USIK_GameServerStatsLibrary::execGetUserAchievement },
		{ "RequestUserStats", &USIK_GameServerStatsLibrary::execRequestUserStats },
		{ "SetFloatUserStat", &USIK_GameServerStatsLibrary::execSetFloatUserStat },
		{ "SetIntUserStat", &USIK_GameServerStatsLibrary::execSetIntUserStat },
		{ "SetUserAchievement", &USIK_GameServerStatsLibrary::execSetUserAchievement },
		{ "StoreUserStats", &USIK_GameServerStatsLibrary::execStoreUserStats },
		{ "UpdateUserAvgRateStat", &USIK_GameServerStatsLibrary::execUpdateUserAvgRateStat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GameServerStatsLibrary);
UClass* Z_Construct_UClass_USIK_GameServerStatsLibrary_NoRegister()
{
	return USIK_GameServerStatsLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_ClearUserAchievement, "ClearUserAchievement" }, // 791418380
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetFloatUserStat, "GetFloatUserStat" }, // 4098302112
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetIntUserStat, "GetIntUserStat" }, // 3770401888
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_GetUserAchievement, "GetUserAchievement" }, // 284395468
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_RequestUserStats, "RequestUserStats" }, // 4150640031
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetFloatUserStat, "SetFloatUserStat" }, // 3321265948
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetIntUserStat, "SetIntUserStat" }, // 1936352144
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_SetUserAchievement, "SetUserAchievement" }, // 3576799327
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_StoreUserStats, "StoreUserStats" }, // 2021804077
		{ &Z_Construct_UFunction_USIK_GameServerStatsLibrary_UpdateUserAvgRateStat, "UpdateUserAvgRateStat" }, // 533425987
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GameServerStatsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics::ClassParams = {
	&USIK_GameServerStatsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GameServerStatsLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_GameServerStatsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GameServerStatsLibrary.OuterSingleton, Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GameServerStatsLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_GameServerStatsLibrary>()
{
	return USIK_GameServerStatsLibrary::StaticClass();
}
USIK_GameServerStatsLibrary::USIK_GameServerStatsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GameServerStatsLibrary);
USIK_GameServerStatsLibrary::~USIK_GameServerStatsLibrary() {}
// End Class USIK_GameServerStatsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GameServerStatsLibrary, USIK_GameServerStatsLibrary::StaticClass, TEXT("USIK_GameServerStatsLibrary"), &Z_Registration_Info_UClass_USIK_GameServerStatsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GameServerStatsLibrary), 2258507842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_2371627511(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
