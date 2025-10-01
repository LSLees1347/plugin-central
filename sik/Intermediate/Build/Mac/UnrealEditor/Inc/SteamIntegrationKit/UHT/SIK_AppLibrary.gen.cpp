// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Apps/SIK_AppLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_AppLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AppLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AppLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_AppLibrary Function GetAppBuildID
struct Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics
{
	struct SIK_AppLibrary_eventGetAppBuildID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the build ID of the current app.\n\x09@return - The build ID of the current app.\n\x09*/" },
		{ "DisplayName", "Get App Build ID" },
		{ "Keywords", "GetAppBuildID" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the build ID of the current app.\n@return - The build ID of the current app." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetAppBuildID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetAppBuildID", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::SIK_AppLibrary_eventGetAppBuildID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::SIK_AppLibrary_eventGetAppBuildID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetAppBuildID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_AppLibrary::GetAppBuildID();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetAppBuildID

// Begin Class USIK_AppLibrary Function GetAppInstallDir
struct Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics
{
	struct SIK_AppLibrary_eventGetAppInstallDir_Parms
	{
		int32 AppID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the install directory of an app.\n\x09@param AppID - The AppID of the app to get the install directory for.\n\x09@return - The install directory of the app.\n\x09*/" },
		{ "DisplayName", "Get App Install Dir" },
		{ "Keywords", "GetAppInstallDir" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the install directory of an app.\n@param AppID - The AppID of the app to get the install directory for.\n@return - The install directory of the app." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetAppInstallDir", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::SIK_AppLibrary_eventGetAppInstallDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::SIK_AppLibrary_eventGetAppInstallDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetAppInstallDir)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_AppLibrary::GetAppInstallDir(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetAppInstallDir

// Begin Class USIK_AppLibrary Function GetAppOwner
struct Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics
{
	struct SIK_AppLibrary_eventGetAppOwner_Parms
	{
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the Steam ID of the owner of the current app.\n\x09@return - The Steam ID of the app owner.\n\x09*/" },
		{ "DisplayName", "Get App Owner" },
		{ "Keywords", "GetAppOwner" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the Steam ID of the owner of the current app.\n@return - The Steam ID of the app owner." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetAppOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetAppOwner", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::SIK_AppLibrary_eventGetAppOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::SIK_AppLibrary_eventGetAppOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetAppOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_AppLibrary::GetAppOwner();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetAppOwner

// Begin Class USIK_AppLibrary Function GetAvailableGameLanguages
struct Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics
{
	struct SIK_AppLibrary_eventGetAvailableGameLanguages_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the list of available game languages for the current app.\n\x09@return - A list of available game languages.\n\x09*/" },
		{ "DisplayName", "Get Available Game Languages" },
		{ "Keywords", "GetAvailableGameLanguages" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the list of available game languages for the current app.\n@return - A list of available game languages." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetAvailableGameLanguages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetAvailableGameLanguages", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::SIK_AppLibrary_eventGetAvailableGameLanguages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::SIK_AppLibrary_eventGetAvailableGameLanguages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetAvailableGameLanguages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=USIK_AppLibrary::GetAvailableGameLanguages();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetAvailableGameLanguages

// Begin Class USIK_AppLibrary Function GetCurrentBetaName
struct Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics
{
	struct SIK_AppLibrary_eventGetCurrentBetaName_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the current beta name for the app.\n\x09@param Name - The name of the current beta.\n\x09@return - true if a beta name is available, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get Current Beta Name" },
		{ "Keywords", "GetCurrentBetaName" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the current beta name for the app.\n@param Name - The name of the current beta.\n@return - true if a beta name is available, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetCurrentBetaName_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventGetCurrentBetaName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventGetCurrentBetaName_Parms), &Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetCurrentBetaName", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::SIK_AppLibrary_eventGetCurrentBetaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::SIK_AppLibrary_eventGetCurrentBetaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetCurrentBetaName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::GetCurrentBetaName(Z_Param_Out_Name);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetCurrentBetaName

// Begin Class USIK_AppLibrary Function GetCurrentGameLanguage
struct Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics
{
	struct SIK_AppLibrary_eventGetCurrentGameLanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the current game language for the app.\n\x09@return - The current game language.\n\x09*/" },
		{ "DisplayName", "Get Current Game Language" },
		{ "Keywords", "GetCurrentGameLanguage" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the current game language for the app.\n@return - The current game language." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetCurrentGameLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetCurrentGameLanguage", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::SIK_AppLibrary_eventGetCurrentGameLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::SIK_AppLibrary_eventGetCurrentGameLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetCurrentGameLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_AppLibrary::GetCurrentGameLanguage();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetCurrentGameLanguage

// Begin Class USIK_AppLibrary Function GetDLCCount
struct Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics
{
	struct SIK_AppLibrary_eventGetDLCCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the number of DLCs for the current app.\n\x09@return - The number of DLCs.\n\x09*/" },
		{ "DisplayName", "Get DLC Count" },
		{ "Keywords", "GetDLCCount" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the number of DLCs for the current app.\n@return - The number of DLCs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetDLCCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetDLCCount", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::SIK_AppLibrary_eventGetDLCCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::SIK_AppLibrary_eventGetDLCCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetDLCCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_AppLibrary::GetDLCCount();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetDLCCount

// Begin Class USIK_AppLibrary Function GetDLCDataByIndex
struct Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics
{
	struct SIK_AppLibrary_eventGetDLCDataByIndex_Parms
	{
		int32 Index;
		FSIK_AppId AppID;
		bool Available;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Returns metadata for a DLC by index.\n\x09@param Index - Index of the DLC to get between 0 and GetDLCCount.\n\x09@param AppID - Returns the App ID of the DLC.\n\x09@param Available - Returns whether the DLC is currently available on the Steam store. Will be false if the DLC does not have a visible store page\n\x09@param Name - Returns the name of the DLC by copying it into this buffer.\n\x09@return - true if the current App ID has DLC's associated with it and iDLC falls between the range of 0 to GetDLCCount, otherwise false.\n\x09*/" },
		{ "DisplayName", "Get DLC Data By Index" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Returns metadata for a DLC by index.\n@param Index - Index of the DLC to get between 0 and GetDLCCount.\n@param AppID - Returns the App ID of the DLC.\n@param Available - Returns whether the DLC is currently available on the Steam store. Will be false if the DLC does not have a visible store page\n@param Name - Returns the name of the DLC by copying it into this buffer.\n@return - true if the current App ID has DLC's associated with it and iDLC falls between the range of 0 to GetDLCCount, otherwise false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static void NewProp_Available_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Available;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetDLCDataByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetDLCDataByIndex_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
void Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_Available_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventGetDLCDataByIndex_Parms*)Obj)->Available = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_Available = { "Available", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventGetDLCDataByIndex_Parms), &Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_Available_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetDLCDataByIndex_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventGetDLCDataByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventGetDLCDataByIndex_Parms), &Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_Available,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetDLCDataByIndex", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::SIK_AppLibrary_eventGetDLCDataByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::SIK_AppLibrary_eventGetDLCDataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetDLCDataByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FSIK_AppId,Z_Param_Out_AppID);
	P_GET_UBOOL_REF(Z_Param_Out_Available);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::GetDLCDataByIndex(Z_Param_Index,Z_Param_Out_AppID,Z_Param_Out_Available,Z_Param_Out_Name);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetDLCDataByIndex

// Begin Class USIK_AppLibrary Function GetDLCDownloadProgress
struct Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics
{
	struct SIK_AppLibrary_eventGetDLCDownloadProgress_Parms
	{
		FSIK_AppId AppID;
		int64 BytesDownloaded;
		int64 BytesTotal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the download progress for a DLC.\n\x09@param AppID - The AppID of the DLC.\n\x09@param BytesDownloaded - The number of bytes downloaded.\n\x09@param BytesTotal - The total number of bytes to download.\n\x09@return - true if the download progress is available, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get DLC Download Progress" },
		{ "Keywords", "GetDLCDownloadProgress" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the download progress for a DLC.\n@param AppID - The AppID of the DLC.\n@param BytesDownloaded - The number of bytes downloaded.\n@param BytesTotal - The total number of bytes to download.\n@return - true if the download progress is available, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesTotal;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetDLCDownloadProgress_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetDLCDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetDLCDownloadProgress_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventGetDLCDownloadProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventGetDLCDownloadProgress_Parms), &Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetDLCDownloadProgress", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::SIK_AppLibrary_eventGetDLCDownloadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::SIK_AppLibrary_eventGetDLCDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetDLCDownloadProgress)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::GetDLCDownloadProgress(Z_Param_AppID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetDLCDownloadProgress

// Begin Class USIK_AppLibrary Function GetEarliestPurchaseUnixTime
struct Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics
{
	struct SIK_AppLibrary_eventGetEarliestPurchaseUnixTime_Parms
	{
		FSIK_AppId AppID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the Unix time of the earliest purchase of an app.\n\x09@param AppID - The AppID of the app.\n\x09@return - The Unix time of the earliest purchase.\n\x09*/" },
		{ "DisplayName", "Get Earliest Purchase Unix Time" },
		{ "Keywords", "GetEarliestPurchaseUnixTime" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the Unix time of the earliest purchase of an app.\n@param AppID - The AppID of the app.\n@return - The Unix time of the earliest purchase." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetEarliestPurchaseUnixTime_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetEarliestPurchaseUnixTime", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::SIK_AppLibrary_eventGetEarliestPurchaseUnixTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::SIK_AppLibrary_eventGetEarliestPurchaseUnixTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetEarliestPurchaseUnixTime)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_AppLibrary::GetEarliestPurchaseUnixTime(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetEarliestPurchaseUnixTime

// Begin Class USIK_AppLibrary Function GetInstalledDepots
struct Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics
{
	struct SIK_AppLibrary_eventGetInstalledDepots_Parms
	{
		FSIK_AppId AppID;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the list of installed depots for an app.\n\x09@param AppID - The AppID of the app.\n\x09@return - A list of installed depots.\n\x09*/" },
		{ "DisplayName", "Get Installed Depots" },
		{ "Keywords", "GetInstalledDepots" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the list of installed depots for an app.\n@param AppID - The AppID of the app.\n@return - A list of installed depots." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetInstalledDepots_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetInstalledDepots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetInstalledDepots", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::SIK_AppLibrary_eventGetInstalledDepots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::SIK_AppLibrary_eventGetInstalledDepots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetInstalledDepots)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=USIK_AppLibrary::GetInstalledDepots(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetInstalledDepots

// Begin Class USIK_AppLibrary Function GetLaunchCommandLine
struct Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics
{
	struct SIK_AppLibrary_eventGetLaunchCommandLine_Parms
	{
		FString CommandLine;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets the launch command line for the app.\n\x09@param CommandLine - The command line string.\n\x09@return - The length of the command line string.\n\x09*/" },
		{ "DisplayName", "Get Launch Command Line" },
		{ "Keywords", "GetLaunchCommandLine" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets the launch command line for the app.\n@param CommandLine - The command line string.\n@return - The length of the command line string." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::NewProp_CommandLine = { "CommandLine", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetLaunchCommandLine_Parms, CommandLine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetLaunchCommandLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::NewProp_CommandLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetLaunchCommandLine", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::SIK_AppLibrary_eventGetLaunchCommandLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::SIK_AppLibrary_eventGetLaunchCommandLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetLaunchCommandLine)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommandLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_AppLibrary::GetLaunchCommandLine(Z_Param_Out_CommandLine);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetLaunchCommandLine

// Begin Class USIK_AppLibrary Function GetLaunchQueryParam
struct Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics
{
	struct SIK_AppLibrary_eventGetLaunchQueryParam_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Gets a launch query parameter.\n\x09@param Key - The key of the query parameter.\n\x09@return - The value of the query parameter.\n\x09*/" },
		{ "DisplayName", "Get Launch Query Param" },
		{ "Keywords", "GetLaunchQueryParam" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Gets a launch query parameter.\n@param Key - The key of the query parameter.\n@return - The value of the query parameter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetLaunchQueryParam_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "GetLaunchQueryParam", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::SIK_AppLibrary_eventGetLaunchQueryParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::SIK_AppLibrary_eventGetLaunchQueryParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execGetLaunchQueryParam)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_AppLibrary::GetLaunchQueryParam(Z_Param_Key);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function GetLaunchQueryParam

// Begin Class USIK_AppLibrary Function InstallDLC
struct Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics
{
	struct SIK_AppLibrary_eventInstallDLC_Parms
	{
		FSIK_AppId AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Installs a DLC.\n\x09@param AppID - The AppID of the DLC to install.\n\x09*/" },
		{ "DisplayName", "Install DLC" },
		{ "Keywords", "InstallDLC" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Installs a DLC.\n@param AppID - The AppID of the DLC to install." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventInstallDLC_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "InstallDLC", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::SIK_AppLibrary_eventInstallDLC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::SIK_AppLibrary_eventInstallDLC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_InstallDLC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_InstallDLC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execInstallDLC)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_AppLibrary::InstallDLC(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function InstallDLC

// Begin Class USIK_AppLibrary Function IsAppInstalled
struct Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics
{
	struct SIK_AppLibrary_eventIsAppInstalled_Parms
	{
		FSIK_AppId AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if a specific app is installed.\n\n\x09The app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\n\n\x09This only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\x09\n\x09@param AppID - The AppID of the app to check.\n\x09@return - true if the app is installed, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is App Installed" },
		{ "Keywords", "BIsAppInstalled" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if a specific app is installed.\n\nThe app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\n\nThis only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\n@param AppID - The AppID of the app to check.\n@return - true if the app is installed, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventIsAppInstalled_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
void Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsAppInstalled_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsAppInstalled", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::SIK_AppLibrary_eventIsAppInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::SIK_AppLibrary_eventIsAppInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsAppInstalled)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsAppInstalled(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsAppInstalled

// Begin Class USIK_AppLibrary Function IsCybercafe
struct Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics
{
	struct SIK_AppLibrary_eventIsCybercafe_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if the user is in a Cybercafe.\n\x09@return - true if the user is in a Cybercafe, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Cybercafe" },
		{ "Keywords", "BIsCybercafe" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if the user is in a Cybercafe.\n@return - true if the user is in a Cybercafe, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsCybercafe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsCybercafe_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsCybercafe", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::SIK_AppLibrary_eventIsCybercafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::SIK_AppLibrary_eventIsCybercafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsCybercafe)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsCybercafe();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsCybercafe

// Begin Class USIK_AppLibrary Function IsDLCInstalled
struct Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics
{
	struct SIK_AppLibrary_eventIsDLCInstalled_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if a DLC is installed.\n\x09\n\x09Note: Should only be used for simple client side checks - not intended for granting in-game items.\n\x09\n\x09@param AppID - The AppID of the DLC to check.\n\x09@return - true if the user owns the DLC, and it's currently installed, otherwise false.\n\x09*/" },
		{ "DisplayName", "Is DLC Installed" },
		{ "Keywords", "BIsDLCInstalled" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if a DLC is installed.\n\nNote: Should only be used for simple client side checks - not intended for granting in-game items.\n\n@param AppID - The AppID of the DLC to check.\n@return - true if the user owns the DLC, and it's currently installed, otherwise false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventIsDLCInstalled_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsDLCInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsDLCInstalled_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsDLCInstalled", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::SIK_AppLibrary_eventIsDLCInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::SIK_AppLibrary_eventIsDLCInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsDLCInstalled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsDLCInstalled(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsDLCInstalled

// Begin Class USIK_AppLibrary Function IsLowViolence
struct Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics
{
	struct SIK_AppLibrary_eventIsLowViolence_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if the license owned by the user provides low violence depots.\n\n\x09Low violence depots are useful for copies sold in countries that have content restrictions.\n\x09\n\x09@return - true if the user is running a low violence version, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Low Violence" },
		{ "Keywords", "BIsLowViolence" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if the license owned by the user provides low violence depots.\n\nLow violence depots are useful for copies sold in countries that have content restrictions.\n\n@return - true if the user is running a low violence version, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsLowViolence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsLowViolence_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsLowViolence", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::SIK_AppLibrary_eventIsLowViolence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::SIK_AppLibrary_eventIsLowViolence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsLowViolence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsLowViolence();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsLowViolence

// Begin Class USIK_AppLibrary Function IsSubscribed
struct Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics
{
	struct SIK_AppLibrary_eventIsSubscribed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if the user is subscribed to the current app.\n\x09@return - true if the user is subscribed, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Subscribed" },
		{ "Keywords", "BIsSubscribed" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if the user is subscribed to the current app.\n@return - true if the user is subscribed, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsSubscribed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsSubscribed_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsSubscribed", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::SIK_AppLibrary_eventIsSubscribed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::SIK_AppLibrary_eventIsSubscribed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsSubscribed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsSubscribed();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsSubscribed

// Begin Class USIK_AppLibrary Function IsSubscribedApp
struct Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics
{
	struct SIK_AppLibrary_eventIsSubscribedApp_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if the user is subscribed to a specific app.\n\x09@param AppID - The AppID of the app to check.\n\x09@return - true if the user is subscribed to the app, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Subscribed App" },
		{ "Keywords", "BIsSubscribedApp" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if the user is subscribed to a specific app.\n@param AppID - The AppID of the app to check.\n@return - true if the user is subscribed to the app, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventIsSubscribedApp_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsSubscribedApp_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsSubscribedApp", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::SIK_AppLibrary_eventIsSubscribedApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::SIK_AppLibrary_eventIsSubscribedApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsSubscribedApp)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsSubscribedApp(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsSubscribedApp

// Begin Class USIK_AppLibrary Function IsSubscribedFromFamilySharing
struct Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics
{
	struct SIK_AppLibrary_eventIsSubscribedFromFamilySharing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if the user is subscribed to the app through Family Sharing.\n\x09@return - true if the user is subscribed through Family Sharing, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Subscribed From Family Sharing" },
		{ "Keywords", "BIsSubscribedFromFamilySharing" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if the user is subscribed to the app through Family Sharing.\n@return - true if the user is subscribed through Family Sharing, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsSubscribedFromFamilySharing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsSubscribedFromFamilySharing_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsSubscribedFromFamilySharing", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::SIK_AppLibrary_eventIsSubscribedFromFamilySharing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::SIK_AppLibrary_eventIsSubscribedFromFamilySharing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsSubscribedFromFamilySharing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsSubscribedFromFamilySharing();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsSubscribedFromFamilySharing

// Begin Class USIK_AppLibrary Function IsSubscribedFromFreeWeekend
struct Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics
{
	struct SIK_AppLibrary_eventIsSubscribedFromFreeWeekend_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if the user is subscribed to the app from a free weekend.\n\x09@return - true if the user is subscribed from a free weekend, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Subscribed From Free Weekend" },
		{ "Keywords", "BIsSubscribedFromFreeWeekend" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if the user is subscribed to the app from a free weekend.\n@return - true if the user is subscribed from a free weekend, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsSubscribedFromFreeWeekend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsSubscribedFromFreeWeekend_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsSubscribedFromFreeWeekend", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::SIK_AppLibrary_eventIsSubscribedFromFreeWeekend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::SIK_AppLibrary_eventIsSubscribedFromFreeWeekend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsSubscribedFromFreeWeekend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsSubscribedFromFreeWeekend();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsSubscribedFromFreeWeekend

// Begin Class USIK_AppLibrary Function IsTimedTrial
struct Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics
{
	struct SIK_AppLibrary_eventIsTimedTrial_Parms
	{
		int32 SecondsAllowed;
		int32 SecondsPlayed;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if the user is running a timed trial of the app.\n\x09@param SecondsAllowed - The number of seconds allowed for the trial.\n\x09@param SecondsPlayed - The number of seconds played in the trial.\n\x09@return - true if the user is running a timed trial, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Timed Trial" },
		{ "Keywords", "BIsTimedTrial" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if the user is running a timed trial of the app.\n@param SecondsAllowed - The number of seconds allowed for the trial.\n@param SecondsPlayed - The number of seconds played in the trial.\n@return - true if the user is running a timed trial, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventIsTimedTrial_Parms, SecondsAllowed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventIsTimedTrial_Parms, SecondsPlayed), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsTimedTrial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsTimedTrial_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::NewProp_SecondsAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::NewProp_SecondsPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsTimedTrial", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::SIK_AppLibrary_eventIsTimedTrial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::SIK_AppLibrary_eventIsTimedTrial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsTimedTrial)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsAllowed);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsPlayed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsTimedTrial(Z_Param_Out_SecondsAllowed,Z_Param_Out_SecondsPlayed);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsTimedTrial

// Begin Class USIK_AppLibrary Function IsVACBanned
struct Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics
{
	struct SIK_AppLibrary_eventIsVACBanned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09""Checks if the user is VAC banned.\n\x09@return - true if the user is VAC banned, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is VAC Banned" },
		{ "Keywords", "BIsVACBanned" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Checks if the user is VAC banned.\n@return - true if the user is VAC banned, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventIsVACBanned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventIsVACBanned_Parms), &Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "IsVACBanned", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::SIK_AppLibrary_eventIsVACBanned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::SIK_AppLibrary_eventIsVACBanned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execIsVACBanned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::IsVACBanned();
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function IsVACBanned

// Begin Class USIK_AppLibrary Function MarkContentCorrupt
struct Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics
{
	struct SIK_AppLibrary_eventMarkContentCorrupt_Parms
	{
		bool MissingFilesOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Marks the content as corrupt.\n\x09@param MissingFilesOnly - true if only missing files should be marked corrupt, false otherwise.\n\x09@return - true if the content was marked as corrupt, false otherwise.\n\x09*/" },
		{ "DisplayName", "Mark Content Corrupt" },
		{ "Keywords", "MarkContentCorrupt" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Marks the content as corrupt.\n@param MissingFilesOnly - true if only missing files should be marked corrupt, false otherwise.\n@return - true if the content was marked as corrupt, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_MissingFilesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MissingFilesOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::NewProp_MissingFilesOnly_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventMarkContentCorrupt_Parms*)Obj)->MissingFilesOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::NewProp_MissingFilesOnly = { "MissingFilesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::NewProp_MissingFilesOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_AppLibrary_eventMarkContentCorrupt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AppLibrary_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::NewProp_MissingFilesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "MarkContentCorrupt", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::SIK_AppLibrary_eventMarkContentCorrupt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::SIK_AppLibrary_eventMarkContentCorrupt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execMarkContentCorrupt)
{
	P_GET_UBOOL(Z_Param_MissingFilesOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_AppLibrary::MarkContentCorrupt(Z_Param_MissingFilesOnly);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function MarkContentCorrupt

// Begin Class USIK_AppLibrary Function UninstallDLC
struct Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics
{
	struct SIK_AppLibrary_eventUninstallDLC_Parms
	{
		FSIK_AppId AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Apps" },
		{ "Comment", "/*\n\x09Uninstalls a DLC.\n\x09@param AppID - The AppID of the DLC to uninstall.\n\x09*/" },
		{ "DisplayName", "Uninstall DLC" },
		{ "Keywords", "UninstallDLC" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ToolTip", "Uninstalls a DLC.\n@param AppID - The AppID of the DLC to uninstall." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AppLibrary_eventUninstallDLC_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AppLibrary, nullptr, "UninstallDLC", nullptr, nullptr, Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::SIK_AppLibrary_eventUninstallDLC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::SIK_AppLibrary_eventUninstallDLC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AppLibrary::execUninstallDLC)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_AppLibrary::UninstallDLC(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_AppLibrary Function UninstallDLC

// Begin Class USIK_AppLibrary
void USIK_AppLibrary::StaticRegisterNativesUSIK_AppLibrary()
{
	UClass* Class = USIK_AppLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppBuildID", &USIK_AppLibrary::execGetAppBuildID },
		{ "GetAppInstallDir", &USIK_AppLibrary::execGetAppInstallDir },
		{ "GetAppOwner", &USIK_AppLibrary::execGetAppOwner },
		{ "GetAvailableGameLanguages", &USIK_AppLibrary::execGetAvailableGameLanguages },
		{ "GetCurrentBetaName", &USIK_AppLibrary::execGetCurrentBetaName },
		{ "GetCurrentGameLanguage", &USIK_AppLibrary::execGetCurrentGameLanguage },
		{ "GetDLCCount", &USIK_AppLibrary::execGetDLCCount },
		{ "GetDLCDataByIndex", &USIK_AppLibrary::execGetDLCDataByIndex },
		{ "GetDLCDownloadProgress", &USIK_AppLibrary::execGetDLCDownloadProgress },
		{ "GetEarliestPurchaseUnixTime", &USIK_AppLibrary::execGetEarliestPurchaseUnixTime },
		{ "GetInstalledDepots", &USIK_AppLibrary::execGetInstalledDepots },
		{ "GetLaunchCommandLine", &USIK_AppLibrary::execGetLaunchCommandLine },
		{ "GetLaunchQueryParam", &USIK_AppLibrary::execGetLaunchQueryParam },
		{ "InstallDLC", &USIK_AppLibrary::execInstallDLC },
		{ "IsAppInstalled", &USIK_AppLibrary::execIsAppInstalled },
		{ "IsCybercafe", &USIK_AppLibrary::execIsCybercafe },
		{ "IsDLCInstalled", &USIK_AppLibrary::execIsDLCInstalled },
		{ "IsLowViolence", &USIK_AppLibrary::execIsLowViolence },
		{ "IsSubscribed", &USIK_AppLibrary::execIsSubscribed },
		{ "IsSubscribedApp", &USIK_AppLibrary::execIsSubscribedApp },
		{ "IsSubscribedFromFamilySharing", &USIK_AppLibrary::execIsSubscribedFromFamilySharing },
		{ "IsSubscribedFromFreeWeekend", &USIK_AppLibrary::execIsSubscribedFromFreeWeekend },
		{ "IsTimedTrial", &USIK_AppLibrary::execIsTimedTrial },
		{ "IsVACBanned", &USIK_AppLibrary::execIsVACBanned },
		{ "MarkContentCorrupt", &USIK_AppLibrary::execMarkContentCorrupt },
		{ "UninstallDLC", &USIK_AppLibrary::execUninstallDLC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_AppLibrary);
UClass* Z_Construct_UClass_USIK_AppLibrary_NoRegister()
{
	return USIK_AppLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_AppLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_AppLibrary.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_AppLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetAppBuildID, "GetAppBuildID" }, // 688619616
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetAppInstallDir, "GetAppInstallDir" }, // 269462295
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetAppOwner, "GetAppOwner" }, // 2984657463
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 4221323962
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetCurrentBetaName, "GetCurrentBetaName" }, // 2589957321
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 1576667369
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetDLCCount, "GetDLCCount" }, // 1191080746
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetDLCDataByIndex, "GetDLCDataByIndex" }, // 2651153570
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetDLCDownloadProgress, "GetDLCDownloadProgress" }, // 946875384
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 1908320138
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetInstalledDepots, "GetInstalledDepots" }, // 3067776900
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetLaunchCommandLine, "GetLaunchCommandLine" }, // 1907584828
		{ &Z_Construct_UFunction_USIK_AppLibrary_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 30143468
		{ &Z_Construct_UFunction_USIK_AppLibrary_InstallDLC, "InstallDLC" }, // 2282322797
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsAppInstalled, "IsAppInstalled" }, // 2511827250
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsCybercafe, "IsCybercafe" }, // 2059824787
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsDLCInstalled, "IsDLCInstalled" }, // 3500189327
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsLowViolence, "IsLowViolence" }, // 216726146
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsSubscribed, "IsSubscribed" }, // 1538810186
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedApp, "IsSubscribedApp" }, // 261474986
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFamilySharing, "IsSubscribedFromFamilySharing" }, // 3182305597
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsSubscribedFromFreeWeekend, "IsSubscribedFromFreeWeekend" }, // 4187767852
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsTimedTrial, "IsTimedTrial" }, // 1920355530
		{ &Z_Construct_UFunction_USIK_AppLibrary_IsVACBanned, "IsVACBanned" }, // 2702894438
		{ &Z_Construct_UFunction_USIK_AppLibrary_MarkContentCorrupt, "MarkContentCorrupt" }, // 1562409155
		{ &Z_Construct_UFunction_USIK_AppLibrary_UninstallDLC, "UninstallDLC" }, // 879345173
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AppLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_AppLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AppLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AppLibrary_Statics::ClassParams = {
	&USIK_AppLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AppLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AppLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_AppLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_AppLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AppLibrary.OuterSingleton, Z_Construct_UClass_USIK_AppLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AppLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_AppLibrary>()
{
	return USIK_AppLibrary::StaticClass();
}
USIK_AppLibrary::USIK_AppLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_AppLibrary);
USIK_AppLibrary::~USIK_AppLibrary() {}
// End Class USIK_AppLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AppLibrary, USIK_AppLibrary::StaticClass, TEXT("USIK_AppLibrary"), &Z_Registration_Info_UClass_USIK_AppLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AppLibrary), 4080488990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_676070863(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
