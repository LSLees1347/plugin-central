// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/RemoteStorage/SIK_RemoteStorageLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RemoteStorageLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_RemoteStorageLibrary Function BeginFileWriteBatch
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics
{
	struct SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "BeginFileWriteBatch", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execBeginFileWriteBatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::BeginFileWriteBatch();
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function BeginFileWriteBatch

// Begin Class USIK_RemoteStorageLibrary Function EndFileWriteBatch
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics
{
	struct SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "EndFileWriteBatch", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execEndFileWriteBatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::EndFileWriteBatch();
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function EndFileWriteBatch

// Begin Class USIK_RemoteStorageLibrary Function FileDelete
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileDelete_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileDelete_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileDelete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileDelete_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileDelete", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::SIK_RemoteStorageLibrary_eventFileDelete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::SIK_RemoteStorageLibrary_eventFileDelete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileDelete)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileDelete(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileDelete

// Begin Class USIK_RemoteStorageLibrary Function FileExists
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileExists_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileExists_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileExists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileExists_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileExists", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::SIK_RemoteStorageLibrary_eventFileExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::SIK_RemoteStorageLibrary_eventFileExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileExists)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileExists(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileExists

// Begin Class USIK_RemoteStorageLibrary Function FileForget
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileForget_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileForget_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileForget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileForget_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileForget", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::SIK_RemoteStorageLibrary_eventFileForget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::SIK_RemoteStorageLibrary_eventFileForget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileForget)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileForget(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileForget

// Begin Class USIK_RemoteStorageLibrary Function FilePersisted
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics
{
	struct SIK_RemoteStorageLibrary_eventFilePersisted_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFilePersisted_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFilePersisted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFilePersisted_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FilePersisted", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::SIK_RemoteStorageLibrary_eventFilePersisted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::SIK_RemoteStorageLibrary_eventFilePersisted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFilePersisted)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FilePersisted(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FilePersisted

// Begin Class USIK_RemoteStorageLibrary Function FileRead
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileRead_Parms
	{
		FString FileName;
		TArray<uint8> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileRead_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileRead_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileRead_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileRead", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::SIK_RemoteStorageLibrary_eventFileRead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::SIK_RemoteStorageLibrary_eventFileRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileRead)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::FileRead(Z_Param_FileName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileRead

// Begin Class USIK_RemoteStorageLibrary Function FileWrite
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWrite_Parms
	{
		FString FileName;
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWrite_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWrite_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileWrite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileWrite_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWrite", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::SIK_RemoteStorageLibrary_eventFileWrite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::SIK_RemoteStorageLibrary_eventFileWrite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWrite)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWrite(Z_Param_FileName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileWrite

// Begin Class USIK_RemoteStorageLibrary Function FileWriteStreamCancel
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms
	{
		FSIK_UGCFileWriteStreamHandle WriteStreamHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WriteStreamHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_WriteStreamHandle = { "WriteStreamHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms, WriteStreamHandle), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 76808593
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_WriteStreamHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWriteStreamCancel", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWriteStreamCancel)
{
	P_GET_STRUCT(FSIK_UGCFileWriteStreamHandle,Z_Param_WriteStreamHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWriteStreamCancel(Z_Param_WriteStreamHandle);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileWriteStreamCancel

// Begin Class USIK_RemoteStorageLibrary Function FileWriteStreamClose
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms
	{
		FSIK_UGCFileWriteStreamHandle WriteStreamHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WriteStreamHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_WriteStreamHandle = { "WriteStreamHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms, WriteStreamHandle), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 76808593
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_WriteStreamHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWriteStreamClose", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWriteStreamClose)
{
	P_GET_STRUCT(FSIK_UGCFileWriteStreamHandle,Z_Param_WriteStreamHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWriteStreamClose(Z_Param_WriteStreamHandle);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileWriteStreamClose

// Begin Class USIK_RemoteStorageLibrary Function FileWriteStreamOpen
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms
	{
		FString FileName;
		FSIK_UGCFileWriteStreamHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 76808593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWriteStreamOpen", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWriteStreamOpen)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_UGCFileWriteStreamHandle*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWriteStreamOpen(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileWriteStreamOpen

// Begin Class USIK_RemoteStorageLibrary Function FileWriteStreamWriteChunk
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms
	{
		FSIK_UGCFileWriteStreamHandle WriteStreamHandle;
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WriteStreamHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_WriteStreamHandle = { "WriteStreamHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms, WriteStreamHandle), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 76808593
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_WriteStreamHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWriteStreamWriteChunk", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWriteStreamWriteChunk)
{
	P_GET_STRUCT(FSIK_UGCFileWriteStreamHandle,Z_Param_WriteStreamHandle);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWriteStreamWriteChunk(Z_Param_WriteStreamHandle,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function FileWriteStreamWriteChunk

// Begin Class USIK_RemoteStorageLibrary Function GetCachedUGCCount
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetCachedUGCCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetCachedUGCCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetCachedUGCCount", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::SIK_RemoteStorageLibrary_eventGetCachedUGCCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::SIK_RemoteStorageLibrary_eventGetCachedUGCCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetCachedUGCCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::GetCachedUGCCount();
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetCachedUGCCount

// Begin Class USIK_RemoteStorageLibrary Function GetCachedUGCHandle
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms
	{
		int32 CachedContent;
		FSIK_UGCHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedContent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::NewProp_CachedContent = { "CachedContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms, CachedContent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3942127275
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::NewProp_CachedContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetCachedUGCHandle", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetCachedUGCHandle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CachedContent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_UGCHandle*)Z_Param__Result=USIK_RemoteStorageLibrary::GetCachedUGCHandle(Z_Param_CachedContent);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetCachedUGCHandle

// Begin Class USIK_RemoteStorageLibrary Function GetFileCount
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetFileCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetFileCount", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::SIK_RemoteStorageLibrary_eventGetFileCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::SIK_RemoteStorageLibrary_eventGetFileCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetFileCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::GetFileCount();
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetFileCount

// Begin Class USIK_RemoteStorageLibrary Function GetFileNameAndSize
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms
	{
		int32 File;
		int32 FileSize;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_File;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms, FileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetFileNameAndSize", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetFileNameAndSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_File);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_RemoteStorageLibrary::GetFileNameAndSize(Z_Param_File,Z_Param_Out_FileSize);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetFileNameAndSize

// Begin Class USIK_RemoteStorageLibrary Function GetFileSize
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetFileSize_Parms
	{
		FString FileName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileSize_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetFileSize", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::SIK_RemoteStorageLibrary_eventGetFileSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::SIK_RemoteStorageLibrary_eventGetFileSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetFileSize)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::GetFileSize(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetFileSize

// Begin Class USIK_RemoteStorageLibrary Function GetFileTimestamp
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms
	{
		FString FileName;
		int64 Timestamp;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms, Timestamp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetFileTimestamp", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetFileTimestamp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=USIK_RemoteStorageLibrary::GetFileTimestamp(Z_Param_FileName,Z_Param_Out_Timestamp);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetFileTimestamp

// Begin Class USIK_RemoteStorageLibrary Function GetLocalFileChange
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms
	{
		int32 File;
		TEnumAsByte<ESIK_RemoteStorageLocalFileChange> ChangeType;
		TEnumAsByte<ESIK_RemoteStorageFilePathType> PathType;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_File;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms, ChangeType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange, METADATA_PARAMS(0, nullptr) }; // 34956470
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_PathType = { "PathType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms, PathType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType, METADATA_PARAMS(0, nullptr) }; // 2118010140
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_ChangeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_PathType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetLocalFileChange", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetLocalFileChange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_File);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ChangeType);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_PathType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_RemoteStorageLibrary::GetLocalFileChange(Z_Param_File,(TEnumAsByte<ESIK_RemoteStorageLocalFileChange>&)(Z_Param_Out_ChangeType),(TEnumAsByte<ESIK_RemoteStorageFilePathType>&)(Z_Param_Out_PathType));
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetLocalFileChange

// Begin Class USIK_RemoteStorageLibrary Function GetLocalFileChangeCount
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetLocalFileChangeCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChangeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetLocalFileChangeCount", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::SIK_RemoteStorageLibrary_eventGetLocalFileChangeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::SIK_RemoteStorageLibrary_eventGetLocalFileChangeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetLocalFileChangeCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::GetLocalFileChangeCount();
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetLocalFileChangeCount

// Begin Class USIK_RemoteStorageLibrary Function GetQuota
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetQuota_Parms
	{
		int64 TotalBytes;
		int64 AvailableBytes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalBytes;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AvailableBytes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetQuota_Parms, TotalBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_AvailableBytes = { "AvailableBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetQuota_Parms, AvailableBytes), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventGetQuota_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventGetQuota_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_TotalBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_AvailableBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetQuota", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::SIK_RemoteStorageLibrary_eventGetQuota_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::SIK_RemoteStorageLibrary_eventGetQuota_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetQuota)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TotalBytes);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_AvailableBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::GetQuota(Z_Param_Out_TotalBytes,Z_Param_Out_AvailableBytes);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetQuota

// Begin Class USIK_RemoteStorageLibrary Function GetSyncPlatforms
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms
	{
		FString FileName;
		TEnumAsByte<ESIK_RemoteStoragePlatform> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform, METADATA_PARAMS(0, nullptr) }; // 2079437566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetSyncPlatforms", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetSyncPlatforms)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_RemoteStoragePlatform>*)Z_Param__Result=USIK_RemoteStorageLibrary::GetSyncPlatforms(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetSyncPlatforms

// Begin Class USIK_RemoteStorageLibrary Function GetUGCDetails
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms
	{
		FSIK_UGCHandle UGCHandle;
		FString FileName;
		int32 FileSize;
		FSIK_SteamId OwnerID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3942127275
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms, FileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_OwnerID = { "OwnerID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms, OwnerID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_OwnerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetUGCDetails", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetUGCDetails)
{
	P_GET_STRUCT(FSIK_UGCHandle,Z_Param_UGCHandle);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FileName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSize);
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_OwnerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::GetUGCDetails(Z_Param_UGCHandle,Z_Param_Out_FileName,Z_Param_Out_FileSize,Z_Param_Out_OwnerID);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetUGCDetails

// Begin Class USIK_RemoteStorageLibrary Function GetUGCDownloadProgress
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms
	{
		FSIK_UGCHandle UGCHandle;
		int32 BytesDownloaded;
		int32 BytesExpected;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesExpected;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3942127275
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_BytesExpected = { "BytesExpected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms, BytesExpected), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_BytesExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetUGCDownloadProgress", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetUGCDownloadProgress)
{
	P_GET_STRUCT(FSIK_UGCHandle,Z_Param_UGCHandle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesExpected);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::GetUGCDownloadProgress(Z_Param_UGCHandle,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesExpected);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function GetUGCDownloadProgress

// Begin Class USIK_RemoteStorageLibrary Function IsCloudEnabledForAccount
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics
{
	struct SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "IsCloudEnabledForAccount", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execIsCloudEnabledForAccount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::IsCloudEnabledForAccount();
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function IsCloudEnabledForAccount

// Begin Class USIK_RemoteStorageLibrary Function IsCloudEnabledForApp
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics
{
	struct SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "IsCloudEnabledForApp", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execIsCloudEnabledForApp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::IsCloudEnabledForApp();
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function IsCloudEnabledForApp

// Begin Class USIK_RemoteStorageLibrary Function SetCloudEnabledForApp
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics
{
	struct SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "SetCloudEnabledForApp", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execSetCloudEnabledForApp)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_RemoteStorageLibrary::SetCloudEnabledForApp(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function SetCloudEnabledForApp

// Begin Class USIK_RemoteStorageLibrary Function SetSyncPlatforms
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics
{
	struct SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms
	{
		FString FileName;
		TEnumAsByte<ESIK_RemoteStoragePlatform> RemoteStoragePlatform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteStoragePlatform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform = { "RemoteStoragePlatform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms, RemoteStoragePlatform), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform, METADATA_PARAMS(0, nullptr) }; // 2079437566
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "SetSyncPlatforms", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execSetSyncPlatforms)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FByteProperty,Z_Param_RemoteStoragePlatform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::SetSyncPlatforms(Z_Param_FileName,ESIK_RemoteStoragePlatform(Z_Param_RemoteStoragePlatform));
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function SetSyncPlatforms

// Begin Class USIK_RemoteStorageLibrary Function UGCRead
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics
{
	struct SIK_RemoteStorageLibrary_eventUGCRead_Parms
	{
		FSIK_UGCHandle UGCHandle;
		TArray<uint8> Data;
		int32 DataToRead;
		int32 Offset;
		TEnumAsByte<ESIK_UGCReadAction> Action;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataToRead;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCHandle_MetaData), NewProp_UGCHandle_MetaData) }; // 3942127275
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, DataToRead), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, Action), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction, METADATA_PARAMS(0, nullptr) }; // 770674055
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_DataToRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "UGCRead", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::SIK_RemoteStorageLibrary_eventUGCRead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::SIK_RemoteStorageLibrary_eventUGCRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execUGCRead)
{
	P_GET_STRUCT(FSIK_UGCHandle,Z_Param_UGCHandle);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FByteProperty,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::UGCRead(Z_Param_UGCHandle,Z_Param_Out_Data,Z_Param_DataToRead,Z_Param_Offset,ESIK_UGCReadAction(Z_Param_Action));
	P_NATIVE_END;
}
// End Class USIK_RemoteStorageLibrary Function UGCRead

// Begin Class USIK_RemoteStorageLibrary
void USIK_RemoteStorageLibrary::StaticRegisterNativesUSIK_RemoteStorageLibrary()
{
	UClass* Class = USIK_RemoteStorageLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginFileWriteBatch", &USIK_RemoteStorageLibrary::execBeginFileWriteBatch },
		{ "EndFileWriteBatch", &USIK_RemoteStorageLibrary::execEndFileWriteBatch },
		{ "FileDelete", &USIK_RemoteStorageLibrary::execFileDelete },
		{ "FileExists", &USIK_RemoteStorageLibrary::execFileExists },
		{ "FileForget", &USIK_RemoteStorageLibrary::execFileForget },
		{ "FilePersisted", &USIK_RemoteStorageLibrary::execFilePersisted },
		{ "FileRead", &USIK_RemoteStorageLibrary::execFileRead },
		{ "FileWrite", &USIK_RemoteStorageLibrary::execFileWrite },
		{ "FileWriteStreamCancel", &USIK_RemoteStorageLibrary::execFileWriteStreamCancel },
		{ "FileWriteStreamClose", &USIK_RemoteStorageLibrary::execFileWriteStreamClose },
		{ "FileWriteStreamOpen", &USIK_RemoteStorageLibrary::execFileWriteStreamOpen },
		{ "FileWriteStreamWriteChunk", &USIK_RemoteStorageLibrary::execFileWriteStreamWriteChunk },
		{ "GetCachedUGCCount", &USIK_RemoteStorageLibrary::execGetCachedUGCCount },
		{ "GetCachedUGCHandle", &USIK_RemoteStorageLibrary::execGetCachedUGCHandle },
		{ "GetFileCount", &USIK_RemoteStorageLibrary::execGetFileCount },
		{ "GetFileNameAndSize", &USIK_RemoteStorageLibrary::execGetFileNameAndSize },
		{ "GetFileSize", &USIK_RemoteStorageLibrary::execGetFileSize },
		{ "GetFileTimestamp", &USIK_RemoteStorageLibrary::execGetFileTimestamp },
		{ "GetLocalFileChange", &USIK_RemoteStorageLibrary::execGetLocalFileChange },
		{ "GetLocalFileChangeCount", &USIK_RemoteStorageLibrary::execGetLocalFileChangeCount },
		{ "GetQuota", &USIK_RemoteStorageLibrary::execGetQuota },
		{ "GetSyncPlatforms", &USIK_RemoteStorageLibrary::execGetSyncPlatforms },
		{ "GetUGCDetails", &USIK_RemoteStorageLibrary::execGetUGCDetails },
		{ "GetUGCDownloadProgress", &USIK_RemoteStorageLibrary::execGetUGCDownloadProgress },
		{ "IsCloudEnabledForAccount", &USIK_RemoteStorageLibrary::execIsCloudEnabledForAccount },
		{ "IsCloudEnabledForApp", &USIK_RemoteStorageLibrary::execIsCloudEnabledForApp },
		{ "SetCloudEnabledForApp", &USIK_RemoteStorageLibrary::execSetCloudEnabledForApp },
		{ "SetSyncPlatforms", &USIK_RemoteStorageLibrary::execSetSyncPlatforms },
		{ "UGCRead", &USIK_RemoteStorageLibrary::execUGCRead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RemoteStorageLibrary);
UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary_NoRegister()
{
	return USIK_RemoteStorageLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch, "BeginFileWriteBatch" }, // 2858298745
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch, "EndFileWriteBatch" }, // 2543428111
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete, "FileDelete" }, // 1891924150
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists, "FileExists" }, // 3918872175
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget, "FileForget" }, // 3569725654
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted, "FilePersisted" }, // 3974511048
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead, "FileRead" }, // 4005330023
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite, "FileWrite" }, // 3559372296
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel, "FileWriteStreamCancel" }, // 3964099981
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose, "FileWriteStreamClose" }, // 3339652187
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen, "FileWriteStreamOpen" }, // 472935048
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk, "FileWriteStreamWriteChunk" }, // 1973926370
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount, "GetCachedUGCCount" }, // 2459870990
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle, "GetCachedUGCHandle" }, // 2585211904
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount, "GetFileCount" }, // 3166040582
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize, "GetFileNameAndSize" }, // 3904157040
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize, "GetFileSize" }, // 2293297792
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp, "GetFileTimestamp" }, // 1059744811
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange, "GetLocalFileChange" }, // 1987786632
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount, "GetLocalFileChangeCount" }, // 643639054
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota, "GetQuota" }, // 3155927045
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms, "GetSyncPlatforms" }, // 2619007887
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails, "GetUGCDetails" }, // 1074046849
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress, "GetUGCDownloadProgress" }, // 671506112
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount, "IsCloudEnabledForAccount" }, // 2866091410
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp, "IsCloudEnabledForApp" }, // 524429557
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp, "SetCloudEnabledForApp" }, // 1063393032
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms, "SetSyncPlatforms" }, // 3563431106
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead, "UGCRead" }, // 3345676933
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RemoteStorageLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::ClassParams = {
	&USIK_RemoteStorageLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.OuterSingleton, Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_RemoteStorageLibrary>()
{
	return USIK_RemoteStorageLibrary::StaticClass();
}
USIK_RemoteStorageLibrary::USIK_RemoteStorageLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RemoteStorageLibrary);
USIK_RemoteStorageLibrary::~USIK_RemoteStorageLibrary() {}
// End Class USIK_RemoteStorageLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RemoteStorageLibrary, USIK_RemoteStorageLibrary::StaticClass, TEXT("USIK_RemoteStorageLibrary"), &Z_Registration_Info_UClass_USIK_RemoteStorageLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RemoteStorageLibrary), 1668662989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_265991302(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
