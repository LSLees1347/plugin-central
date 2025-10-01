// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_NetworkingUtilsLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingUtilsLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingUtilsLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_NetworkingUtilsLibrary Function CheckPingDataUpToDate
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventCheckPingDataUpToDate_Parms
	{
		float MaxAgeSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAgeSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventCheckPingDataUpToDate_Parms, MaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingUtilsLibrary_eventCheckPingDataUpToDate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingUtilsLibrary_eventCheckPingDataUpToDate_Parms), &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::NewProp_MaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "CheckPingDataUpToDate", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::SIK_NetworkingUtilsLibrary_eventCheckPingDataUpToDate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::SIK_NetworkingUtilsLibrary_eventCheckPingDataUpToDate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execCheckPingDataUpToDate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingUtilsLibrary::CheckPingDataUpToDate(Z_Param_MaxAgeSeconds);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function CheckPingDataUpToDate

// Begin Class USIK_NetworkingUtilsLibrary Function ConvertPingLocationToString
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventConvertPingLocationToString_Parms
	{
		FSIK_SteamNetworkPingLocation Location;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventConvertPingLocationToString_Parms, Location), Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 4031346720
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventConvertPingLocationToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "ConvertPingLocationToString", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::SIK_NetworkingUtilsLibrary_eventConvertPingLocationToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::SIK_NetworkingUtilsLibrary_eventConvertPingLocationToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execConvertPingLocationToString)
{
	P_GET_STRUCT_REF(FSIK_SteamNetworkPingLocation,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_NetworkingUtilsLibrary::ConvertPingLocationToString(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function ConvertPingLocationToString

// Begin Class USIK_NetworkingUtilsLibrary Function EstimatePingTimeBetweenTwoLocations
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventEstimatePingTimeBetweenTwoLocations_Parms
	{
		FSIK_SteamNetworkPingLocation Location1;
		FSIK_SteamNetworkPingLocation Location2;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1 = { "Location1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventEstimatePingTimeBetweenTwoLocations_Parms, Location1), Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location1_MetaData), NewProp_Location1_MetaData) }; // 4031346720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2 = { "Location2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventEstimatePingTimeBetweenTwoLocations_Parms, Location2), Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location2_MetaData), NewProp_Location2_MetaData) }; // 4031346720
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventEstimatePingTimeBetweenTwoLocations_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "EstimatePingTimeBetweenTwoLocations", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::SIK_NetworkingUtilsLibrary_eventEstimatePingTimeBetweenTwoLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::SIK_NetworkingUtilsLibrary_eventEstimatePingTimeBetweenTwoLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execEstimatePingTimeBetweenTwoLocations)
{
	P_GET_STRUCT_REF(FSIK_SteamNetworkPingLocation,Z_Param_Out_Location1);
	P_GET_STRUCT_REF(FSIK_SteamNetworkPingLocation,Z_Param_Out_Location2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_NetworkingUtilsLibrary::EstimatePingTimeBetweenTwoLocations(Z_Param_Out_Location1,Z_Param_Out_Location2);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function EstimatePingTimeBetweenTwoLocations

// Begin Class USIK_NetworkingUtilsLibrary Function EstimatePingTimeFromLocalHost
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventEstimatePingTimeFromLocalHost_Parms
	{
		FSIK_SteamNetworkPingLocation Location;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventEstimatePingTimeFromLocalHost_Parms, Location), Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 4031346720
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventEstimatePingTimeFromLocalHost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "EstimatePingTimeFromLocalHost", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::SIK_NetworkingUtilsLibrary_eventEstimatePingTimeFromLocalHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::SIK_NetworkingUtilsLibrary_eventEstimatePingTimeFromLocalHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execEstimatePingTimeFromLocalHost)
{
	P_GET_STRUCT_REF(FSIK_SteamNetworkPingLocation,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_NetworkingUtilsLibrary::EstimatePingTimeFromLocalHost(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function EstimatePingTimeFromLocalHost

// Begin Class USIK_NetworkingUtilsLibrary Function GetDirectPingToPOP
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventGetDirectPingToPOP_Parms
	{
		FSIK_SteamNetworkingPOPID PopID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PopID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::NewProp_PopID = { "PopID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetDirectPingToPOP_Parms, PopID), Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID, METADATA_PARAMS(0, nullptr) }; // 1931144730
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetDirectPingToPOP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::NewProp_PopID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "GetDirectPingToPOP", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::SIK_NetworkingUtilsLibrary_eventGetDirectPingToPOP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::SIK_NetworkingUtilsLibrary_eventGetDirectPingToPOP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execGetDirectPingToPOP)
{
	P_GET_STRUCT(FSIK_SteamNetworkingPOPID,Z_Param_PopID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_NetworkingUtilsLibrary::GetDirectPingToPOP(Z_Param_PopID);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function GetDirectPingToPOP

// Begin Class USIK_NetworkingUtilsLibrary Function GetLocalPingLocation
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventGetLocalPingLocation_Parms
	{
		FSIK_SteamNetworkPingLocation OutPingLocation;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPingLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::NewProp_OutPingLocation = { "OutPingLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetLocalPingLocation_Parms, OutPingLocation), Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation, METADATA_PARAMS(0, nullptr) }; // 4031346720
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetLocalPingLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::NewProp_OutPingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "GetLocalPingLocation", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::SIK_NetworkingUtilsLibrary_eventGetLocalPingLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::SIK_NetworkingUtilsLibrary_eventGetLocalPingLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execGetLocalPingLocation)
{
	P_GET_STRUCT_REF(FSIK_SteamNetworkPingLocation,Z_Param_Out_OutPingLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USIK_NetworkingUtilsLibrary::GetLocalPingLocation(Z_Param_Out_OutPingLocation);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function GetLocalPingLocation

// Begin Class USIK_NetworkingUtilsLibrary Function GetPingToDataCenter
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventGetPingToDataCenter_Parms
	{
		FSIK_SteamNetworkingPOPID PopID;
		FSIK_SteamNetworkingPOPID ViaRelayPoP;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PopID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViaRelayPoP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::NewProp_PopID = { "PopID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetPingToDataCenter_Parms, PopID), Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID, METADATA_PARAMS(0, nullptr) }; // 1931144730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::NewProp_ViaRelayPoP = { "ViaRelayPoP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetPingToDataCenter_Parms, ViaRelayPoP), Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID, METADATA_PARAMS(0, nullptr) }; // 1931144730
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetPingToDataCenter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::NewProp_PopID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::NewProp_ViaRelayPoP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "GetPingToDataCenter", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::SIK_NetworkingUtilsLibrary_eventGetPingToDataCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::SIK_NetworkingUtilsLibrary_eventGetPingToDataCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execGetPingToDataCenter)
{
	P_GET_STRUCT(FSIK_SteamNetworkingPOPID,Z_Param_PopID);
	P_GET_STRUCT_REF(FSIK_SteamNetworkingPOPID,Z_Param_Out_ViaRelayPoP);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_NetworkingUtilsLibrary::GetPingToDataCenter(Z_Param_PopID,Z_Param_Out_ViaRelayPoP);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function GetPingToDataCenter

// Begin Class USIK_NetworkingUtilsLibrary Function GetPOPCount
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventGetPOPCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetPOPCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "GetPOPCount", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::SIK_NetworkingUtilsLibrary_eventGetPOPCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::SIK_NetworkingUtilsLibrary_eventGetPOPCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execGetPOPCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_NetworkingUtilsLibrary::GetPOPCount();
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function GetPOPCount

// Begin Class USIK_NetworkingUtilsLibrary Function GetPOPList
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventGetPOPList_Parms
	{
		int32 ListSize;
		TArray<FSIK_SteamNetworkingPOPID> OutPOPIDList;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ListSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPOPIDList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPOPIDList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::NewProp_ListSize = { "ListSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetPOPList_Parms, ListSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::NewProp_OutPOPIDList_Inner = { "OutPOPIDList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID, METADATA_PARAMS(0, nullptr) }; // 1931144730
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::NewProp_OutPOPIDList = { "OutPOPIDList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetPOPList_Parms, OutPOPIDList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1931144730
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetPOPList_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::NewProp_ListSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::NewProp_OutPOPIDList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::NewProp_OutPOPIDList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "GetPOPList", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::SIK_NetworkingUtilsLibrary_eventGetPOPList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::SIK_NetworkingUtilsLibrary_eventGetPOPList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execGetPOPList)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ListSize);
	P_GET_TARRAY_REF(FSIK_SteamNetworkingPOPID,Z_Param_Out_OutPOPIDList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_NetworkingUtilsLibrary::GetPOPList(Z_Param_ListSize,Z_Param_Out_OutPOPIDList);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function GetPOPList

// Begin Class USIK_NetworkingUtilsLibrary Function GetRelayNetworkStatus
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventGetRelayNetworkStatus_Parms
	{
		TEnumAsByte<ESIK_SteamNetworkingAvailability> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventGetRelayNetworkStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability, METADATA_PARAMS(0, nullptr) }; // 1210088247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "GetRelayNetworkStatus", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::SIK_NetworkingUtilsLibrary_eventGetRelayNetworkStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::SIK_NetworkingUtilsLibrary_eventGetRelayNetworkStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execGetRelayNetworkStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_SteamNetworkingAvailability>*)Z_Param__Result=USIK_NetworkingUtilsLibrary::GetRelayNetworkStatus();
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function GetRelayNetworkStatus

// Begin Class USIK_NetworkingUtilsLibrary Function InitRelayNetworkAccess
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_InitRelayNetworkAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_InitRelayNetworkAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "InitRelayNetworkAccess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_InitRelayNetworkAccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_InitRelayNetworkAccess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_InitRelayNetworkAccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_InitRelayNetworkAccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execInitRelayNetworkAccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_NetworkingUtilsLibrary::InitRelayNetworkAccess();
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function InitRelayNetworkAccess

// Begin Class USIK_NetworkingUtilsLibrary Function ParsePingLocationString
struct Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics
{
	struct SIK_NetworkingUtilsLibrary_eventParsePingLocationString_Parms
	{
		FString PingLocationString;
		FSIK_SteamNetworkPingLocation OutPingLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking Utils" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PingLocationString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PingLocationString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPingLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::NewProp_PingLocationString = { "PingLocationString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventParsePingLocationString_Parms, PingLocationString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PingLocationString_MetaData), NewProp_PingLocationString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::NewProp_OutPingLocation = { "OutPingLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingUtilsLibrary_eventParsePingLocationString_Parms, OutPingLocation), Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation, METADATA_PARAMS(0, nullptr) }; // 4031346720
void Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingUtilsLibrary_eventParsePingLocationString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingUtilsLibrary_eventParsePingLocationString_Parms), &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::NewProp_PingLocationString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::NewProp_OutPingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingUtilsLibrary, nullptr, "ParsePingLocationString", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::SIK_NetworkingUtilsLibrary_eventParsePingLocationString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::SIK_NetworkingUtilsLibrary_eventParsePingLocationString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingUtilsLibrary::execParsePingLocationString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PingLocationString);
	P_GET_STRUCT_REF(FSIK_SteamNetworkPingLocation,Z_Param_Out_OutPingLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingUtilsLibrary::ParsePingLocationString(Z_Param_PingLocationString,Z_Param_Out_OutPingLocation);
	P_NATIVE_END;
}
// End Class USIK_NetworkingUtilsLibrary Function ParsePingLocationString

// Begin Class USIK_NetworkingUtilsLibrary
void USIK_NetworkingUtilsLibrary::StaticRegisterNativesUSIK_NetworkingUtilsLibrary()
{
	UClass* Class = USIK_NetworkingUtilsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckPingDataUpToDate", &USIK_NetworkingUtilsLibrary::execCheckPingDataUpToDate },
		{ "ConvertPingLocationToString", &USIK_NetworkingUtilsLibrary::execConvertPingLocationToString },
		{ "EstimatePingTimeBetweenTwoLocations", &USIK_NetworkingUtilsLibrary::execEstimatePingTimeBetweenTwoLocations },
		{ "EstimatePingTimeFromLocalHost", &USIK_NetworkingUtilsLibrary::execEstimatePingTimeFromLocalHost },
		{ "GetDirectPingToPOP", &USIK_NetworkingUtilsLibrary::execGetDirectPingToPOP },
		{ "GetLocalPingLocation", &USIK_NetworkingUtilsLibrary::execGetLocalPingLocation },
		{ "GetPingToDataCenter", &USIK_NetworkingUtilsLibrary::execGetPingToDataCenter },
		{ "GetPOPCount", &USIK_NetworkingUtilsLibrary::execGetPOPCount },
		{ "GetPOPList", &USIK_NetworkingUtilsLibrary::execGetPOPList },
		{ "GetRelayNetworkStatus", &USIK_NetworkingUtilsLibrary::execGetRelayNetworkStatus },
		{ "InitRelayNetworkAccess", &USIK_NetworkingUtilsLibrary::execInitRelayNetworkAccess },
		{ "ParsePingLocationString", &USIK_NetworkingUtilsLibrary::execParsePingLocationString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_NetworkingUtilsLibrary);
UClass* Z_Construct_UClass_USIK_NetworkingUtilsLibrary_NoRegister()
{
	return USIK_NetworkingUtilsLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
		{ "ModuleRelativePath", "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_CheckPingDataUpToDate, "CheckPingDataUpToDate" }, // 2915014363
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ConvertPingLocationToString, "ConvertPingLocationToString" }, // 1738235921
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeBetweenTwoLocations, "EstimatePingTimeBetweenTwoLocations" }, // 318050939
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_EstimatePingTimeFromLocalHost, "EstimatePingTimeFromLocalHost" }, // 135583895
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetDirectPingToPOP, "GetDirectPingToPOP" }, // 3052224912
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetLocalPingLocation, "GetLocalPingLocation" }, // 426433700
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPingToDataCenter, "GetPingToDataCenter" }, // 2887753509
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPCount, "GetPOPCount" }, // 1745587550
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetPOPList, "GetPOPList" }, // 657755356
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_GetRelayNetworkStatus, "GetRelayNetworkStatus" }, // 695326584
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_InitRelayNetworkAccess, "InitRelayNetworkAccess" }, // 2591380995
		{ &Z_Construct_UFunction_USIK_NetworkingUtilsLibrary_ParsePingLocationString, "ParsePingLocationString" }, // 2569853452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_NetworkingUtilsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics::ClassParams = {
	&USIK_NetworkingUtilsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_NetworkingUtilsLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_NetworkingUtilsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_NetworkingUtilsLibrary.OuterSingleton, Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_NetworkingUtilsLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_NetworkingUtilsLibrary>()
{
	return USIK_NetworkingUtilsLibrary::StaticClass();
}
USIK_NetworkingUtilsLibrary::USIK_NetworkingUtilsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_NetworkingUtilsLibrary);
USIK_NetworkingUtilsLibrary::~USIK_NetworkingUtilsLibrary() {}
// End Class USIK_NetworkingUtilsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_NetworkingUtilsLibrary, USIK_NetworkingUtilsLibrary::StaticClass, TEXT("USIK_NetworkingUtilsLibrary"), &Z_Registration_Info_UClass_USIK_NetworkingUtilsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_NetworkingUtilsLibrary), 4113156814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_3688772776(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
